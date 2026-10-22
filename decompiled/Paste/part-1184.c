/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf735c | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::get_ownershipType */

/* StoreKit.Transaction.ownershipType.getter : StoreKit.Transaction.OwnershipType */

OwnershipType StoreKit::Transaction::get_ownershipType(Transaction param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_ownershipType_100ea7d70)();
  return (OwnershipType)param_1.unknown;
}



/* Address: 0x100bf7368 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::$get_expirationDate */

/* StoreKit.Transaction.expirationDate.getter : Foundation.Date? */

void StoreKit::Transaction::_get_expirationDate(Transaction param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_expirationDate_100ea7d78)();
  return;
}



/* Address: 0x100bf7374 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::$get_revocationDate */

/* StoreKit.Transaction.revocationDate.getter : Foundation.Date? */

void StoreKit::Transaction::_get_revocationDate(Transaction param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf737c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_revocationDate_100ea7d80)();
  return;
}



/* Address: 0x100bf7380 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::RevocationReason::get_rawValue */

/* StoreKit.Transaction.RevocationReason.rawValue.getter : Swift.Int */

__int64 StoreKit::Transaction::RevocationReason::get_rawValue(RevocationReason param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_rawValue_100ea7d88)();
  return (__int64)param_1.unknown;
}



/* Address: 0x100bf738c | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::RevocationReason::typeMetadataAccessor */

/* type metadata accessor for StoreKit.Transaction.RevocationReason */

RevocationReason StoreKit::Transaction::RevocationReason::typeMetadataAccessor(void)

{
  RevocationReason in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7d90)();
  return (RevocationReason)in_x0.unknown;
}



/* Address: 0x100bf7398 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::$get_revocationReason */

/* StoreKit.Transaction.revocationReason.getter : StoreKit.Transaction.RevocationReason? */

void StoreKit::Transaction::_get_revocationReason(Transaction param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf73a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_revocationReason_100ea7da0)();
  return;
}



/* Address: 0x100bf73a4 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::get_currentEntitlements */

/* static StoreKit.Transaction.currentEntitlements.getter : StoreKit.Transaction.Transactions */

Transactions StoreKit::Transaction::get_currentEntitlements(Transaction param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf73ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_currentEntitlements_100ea7da8)();
  return (Transactions)param_1.unknown;
}



/* Address: 0x100bf73b0 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::get_originalPurchaseDate */

/* StoreKit.Transaction.originalPurchaseDate.getter : Foundation.Date */

Date StoreKit::Transaction::get_originalPurchaseDate(Transaction param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf73b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_originalPurchaseDate_100ea7db0)();
  return (Date)param_1.unknown;
}



/* Address: 0x100bf73bc | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::get_id */

/* StoreKit.Transaction.id.getter : Swift.UInt64 */

__uint64 StoreKit::Transaction::get_id(Transaction param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf73c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_id_100ea7db8)();
  return (__uint64)param_1.unknown;
}



/* Address: 0x100bf73c8 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::get_all */

/* static StoreKit.Transaction.all.getter : StoreKit.Transaction.Transactions */

Transactions StoreKit::Transaction::get_all(Transaction param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf73d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_all_100ea7dc0)();
  return (Transactions)param_1.unknown;
}



/* Address: 0x100bf73d4 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::$finish */

/* StoreKit.Transaction.finish() async -> () */

void StoreKit::Transaction::_finish(Transaction param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf73dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__finish_100ea7dc8)();
  return;
}



/* Address: 0x100bf73e0 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::$latest */

/* static StoreKit.Transaction.latest(for: Swift.String) async ->
   StoreKit.VerificationResult<StoreKit.Transaction>? */

void StoreKit::Transaction::_latest(String for,Transaction param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf73e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__latest_100ea7dd8)(for.str,for.bridgeObject);
  return;
}



/* Address: 0x100bf73ec | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::get_updates */

/* static StoreKit.Transaction.updates.getter : StoreKit.Transaction.Transactions */

Transactions StoreKit::Transaction::get_updates(Transaction param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf73f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_updates_100ea7de8)();
  return (Transactions)param_1.unknown;
}



/* Address: 0x100bf73f8 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::OfferType::get_promotional */

/* static StoreKit.Transaction.OfferType.promotional.getter : StoreKit.Transaction.OfferType */

OfferType StoreKit::Transaction::OfferType::get_promotional(OfferType param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_promotional_100ea7df0)();
  return (OfferType)param_1.unknown;
}



/* Address: 0x100bf7404 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::OfferType::get_introductory */

/* static StoreKit.Transaction.OfferType.introductory.getter : StoreKit.Transaction.OfferType */

OfferType StoreKit::Transaction::OfferType::get_introductory(OfferType param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf740c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_introductory_100ea7df8)();
  return (OfferType)param_1.unknown;
}



/* Address: 0x100bf7410 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::OfferType::typeMetadataAccessor */

/* type metadata accessor for StoreKit.Transaction.OfferType */

OfferType StoreKit::Transaction::OfferType::typeMetadataAccessor(void)

{
  OfferType in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7e00)();
  return (OfferType)in_x0.unknown;
}



/* Address: 0x100bf741c | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::$get_offerType */

/* StoreKit.Transaction.offerType.getter : StoreKit.Transaction.OfferType? */

void StoreKit::Transaction::_get_offerType(Transaction param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_offerType_100ea7e18)();
  return;
}



/* Address: 0x100bf7428 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::get_productID */

/* StoreKit.Transaction.productID.getter : Swift.String */

String StoreKit::Transaction::get_productID(Transaction param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_productID_100ea7e20)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100bf7434 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Transaction::typeMetadataAccessor */

/* type metadata accessor for StoreKit.Transaction */

Transaction StoreKit::Transaction::typeMetadataAccessor(void)

{
  Transaction in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf743c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7e28)();
  return (Transaction)in_x0.unknown;
}



/* Address: 0x100bf7440 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::AppTransaction::get_environment */

/* StoreKit.AppTransaction.environment.getter : StoreKit.AppStore.Environment */

Environment StoreKit::AppTransaction::get_environment(AppTransaction param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_environment_100ea7e38)();
  return (Environment)param_1.unknown;
}



/* Address: 0x100bf744c | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::AppTransaction::get_originalPurchaseDate */

/* StoreKit.AppTransaction.originalPurchaseDate.getter : Foundation.Date */

Date StoreKit::AppTransaction::get_originalPurchaseDate(AppTransaction param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_originalPurchaseDate_100ea7e40)();
  return (Date)param_1.unknown;
}



/* Address: 0x100bf7458 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::AppTransaction::$get_shared */

/* static StoreKit.AppTransaction.shared.getter :
   StoreKit.VerificationResult<StoreKit.AppTransaction> */

void StoreKit::AppTransaction::_get_shared(AppTransaction param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_shared_100ea7e48)();
  return;
}



/* Address: 0x100bf7464 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::AppTransaction::typeMetadataAccessor */

/* type metadata accessor for StoreKit.AppTransaction */

AppTransaction StoreKit::AppTransaction::typeMetadataAccessor(void)

{
  AppTransaction in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf746c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7e58)();
  return (AppTransaction)in_x0.unknown;
}



/* Address: 0x100bf7470 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::VerificationResult::get_payloadValue */

/* StoreKit.VerificationResult.payloadValue.getter : A */

void StoreKit::VerificationResult::get_payloadValue(VerificationResult param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_payloadValue_100ea7e70)(param_1.value);
  return;
}



/* Address: 0x100bf747c | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::VerificationResult::get_unsafePayloadValue */

/* StoreKit.VerificationResult.unsafePayloadValue.getter : A */

void StoreKit::VerificationResult::get_unsafePayloadValue(VerificationResult param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_unsafePayloadValue_100ea7e78)(param_1.value);
  return;
}



/* Address: 0x100bf7488 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::get_displayPrice */

/* StoreKit.Product.displayPrice.getter : Swift.String */

String StoreKit::Product::get_displayPrice(Product param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_displayPrice_100ea7e88)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100bf7494 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::$get_subscription */

/* StoreKit.Product.subscription.getter : StoreKit.Product.SubscriptionInfo? */

void StoreKit::Product::_get_subscription(Product param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf749c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_subscription_100ea7e90)();
  return;
}



/* Address: 0x100bf74a0 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::PurchaseOption::appAccountToken */

/* static StoreKit.Product.PurchaseOption.appAccountToken(Foundation.UUID) ->
   StoreKit.Product.PurchaseOption */

PurchaseOption
StoreKit::Product::PurchaseOption::appAccountToken(UUID param_1,PurchaseOption param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf74a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_appAccountToken_100ea7e98)();
  return (PurchaseOption)param_1.unknown;
}



/* Address: 0x100bf74ac | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::PurchaseOption::promotionalOffer */

/* static StoreKit.Product.PurchaseOption.promotionalOffer(offerID: Swift.String, keyID:
   Swift.String, nonce: Foundation.UUID, signature: Foundation.Data, timestamp: Swift.Int) ->
   StoreKit.Product.PurchaseOption */

PurchaseOption
StoreKit::Product::PurchaseOption::promotionalOffer
          (String offerID,String keyID,UUID nonce,Data signature,__int64 timestamp,
          PurchaseOption param_6)

{
  PurchaseOption PVar1;
  
  PVar1.unknown = offerID.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf74b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_promotionalOffer_100ea7ea0)
            (PVar1.unknown,offerID.bridgeObject,keyID.str,keyID.bridgeObject);
  return (PurchaseOption)PVar1.unknown;
}



/* Address: 0x100bf74b8 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::PurchaseOption::typeMetadataAccessor */

/* type metadata accessor for StoreKit.Product.PurchaseOption */

PurchaseOption StoreKit::Product::PurchaseOption::typeMetadataAccessor(void)

{
  PurchaseOption in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf74c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7ea8)();
  return (PurchaseOption)in_x0.unknown;
}



/* Address: 0x100bf74c4 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::PurchaseResult::typeMetadataAccessor */

/* type metadata accessor for StoreKit.Product.PurchaseResult */

PurchaseResult StoreKit::Product::PurchaseResult::typeMetadataAccessor(void)

{
  PurchaseResult in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf74cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7ee0)();
  return (PurchaseResult)in_w0.value;
}



/* Address: 0x100bf74d0 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::RenewalInfo::get_willAutoRenew */

/* StoreKit.Product.SubscriptionInfo.RenewalInfo.willAutoRenew.getter : Swift.Bool */

bool StoreKit::Product::SubscriptionInfo::RenewalInfo::get_willAutoRenew(RenewalInfo param_1)

{
  undefined1 uVar1;
  
  uVar1 = SUB81(param_1.unknown,0);
                    /* WARNING: Could not recover jumptable at 0x000100bf74d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_willAutoRenew_100ea7ee8)();
  return (bool)uVar1;
}



/* Address: 0x100bf74dc | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::RenewalInfo::$get_autoRenewPreference */

/* StoreKit.Product.SubscriptionInfo.RenewalInfo.autoRenewPreference.getter : Swift.String? */

void StoreKit::Product::SubscriptionInfo::RenewalInfo::_get_autoRenewPreference(RenewalInfo param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf74e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_autoRenewPreference_100ea7ef0)();
  return;
}



/* Address: 0x100bf74e8 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::RenewalInfo::typeMetadataAccessor */

/* type metadata accessor for StoreKit.Product.SubscriptionInfo.RenewalInfo */

RenewalInfo StoreKit::Product::SubscriptionInfo::RenewalInfo::typeMetadataAccessor(void)

{
  RenewalInfo in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf74f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7ef8)();
  return (RenewalInfo)in_x0.unknown;
}



/* Address: 0x100bf74f4 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::RenewalState::get_subscribed */

/* static StoreKit.Product.SubscriptionInfo.RenewalState.subscribed.getter :
   StoreKit.Product.SubscriptionInfo.RenewalState */

RenewalState StoreKit::Product::SubscriptionInfo::RenewalState::get_subscribed(RenewalState param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf74fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_subscribed_100ea7f08)();
  return (RenewalState)param_1.unknown;
}



/* Address: 0x100bf7500 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::RenewalState::get_inGracePeriod */

/* static StoreKit.Product.SubscriptionInfo.RenewalState.inGracePeriod.getter :
   StoreKit.Product.SubscriptionInfo.RenewalState */

RenewalState
StoreKit::Product::SubscriptionInfo::RenewalState::get_inGracePeriod(RenewalState param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_inGracePeriod_100ea7f10)();
  return (RenewalState)param_1.unknown;
}



/* Address: 0x100bf750c | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::RenewalState::get_inBillingRetryPeriod */

/* static StoreKit.Product.SubscriptionInfo.RenewalState.inBillingRetryPeriod.getter :
   StoreKit.Product.SubscriptionInfo.RenewalState */

RenewalState
StoreKit::Product::SubscriptionInfo::RenewalState::get_inBillingRetryPeriod(RenewalState param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_inBillingRetryPeriod_100ea7f18)();
  return (RenewalState)param_1.unknown;
}



/* Address: 0x100bf7518 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::RenewalState::get_expired */

/* static StoreKit.Product.SubscriptionInfo.RenewalState.expired.getter :
   StoreKit.Product.SubscriptionInfo.RenewalState */

RenewalState StoreKit::Product::SubscriptionInfo::RenewalState::get_expired(RenewalState param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_expired_100ea7f20)();
  return (RenewalState)param_1.unknown;
}



/* Address: 0x100bf7524 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::RenewalState::get_revoked */

/* static StoreKit.Product.SubscriptionInfo.RenewalState.revoked.getter :
   StoreKit.Product.SubscriptionInfo.RenewalState */

RenewalState StoreKit::Product::SubscriptionInfo::RenewalState::get_revoked(RenewalState param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf752c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_revoked_100ea7f28)();
  return (RenewalState)param_1.unknown;
}



/* Address: 0x100bf7530 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::RenewalState::typeMetadataAccessor */

/* type metadata accessor for StoreKit.Product.SubscriptionInfo.RenewalState */

RenewalState StoreKit::Product::SubscriptionInfo::RenewalState::typeMetadataAccessor(void)

{
  RenewalState in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7f30)();
  return (RenewalState)in_x0.unknown;
}



/* Address: 0x100bf753c | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::$get_introductoryOffer */

/* StoreKit.Product.SubscriptionInfo.introductoryOffer.getter : StoreKit.Product.SubscriptionOffer?
    */

void StoreKit::Product::SubscriptionInfo::_get_introductoryOffer(SubscriptionInfo param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_introductoryOffer_100ea7f40)();
  return;
}



/* Address: 0x100bf7548 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::get_promotionalOffers */

/* StoreKit.Product.SubscriptionInfo.promotionalOffers.getter : [StoreKit.Product.SubscriptionOffer]
    */

void StoreKit::Product::SubscriptionInfo::get_promotionalOffers(SubscriptionInfo param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_promotionalOffers_100ea7f48)();
  return;
}



/* Address: 0x100bf7554 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::get_subscriptionPeriod */

/* StoreKit.Product.SubscriptionInfo.subscriptionPeriod.getter : StoreKit.Product.SubscriptionPeriod
    */

SubscriptionPeriod
StoreKit::Product::SubscriptionInfo::get_subscriptionPeriod(SubscriptionInfo param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf755c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_subscriptionPeriod_100ea7f50)();
  return (SubscriptionPeriod)param_1.unknown;
}



/* Address: 0x100bf7560 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::get_subscriptionGroupID */

/* StoreKit.Product.SubscriptionInfo.subscriptionGroupID.getter : Swift.String */

String StoreKit::Product::SubscriptionInfo::get_subscriptionGroupID(SubscriptionInfo param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_subscriptionGroupID_100ea7f58)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100bf756c | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::$isEligibleForIntroOffer */

/* static StoreKit.Product.SubscriptionInfo.isEligibleForIntroOffer(for: Swift.String) async ->
   Swift.Bool */

bool StoreKit::Product::SubscriptionInfo::_isEligibleForIntroOffer
               (String for,SubscriptionInfo param_2)

{
  char *pcVar1;
  
  pcVar1 = for.str;
                    /* WARNING: Could not recover jumptable at 0x000100bf7574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__isEligibleForIntroOffer_100ea7f60)(pcVar1,for.bridgeObject);
  return SUB81(pcVar1,0);
}



/* Address: 0x100bf7578 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::Status::$get_renewalInfo */

/* StoreKit.Product.SubscriptionInfo.Status.renewalInfo.getter :
   StoreKit.VerificationResult<StoreKit.Product.SubscriptionInfo.RenewalInfo> */

void StoreKit::Product::SubscriptionInfo::Status::_get_renewalInfo(Status param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_renewalInfo_100ea7f70)
            (param_1.code,param_1.reasonPhrase.str,param_1.reasonPhrase.bridgeObject);
  return;
}



/* Address: 0x100bf7584 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::Status::$get_transaction */

/* StoreKit.Product.SubscriptionInfo.Status.transaction.getter :
   StoreKit.VerificationResult<StoreKit.Transaction> */

void StoreKit::Product::SubscriptionInfo::Status::_get_transaction(Status param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf758c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_transaction_100ea7f78)
            (param_1.code,param_1.reasonPhrase.str,param_1.reasonPhrase.bridgeObject);
  return;
}



/* Address: 0x100bf7590 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::Status::get_state */

/* StoreKit.Product.SubscriptionInfo.Status.state.getter :
   StoreKit.Product.SubscriptionInfo.RenewalState */

RenewalState StoreKit::Product::SubscriptionInfo::Status::get_state(Status param_1)

{
  RenewalState RVar1;
  
  RVar1.unknown = (undefined *)param_1.code;
                    /* WARNING: Could not recover jumptable at 0x000100bf7598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_state_100ea7f80)
            (RVar1.unknown,param_1.reasonPhrase.str,param_1.reasonPhrase.bridgeObject);
  return (RenewalState)RVar1.unknown;
}



/* Address: 0x100bf759c | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::Status::typeMetadataAccessor */

/* type metadata accessor for StoreKit.Product.SubscriptionInfo.Status */

Status StoreKit::Product::SubscriptionInfo::Status::typeMetadataAccessor(void)

{
  undefined8 in_x0;
  undefined8 in_x1;
  void *in_x2;
  Status SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf75a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7f88)();
  SVar1.reasonPhrase.str = (char *)in_x1;
  SVar1.code = in_x0;
  SVar1.reasonPhrase.bridgeObject = in_x2;
  return SVar1;
}



/* Address: 0x100bf75a8 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::$status */

/* static StoreKit.Product.SubscriptionInfo.status(for: Swift.String) async throws ->
   [StoreKit.Product.SubscriptionInfo.Status] */

void StoreKit::Product::SubscriptionInfo::_status(String for,SubscriptionInfo param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf75b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__status_100ea7f98)(for.str,for.bridgeObject);
  return;
}



/* Address: 0x100bf75b4 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionInfo::typeMetadataAccessor */

/* type metadata accessor for StoreKit.Product.SubscriptionInfo */

SubscriptionInfo StoreKit::Product::SubscriptionInfo::typeMetadataAccessor(void)

{
  SubscriptionInfo in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf75bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7fa8)();
  return (SubscriptionInfo)in_x0.unknown;
}



/* Address: 0x100bf75c0 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::$get_priceFormatStyle */

/* StoreKit.Product.priceFormatStyle.getter : (extension in
   Foundation):__C.NSDecimal.FormatStyle.Currency */

Currency StoreKit::Product::_get_priceFormatStyle(Product param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf75c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_priceFormatStyle_100ea7fc0)();
  return (Currency)param_1.unknown;
}



/* Address: 0x100bf75cc | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionOffer::PaymentMode::get_payAsYouGo */

/* static StoreKit.Product.SubscriptionOffer.PaymentMode.payAsYouGo.getter :
   StoreKit.Product.SubscriptionOffer.PaymentMode */

PaymentMode StoreKit::Product::SubscriptionOffer::PaymentMode::get_payAsYouGo(PaymentMode param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf75d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_payAsYouGo_100ea7fc8)();
  return (PaymentMode)param_1.unknown;
}



/* Address: 0x100bf75d8 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionOffer::PaymentMode::get_payUpFront */

/* static StoreKit.Product.SubscriptionOffer.PaymentMode.payUpFront.getter :
   StoreKit.Product.SubscriptionOffer.PaymentMode */

PaymentMode StoreKit::Product::SubscriptionOffer::PaymentMode::get_payUpFront(PaymentMode param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf75e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_payUpFront_100ea7fd0)();
  return (PaymentMode)param_1.unknown;
}



/* Address: 0x100bf75e4 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionOffer::PaymentMode::get_freeTrial */

/* static StoreKit.Product.SubscriptionOffer.PaymentMode.freeTrial.getter :
   StoreKit.Product.SubscriptionOffer.PaymentMode */

PaymentMode StoreKit::Product::SubscriptionOffer::PaymentMode::get_freeTrial(PaymentMode param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf75ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_freeTrial_100ea7fd8)();
  return (PaymentMode)param_1.unknown;
}



/* Address: 0x100bf75f0 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionOffer::PaymentMode::typeMetadataAccessor */

/* type metadata accessor for StoreKit.Product.SubscriptionOffer.PaymentMode */

PaymentMode StoreKit::Product::SubscriptionOffer::PaymentMode::typeMetadataAccessor(void)

{
  PaymentMode in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf75f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea7fe0)();
  return (PaymentMode)in_x0.unknown;
}



/* Address: 0x100bf75fc | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionOffer::get_paymentMode */

/* StoreKit.Product.SubscriptionOffer.paymentMode.getter :
   StoreKit.Product.SubscriptionOffer.PaymentMode */

PaymentMode StoreKit::Product::SubscriptionOffer::get_paymentMode(SubscriptionOffer param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_paymentMode_100ea7ff0)();
  return (PaymentMode)param_1.unknown;
}



/* Address: 0x100bf7608 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionOffer::get_periodCount */

/* StoreKit.Product.SubscriptionOffer.periodCount.getter : Swift.Int */

__int64 StoreKit::Product::SubscriptionOffer::get_periodCount(SubscriptionOffer param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_periodCount_100ea7ff8)();
  return (__int64)param_1.unknown;
}



/* Address: 0x100bf7614 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionOffer::get_displayPrice */

/* StoreKit.Product.SubscriptionOffer.displayPrice.getter : Swift.String */

String StoreKit::Product::SubscriptionOffer::get_displayPrice(SubscriptionOffer param_1)

{
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf761c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_displayPrice_100ea8000)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = param_1.unknown;
  return SVar1;
}



/* Address: 0x100bf7620 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionOffer::$get_id */

/* StoreKit.Product.SubscriptionOffer.id.getter : Swift.String? */

void StoreKit::Product::SubscriptionOffer::_get_id(SubscriptionOffer param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__get_id_100ea8008)();
  return;
}



/* Address: 0x100bf762c | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionOffer::get_price */

/* StoreKit.Product.SubscriptionOffer.price.getter : __C.NSDecimal */

void StoreKit::Product::SubscriptionOffer::get_price(SubscriptionOffer param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_price_100ea8010)();
  return;
}



/* Address: 0x100bf7638 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionOffer::get_period */

/* StoreKit.Product.SubscriptionOffer.period.getter : StoreKit.Product.SubscriptionPeriod */

SubscriptionPeriod StoreKit::Product::SubscriptionOffer::get_period(SubscriptionOffer param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_period_100ea8018)();
  return (SubscriptionPeriod)param_1.unknown;
}



/* Address: 0x100bf7644 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionOffer::typeMetadataAccessor */

/* type metadata accessor for StoreKit.Product.SubscriptionOffer */

SubscriptionOffer StoreKit::Product::SubscriptionOffer::typeMetadataAccessor(void)

{
  SubscriptionOffer in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf764c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea8020)();
  return (SubscriptionOffer)in_x0.unknown;
}



/* Address: 0x100bf7650 | /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit::StoreKit::Product::SubscriptionPeriod::typeMetadataAccessor */

/* type metadata accessor for StoreKit.Product.SubscriptionPeriod */

SubscriptionPeriod StoreKit::Product::SubscriptionPeriod::typeMetadataAccessor(void)

{
  SubscriptionPeriod in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_typeMetadataAccessor_100ea8030)();
  return (SubscriptionPeriod)in_x0.unknown;
}


