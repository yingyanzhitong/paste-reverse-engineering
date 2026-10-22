/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf585c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::$set_viabilityUpdateHandler */

/* Network.NWConnection.viabilityUpdateHandler.setter : ((Swift.Bool) -> ())? */

void __thiscall Network::NWConnection::_set_viabilityUpdateHandler(NWConnection *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_viabilityUpdateHandler_100eaa058)();
  return;
}



/* Address: 0x100bf5868 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::$set_betterPathUpdateHandler */

/* Network.NWConnection.betterPathUpdateHandler.setter : ((Swift.Bool) -> ())? */

void __thiscall Network::NWConnection::_set_betterPathUpdateHandler(NWConnection *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_betterPathUpdateHandler_100eaa060)();
  return;
}



/* Address: 0x100bf5874 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::startDataTransferReport */

/* Network.NWConnection.startDataTransferReport() -> Network.NWConnection.PendingDataTransferReport
    */

PendingDataTransferReport * __thiscall
Network::NWConnection::startDataTransferReport(NWConnection *this)

{
  PendingDataTransferReport *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf587c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_startDataTransferReport_100eaa068)();
  return in_x0;
}



/* Address: 0x100bf5880 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::PendingDataTransferReport::typeMetadataAccessor */

/* type metadata accessor for Network.NWConnection.PendingDataTransferReport */

PendingDataTransferReport *
Network::NWConnection::PendingDataTransferReport::typeMetadataAccessor(void)

{
  PendingDataTransferReport *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa070)();
  return in_x0;
}



/* Address: 0x100bf588c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::$requestEstablishmentReport */

/* Network.NWConnection.requestEstablishmentReport(queue: __C.OS_dispatch_queue, completion:
   (Network.NWConnection.EstablishmentReport?) -> ()) -> () */

void __thiscall
Network::NWConnection::_requestEstablishmentReport(NWConnection *this,OS_dispatch_queue *queue)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__requestEstablishmentReport_100eaa080)();
  return;
}



/* Address: 0x100bf5898 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::init */

/* Network.NWConnection.init(to: Network.NWEndpoint, using: Network.NWParameters) ->
   Network.NWConnection */

NWConnection * __thiscall
Network::NWConnection::init(NWConnection *this,NWEndpoint to,NWParameters *using)

{
  NWConnection *pNVar1;
  
  pNVar1 = (NWConnection *)(ulong)(byte)to.value;
                    /* WARNING: Could not recover jumptable at 0x000100bf58a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaa088)();
  return pNVar1;
}



/* Address: 0x100bf58a4 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::$send */

/* Network.NWConnection.send(content: Foundation.Data?, contentContext:
   Network.NWConnection.ContentContext, isComplete: Swift.Bool, completion:
   Network.NWConnection.SendCompletion) -> () */

void __thiscall
Network::NWConnection::_send
          (NWConnection *this,ContentContext *content,bool contentContext,SendCompletion isComplete)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf58ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__send_100eaa090)(content,contentContext,isComplete.value);
  return;
}



/* Address: 0x100bf58b0 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::State::typeMetadataAccessor */

/* type metadata accessor for Network.NWConnection.State */

State Network::NWConnection::State::typeMetadataAccessor(void)

{
  State in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf58b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa0c8)();
  return (State)in_w0.value;
}



/* Address: 0x100bf58bc | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::$batch */

/* Network.NWConnection.batch(() -> ()) -> () */

void __thiscall Network::NWConnection::_batch(NWConnection *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf58c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__batch_100eaa0e0)();
  return;
}



/* Address: 0x100bf58c8 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::start */

/* Network.NWConnection.start(queue: __C.OS_dispatch_queue) -> () */

void __thiscall Network::NWConnection::start(NWConnection *this,OS_dispatch_queue *queue)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf58d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_start_100eaa0e8)();
  return;
}



/* Address: 0x100bf58d4 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::get_state */

/* Network.NWConnection.state.getter : Network.NWConnection.State */

State __thiscall Network::NWConnection::get_state(NWConnection *this,NWConnection *param_1)

{
  State SVar1;
  
  SVar1.value = (__int8)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bf58dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_state_100eaa0f0)();
  return (State)SVar1.value;
}



/* Address: 0x100bf58e0 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::cancel */

/* Network.NWConnection.cancel() -> () */

void __thiscall Network::NWConnection::cancel(NWConnection *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf58e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_cancel_100eaa0f8)();
  return;
}



/* Address: 0x100bf58ec | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::$receive */

/* Network.NWConnection.receive(minimumIncompleteLength: Swift.Int, maximumLength: Swift.Int,
   completion: (Foundation.Data?, Network.NWConnection.ContentContext?, Swift.Bool,
   Network.NWError?) -> ()) -> () */

void __thiscall
Network::NWConnection::_receive
          (NWConnection *this,__int64 minimumIncompleteLength,__int64 maximumLength)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf58f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__receive_100eaa100)();
  return;
}



/* Address: 0x100bf58f8 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::$metadata */

/* Network.NWConnection.metadata(definition: Network.NWProtocolDefinition) ->
   Network.NWProtocolMetadata? */

void __thiscall
Network::NWConnection::_metadata(NWConnection *this,NWProtocolDefinition *definition)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__metadata_100eaa108)();
  return;
}



/* Address: 0x100bf5904 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::typeMetadataAccessor */

/* type metadata accessor for Network.NWConnection */

NWConnection * Network::NWConnection::typeMetadataAccessor(void)

{
  NWConnection *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf590c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa110)();
  return in_x0;
}



/* Address: 0x100bf5910 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWParameters::set_includePeerToPeer */

/* Network.NWParameters.includePeerToPeer.setter : Swift.Bool */

void __thiscall Network::NWParameters::set_includePeerToPeer(NWParameters *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_includePeerToPeer_100eaa120)(param_1);
  return;
}



/* Address: 0x100bf591c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWParameters::$set_requiredInterface */

/* Network.NWParameters.requiredInterface.setter : Network.NWInterface? */

void __thiscall Network::NWParameters::_set_requiredInterface(NWParameters *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_requiredInterface_100eaa128)();
  return;
}



/* Address: 0x100bf5928 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWParameters::MultipathServiceType::typeMetadataAccessor */

/* type metadata accessor for Network.NWParameters.MultipathServiceType */

MultipathServiceType Network::NWParameters::MultipathServiceType::typeMetadataAccessor(void)

{
  MultipathServiceType in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa138)();
  return (MultipathServiceType)in_w0.value;
}



/* Address: 0x100bf5934 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWParameters::set_multipathServiceType */

/* Network.NWParameters.multipathServiceType.setter : Network.NWParameters.MultipathServiceType */

void __thiscall
Network::NWParameters::set_multipathServiceType(NWParameters *this,MultipathServiceType param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf593c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_multipathServiceType_100eaa148)(param_1.value);
  return;
}



/* Address: 0x100bf5940 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWParameters::$get_requiredLocalEndpoint */

/* Network.NWParameters.requiredLocalEndpoint.getter : Network.NWEndpoint? */

void __thiscall
Network::NWParameters::_get_requiredLocalEndpoint(NWParameters *this,NWParameters *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_requiredLocalEndpoint_100eaa150)();
  return;
}



/* Address: 0x100bf594c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWParameters::$set_requiredLocalEndpoint */

/* Network.NWParameters.requiredLocalEndpoint.setter : Network.NWEndpoint? */

void __thiscall Network::NWParameters::_set_requiredLocalEndpoint(NWParameters *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_requiredLocalEndpoint_100eaa158)();
  return;
}



/* Address: 0x100bf5958 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWParameters::set_allowLocalEndpointReuse */

/* Network.NWParameters.allowLocalEndpointReuse.setter : Swift.Bool */

void __thiscall Network::NWParameters::set_allowLocalEndpointReuse(NWParameters *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_allowLocalEndpointReuse_100eaa160)(param_1);
  return;
}



/* Address: 0x100bf5964 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWParameters::$__allocating_init */

/* Network.NWParameters.__allocating_init(tls: Network.NWProtocolTLS.Options?, tcp:
   Network.NWProtocolTCP.Options) -> Network.NWParameters */

NWParameters * __thiscall Network::NWParameters::___allocating_init(NWParameters *this,Options *tls)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf596c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____allocating_init_100eaa168)();
  return (NWParameters *)tls;
}



/* Address: 0x100bf5970 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWParameters::$__allocating_init */

/* Network.NWParameters.__allocating_init(dtls: Network.NWProtocolTLS.Options?, udp:
   Network.NWProtocolUDP.Options) -> Network.NWParameters */

NWParameters * __thiscall
Network::NWParameters::___allocating_init(NWParameters *this,Options *dtls)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____allocating_init_100eaa170)();
  return (NWParameters *)dtls;
}



/* Address: 0x100bf597c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWParameters::typeMetadataAccessor */

/* type metadata accessor for Network.NWParameters */

NWParameters * Network::NWParameters::typeMetadataAccessor(void)

{
  NWParameters *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa178)();
  return in_x0;
}



/* Address: 0x100bf5988 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWPathMonitor::$set_pathUpdateHandler */

/* Network.NWPathMonitor.pathUpdateHandler.setter : ((Network.NWPath) -> ())? */

void __thiscall Network::NWPathMonitor::_set_pathUpdateHandler(NWPathMonitor *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_pathUpdateHandler_100eaa180)();
  return;
}



/* Address: 0x100bf5994 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWPathMonitor::start */

/* Network.NWPathMonitor.start(queue: __C.OS_dispatch_queue) -> () */

void __thiscall Network::NWPathMonitor::start(NWPathMonitor *this,OS_dispatch_queue *queue)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf599c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_start_100eaa188)();
  return;
}



/* Address: 0x100bf59a0 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWPathMonitor::cancel */

/* Network.NWPathMonitor.cancel() -> () */

void __thiscall Network::NWPathMonitor::cancel(NWPathMonitor *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf59a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_cancel_100eaa190)();
  return;
}



/* Address: 0x100bf59ac | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWPathMonitor::init */

/* Network.NWPathMonitor.init() -> Network.NWPathMonitor */

NWPathMonitor * __thiscall Network::NWPathMonitor::init(NWPathMonitor *this)

{
  NWPathMonitor *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf59b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaa198)();
  return in_x0;
}



/* Address: 0x100bf59b8 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWPathMonitor::typeMetadataAccessor */

/* type metadata accessor for Network.NWPathMonitor */

NWPathMonitor * Network::NWPathMonitor::typeMetadataAccessor(void)

{
  NWPathMonitor *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf59c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa1a0)();
  return in_x0;
}



/* Address: 0x100bf59c4 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::get_noOptions */

/* dispatch thunk of Network.NWProtocolTCP.Options.noOptions.getter : Swift.Bool */

bool __thiscall Network::NWProtocolTCP::Options::get_noOptions(Options *this,Options *param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf59cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_noOptions_100eaa1b0)();
  return (bool)uVar1;
}



/* Address: 0x100bf59d0 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::set_noOptions */

/* dispatch thunk of Network.NWProtocolTCP.Options.noOptions.setter : Swift.Bool */

void __thiscall Network::NWProtocolTCP::Options::set_noOptions(Options *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf59d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_noOptions_100eaa1b8)(param_1);
  return;
}



/* Address: 0x100bf59dc | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::get_keepaliveIdle */

/* dispatch thunk of Network.NWProtocolTCP.Options.keepaliveIdle.getter : Swift.Int */

__int64 __thiscall
Network::NWProtocolTCP::Options::get_keepaliveIdle(Options *this,Options *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf59e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_keepaliveIdle_100eaa1c0)();
  return (__int64)param_1;
}



/* Address: 0x100bf59e8 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::set_keepaliveIdle */

/* dispatch thunk of Network.NWProtocolTCP.Options.keepaliveIdle.setter : Swift.Int */

void __thiscall Network::NWProtocolTCP::Options::set_keepaliveIdle(Options *this,__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf59f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_keepaliveIdle_100eaa1c8)();
  return;
}



/* Address: 0x100bf59f4 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::get_keepaliveCount */

/* dispatch thunk of Network.NWProtocolTCP.Options.keepaliveCount.getter : Swift.Int */

__int64 __thiscall
Network::NWProtocolTCP::Options::get_keepaliveCount(Options *this,Options *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf59fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_keepaliveCount_100eaa1d0)();
  return (__int64)param_1;
}



/* Address: 0x100bf5a00 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::set_keepaliveCount */

/* dispatch thunk of Network.NWProtocolTCP.Options.keepaliveCount.setter : Swift.Int */

void __thiscall Network::NWProtocolTCP::Options::set_keepaliveCount(Options *this,__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_keepaliveCount_100eaa1d8)();
  return;
}



/* Address: 0x100bf5a0c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::get_enableKeepalive */

/* dispatch thunk of Network.NWProtocolTCP.Options.enableKeepalive.getter : Swift.Bool */

bool __thiscall Network::NWProtocolTCP::Options::get_enableKeepalive(Options *this,Options *param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf5a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_enableKeepalive_100eaa1e0)();
  return (bool)uVar1;
}



/* Address: 0x100bf5a18 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::set_enableKeepalive */

/* dispatch thunk of Network.NWProtocolTCP.Options.enableKeepalive.setter : Swift.Bool */

void __thiscall Network::NWProtocolTCP::Options::set_enableKeepalive(Options *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_enableKeepalive_100eaa1e8)(param_1);
  return;
}



/* Address: 0x100bf5a24 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::get_connectionTimeout */

/* dispatch thunk of Network.NWProtocolTCP.Options.connectionTimeout.getter : Swift.Int */

__int64 __thiscall
Network::NWProtocolTCP::Options::get_connectionTimeout(Options *this,Options *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_connectionTimeout_100eaa1f0)();
  return (__int64)param_1;
}



/* Address: 0x100bf5a30 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::set_connectionTimeout */

/* dispatch thunk of Network.NWProtocolTCP.Options.connectionTimeout.setter : Swift.Int */

void __thiscall
Network::NWProtocolTCP::Options::set_connectionTimeout(Options *this,__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_connectionTimeout_100eaa1f8)();
  return;
}



/* Address: 0x100bf5a3c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::get_keepaliveInterval */

/* dispatch thunk of Network.NWProtocolTCP.Options.keepaliveInterval.getter : Swift.Int */

__int64 __thiscall
Network::NWProtocolTCP::Options::get_keepaliveInterval(Options *this,Options *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_keepaliveInterval_100eaa200)();
  return (__int64)param_1;
}



/* Address: 0x100bf5a48 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::set_keepaliveInterval */

/* dispatch thunk of Network.NWProtocolTCP.Options.keepaliveInterval.setter : Swift.Int */

void __thiscall
Network::NWProtocolTCP::Options::set_keepaliveInterval(Options *this,__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_keepaliveInterval_100eaa208)();
  return;
}



/* Address: 0x100bf5a54 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::get_retransmitFinDrop */

/* dispatch thunk of Network.NWProtocolTCP.Options.retransmitFinDrop.getter : Swift.Bool */

bool __thiscall
Network::NWProtocolTCP::Options::get_retransmitFinDrop(Options *this,Options *param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf5a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_retransmitFinDrop_100eaa210)();
  return (bool)uVar1;
}



/* Address: 0x100bf5a60 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::set_retransmitFinDrop */

/* dispatch thunk of Network.NWProtocolTCP.Options.retransmitFinDrop.setter : Swift.Bool */

void __thiscall Network::NWProtocolTCP::Options::set_retransmitFinDrop(Options *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_retransmitFinDrop_100eaa218)(param_1);
  return;
}



/* Address: 0x100bf5a6c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::get_connectionDropTime */

/* dispatch thunk of Network.NWProtocolTCP.Options.connectionDropTime.getter : Swift.Int */

__int64 __thiscall
Network::NWProtocolTCP::Options::get_connectionDropTime(Options *this,Options *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_connectionDropTime_100eaa220)();
  return (__int64)param_1;
}



/* Address: 0x100bf5a78 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::set_connectionDropTime */

/* dispatch thunk of Network.NWProtocolTCP.Options.connectionDropTime.setter : Swift.Int */

void __thiscall
Network::NWProtocolTCP::Options::set_connectionDropTime(Options *this,__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_connectionDropTime_100eaa228)();
  return;
}



/* Address: 0x100bf5a84 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::get_maximumSegmentSize */

/* dispatch thunk of Network.NWProtocolTCP.Options.maximumSegmentSize.getter : Swift.Int */

__int64 __thiscall
Network::NWProtocolTCP::Options::get_maximumSegmentSize(Options *this,Options *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_maximumSegmentSize_100eaa230)();
  return (__int64)param_1;
}



/* Address: 0x100bf5a90 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::set_maximumSegmentSize */

/* dispatch thunk of Network.NWProtocolTCP.Options.maximumSegmentSize.setter : Swift.Int */

void __thiscall
Network::NWProtocolTCP::Options::set_maximumSegmentSize(Options *this,__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_maximumSegmentSize_100eaa238)();
  return;
}



/* Address: 0x100bf5a9c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::get_disableAckStretching */

/* dispatch thunk of Network.NWProtocolTCP.Options.disableAckStretching.getter : Swift.Bool */

bool __thiscall
Network::NWProtocolTCP::Options::get_disableAckStretching(Options *this,Options *param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf5aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_disableAckStretching_100eaa240)();
  return (bool)uVar1;
}



/* Address: 0x100bf5aa8 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::set_disableAckStretching */

/* dispatch thunk of Network.NWProtocolTCP.Options.disableAckStretching.setter : Swift.Bool */

void __thiscall
Network::NWProtocolTCP::Options::set_disableAckStretching(Options *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_disableAckStretching_100eaa248)(param_1);
  return;
}



/* Address: 0x100bf5ab4 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::get_noPush */

/* dispatch thunk of Network.NWProtocolTCP.Options.noPush.getter : Swift.Bool */

bool __thiscall Network::NWProtocolTCP::Options::get_noPush(Options *this,Options *param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf5abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_noPush_100eaa250)();
  return (bool)uVar1;
}



/* Address: 0x100bf5ac0 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::set_noPush */

/* dispatch thunk of Network.NWProtocolTCP.Options.noPush.setter : Swift.Bool */

void __thiscall Network::NWProtocolTCP::Options::set_noPush(Options *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_noPush_100eaa258)(param_1);
  return;
}



/* Address: 0x100bf5acc | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::get_noDelay */

/* dispatch thunk of Network.NWProtocolTCP.Options.noDelay.getter : Swift.Bool */

bool __thiscall Network::NWProtocolTCP::Options::get_noDelay(Options *this,Options *param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf5ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_noDelay_100eaa260)();
  return (bool)uVar1;
}



/* Address: 0x100bf5ad8 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::set_noDelay */

/* dispatch thunk of Network.NWProtocolTCP.Options.noDelay.setter : Swift.Bool */

void __thiscall Network::NWProtocolTCP::Options::set_noDelay(Options *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_noDelay_100eaa268)(param_1);
  return;
}



/* Address: 0x100bf5ae4 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::init */

/* Network.NWProtocolTCP.Options.init() -> Network.NWProtocolTCP.Options */

Options * __thiscall Network::NWProtocolTCP::Options::init(Options *this)

{
  Options *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaa270)();
  return in_x0;
}



/* Address: 0x100bf5af0 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTCP::Options::typeMetadataAccessor */

/* type metadata accessor for Network.NWProtocolTCP.Options */

Options * Network::NWProtocolTCP::Options::typeMetadataAccessor(void)

{
  Options *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa278)();
  return in_x0;
}



/* Address: 0x100bf5afc | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTLS::get_definition */

/* static Network.NWProtocolTLS.definition.getter : Network.NWProtocolDefinition */

NWProtocolDefinition * __thiscall
Network::NWProtocolTLS::get_definition(NWProtocolTLS *this,NWProtocolTLS *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_definition_100eaa288)();
  return (NWProtocolDefinition *)param_1;
}



/* Address: 0x100bf5b08 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTLS::Options::$get_securityProtocolOptions */

/* dispatch thunk of Network.NWProtocolTLS.Options.securityProtocolOptions.getter :
   __C.OS_sec_protocol_options */

void __thiscall
Network::NWProtocolTLS::Options::_get_securityProtocolOptions(Options *this,Options *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_securityProtocolOptions_100eaa290)();
  return;
}



/* Address: 0x100bf5b14 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTLS::Options::init */

/* Network.NWProtocolTLS.Options.init() -> Network.NWProtocolTLS.Options */

Options * __thiscall Network::NWProtocolTLS::Options::init(Options *this)

{
  Options *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaa298)();
  return in_x0;
}



/* Address: 0x100bf5b20 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTLS::Options::typeMetadataAccessor */

/* type metadata accessor for Network.NWProtocolTLS.Options */

Options * Network::NWProtocolTLS::Options::typeMetadataAccessor(void)

{
  Options *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa2a0)();
  return in_x0;
}



/* Address: 0x100bf5b2c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTLS::Metadata::$get_securityProtocolMetadata */

/* dispatch thunk of Network.NWProtocolTLS.Metadata.securityProtocolMetadata.getter :
   __C.OS_sec_protocol_metadata */

void __thiscall
Network::NWProtocolTLS::Metadata::_get_securityProtocolMetadata(Metadata *this,Metadata *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_securityProtocolMetadata_100eaa2b0)();
  return;
}



/* Address: 0x100bf5b38 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTLS::Metadata::typeMetadataAccessor */

/* type metadata accessor for Network.NWProtocolTLS.Metadata */

Metadata * Network::NWProtocolTLS::Metadata::typeMetadataAccessor(void)

{
  Metadata *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa2b8)();
  return in_x0;
}



/* Address: 0x100bf5b44 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolTLS::typeMetadataAccessor */

/* type metadata accessor for Network.NWProtocolTLS */

NWProtocolTLS * Network::NWProtocolTLS::typeMetadataAccessor(void)

{
  NWProtocolTLS *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa2c0)();
  return in_x0;
}



/* Address: 0x100bf5b50 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWProtocolUDP::Options::init */

/* Network.NWProtocolUDP.Options.init() -> Network.NWProtocolUDP.Options */

Options * __thiscall Network::NWProtocolUDP::Options::init(Options *this)

{
  Options *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaa2c8)();
  return in_x0;
}


