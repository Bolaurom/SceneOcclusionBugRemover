// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGWeaponProjectileFire.h"
#include "FGDamageType.h"

AFGWeaponProjectileFire::AFGWeaponProjectileFire() : Super() {
	this->mMagSize = 5;
	this->mDamageTypeClass = UFGDamageType::StaticClass();
	this->mReloadTime = 1.5;
	this->mFireRate = 0.5;
	this->mEquipmentSlot = EEquipmentSlot::ES_ARMS;
	this->PrimaryActorTick.TickGroup = TG_PrePhysics; this->PrimaryActorTick.EndTickGroup = TG_PrePhysics; this->PrimaryActorTick.bTickEvenWhenPaused = false; this->PrimaryActorTick.bCanEverTick = true; this->PrimaryActorTick.bStartWithTickEnabled = false; this->PrimaryActorTick.bAllowTickOnDedicatedServer = true; this->PrimaryActorTick.TickInterval = 0;
	this->bOnlyRelevantToOwner = true;
	this->bNetUseOwnerRelevancy = true;
	this->bReplicates = true;
}
void AFGWeaponProjectileFire::FireAmmunition_Implementation(){ }
void AFGWeaponProjectileFire::GetProjectileData(FProjectileData& out_data){ }
void AFGWeaponProjectileFire::ProjectileFire(const FVector& shootDir, const FVector& origin){ }