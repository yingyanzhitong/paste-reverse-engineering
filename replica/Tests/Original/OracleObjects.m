#import <Cocoa/Cocoa.h>

void *oracle_create_window_controller(void *window) {
    Class cls = NSClassFromString(@"Paste.PasteStackWindowController");
    NSWindowController *controller = [[cls alloc] initWithWindow:(__bridge NSWindow *)window];
    return (__bridge_retained void *)controller;
}
