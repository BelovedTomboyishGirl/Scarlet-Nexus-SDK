// BlueprintGeneratedClass BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C
// Size: 0x290 (Inherited: 0x230)
struct ABP_SpecialStaticNodeActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x238(0x08)
	float TimelineAddAnimWeightCurve_Track_4AA338EB467D2FEDA66F329D4E6F79AE; // 0x240(0x04)
	enum class ETimelineDirection TimelineAddAnimWeightCurve__Direction_4AA338EB467D2FEDA66F329D4E6F79AE; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	struct UTimelineComponent* TimelineAddAnimWeightCurve; // 0x248(0x08)
	struct TArray<struct FString> vecAnimNamePath; // 0x250(0x10)
	struct TArray<bool> vecIsAnimationLoop; // 0x260(0x10)
	struct UAnimInstance* AnimInstance; // 0x270(0x08)
	struct UAnimMontage* StartMontage; // 0x278(0x08)
	struct UAnimMontage* CurrentAddMontage; // 0x280(0x08)
	struct UCurveFloat* DefaultAddAnimCurve; // 0x288(0x08)

	void GetStaticMesh(struct UStaticMeshComponent* StaticMesh); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.GetStaticMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetSkeletalMesh(struct USkeletalMeshComponent* SkeletalMesh); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.GetSkeletalMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateStopAddSpecialNodeAnimMontage(); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.PrivateStopAddSpecialNodeAnimMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnAnimMontageEnded(struct UAnimMontage* AnimMontage, bool Interrupted); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.OnAnimMontageEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePlaySpecialNodeAnimMontage(struct FString SpecialNodeAnimNamePath, bool IsLoop, bool IsAdd); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.PrivatePlaySpecialNodeAnimMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsEndMotion(bool IsEndMotion); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.IsEndMotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivatePlaySpecialNodeAnimation(struct FString SpecialNodeAnimNamePath, bool IsLoop, bool isAddMotion); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.PrivatePlaySpecialNodeAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PrivateAddSpecialNodeAnimation(struct FString SpecialNodeAnimNamePath, bool IsLoop); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.PrivateAddSpecialNodeAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void TimelineAddAnimWeightCurve__FinishedFunc(); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.TimelineAddAnimWeightCurve__FinishedFunc // (BlueprintEvent) // @ game+0x1685580
	void TimelineAddAnimWeightCurve__UpdateFunc(); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.TimelineAddAnimWeightCurve__UpdateFunc // (BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveTick(float DeltaSeconds); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void PlaySpecialNodeAnimation(struct FString SpecialNodeAnimNamePath, bool IsLoop, bool isAddMotion); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.PlaySpecialNodeAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddSpecialNodeAnimation(struct FString SpecialNodeAnimNamePath, bool IsLoop); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.AddSpecialNodeAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlaySpecialNodeAnimMontage(struct FString SpecialNodeAnimPath, bool IsLoop); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.PlaySpecialNodeAnimMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void WaitMontageEnd(struct UAnimMontage* AnimMontage, float montageLength); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.WaitMontageEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnStaticNodeMontageEnd(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.OnStaticNodeMontageEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnNodeMeshAnimInitialized(); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.OnNodeMeshAnimInitialized // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void  ��ス  _1(struct UAnimMontage* Montage); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C. ��ス  _1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopAddSpecialNodeAnimMontage(); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.StopAddSpecialNodeAnimMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayAddSpecialNodeAnimMontage(struct FString SpecialNodeAnimPath); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.PlayAddSpecialNodeAnimMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetNodeAddAnimWeightCurve(struct UCurveFloat* Curve); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.SetNodeAddAnimWeightCurve // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_SpecialStaticNodeActor(int32_t EntryPoint); // Function BP_SpecialStaticNodeActor.BP_SpecialStaticNodeActor_C.ExecuteUbergraph_BP_SpecialStaticNodeActor // (Final|UbergraphFunction) // @ game+0x1685580
};

