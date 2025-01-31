// BlueprintGeneratedClass BP_en_BattleField.BP_en_BattleField_C
// Size: 0x34c (Inherited: 0x319)
struct ABP_en_BattleField_C : ABP_SplineMesh_CharaACT_C {
	char pad_319[0x7]; // 0x319(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	int32_t GroupID; // 0x328(0x04)
	enum class EBattlefieldFenceStat Stat; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	float BrainTalkCheckTime; // 0x330(0x04)
	float HitAwayDistance; // 0x334(0x04)
	bool IsHitChecking; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	float HittingTime; // 0x33c(0x04)
	struct FVector LastHitPos; // 0x340(0x0c)

	bool GetBattlefieldEnable(); // Function BP_en_BattleField.BP_en_BattleField_C.GetBattlefieldEnable // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	struct USplineComponent* GetBattlefieldSpline(); // Function BP_en_BattleField.BP_en_BattleField_C.GetBattlefieldSpline // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void CheckBrainTalk(float DeltaSec); // Function BP_en_BattleField.BP_en_BattleField_C.CheckBrainTalk // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFenceEnd(float DeltaSeconds); // Function BP_en_BattleField.BP_en_BattleField_C.UpdateFenceEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFenceStart(float DeltaSeconds); // Function BP_en_BattleField.BP_en_BattleField_C.UpdateFenceStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetVisible(bool Visible); // Function BP_en_BattleField.BP_en_BattleField_C.SetVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFence(float DeltaSeconds); // Function BP_en_BattleField.BP_en_BattleField_C.UpdateFence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattlefieldEnableOld(bool Enable); // Function BP_en_BattleField.BP_en_BattleField_C.SetBattlefieldEnableOld // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UserConstructionScript(); // Function BP_en_BattleField.BP_en_BattleField_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattlefieldEnable(bool Enable); // Function BP_en_BattleField.BP_en_BattleField_C.SetBattlefieldEnable // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetBattlefieldVisibleForce(bool Visible); // Function BP_en_BattleField.BP_en_BattleField_C.SetBattlefieldVisibleForce // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_en_BattleField.BP_en_BattleField_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function BP_en_BattleField.BP_en_BattleField_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_en_BattleField.BP_en_BattleField_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void  nComponentHit_イ _1(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_en_BattleField.BP_en_BattleField_C. nComponentHit_イ _1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_en_BattleField(int32_t EntryPoint); // Function BP_en_BattleField.BP_en_BattleField_C.ExecuteUbergraph_BP_en_BattleField // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

