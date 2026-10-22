import AppKit
import Carbon

@MainActor
final class GlobalHotKey {
    private var reference: EventHotKeyRef?
    private var handler: EventHandlerRef?
    private var identifier: UInt32 = 1
    var action: (() -> Void)?

    func register(keyCode: UInt32 = UInt32(kVK_ANSI_V), identifier: UInt32 = 1) -> OSStatus {
        unregister()
        self.identifier = identifier
        var specification = EventTypeSpec(eventClass: OSType(kEventClassKeyboard), eventKind: UInt32(kEventHotKeyPressed))
        let context = Unmanaged.passUnretained(self).toOpaque()
        let install = InstallEventHandler(GetApplicationEventTarget(), { _, event, context in
            guard let context, let event else { return OSStatus(eventNotHandledErr) }
            var key = EventHotKeyID()
            guard GetEventParameter(event, EventParamName(kEventParamDirectObject), EventParamType(typeEventHotKeyID),
                                    nil, MemoryLayout<EventHotKeyID>.size, nil, &key) == noErr else {
                return OSStatus(eventNotHandledErr)
            }
            return MainActor.assumeIsolated {
                let owner = Unmanaged<GlobalHotKey>.fromOpaque(context).takeUnretainedValue()
                guard key.signature == 0x5052504c, key.id == owner.identifier else { return OSStatus(eventNotHandledErr) }
                owner.action?()
                return noErr
            }
        }, 1, &specification, context, &handler)
        guard install == noErr else { return install }
        let identifier = EventHotKeyID(signature: 0x5052504c, id: identifier)
        let status = RegisterEventHotKey(keyCode, UInt32(cmdKey | shiftKey), identifier,
                                        GetApplicationEventTarget(), 0, &reference)
        if status != noErr { unregister() }
        return status
    }

    func unregister() {
        if let reference { UnregisterEventHotKey(reference) }
        if let handler { RemoveEventHandler(handler) }
        reference = nil
        handler = nil
    }
}
