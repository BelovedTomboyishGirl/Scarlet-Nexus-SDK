// UserDefinedStruct UniqueObjectAttackInfo.UniqueObjectAttackInfo
// Size: 0x178 (Inherited: 0x00)
struct FUniqueObjectAttackInfo {
	struct TArray<struct TSoftObjectPtr<UParticleSystem>> UniqueEffectList_90_5078AA2E43B64513D30254B393BFD540; // 0x00(0x10)
	struct TArray<struct FName> UniqueEffectSocketList_89_2B13DC38432BD78050FEC5AC5CB16422; // 0x10(0x10)
	struct TArray<struct FVector> UniqueEffectScaleList_91_6127FDCB45567DBC77C5218AF0AC2BE3; // 0x20(0x10)
	struct TArray<bool> UniqueEffectApplyThrowRotList_94_C018B46E4678037E98D390BB2F80B420; // 0x30(0x10)
	bool SkipNormalEffect_96_F394746F4DC7B388CD206783DE340A8D; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TSoftObjectPtr<UParticleSystem> UniqueEffect_35_6874068445580A365532CAB04F68ABBF; // 0x48(0x28)
	struct FName UniqueEffectSocket_41_FEB89F2848E56038CE0280B411780AEB; // 0x70(0x08)
	bool UseNormalEffect_38_C768400546638EBCF4B3ED9D0AFA30CB; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TSoftObjectPtr<UParticleSystem> WeakEffect_34_51BC799243AD5F65AFF16B807851EE25; // 0x80(0x28)
	struct TSoftObjectPtr<UParticleSystem> ArmorEffect_33_D332931E457AEBF797FA2BA6F31303D6; // 0xa8(0x28)
	struct TSoftObjectPtr<UParticleSystem> NormalEffect_29_94BCDD3D4777004C76016D98E9108B7C; // 0xd0(0x28)
	struct TSoftClassPtr<UObject> CameraShake_32_DA82F0CF490EEBCF336440BCE8DBCFF3; // 0xf8(0x28)
	float CameraShakeScale_24_578F154A45849B8C34D5DB85894A73FB; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct TSoftObjectPtr<UCurveVector> ObjectShake_61_E9BFD8F945DD59CC109DFCB6BDA38657; // 0x128(0x28)
	bool ObjectShakeUseAsLoop_73_71FC6FD64D1D4F500FD8369415BD3D9A; // 0x150(0x01)
	char pad_151[0x3]; // 0x151(0x03)
	struct FVector ObjectShakeLoopScale_69_910990C24FE6524E767684B4B8F62956; // 0x154(0x0c)
	float ObjectShakeLoopTimeRate_78_6FE7546146E2959CB31AB08425E79AB3; // 0x160(0x04)
	struct FVector ObjectShakeScale_59_7719CE4940B458657BA341AD64A8C6A9; // 0x164(0x0c)
	float ObjectShakeTimeRate_77_11119F5648A5C7FBA787E99D78EB5BC1; // 0x170(0x04)
	float ObjectShakeTime_68_AB9A293B422B8CBD84164CBCCECE5F60; // 0x174(0x04)
};

