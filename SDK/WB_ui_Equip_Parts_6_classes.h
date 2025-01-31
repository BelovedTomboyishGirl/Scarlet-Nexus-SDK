// WidgetBlueprintGeneratedClass WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C
// Size: 0x46a (Inherited: 0x398)
struct UWB_ui_Equip_Parts_5_C : UUIEquipParts5 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x398(0x08)
	struct UWidgetAnimation* in_2_5; // 0x3a0(0x08)
	struct UWidgetAnimation* in_2_4; // 0x3a8(0x08)
	struct UWidgetAnimation* in_2_3; // 0x3b0(0x08)
	struct UWidgetAnimation* In_3; // 0x3b8(0x08)
	struct UWidgetAnimation* Out; // 0x3c0(0x08)
	struct UWidgetAnimation* In; // 0x3c8(0x08)
	struct UWidgetAnimation* default_none; // 0x3d0(0x08)
	struct UWidgetAnimation* Default; // 0x3d8(0x08)
	struct UBorder* All_Color; // 0x3e0(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x3e8(0x08)
	struct UImage* ChangeLine_1; // 0x3f0(0x08)
	struct UImage* ChangeLine_3; // 0x3f8(0x08)
	struct UImage* ChangeLine_4; // 0x400(0x08)
	struct UImage* ChangeLine_5; // 0x408(0x08)
	struct UImage* ChangeLine_1L; // 0x410(0x08)
	struct UImage* ChangeLine_1R; // 0x418(0x08)
	struct UImage* Line_List; // 0x420(0x08)
	struct UOverlay* List_Set; // 0x428(0x08)
	struct UREDScrollBox* REDScrollBox_2; // 0x430(0x08)
	struct UREDTextBlock* Text_equipage_contents_4; // 0x438(0x08)
	struct UREDTextBlock* Text_equipage_contents_5; // 0x440(0x08)
	struct TArray<struct Fstruct_ui_equip_item_list> itemList; // 0x448(0x10)
	int32_t CursorPos; // 0x458(0x04)
	bool isMouseDecide; // 0x45c(0x01)
	bool FristFlag; // 0x45d(0x01)
	char pad_45E[0x2]; // 0x45e(0x02)
	int32_t BaseIndex; // 0x460(0x04)
	int32_t SortType; // 0x464(0x04)
	bool FlagChangeCursor; // 0x468(0x01)
	bool FlagControl; // 0x469(0x01)

	void SetListCursorID(struct FName ID); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.SetListCursorID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetControl(bool IsControl); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.SetControl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ResetCurrentNewFlag(); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.ResetCurrentNewFlag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetCurrentParam(struct Fstruct_ui_equip_item_list Param); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.GetCurrentParam // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsSortSwap(struct Fstruct_ui_equip_item_list Item1, struct Fstruct_ui_equip_item_list Item2, bool IsSwap); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.IsSortSwap // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Sort(int32_t SortType); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.Sort // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	bool ClearCurrentNewFlagNative(int32_t Index); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.ClearCurrentNewFlagNative // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetFirstFlag(bool IsFirst, int32_t BaseIndex); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.SetFirstFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ClearCurrentNewFlag(); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.ClearCurrentNewFlag // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupText(); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.SetupText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetMouseDecide(bool mousedecide); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.GetMouseDecide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetMouseDecideReset(); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.SetMouseDecideReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetIconIndex(struct FName ItemId, int32_t Index); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.GetIconIndex // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetListCursor(int32_t Cursor); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.SetListCursor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetListCursor(int32_t Cursor); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.GetListCursor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void UpdateCursor(); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.UpdateCursor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetListElement(struct UWB_ui_Equip_Parts_4_C* Widget, int32_t Index); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.SetListElement // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupList(); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.SetupList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetItemList(struct TArray<struct Fstruct_ui_equip_item_list> list); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.SetItemList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.StateOpen // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_UpdateElement(int32_t Index, struct UUserWidget* pWidget); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.Event_UpdateElement // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_Focus(struct UUserWidget* pWidget); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.Event_Focus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Event_UnFocus(struct UUserWidget* pWidget); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.Event_UnFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void  ��ウ  (int32_t Cursor, struct UUserWidget* pWidget); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C. ��ウ   // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.ListFocusMouse // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.ListUnFocusMouse // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Equip_Parts_6(int32_t EntryPoint); // Function WB_ui_Equip_Parts_6.WB_ui_Equip_Parts_5_C.ExecuteUbergraph_WB_ui_Equip_Parts_6 // (Final|UbergraphFunction) // @ game+0x1685580
};

