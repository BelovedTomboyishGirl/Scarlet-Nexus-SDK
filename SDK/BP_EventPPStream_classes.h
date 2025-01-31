// BlueprintGeneratedClass BP_EventPPStream.BP_EventPPStream_C
// Size: 0x2d1 (Inherited: 0x269)
struct ABP_EventPPStream_C : ABP_EventTypeSwitchBase_C {
	char pad_269[0x7]; // 0x269(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	float Rate; // 0x278(0x04)
	float PerspectiveCenterX; // 0x27c(0x04)
	float PerspectiveScaleTop; // 0x280(0x04)
	float PerspectiveScaleBottom; // 0x284(0x04)
	float PerspectiveCenterY; // 0x288(0x04)
	float PerspectiveScaleLeft; // 0x28c(0x04)
	float PerspectiveScaleRight; // 0x290(0x04)
	float PerspectiveScaleX; // 0x294(0x04)
	float PerspectiveScaleY; // 0x298(0x04)
	float Rotate; // 0x29c(0x04)
	float PerspectiveOffsetX; // 0x2a0(0x04)
	float PerspectiveOffsetY; // 0x2a4(0x04)
	float VisibleLineArea; // 0x2a8(0x04)
	float GradationLineArea; // 0x2ac(0x04)
	float EmissivePower; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct ALevelSequenceActor* levelSequencerActor; // 0x2b8(0x08)
	struct TArray<struct ALevelSequenceActor*> LevelSequenceActors; // 0x2c0(0x10)
	bool IsPlayPP; // 0x2d0(0x01)

	void EndPlayDynamicCutScene(); // Function BP_EventPPStream.BP_EventPPStream_C.EndPlayDynamicCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateDynamicCutScene(); // Function BP_EventPPStream.BP_EventPPStream_C.UpdateDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayDynamicCutScene(); // Function BP_EventPPStream.BP_EventPPStream_C.BeginPlayDynamicCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EndPlayStaticCutScene(); // Function BP_EventPPStream.BP_EventPPStream_C.EndPlayStaticCutScene // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateStaticCutScene(); // Function BP_EventPPStream.BP_EventPPStream_C.UpdateStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void BeginPlayStaticCutScene(); // Function BP_EventPPStream.BP_EventPPStream_C.BeginPlayStaticCutScene // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnPlay(); // Function BP_EventPPStream.BP_EventPPStream_C.OnPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void  ��ス  _1(); // Function BP_EventPPStream.BP_EventPPStream_C. ��ス  _1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ReceiveBeginPlay(); // Function BP_EventPPStream.BP_EventPPStream_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_EventPPStream.BP_EventPPStream_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_BP_EventPPStream(int32_t EntryPoint); // Function BP_EventPPStream.BP_EventPPStream_C.ExecuteUbergraph_BP_EventPPStream // (Final|UbergraphFunction) // @ game+0x1685580
};

