// WidgetBlueprintGeneratedClass WB_ui_SaveLoad.WB_ui_SaveLoad_C
// Size: 0x6d8 (Inherited: 0x4a8)
struct UWB_ui_SaveLoad_C : UUISaveLoad {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* info_window_out; // 0x4b0(0x08)
	struct UWidgetAnimation* info_window_in; // 0x4b8(0x08)
	struct UWidgetAnimation* info_window; // 0x4c0(0x08)
	struct UWidgetAnimation* Out; // 0x4c8(0x08)
	struct UWidgetAnimation* In; // 0x4d0(0x08)
	struct UWidgetAnimation* default_none; // 0x4d8(0x08)
	struct UWidgetAnimation* Default; // 0x4e0(0x08)
	struct UBorder* All_Color; // 0x4e8(0x08)
	struct UImage* all_noise_2; // 0x4f0(0x08)
	struct UOverlay* All_Set; // 0x4f8(0x08)
	struct UImage* Base_all; // 0x500(0x08)
	struct UImage* Base_Gradation_B; // 0x508(0x08)
	struct UImage* Base_Gradation_G; // 0x510(0x08)
	struct UImage* Base_Gradation_G_3; // 0x518(0x08)
	struct UImage* Base_Gradation_G_4; // 0x520(0x08)
	struct UImage* Base_Gradation_G_5; // 0x528(0x08)
	struct UImage* Base_Gradation_light; // 0x530(0x08)
	struct UImage* Base_Gradation_R; // 0x538(0x08)
	struct UImage* Base_Line_2; // 0x540(0x08)
	struct UImage* Base_Line_3; // 0x548(0x08)
	struct UImage* Base_Line_4; // 0x550(0x08)
	struct UImage* Base_Line_5; // 0x558(0x08)
	struct UImage* Base_Line_6; // 0x560(0x08)
	struct UImage* Base_Line_1_particle; // 0x568(0x08)
	struct UImage* Base_Line_2_particle; // 0x570(0x08)
	struct UImage* Base_Line_3_particle; // 0x578(0x08)
	struct UImage* Base_Line_4_particle; // 0x580(0x08)
	struct UImage* Base_Line_5_particle; // 0x588(0x08)
	struct UImage* Base_particle_2; // 0x590(0x08)
	struct UOverlay* BG; // 0x598(0x08)
	struct UImage* BG_Black; // 0x5a0(0x08)
	struct UImage* BG_Grid; // 0x5a8(0x08)
	struct UImage* BG_Shadow; // 0x5b0(0x08)
	struct UImage* BlackBand_L; // 0x5b8(0x08)
	struct UImage* BlackBand_R; // 0x5c0(0x08)
	struct UImage* BlackBand_Un; // 0x5c8(0x08)
	struct UImage* BlackBand_Up; // 0x5d0(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x5d8(0x08)
	struct UCanvasPanel* CanvasPanel_ViewRange; // 0x5e0(0x08)
	struct UImage* Cover_Black; // 0x5e8(0x08)
	struct UImage* Ghost_size; // 0x5f0(0x08)
	struct UImage* Goal_Line1; // 0x5f8(0x08)
	struct UImage* Goal_Line2; // 0x600(0x08)
	struct UImage* Help; // 0x608(0x08)
	struct UImage* Help_base; // 0x610(0x08)
	struct UImage* icon_save; // 0x618(0x08)
	struct UImage* line_chara_2; // 0x620(0x08)
	struct UImage* line_chara_3; // 0x628(0x08)
	struct UImage* line_chara_1_particle; // 0x630(0x08)
	struct UImage* line_chara_2_particle; // 0x638(0x08)
	struct UBorder* List_Color; // 0x640(0x08)
	struct UOverlay* List_Set; // 0x648(0x08)
	struct UOverlay* Overlay_2; // 0x650(0x08)
	struct UOverlay* Overlay_3; // 0x658(0x08)
	struct UOverlay* Overlay_4; // 0x660(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu; // 0x668(0x08)
	struct UREDRetainerBox* REDRetainerBox_Menu_3; // 0x670(0x08)
	struct UBorder* Save_List_Color; // 0x678(0x08)
	struct UREDScrollBox* ScrollBoxSaveList; // 0x680(0x08)
	struct UREDTextBlock*  ext_save_contents_1セ; // 0x688(0x08)
	struct UREDTextBlock* Text_save_help_2; // 0x690(0x08)
	struct UWB_ui_Guide_C* WB_ui_Guide; // 0x698(0x08)
	struct UWB_ui_SaveLoadChoice_Parts_1_C* WB_ui_SaveLoadChoice_Parts_2; // 0x6a0(0x08)
	struct TArray<struct UWB_ui_ShopContents_Parts_1_C*> ChildModeTab; // 0x6a8(0x10)
	struct TArray<struct UWB_ui_ShopContents_Parts_6_C*> ChildItemCategory; // 0x6b8(0x10)
	struct FMulticastInlineDelegate onEventDispatcher; // 0x6c8(0x10)

	void Construct(); // Function WB_ui_SaveLoad.WB_ui_SaveLoad_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_SaveLoad.WB_ui_SaveLoad_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void Destruct(); // Function WB_ui_SaveLoad.WB_ui_SaveLoad_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ListUpdateElement(int32_t Index, struct UUserWidget* Widget); // Function WB_ui_SaveLoad.WB_ui_SaveLoad_C.ListUpdateElement // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocus(struct UUserWidget* Widget); // Function WB_ui_SaveLoad.WB_ui_SaveLoad_C.ListFocus // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocus(struct UUserWidget* Widget); // Function WB_ui_SaveLoad.WB_ui_SaveLoad_C.ListUnFocus // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnEventDispatcher_Event(); // Function WB_ui_SaveLoad.WB_ui_SaveLoad_C.OnEventDispatcher_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_SaveLoad.WB_ui_SaveLoad_C.ListFocusMouse // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ListUnFocusMouse(int32_t isMouseScroll, int32_t Index, struct UUserWidget* Widget); // Function WB_ui_SaveLoad.WB_ui_SaveLoad_C.ListUnFocusMouse // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_SaveLoad.WB_ui_SaveLoad_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_SaveLoad.WB_ui_SaveLoad_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_SaveLoad(int32_t EntryPoint); // Function WB_ui_SaveLoad.WB_ui_SaveLoad_C.ExecuteUbergraph_WB_ui_SaveLoad // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
	void OnEventDispatcher__DelegateSignature(); // Function WB_ui_SaveLoad.WB_ui_SaveLoad_C.OnEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

