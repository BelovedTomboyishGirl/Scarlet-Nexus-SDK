// BlueprintGeneratedClass BP_ElevatorBase.BP_ElevatorBase_C
// Size: 0x3c9 (Inherited: 0x230)
struct ABP_ElevatorBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UBoxComponent* PsyInsideCollision; // 0x238(0x08)
	struct USceneComponent* LeftNpcPos; // 0x240(0x08)
	struct USceneComponent* RightNpcPos; // 0x248(0x08)
	struct UBoxComponent* PsychicObjectBlock; // 0x250(0x08)
	struct USpotLightComponent* SpotLight; // 0x258(0x08)
	struct UPostProcessComponent* ElevatorPostProcess; // 0x260(0x08)
	struct UBP_PlayerCameraComponent_C* BP_PlayerCameraComponent; // 0x268(0x08)
	struct UCameraComponent* ElevatorCamera; // 0x270(0x08)
	struct UStaticMeshComponent* InvisibleWall; // 0x278(0x08)
	struct UBoxComponent* ElevatorMoveStartCollision; // 0x280(0x08)
	struct UBoxComponent* ElevatorInnerInsideCollision; // 0x288(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	float _______0_LightIntensity_DFCDCF814911F6C081EE59A602CF85BB; // 0x2a0(0x04)
	enum class ETimelineDirection _______0__Direction_DFCDCF814911F6C081EE59A602CF85BB; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent*  ��イ_1; // 0x2a8(0x08)
	int32_t CurrentFloor; // 0x2b0(0x04)
	int32_t CurrentState; // 0x2b4(0x04)
	float PowerAlpha; // 0x2b8(0x04)
	float MoveSpeed; // 0x2bc(0x04)
	float AccelSeconds; // 0x2c0(0x04)
	float MoveSeconds; // 0x2c4(0x04)
	float DecelerationSeconds; // 0x2c8(0x04)
	struct FVector MoveStartLocation; // 0x2cc(0x0c)
	struct FVector MoveEndStartLocation; // 0x2d8(0x0c)
	struct FVector MoveTargetLocation; // 0x2e4(0x0c)
	int32_t DecideGotoFloor; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct TArray<bool> ImpartBaseVelocityX_Array; // 0x2f8(0x10)
	struct TArray<bool> ImpartBaseVelocityY_Array; // 0x308(0x10)
	struct TArray<bool> ImpartBaseVelocityZ_Array; // 0x318(0x10)
	struct FVector MoveStartEndLocation; // 0x328(0x0c)
	enum class EEasingFunc AcceltInterpType; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	float AccelBlendExp; // 0x338(0x04)
	enum class EEasingFunc DeaccelInterpType; // 0x33c(0x01)
	char pad_33D[0x3]; // 0x33d(0x03)
	struct FVector InitialPosition; // 0x340(0x0c)
	float DeltaMoveLength; // 0x34c(0x04)
	struct FVector DeltaMoveSpeed; // 0x350(0x0c)
	bool IsMoveUpper; // 0x35c(0x01)
	char pad_35D[0x3]; // 0x35d(0x03)
	float DeaccelBlendExp; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct USoundAtomCue* UpMoveSound; // 0x368(0x08)
	struct USoundAtomCue* DownMoveSound; // 0x370(0x08)
	struct URSAtomComponentBase* ElevatorMoveAtom; // 0x378(0x08)
	struct TArray<struct ARSBattleCharacter_C*> HitCharacterArray; // 0x380(0x10)
	struct UAnimSequence* UseAnim; // 0x390(0x08)
	struct TArray<struct FElevatorFloorParameter> ElevatorFloorArray; // 0x398(0x10)
	struct FName MoveSoundAttachName; // 0x3a8(0x08)
	bool IsMoveReady; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct ACameraActor* CameraActor; // 0x3b8(0x08)
	float LightIntensity; // 0x3c0(0x04)
	bool CheckPlayerOut; // 0x3c4(0x01)
	bool IsMoving; // 0x3c5(0x01)
	bool CheckTickOff; // 0x3c6(0x01)
	bool CheckAnimation; // 0x3c7(0x01)
	bool RestoreMenuPPC; // 0x3c8(0x01)

	void ElevatorInPlayerSetting(struct ARSBattlePlayer_C* InPlayer); // Function BP_ElevatorBase.BP_ElevatorBase_C.ElevatorInPlayerSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupMenuPPC(bool InMenu); // Function BP_ElevatorBase.BP_ElevatorBase_C.SetupMenuPPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetInitialPosition(); // Function BP_ElevatorBase.BP_ElevatorBase_C.SetInitialPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetElevatorTickEnable(bool enable in); // Function BP_ElevatorBase.BP_ElevatorBase_C.SetElevatorTickEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AdjustFloorInPlayerSpawn(struct FVector PlayerPos); // Function BP_ElevatorBase.BP_ElevatorBase_C.AdjustFloorInPlayerSpawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetAvailableWorldMap(bool Available); // Function BP_ElevatorBase.BP_ElevatorBase_C.SetAvailableWorldMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ElevatorLight(float Time, bool Condition); // Function BP_ElevatorBase.BP_ElevatorBase_C.ElevatorLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCurrentFloor(int32_t NewFloor); // Function BP_ElevatorBase.BP_ElevatorBase_C.UpdateCurrentFloor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetToElevatorCamera(); // Function BP_ElevatorBase.BP_ElevatorBase_C.SetToElevatorCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetToPlayerCamera(); // Function BP_ElevatorBase.BP_ElevatorBase_C.ResetToPlayerCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void MoveFloorForce(int32_t floor); // Function BP_ElevatorBase.BP_ElevatorBase_C.MoveFloorForce // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayerMoveForElevator(struct FVector DeltaMove); // Function BP_ElevatorBase.BP_ElevatorBase_C.PlayerMoveForElevator // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayerOutElevator(struct AActor* HitActor); // Function BP_ElevatorBase.BP_ElevatorBase_C.PlayerOutElevator // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayerInElevator(struct AActor* HitActor); // Function BP_ElevatorBase.BP_ElevatorBase_C.PlayerInElevator // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ElevatorMoveEnd(bool dummy); // Function BP_ElevatorBase.BP_ElevatorBase_C.ElevatorMoveEnd // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ElevatorMoveAddParam(struct FVector ElevatorNewPos); // Function BP_ElevatorBase.BP_ElevatorBase_C.ElevatorMoveAddParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ElevatorMoveStart(int32_t GotoFloor, bool dummy); // Function BP_ElevatorBase.BP_ElevatorBase_C.ElevatorMoveStart // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ElevatorMove(float DeltaSeconds); // Function BP_ElevatorBase.BP_ElevatorBase_C.ElevatorMove // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void  ��イムライン_0__(); // Function BP_ElevatorBase.BP_ElevatorBase_C. ��イムライン_0__ // (BlueprintEvent) // @ game+0x1685580
	void  ��イムライン_0(); // Function BP_ElevatorBase.BP_ElevatorBase_C. ��イムライン_0 // (BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_ElevatorBase.BP_ElevatorBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void BndEvt__MoveStartCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_ElevatorBase.BP_ElevatorBase_C.BndEvt__MoveStartCollision_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_ElevatorBase.BP_ElevatorBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BndEvt__ElevatorMoveStartCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_ElevatorBase.BP_ElevatorBase_C.BndEvt__ElevatorMoveStartCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void BndEvt__ElevatorInnerInsideCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_ElevatorBase.BP_ElevatorBase_C.BndEvt__ElevatorInnerInsideCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void EV_MoveFloorForce(int32_t floor); // Function BP_ElevatorBase.BP_ElevatorBase_C.EV_MoveFloorForce // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ElevatorBase.BP_ElevatorBase_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void BndEvt__PsyInsideCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_ElevatorBase.BP_ElevatorBase_C.BndEvt__PsyInsideCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1685580
	void SetupMenu(bool InMenu); // Function BP_ElevatorBase.BP_ElevatorBase_C.SetupMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_ElevatorBase(int32_t EntryPoint); // Function BP_ElevatorBase.BP_ElevatorBase_C.ExecuteUbergraph_BP_ElevatorBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

