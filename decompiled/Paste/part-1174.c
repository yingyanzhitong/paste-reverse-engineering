/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf555c | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::Published::$get_projectedValue */

/* Combine.Published.projectedValue.getter : Combine.Published<A>.Publisher */

Publisher Combine::Published::_get_projectedValue(Published param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_projectedValue_100ea98a0)();
  return (Publisher)param_1.unknown;
}



/* Address: 0x100bf5568 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::Published::$set_projectedValue */

/* Combine.Published.projectedValue.setter : Combine.Published<A>.Publisher */

void __thiscall Combine::Published::_set_projectedValue(Published *this,Publisher param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_projectedValue_100ea98a8)();
  return;
}



/* Address: 0x100bf5574 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::Published::$modify_subscript */

/* static Combine.Published.subscript.modify : <A where A1: AnyObject>(_enclosingInstance: A1,
   wrapped: Swift.ReferenceWritableKeyPath<A1, A>, storage: Swift.ReferenceWritableKeyPath<A1,
   Combine.Published<A>>) -> A */

void __thiscall Combine::Published::_modify_subscript(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf557c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__modify_subscript_100ea98b0)();
  return;
}



/* Address: 0x100bf5580 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::Published::$get_subscript */

/* static Combine.Published.subscript.getter : <A where A1: AnyObject>(_enclosingInstance: A1,
   wrapped: Swift.ReferenceWritableKeyPath<A1, A>, storage: Swift.ReferenceWritableKeyPath<A1,
   Combine.Published<A>>) -> A */

void Combine::Published::_get_subscript(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_subscript_100ea98b8)();
  return;
}



/* Address: 0x100bf558c | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::Published::$set_subscript */

/* static Combine.Published.subscript.setter : <A where A1: AnyObject>(_enclosingInstance: A1,
   wrapped: Swift.ReferenceWritableKeyPath<A1, A>, storage: Swift.ReferenceWritableKeyPath<A1,
   Combine.Published<A>>) -> A */

void __thiscall Combine::Published::_set_subscript(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_subscript_100ea98c0)();
  return;
}



/* Address: 0x100bf5598 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::Combine::Published::typeMetadataAccessor */

/* type metadata accessor for Combine.Published */

Published Combine::Published::typeMetadataAccessor(void)

{
  Published in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf55a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea98d8)();
  return (Published)in_x0.unknown;
}



/* Address: 0x100bf55a4 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$eraseToAnyPublisher */

/* (extension in Combine):Combine.Publisher.eraseToAnyPublisher() -> Combine.AnyPublisher<A.Output,
   A.Failure> */

AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
 (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher(void)

{
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf55ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__eraseToAnyPublisher_100ea98f0)();
  return (AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
          )in_x0.unknown;
}



/* Address: 0x100bf55b0 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$compactMap */

/* (extension in Combine):Combine.Publisher.compactMap<A>((A.Output) -> A1?) ->
   Combine.Publishers.CompactMap<A, A1> */

CompactMap<undefined,undefined> (extension_Combine)::Combine::Publisher::_compactMap(void)

{
  CompactMap<undefined,undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf55b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__compactMap_100ea98f8)();
  return (CompactMap<undefined,undefined>)in_x0.unknown;
}



/* Address: 0x100bf55bc | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$combineLatest */

/* (extension in Combine):Combine.Publisher.combineLatest<A, B where A1: Combine.Publisher, B1:
   Combine.Publisher, A.Failure == A1.Failure, A1.Failure == B1.Failure>(A1, B1) ->
   Combine.Publishers.CombineLatest3<A, A1, B1> */

CombineLatest3<undefined,undefined,undefined>
(extension_Combine)::Combine::Publisher::_combineLatest
          (CombineLatest3<undefined,undefined,undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf55c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__combineLatest_100ea9900)();
  return (CombineLatest3<undefined,undefined,undefined>)param_1.unknown;
}



/* Address: 0x100bf55c8 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$map */

/* (extension in Combine):Combine.Publisher.map<A>(Swift.KeyPath<A.Output, A1>) ->
   Combine.Publishers.MapKeyPath<A, A1> */

MapKeyPath<undefined,undefined> (extension_Combine)::Combine::Publisher::_map(void)

{
  MapKeyPath<undefined,undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf55d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__map_100ea9908)();
  return (MapKeyPath<undefined,undefined>)in_x0.unknown;
}



/* Address: 0x100bf55d4 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$map */

/* (extension in Combine):Combine.Publisher.map<A>((A.Output) -> A1) -> Combine.Publishers.Map<A,
   A1> */

Map<undefined,undefined> (extension_Combine)::Combine::Publisher::_map(void)

{
  Map<undefined,undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf55dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__map_100ea9910)();
  return (Map<undefined,undefined>)in_x0.unknown;
}



/* Address: 0x100bf55e0 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$scan */

/* (extension in Combine):Combine.Publisher.scan<A>(A1, (A1, A.Output) -> A1) ->
   Combine.Publishers.Scan<A, A1> */

Scan<undefined,undefined>
(extension_Combine)::Combine::Publisher::_scan(Scan<undefined,undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf55e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__scan_100ea9918)();
  return (Scan<undefined,undefined>)param_1.unknown;
}



/* Address: 0x100bf55ec | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$delay */

/* (extension in Combine):Combine.Publisher.delay<A where A1: Combine.Scheduler>(for:
   A1.SchedulerTimeType.Stride, tolerance: A1.SchedulerTimeType.Stride?, scheduler: A1, options:
   A1.SchedulerOptions?) -> Combine.Publishers.Delay<A, A1> */

Delay<undefined,undefined>
(extension_Combine)::Combine::Publisher::_delay(Delay<undefined,undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf55f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__delay_100ea9920)();
  return (Delay<undefined,undefined>)param_1.unknown;
}



/* Address: 0x100bf55f8 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$merge */

/* (extension in Combine):Combine.Publisher.merge<A where A1: Combine.Publisher, A.Failure ==
   A1.Failure, A.Output == A1.Output>(with: A1) -> Combine.Publishers.Merge<A, A1> */

Merge<undefined,undefined>
(extension_Combine)::Combine::Publisher::_merge(Merge<undefined,undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__merge_100ea9928)();
  return (Merge<undefined,undefined>)param_1.unknown;
}



/* Address: 0x100bf5604 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$filter */

/* (extension in Combine):Combine.Publisher.filter((A.Output) -> Swift.Bool) ->
   Combine.Publishers.Filter<A> */

Filter<undefined> (extension_Combine)::Combine::Publisher::_filter(void)

{
  Filter<undefined> in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf560c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__filter_100ea9930)();
  return (Filter<undefined>)in_w0.evaluate;
}



/* Address: 0x100bf5610 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$prepend */

/* (extension in Combine):Combine.Publisher.prepend(A.Output...) ->
   Combine.Publishers.Concatenate<Combine.Publishers.Sequence<[A.Output], A.Failure>, A> */

Concatenate<Sequence<Array<undefined>,(extension_in_Combine):Combine_Publisher_prepend(A_Output___)__>_Combine_Publishers_Concatenate<Combine_Publishers_Sequence<[A_Output],A_Failure>,A>>_undefined>
 (extension_Combine)::Combine::Publisher::_prepend(void)

{
  Concatenate<Sequence<Array<undefined>,(extension_in_Combine):Combine_Publisher_prepend(A_Output___)__>_Combine_Publishers_Concatenate<Combine_Publishers_Sequence<[A_Output],A_Failure>,A>>_undefined>
  in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__prepend_100ea9938)();
  return (Concatenate<Sequence<Array<undefined>,(extension_in_Combine):Combine_Publisher_prepend(A_Output___)__>_Combine_Publishers_Concatenate<Combine_Publishers_Sequence<[A_Output],A_Failure>,A>>_undefined>
          )in_x0.unknown;
}



/* Address: 0x100bf561c | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$receive */

/* (extension in Combine):Combine.Publisher.receive<A where A1: Combine.Scheduler>(on: A1, options:
   A1.SchedulerOptions?) -> Combine.Publishers.ReceiveOn<A, A1> */

ReceiveOn<undefined,undefined>
(extension_Combine)::Combine::Publisher::_receive(ReceiveOn<undefined,undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__receive_100ea9940)();
  return (ReceiveOn<undefined,undefined>)param_1.unknown;
}



/* Address: 0x100bf5628 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$debounce */

/* (extension in Combine):Combine.Publisher.debounce<A where A1: Combine.Scheduler>(for:
   A1.SchedulerTimeType.Stride, scheduler: A1, options: A1.SchedulerOptions?) ->
   Combine.Publishers.Debounce<A, A1> */

Debounce<undefined,undefined>
(extension_Combine)::Combine::Publisher::_debounce(Debounce<undefined,undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__debounce_100ea9948)();
  return (Debounce<undefined,undefined>)param_1.unknown;
}



/* Address: 0x100bf5634 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::dropFirst */

/* (extension in Combine):Combine.Publisher.dropFirst(Swift.Int) -> Combine.Publishers.Drop<A> */

Drop<undefined> (extension_Combine)::Combine::Publisher::dropFirst(__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf563c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_dropFirst_100ea9950)();
  return (Drop<undefined>)param_1;
}



/* Address: 0x100bf5640 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$removeDuplicates */

/* (extension in Combine):Combine.Publisher< where A.Output: Swift.Equatable>.removeDuplicates() ->
   Combine.Publishers.RemoveDuplicates<A> */

RemoveDuplicates<undefined> (extension_Combine)::Combine::Publisher::_removeDuplicates(void)

{
  RemoveDuplicates<undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__removeDuplicates_100ea9958)();
  return (RemoveDuplicates<undefined>)in_x0.unknown;
}



/* Address: 0x100bf564c | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$switchToLatest */

/* (extension in Combine):Combine.Publisher< where A.Failure == Swift.Never, A.Output:
   Combine.Publisher, A.Output.Failure == Swift.Never>.switchToLatest() ->
   Combine.Publishers.SwitchToLatest<A.Output, A> */

SwitchToLatest<(extension_in_Combine):Combine_Publisher<_where_A_Failure____Swift_Never,A_Output:_Combine_Publisher,A_Output_Failure____Swift_Never>_switchToLatest()__>_Combine_Publishers_SwitchToLatest<A_Output,A>_undefined>
 (extension_Combine)::Combine::Publisher::_switchToLatest(void)

{
  SwitchToLatest<(extension_in_Combine):Combine_Publisher<_where_A_Failure____Swift_Never,A_Output:_Combine_Publisher,A_Output_Failure____Swift_Never>_switchToLatest()__>_Combine_Publishers_SwitchToLatest<A_Output,A>_undefined>
  in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__switchToLatest_100ea9960)();
  return (SwitchToLatest<(extension_in_Combine):Combine_Publisher<_where_A_Failure____Swift_Never,A_Output:_Combine_Publisher,A_Output_Failure____Swift_Never>_switchToLatest()__>_Combine_Publishers_SwitchToLatest<A_Output,A>_undefined>
          )in_x0.unknown;
}



/* Address: 0x100bf5658 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$sink */

/* (extension in Combine):Combine.Publisher< where A.Failure == Swift.Never>.sink(receiveValue:
   (A.Output) -> ()) -> Combine.AnyCancellable */

AnyCancellable * (extension_Combine)::Combine::Publisher::_sink(void)

{
  AnyCancellable *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sink_100ea9968)();
  return in_x0;
}



/* Address: 0x100bf5664 | /System/Library/Frameworks/Combine.framework/Versions/A/Combine::(extension_Combine)::Combine::Publisher::$assign */

/* (extension in Combine):Combine.Publisher< where A.Failure == Swift.Never>.assign(to: inout
   Combine.Published<A.Output>.Publisher) -> () */

void (extension_Combine)::Combine::Publisher::_assign(Publisher to)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf566c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__assign_100ea9970)();
  return;
}



/* Address: 0x100bf5670 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWEndpoint::==_infix */

/* static Network.NWEndpoint.== infix(Network.NWEndpoint, Network.NWEndpoint) -> Swift.Bool */

bool Network::NWEndpoint::___infix(NWEndpoint param_1,NWEndpoint param_2,NWEndpoint param_3,...)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100ea9e70)(param_1.value,param_2.value,param_3.value);
  return (bool)param_1.value;
}



/* Address: 0x100bf567c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWEndpoint::Host::init */

/* Network.NWEndpoint.Host.init(stringLiteral: Swift.String) -> Network.NWEndpoint.Host */

Host Network::NWEndpoint::Host::init(String stringLiteral)

{
  char *pcVar1;
  
  pcVar1 = stringLiteral.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf5684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea9e78)(pcVar1,stringLiteral.bridgeObject);
  return (Host)(__int8)pcVar1;
}



/* Address: 0x100bf5688 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWEndpoint::Host::==_infix */

/* static Network.NWEndpoint.Host.== infix(Network.NWEndpoint.Host, Network.NWEndpoint.Host) ->
   Swift.Bool */

bool Network::NWEndpoint::Host::___infix(Host param_1,Host param_2,Host param_3,...)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____infix_100ea9e80)(param_1.value,param_2.value,param_3.value);
  return (bool)param_1.value;
}



/* Address: 0x100bf5694 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWEndpoint::Host::typeMetadataAccessor */

/* type metadata accessor for Network.NWEndpoint.Host */

Host Network::NWEndpoint::Host::typeMetadataAccessor(void)

{
  Host in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf569c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9e98)();
  return (Host)in_w0.value;
}



/* Address: 0x100bf56a0 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWEndpoint::Host::init */

/* Network.NWEndpoint.Host.init(Swift.String) -> Network.NWEndpoint.Host */

Host Network::NWEndpoint::Host::init(String param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf56a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea9ea8)(pcVar1,param_1.bridgeObject);
  return (Host)(__int8)pcVar1;
}



/* Address: 0x100bf56ac | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWEndpoint::Port::get_any */

/* static Network.NWEndpoint.Port.any.getter : Network.NWEndpoint.Port */

Port Network::NWEndpoint::Port::get_any(Port param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf56b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_any_100ea9eb0)();
  return (Port)param_1._context;
}



/* Address: 0x100bf56b8 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWEndpoint::Port::$init */

/* Network.NWEndpoint.Port.init(rawValue: Swift.UInt16) -> Network.NWEndpoint.Port? */

void Network::NWEndpoint::Port::_init(__uint16 rawValue)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf56c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea9eb8)(rawValue);
  return;
}



/* Address: 0x100bf56c4 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWEndpoint::Port::get_rawValue */

/* Network.NWEndpoint.Port.rawValue.getter : Swift.UInt16 */

__uint16 Network::NWEndpoint::Port::get_rawValue(Port param_1)

{
  __uint16 _Var1;
  
  _Var1 = (__uint16)param_1._context;
                    /* WARNING: Could not recover jumptable at 0x000100bf56cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_rawValue_100ea9ec0)();
  return _Var1;
}



/* Address: 0x100bf56d0 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWEndpoint::Port::typeMetadataAccessor */

/* type metadata accessor for Network.NWEndpoint.Port */

Port Network::NWEndpoint::Port::typeMetadataAccessor(void)

{
  Port in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf56d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9ec8)();
  return (Port)in_x0._context;
}



/* Address: 0x100bf56dc | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWEndpoint::typeMetadataAccessor */

/* type metadata accessor for Network.NWEndpoint */

NWEndpoint Network::NWEndpoint::typeMetadataAccessor(void)

{
  NWEndpoint in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf56e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9ef0)();
  return (NWEndpoint)in_w0.value;
}



/* Address: 0x100bf56e8 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWListener::get_parameters */

/* Network.NWListener.parameters.getter : Network.NWParameters */

NWParameters * __thiscall Network::NWListener::get_parameters(NWListener *this,NWListener *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf56f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_parameters_100ea9f00)();
  return (NWParameters *)param_1;
}



/* Address: 0x100bf56f4 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWListener::$set_stateUpdateHandler */

/* Network.NWListener.stateUpdateHandler.setter : ((Network.NWListener.State) -> ())? */

void __thiscall Network::NWListener::_set_stateUpdateHandler(NWListener *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf56fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_stateUpdateHandler_100ea9f08)();
  return;
}



/* Address: 0x100bf5700 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWListener::$set_newConnectionHandler */

/* Network.NWListener.newConnectionHandler.setter : ((Network.NWConnection) -> ())? */

void __thiscall Network::NWListener::_set_newConnectionHandler(NWListener *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_newConnectionHandler_100ea9f10)();
  return;
}



/* Address: 0x100bf570c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWListener::$get_port */

/* Network.NWListener.port.getter : Network.NWEndpoint.Port? */

void __thiscall Network::NWListener::_get_port(NWListener *this,NWListener *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_port_100ea9f18)();
  return;
}



/* Address: 0x100bf5718 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWListener::State::typeMetadataAccessor */

/* type metadata accessor for Network.NWListener.State */

State Network::NWListener::State::typeMetadataAccessor(void)

{
  State in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9f48)();
  return (State)in_w0.value;
}



/* Address: 0x100bf5724 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWListener::start */

/* Network.NWListener.start(queue: __C.OS_dispatch_queue) -> () */

void __thiscall Network::NWListener::start(NWListener *this,OS_dispatch_queue *queue)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf572c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_start_100ea9f50)();
  return;
}



/* Address: 0x100bf5730 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWListener::get_state */

/* Network.NWListener.state.getter : Network.NWListener.State */

State __thiscall Network::NWListener::get_state(NWListener *this,NWListener *param_1)

{
  State SVar1;
  
  SVar1.value = (__int8)param_1;
                    /* WARNING: Could not recover jumptable at 0x000100bf5738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_state_100ea9f58)();
  return (State)SVar1.value;
}



/* Address: 0x100bf573c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWListener::$init */

/* Network.NWListener.init(using: Network.NWParameters, on: Network.NWEndpoint.Port) throws ->
   Network.NWListener */

NWListener * __thiscall Network::NWListener::_init(NWListener *this,NWParameters *using,Port on)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea9f60)();
  return (NWListener *)using;
}



/* Address: 0x100bf5748 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWListener::cancel */

/* Network.NWListener.cancel() -> () */

void __thiscall Network::NWListener::cancel(NWListener *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_cancel_100ea9f68)();
  return;
}



/* Address: 0x100bf5754 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWListener::Service::$init */

/* Network.NWListener.Service.init(name: Swift.String?, type: Swift.String, domain: Swift.String?,
   txtRecord: Foundation.Data?) -> Network.NWListener.Service */

Service Network::NWListener::Service::_init(String name)

{
  Service SVar1;
  
  SVar1.unknown = name.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf575c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea9f70)(SVar1.unknown,name.bridgeObject);
  return (Service)SVar1.unknown;
}



/* Address: 0x100bf5760 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWListener::Service::typeMetadataAccessor */

/* type metadata accessor for Network.NWListener.Service */

Service Network::NWListener::Service::typeMetadataAccessor(void)

{
  Service in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9f78)();
  return (Service)in_x0.unknown;
}



/* Address: 0x100bf576c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWListener::$set_service */

/* Network.NWListener.service.setter : Network.NWListener.Service? */

void __thiscall Network::NWListener::_set_service(NWListener *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_service_100ea9f88)();
  return;
}



/* Address: 0x100bf5778 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWListener::typeMetadataAccessor */

/* type metadata accessor for Network.NWListener */

NWListener * Network::NWListener::typeMetadataAccessor(void)

{
  NWListener *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9f90)();
  return in_x0;
}



/* Address: 0x100bf5784 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::IPv4Address::get_debugDescription */

/* Network.IPv4Address.debugDescription.getter : Swift.String */

String Network::IPv4Address::get_debugDescription(IPv4Address param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf578c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_debugDescription_100ea9fa0)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100bf5790 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::IPv4Address::get_rawValue */

/* Network.IPv4Address.rawValue.getter : Foundation.Data */

Data Network::IPv4Address::get_rawValue(IPv4Address param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5798. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_rawValue_100ea9fa8)();
  return (Data)param_1.unknown;
}



/* Address: 0x100bf579c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::IPv4Address::typeMetadataAccessor */

/* type metadata accessor for Network.IPv4Address */

IPv4Address Network::IPv4Address::typeMetadataAccessor(void)

{
  IPv4Address in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf57a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9fb0)();
  return (IPv4Address)in_x0.unknown;
}



/* Address: 0x100bf57a8 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::IPv4Address::$init */

/* Network.IPv4Address.init(Foundation.Data, Network.NWInterface?) -> Network.IPv4Address? */

void Network::IPv4Address::_init(Data param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf57b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea9fc0)();
  return;
}



/* Address: 0x100bf57b4 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::IPv6Address::get_debugDescription */

/* Network.IPv6Address.debugDescription.getter : Swift.String */

String Network::IPv6Address::get_debugDescription(IPv6Address param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf57bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_debugDescription_100ea9fc8)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100bf57c0 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::IPv6Address::get_rawValue */

/* Network.IPv6Address.rawValue.getter : Foundation.Data */

Data Network::IPv6Address::get_rawValue(IPv6Address param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf57c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_rawValue_100ea9fd0)();
  return (Data)param_1.unknown;
}



/* Address: 0x100bf57cc | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::IPv6Address::typeMetadataAccessor */

/* type metadata accessor for Network.IPv6Address */

IPv6Address Network::IPv6Address::typeMetadataAccessor(void)

{
  IPv6Address in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf57d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9fd8)();
  return (IPv6Address)in_x0.unknown;
}



/* Address: 0x100bf57d8 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::IPv6Address::$init */

/* Network.IPv6Address.init(Foundation.Data, Network.NWInterface?) -> Network.IPv6Address? */

void Network::IPv6Address::_init(Data param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf57e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea9fe8)();
  return;
}



/* Address: 0x100bf57e4 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWInterface::typeMetadataAccessor */

/* type metadata accessor for Network.NWInterface */

NWInterface Network::NWInterface::typeMetadataAccessor(void)

{
  NWInterface in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf57ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9ff0)();
  return (NWInterface)in_x0.unknown;
}



/* Address: 0x100bf57f0 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::get_parameters */

/* Network.NWConnection.parameters.getter : Network.NWParameters */

NWParameters * __thiscall
Network::NWConnection::get_parameters(NWConnection *this,NWConnection *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf57f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_parameters_100eaa000)();
  return (NWParameters *)param_1;
}



/* Address: 0x100bf57fc | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::$get_currentPath */

/* Network.NWConnection.currentPath.getter : Network.NWPath? */

void __thiscall Network::NWConnection::_get_currentPath(NWConnection *this,NWConnection *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_currentPath_100eaa008)();
  return;
}



/* Address: 0x100bf5808 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::ContentContext::get_finalMessage */

/* static Network.NWConnection.ContentContext.finalMessage.getter :
   Network.NWConnection.ContentContext */

ContentContext * __thiscall
Network::NWConnection::ContentContext::get_finalMessage
          (ContentContext *this,ContentContext *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_finalMessage_100eaa010)();
  return param_1;
}



/* Address: 0x100bf5814 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::ContentContext::get_defaultMessage */

/* static Network.NWConnection.ContentContext.defaultMessage.getter :
   Network.NWConnection.ContentContext */

ContentContext * __thiscall
Network::NWConnection::ContentContext::get_defaultMessage
          (ContentContext *this,ContentContext *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_defaultMessage_100eaa018)();
  return param_1;
}



/* Address: 0x100bf5820 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::ContentContext::typeMetadataAccessor */

/* type metadata accessor for Network.NWConnection.ContentContext */

ContentContext * Network::NWConnection::ContentContext::typeMetadataAccessor(void)

{
  ContentContext *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa020)();
  return in_x0;
}



/* Address: 0x100bf582c | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::SendCompletion::typeMetadataAccessor */

/* type metadata accessor for Network.NWConnection.SendCompletion */

SendCompletion Network::NWConnection::SendCompletion::typeMetadataAccessor(void)

{
  SendCompletion in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa030)();
  return (SendCompletion)in_w0.value;
}



/* Address: 0x100bf5838 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::$set_pathUpdateHandler */

/* Network.NWConnection.pathUpdateHandler.setter : ((Network.NWPath) -> ())? */

void __thiscall Network::NWConnection::_set_pathUpdateHandler(NWConnection *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf5840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_pathUpdateHandler_100eaa038)();
  return;
}



/* Address: 0x100bf5844 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::$set_stateUpdateHandler */

/* Network.NWConnection.stateUpdateHandler.setter : ((Network.NWConnection.State) -> ())? */

void __thiscall Network::NWConnection::_set_stateUpdateHandler(NWConnection *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf584c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_stateUpdateHandler_100eaa040)();
  return;
}



/* Address: 0x100bf5850 | /System/Library/Frameworks/Network.framework/Versions/A/Network::Network::NWConnection::EstablishmentReport::typeMetadataAccessor */

/* type metadata accessor for Network.NWConnection.EstablishmentReport */

EstablishmentReport Network::NWConnection::EstablishmentReport::typeMetadataAccessor(void)

{
  EstablishmentReport in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf5858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eaa048)();
  return (EstablishmentReport)in_x0.unknown;
}


