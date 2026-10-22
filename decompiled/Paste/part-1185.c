/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf765c | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::get_id */

/* StoreKit.Product.id.getter : Swift.String */

String StoreKit::Product::get_id(Product param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_id_100ea8038)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100bf7668 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::get_price */

/* StoreKit.Product.price.getter : __C.NSDecimal */

void StoreKit::Product::get_price(Product param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_price_100ea8040)();
  return;
}



/* Address: 0x100bf7674 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::$products */

/* static StoreKit.Product.products<A where A: Swift.Collection, A.Element == Swift.String>(for: A)
   async throws -> [StoreKit.Product] */

void StoreKit::Product::_products(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf767c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__products_100ea8048)();
  return;
}



/* Address: 0x100bf7680 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::$purchase */

/* StoreKit.Product.purchase(options: Swift.Set<StoreKit.Product.PurchaseOption>) async throws ->
   StoreKit.Product.PurchaseResult */

PurchaseResult StoreKit::Product::_purchase(Set<PurchaseOption> options,Product param_2)

{
  PurchaseResult PVar1;
  
  PVar1.value = (__int8)options.unknown;
                    /* WARNING: Could not recover jumptable at 0x000100bf7688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__purchase_100ea8058)();
  return (PurchaseResult)PVar1.value;
}



/* Address: 0x100bf768c | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::typeMetadataAccessor */

/* type metadata accessor for StoreKit.Product */

Product StoreKit::Product::typeMetadataAccessor(void)

{
  Product in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea8068)();
  return (Product)in_x0.unknown;
}



/* Address: 0x100bf7698 | /System/Library/Frameworks/CryptoKit.framework/Versions/A/CryptoKit::CryptoKit::HashFunction::update */

/* dispatch thunk of CryptoKit.HashFunction.update(bufferPointer: Swift.UnsafeRawBufferPointer) ->
   () */

void CryptoKit::HashFunction::update(UnsafeRawBufferPointer bufferPointer)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf76a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_update_100ea9ce8)();
  return;
}



/* Address: 0x100bf76a4 | /System/Library/Frameworks/CryptoKit.framework/Versions/A/CryptoKit::CryptoKit::HashFunction::$finalize */

/* dispatch thunk of CryptoKit.HashFunction.finalize() -> A.Digest */

void CryptoKit::HashFunction::_finalize(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf76ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__finalize_100ea9cf0)();
  return;
}



/* Address: 0x100bf76b0 | /System/Library/Frameworks/CryptoKit.framework/Versions/A/CryptoKit::CryptoKit::HashFunction::init */

/* dispatch thunk of CryptoKit.HashFunction.init() -> A */

void CryptoKit::HashFunction::init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf76b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea9cf8)();
  return;
}



/* Address: 0x100bf76bc | /System/Library/Frameworks/CryptoKit.framework/Versions/A/CryptoKit::CryptoKit::SHA256Digest::typeMetadataAccessor */

/* type metadata accessor for CryptoKit.SHA256Digest */

SHA256Digest CryptoKit::SHA256Digest::typeMetadataAccessor(void)

{
  SHA256Digest in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf76c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9d08)();
  return (SHA256Digest)in_x0.unknown;
}



/* Address: 0x100bf76c8 | /System/Library/Frameworks/CryptoKit.framework/Versions/A/CryptoKit::CryptoKit::P256::Signing::PrivateKey::$init */

/* CryptoKit.P256.Signing.PrivateKey.init(pemRepresentation: Swift.String) throws ->
   CryptoKit.P256.Signing.PrivateKey */

PrivateKey CryptoKit::P256::Signing::PrivateKey::_init(String pemRepresentation)

{
  PrivateKey PVar1;
  
  PVar1.unknown = pemRepresentation.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf76d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100ea9d20)(PVar1.unknown,pemRepresentation.bridgeObject);
  return (PrivateKey)PVar1.unknown;
}



/* Address: 0x100bf76d4 | /System/Library/Frameworks/CryptoKit.framework/Versions/A/CryptoKit::CryptoKit::P256::Signing::PrivateKey::$signature */

/* CryptoKit.P256.Signing.PrivateKey.signature<A where A: Foundation.DataProtocol>(for: A) throws ->
   CryptoKit.P256.Signing.ECDSASignature */

ECDSASignature CryptoKit::P256::Signing::PrivateKey::_signature(ECDSASignature param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf76dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__signature_100ea9d28)();
  return (ECDSASignature)param_1.unknown;
}



/* Address: 0x100bf76e0 | /System/Library/Frameworks/CryptoKit.framework/Versions/A/CryptoKit::CryptoKit::P256::Signing::PrivateKey::typeMetadataAccessor */

/* type metadata accessor for CryptoKit.P256.Signing.PrivateKey */

PrivateKey CryptoKit::P256::Signing::PrivateKey::typeMetadataAccessor(void)

{
  PrivateKey in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf76e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9d30)();
  return (PrivateKey)in_x0.unknown;
}



/* Address: 0x100bf76ec | /System/Library/Frameworks/CryptoKit.framework/Versions/A/CryptoKit::CryptoKit::P256::Signing::ECDSASignature::get_rawRepresentation */

/* CryptoKit.P256.Signing.ECDSASignature.rawRepresentation.getter : Foundation.Data */

Data CryptoKit::P256::Signing::ECDSASignature::get_rawRepresentation(ECDSASignature param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf76f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_rawRepresentation_100ea9d38)();
  return (Data)param_1.unknown;
}



/* Address: 0x100bf76f8 | /System/Library/Frameworks/CryptoKit.framework/Versions/A/CryptoKit::CryptoKit::P256::Signing::ECDSASignature::typeMetadataAccessor */

/* type metadata accessor for CryptoKit.P256.Signing.ECDSASignature */

ECDSASignature CryptoKit::P256::Signing::ECDSASignature::typeMetadataAccessor(void)

{
  ECDSASignature in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9d40)();
  return (ECDSASignature)in_x0.unknown;
}



/* Address: 0x100bf7704 | /System/Library/Frameworks/CryptoKit.framework/Versions/A/CryptoKit::CryptoKit::SHA256::typeMetadataAccessor */

/* type metadata accessor for CryptoKit.SHA256 */

SHA256 CryptoKit::SHA256::typeMetadataAccessor(void)

{
  SHA256 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf770c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9d50)();
  return (SHA256)in_x0.unknown;
}



/* Address: 0x100bf7710 | /System/Library/Frameworks/CryptoKit.framework/Versions/A/CryptoKit::CryptoKit::Insecure::MD5::typeMetadataAccessor */

/* type metadata accessor for CryptoKit.Insecure.MD5 */

MD5 CryptoKit::Insecure::MD5::typeMetadataAccessor(void)

{
  MD5 in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9d60)();
  return (MD5)in_x0.unknown;
}



/* Address: 0x100bf771c | /System/Library/Frameworks/CryptoKit.framework/Versions/A/CryptoKit::CryptoKit::Insecure::MD5Digest::typeMetadataAccessor */

/* type metadata accessor for CryptoKit.Insecure.MD5Digest */

MD5Digest CryptoKit::Insecure::MD5Digest::typeMetadataAccessor(void)

{
  MD5Digest in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea9d68)();
  return (MD5Digest)in_x0.unknown;
}



/* Address: 0x100bf7728 | /System/Library/Frameworks/VisionKit.framework/Versions/A/VisionKit::VisionKit::ImageAnalyzer::AnalysisTypes::get_text */

/* static VisionKit.ImageAnalyzer.AnalysisTypes.text.getter : VisionKit.ImageAnalyzer.AnalysisTypes
    */

AnalysisTypes VisionKit::ImageAnalyzer::AnalysisTypes::get_text(AnalysisTypes param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_text_100eabc00)();
  return (AnalysisTypes)param_1.unknown;
}



/* Address: 0x100bf7734 | /System/Library/Frameworks/VisionKit.framework/Versions/A/VisionKit::VisionKit::ImageAnalyzer::AnalysisTypes::typeMetadataAccessor */

/* type metadata accessor for VisionKit.ImageAnalyzer.AnalysisTypes */

AnalysisTypes VisionKit::ImageAnalyzer::AnalysisTypes::typeMetadataAccessor(void)

{
  AnalysisTypes in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf773c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eabc08)();
  return (AnalysisTypes)in_x0.unknown;
}



/* Address: 0x100bf7740 | /System/Library/Frameworks/VisionKit.framework/Versions/A/VisionKit::VisionKit::ImageAnalyzer::Configuration::typeMetadataAccessor */

/* type metadata accessor for VisionKit.ImageAnalyzer.Configuration */

Configuration VisionKit::ImageAnalyzer::Configuration::typeMetadataAccessor(void)

{
  Configuration in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eabc20)();
  return (Configuration)in_x0.unknown;
}



/* Address: 0x100bf774c | /System/Library/Frameworks/VisionKit.framework/Versions/A/VisionKit::VisionKit::ImageAnalyzer::Configuration::init */

/* VisionKit.ImageAnalyzer.Configuration.init(VisionKit.ImageAnalyzer.AnalysisTypes) ->
   VisionKit.ImageAnalyzer.Configuration */

Configuration VisionKit::ImageAnalyzer::Configuration::init(AnalysisTypes param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eabc28)();
  return (Configuration)param_1.unknown;
}



/* Address: 0x100bf7758 | /System/Library/Frameworks/VisionKit.framework/Versions/A/VisionKit::VisionKit::ImageAnalyzer::$analyze */

/* VisionKit.ImageAnalyzer.analyze(_: __C.NSImage, orientation: __C.CGImagePropertyOrientation,
   configuration: VisionKit.ImageAnalyzer.Configuration) async throws -> VisionKit.ImageAnalysis */

ImageAnalysis * __thiscall
VisionKit::ImageAnalyzer::_analyze
          (ImageAnalyzer *this,NSImage *param_1,CGImagePropertyOrientation orientation,
          Configuration configuration)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__analyze_100eabc30)();
  return (ImageAnalysis *)param_1;
}



/* Address: 0x100bf7764 | /System/Library/Frameworks/VisionKit.framework/Versions/A/VisionKit::VisionKit::ImageAnalyzer::init */

/* VisionKit.ImageAnalyzer.init() -> VisionKit.ImageAnalyzer */

ImageAnalyzer * __thiscall VisionKit::ImageAnalyzer::init(ImageAnalyzer *this)

{
  ImageAnalyzer *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf776c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eabc40)();
  return in_x0;
}



/* Address: 0x100bf7770 | /System/Library/Frameworks/VisionKit.framework/Versions/A/VisionKit::VisionKit::ImageAnalyzer::typeMetadataAccessor */

/* type metadata accessor for VisionKit.ImageAnalyzer */

ImageAnalyzer * VisionKit::ImageAnalyzer::typeMetadataAccessor(void)

{
  ImageAnalyzer *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eabc48)();
  return in_x0;
}



/* Address: 0x100bf777c | /System/Library/Frameworks/VisionKit.framework/Versions/A/VisionKit::VisionKit::ImageAnalysisOverlayView::$set_trackingImageView */

/* VisionKit.ImageAnalysisOverlayView.trackingImageView.setter : __C.NSImageView? */

void __thiscall
VisionKit::ImageAnalysisOverlayView::_set_trackingImageView(ImageAnalysisOverlayView *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_trackingImageView_100eabc50)();
  return;
}



/* Address: 0x100bf7788 | /System/Library/Frameworks/VisionKit.framework/Versions/A/VisionKit::VisionKit::ImageAnalysisOverlayView::InteractionTypes::get_automatic */

/* static VisionKit.ImageAnalysisOverlayView.InteractionTypes.automatic.getter :
   VisionKit.ImageAnalysisOverlayView.InteractionTypes */

InteractionTypes
VisionKit::ImageAnalysisOverlayView::InteractionTypes::get_automatic(InteractionTypes param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_automatic_100eabc58)();
  return (InteractionTypes)param_1.unknown;
}



/* Address: 0x100bf7794 | /System/Library/Frameworks/VisionKit.framework/Versions/A/VisionKit::VisionKit::ImageAnalysisOverlayView::InteractionTypes::typeMetadataAccessor */

/* type metadata accessor for VisionKit.ImageAnalysisOverlayView.InteractionTypes */

InteractionTypes VisionKit::ImageAnalysisOverlayView::InteractionTypes::typeMetadataAccessor(void)

{
  InteractionTypes in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf779c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eabc60)();
  return (InteractionTypes)in_x0.unknown;
}



/* Address: 0x100bf77a0 | /System/Library/Frameworks/VisionKit.framework/Versions/A/VisionKit::VisionKit::ImageAnalysisOverlayView::set_preferredInteractionTypes */

/* VisionKit.ImageAnalysisOverlayView.preferredInteractionTypes.setter :
   VisionKit.ImageAnalysisOverlayView.InteractionTypes */

void __thiscall
VisionKit::ImageAnalysisOverlayView::set_preferredInteractionTypes
          (ImageAnalysisOverlayView *this,InteractionTypes param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf77a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_set_preferredInteractionTypes_100eabc68)();
  return;
}



/* Address: 0x100bf77ac | /System/Library/Frameworks/VisionKit.framework/Versions/A/VisionKit::VisionKit::ImageAnalysisOverlayView::$set_analysis */

/* VisionKit.ImageAnalysisOverlayView.analysis.setter : VisionKit.ImageAnalysis? */

void __thiscall VisionKit::ImageAnalysisOverlayView::_set_analysis(ImageAnalysisOverlayView *this)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf77b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_analysis_100eabc70)();
  return;
}



/* Address: 0x100bf77b8 | /System/Library/Frameworks/VisionKit.framework/Versions/A/VisionKit::VisionKit::ImageAnalysisOverlayView::typeMetadataAccessor */

/* type metadata accessor for VisionKit.ImageAnalysisOverlayView */

ImageAnalysisOverlayView * VisionKit::ImageAnalysisOverlayView::typeMetadataAccessor(void)

{
  ImageAnalysisOverlayView *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf77c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eabc78)();
  return in_x0;
}



/* Address: 0x100bf77c4 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::init */

/* Swift.Dictionary.init() -> [A : B] */

Dictionary<undefined,undefined> Swift::Dictionary::init(void)

{
  Dictionary<undefined,undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf77cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eabd68)();
  return (Dictionary<undefined,undefined>)in_x0.unknown;
}



/* Address: 0x100bf77d0 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::init */

/* Swift.Array.init() -> [A] */

void Swift::Array<undefined>::init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf77d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eabd70)();
  return;
}



/* Address: 0x100bf77dc | /usr/lib/swift/libswift_Concurrency.dylib::Swift::CancellationError::init */

/* Swift.CancellationError.init() -> Swift.CancellationError */

CancellationError Swift::CancellationError::init(void)

{
  CancellationError in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf77e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eaeaf8)();
  return (CancellationError)in_x0.unknown;
}



/* Address: 0x100bf77e8 | /usr/lib/swift/libswiftCore.dylib::Swift::Set::init */

/* Swift.Set.init() -> Swift.Set<A> */

Set<undefined> Swift::Set::init(void)

{
  Set<undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf77f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eabd78)();
  return (Set<undefined>)in_x0.unknown;
}



/* Address: 0x100bf77f4 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::BinaryFloatingPoint::$init */

/* (extension in Swift):Swift.BinaryFloatingPoint.init<A where A1: Swift.BinaryFloatingPoint>(A1) ->
   A */

void (extension_Swift)::Swift::BinaryFloatingPoint::_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf77fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eabd80)();
  return;
}



/* Address: 0x100bf7800 | /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit::(extension_CloudKit)::(extension_in_CloudKit):__C_Synthesized.related_decl_'e'_for_CKErrorCode.serverRecord.getter_:___C.CKRecord?::$get_serverRecord */

/* (extension in CloudKit):__C_Synthesized.related decl 'e' for CKErrorCode.serverRecord.getter :
   __C.CKRecord? */

void (extension_CloudKit)::
     (extension_in_CloudKit):__C_Synthesized.related_decl_'e'_for_CKErrorCode.serverRecord.getter_:___C.CKRecord?
     ::_get_serverRecord(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_serverRecord_100ea94a8)();
  return;
}



/* Address: 0x100bf780c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC */

/* (extension in Foundation):Swift.Dictionary._bridgeToObjectiveC() -> __C.NSDictionary */

NSDictionary * (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC(void)

{
  NSDictionary *in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__bridgeToObjectiveC_100ea7760)();
  return in_x0;
}



/* Address: 0x100bf7818 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::Dictionary::$_conditionallyBridgeFromObjectiveC */

/* static (extension in Foundation):Swift.Dictionary._conditionallyBridgeFromObjectiveC(_:
   __C.NSDictionary, result: inout [A : B]?) -> Swift.Bool */

bool (extension_Foundation)::Swift::Dictionary::__conditionallyBridgeFromObjectiveC
               (NSDictionary *param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf7820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___conditionallyBridgeFromObjectiveC_100ea7768)();
  return (bool)uVar1;
}



/* Address: 0x100bf7824 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::Dictionary::$_unconditionallyBridgeFromObjectiveC */

/* static (extension in
   Foundation):Swift.Dictionary._unconditionallyBridgeFromObjectiveC(__C.NSDictionary?) -> [A : B]
    */

Dictionary<undefined,undefined>
(extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC(void)

{
  Dictionary<undefined,undefined> in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf782c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100ea7770)();
  return (Dictionary<undefined,undefined>)in_x0.unknown;
}



/* Address: 0x100bf7830 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::get_description */

/* Swift.Dictionary.description.getter : Swift.String */

String Swift::Dictionary::get_description(Dictionary param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_description_100eabd88)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100bf783c | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::$removeValue */

/* Swift.Dictionary.removeValue(forKey: A) -> B? */

void Swift::Dictionary::_removeValue(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__removeValue_100eabd90)();
  return;
}



/* Address: 0x100bf7848 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::init */

/* Swift.Dictionary.init(minimumCapacity: Swift.Int) -> [A : B] */

Dictionary<undefined,undefined> Swift::Dictionary::init(__int64 minimumCapacity)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100eabd98)();
  return (Dictionary<undefined,undefined>)minimumCapacity;
}



/* Address: 0x100bf7854 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::reserveCapacity */

/* Swift.Dictionary.reserveCapacity(Swift.Int) -> () */

void Swift::Dictionary::reserveCapacity(__int64 param_1,Dictionary param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf785c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_reserveCapacity_100eabda0)();
  return;
}



/* Address: 0x100bf7860 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::$compactMapValues */

/* Swift.Dictionary.compactMapValues<A>((B) throws -> A1?) throws -> [A : A1] */

Dictionary<undefined,undefined> Swift::Dictionary::_compactMapValues(Dictionary param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__compactMapValues_100eabda8)();
  return (Dictionary<undefined,undefined>)param_1.unknown;
}



/* Address: 0x100bf786c | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::$init */

/* Swift.Dictionary.init(dictionaryLiteral: (A, B)...) -> [A : B] */

Dictionary<undefined,undefined> Swift::Dictionary::_init(Dictionary<undefined,undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eabdb0)();
  return (Dictionary<undefined,undefined>)param_1.unknown;
}



/* Address: 0x100bf7878 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::$init */

/* Swift.Dictionary.init<A where A1: Swift.Sequence, A1.Element == (A, B)>(uniqueKeysWithValues:
   __owned A1) -> [A : B] */

Dictionary<undefined,undefined> Swift::Dictionary::_init(Dictionary<undefined,undefined> param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eabdb8)();
  return (Dictionary<undefined,undefined>)param_1.unknown;
}



/* Address: 0x100bf7884 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::Keys::typeMetadataAccessor */

/* type metadata accessor for Swift.Dictionary.Keys */

void Swift::Dictionary::Keys::typeMetadataAccessor(Keys *__return_storage_ptr__)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf788c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eabdc0)();
  return;
}



/* Address: 0x100bf7890 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::$get_keys */

/* Swift.Dictionary.keys.getter : [A : B].Keys */

void Swift::Dictionary::_get_keys(Keys *__return_storage_ptr__,Dictionary param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_keys_100eabdd8)();
  return;
}



/* Address: 0x100bf789c | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::get_count */

/* Swift.Dictionary.count.getter : Swift.Int */

__int64 Swift::Dictionary::get_count(Dictionary param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf78a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_count_100eabde0)();
  return (__int64)param_1.unknown;
}



/* Address: 0x100bf78a8 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::Values::typeMetadataAccessor */

/* type metadata accessor for Swift.Dictionary.Values */

Values Swift::Dictionary::Values::typeMetadataAccessor(void)

{
  Values in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eabde8)();
  return (Values)in_x0.unknown;
}



/* Address: 0x100bf78b4 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::$get_values */

/* Swift.Dictionary.values.getter : [A : B].Values */

Values Swift::Dictionary::_get_values(Dictionary param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf78bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_values_100eabe00)();
  return (Values)param_1.unknown;
}



/* Address: 0x100bf78c0 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::Iterator::$init */

/* Swift.Dictionary.Iterator.init(_native: __owned Swift._NativeDictionary<A, B>.Iterator) -> [A :
   B].Iterator */

Iterator Swift::Dictionary::Iterator::_init(Iterator _native)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf78c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__init_100eabe08)();
  return (Iterator)_native.unknown;
}



/* Address: 0x100bf78cc | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::_Variant::isUniquelyReferenced */

/* Swift.Dictionary._Variant.isUniquelyReferenced() -> Swift.Bool */

bool Swift::Dictionary::_Variant::isUniquelyReferenced(_Variant param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf78d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_isUniquelyReferenced_100eabe10)();
  return (bool)uVar1;
}



/* Address: 0x100bf78d8 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::_Variant::removeAll */

/* Swift.Dictionary._Variant.removeAll(keepingCapacity: Swift.Bool) -> () */

void Swift::Dictionary::_Variant::removeAll(bool keepingCapacity,_Variant param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf78e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_removeAll_100eabe18)(keepingCapacity);
  return;
}



/* Address: 0x100bf78e4 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::_Variant::typeMetadataAccessor */

/* type metadata accessor for Swift.Dictionary._Variant */

_Variant Swift::Dictionary::_Variant::typeMetadataAccessor(void)

{
  _Variant in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf78ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eabe20)();
  return (_Variant)in_x0.unknown;
}



/* Address: 0x100bf78f0 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::$mapValues */

/* Swift.Dictionary.mapValues<A>((B) throws -> A1) throws -> [A : A1] */

Dictionary<undefined,undefined> Swift::Dictionary::_mapValues(Dictionary param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf78f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mapValues_100eabe30)();
  return (Dictionary<undefined,undefined>)param_1.unknown;
}



/* Address: 0x100bf78fc | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::removeAll */

/* Swift.Dictionary.removeAll(keepingCapacity: Swift.Bool) -> () */

void Swift::Dictionary::removeAll(bool keepingCapacity,Dictionary param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_removeAll_100eabe38)(keepingCapacity);
  return;
}



/* Address: 0x100bf7908 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::typeMetadataAccessor */

/* type metadata accessor for Swift.Dictionary */

Dictionary Swift::Dictionary::typeMetadataAccessor(void)

{
  Dictionary in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100eabe40)();
  return (Dictionary)in_x0.unknown;
}



/* Address: 0x100bf7914 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::$modify_subscript */

/* Swift.Dictionary.subscript.modify : (A) -> B? */

void __thiscall Swift::Dictionary::_modify_subscript(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf791c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__modify_subscript_100eabe50)();
  return;
}



/* Address: 0x100bf7920 | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::$get_subscript */

/* Swift.Dictionary.subscript.getter : (A) -> B? */

void Swift::Dictionary::_get_subscript(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_subscript_100eabe58)();
  return;
}



/* Address: 0x100bf792c | /usr/lib/swift/libswiftCore.dylib::Swift::Dictionary::$set_subscript */

/* Swift.Dictionary.subscript.setter : (A) -> B? */

void __thiscall Swift::Dictionary::_set_subscript(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__set_subscript_100eabe60)();
  return;
}



/* Address: 0x100bf7938 | /usr/lib/swift/libswiftCore.dylib::Swift::Encodable::$encode */

/* dispatch thunk of Swift.Encodable.encode(to: Swift.Encoder) throws -> () */

void Swift::Encodable::_encode(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__encode_100eabe88)();
  return;
}



/* Address: 0x100bf7944 | /usr/lib/swift/libswiftCore.dylib::Swift::Hashable::_rawHashValue */

/* dispatch thunk of Swift.Hashable._rawHashValue(seed: Swift.Int) -> Swift.Int */

__int64 Swift::Hashable::_rawHashValue(__int64 seed)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf794c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__rawHashValue_100eabe90)();
  return seed;
}



/* Address: 0x100bf7950 | /usr/lib/swift/libswiftCore.dylib::Swift::Hashable::hash */

/* dispatch thunk of Swift.Hashable.hash(into: inout Swift.Hasher) -> () */

void Swift::Hashable::hash(Hasher into)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_hash_100eabe98)();
  return;
}


