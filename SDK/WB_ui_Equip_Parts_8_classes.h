// WidgetBlueprintGeneratedClass WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C
// Size: 0x406 (Inherited: 0x388)
struct UWB_ui_Equip_Parts_7_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* Default_3; // 0x390(0x08)
	struct UWidgetAnimation* default_none; // 0x398(0x08)
	struct UWidgetAnimation* Default_2; // 0x3a0(0x08)
	struct UBorder* All_Color; // 0x3a8(0x08)
	struct UOverlay* equipages_list; // 0x3b0(0x08)
	struct UREDTextBlock* Text_equipage_contents_2; // 0x3b8(0x08)
	struct UREDTextBlock* Text_equipage_contents_3; // 0x3c0(0x08)
	struct UWB_ui_Equip_Parts_2_C* WB_ui_Equipages_Parts_2_2; // 0x3c8(0x08)
	struct UWB_ui_Equip_Parts_2_C* WB_ui_Equipages_Parts_2_3; // 0x3d0(0x08)
	struct UWB_ui_Equip_Parts_2_C* WB_ui_Equipages_Parts_2_4; // 0x3d8(0x08)
	struct UWB_ui_Equip_Parts_2_C* WB_ui_Equipages_Parts_2_5; // 0x3e0(0x08)
	struct TArray<struct UWB_ui_Equip_Parts_2_C*> ElementList; // 0x3e8(0x10)
	int32_t ElementCursor; // 0x3f8(0x04)
	bool IsSingle; // 0x3fc(0x01)
	bool IsActive; // 0x3fd(0x01)
	bool IsDecide; // 0x3fe(0x01)
	bool isMouseDecide; // 0x3ff(0x01)
	int32_t CursorNum; // 0x400(0x04)
	bool IsStartLock; // 0x404(0x01)
	bool FlagControl; // 0x405(0x01)

	void CorrectCursor(); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.CorrectCursor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetControl(bool IsControl); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.SetControl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCursorPos(int32_t Cursor); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.SetCursorPos // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetStartLock(bool FlagLock); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.SetStartLock // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetEquipNum(int32_t Num); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.SetEquipNum // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMouseDecide(bool mousedecide); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.GetMouseDecide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetMouseDecideReset(); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.SetMouseDecideReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void EquipSlotMouseSetUp(enum class ESlateVisibility Visible); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.EquipSlotMouseSetUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeCostume(); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.InitializeCostume // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitializeEquip(); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.InitializeEquip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCursorPos(int32_t Cursor); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.GetCursorPos // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetEquip(struct FPlayerInfo Param, bool IsCostume); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.SetEquip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetDecide(bool IsDecide); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.SetDecide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetActive(bool IsActive); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.SetActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSingle(bool IsSingle); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.SetSingle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCursor(); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.UpdateCursor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void  ��備  (struct FRedMouseArgument argument, struct UUserWidget* pWidget); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C. ��備   // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Equip_Parts_8(int32_t EntryPoint); // Function WB_ui_Equip_Parts_8.WB_ui_Equip_Parts_7_C.ExecuteUbergraph_WB_ui_Equip_Parts_8 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

