// WidgetBlueprintGeneratedClass WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C
// Size: 0x46b (Inherited: 0x388)
struct UWB_ui_MainChoice_Parts_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* default_none; // 0x390(0x08)
	struct UWidgetAnimation* Default; // 0x398(0x08)
	struct UBorder* All_Color; // 0x3a0(0x08)
	struct UVerticalBox* Choise_Set; // 0x3a8(0x08)
	struct UOverlay* delete_Guide_Set_3; // 0x3b0(0x08)
	struct UImage* Frame_2; // 0x3b8(0x08)
	struct UImage* Frame_Base_all; // 0x3c0(0x08)
	struct UOverlay* Get_Set; // 0x3c8(0x08)
	struct UHorizontalBox* Guide_Set; // 0x3d0(0x08)
	struct UREDImageBase* icon_font_2; // 0x3d8(0x08)
	struct UREDImageBase* Icon_Skill_2; // 0x3e0(0x08)
	struct UImage* Line_2; // 0x3e8(0x08)
	struct UImage* Line_3; // 0x3f0(0x08)
	struct UImage* Line_4; // 0x3f8(0x08)
	struct UOverlay* Set; // 0x400(0x08)
	struct USpacer* Spacer_657; // 0x408(0x08)
	struct USpacer* Spacer_SkillName; // 0x410(0x08)
	struct UOverlay* text_3; // 0x418(0x08)
	struct UREDTextBlock* Text_main_choice_2; // 0x420(0x08)
	struct UREDTextBlock* Text_main_choice_3; // 0x428(0x08)
	struct UREDTextBlock* Text_main_choice_4; // 0x430(0x08)
	struct UREDTextBlock* Text_MainChoice_Guide_2; // 0x438(0x08)
	struct UVerticalBox* VerticalBox_2; // 0x440(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_1_2; // 0x448(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_1_3; // 0x450(0x08)
	int32_t cursorIndex; // 0x458(0x04)
	int32_t StartIndex; // 0x45c(0x04)
	bool isEnableCancel; // 0x460(0x01)
	char pad_461[0x3]; // 0x461(0x03)
	int32_t CancelIndex; // 0x464(0x04)
	bool IsDecide; // 0x468(0x01)
	bool IsSelectYesNo; // 0x469(0x01)
	bool UseCancelAsDecide; // 0x46a(0x01)

	void InitQuestReportError(); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.InitQuestReportError // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsChoiceMode(bool IsChoiceMode); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.IsChoiceMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void InitParameterWarning(struct FText Title, struct FText Message, bool IsDrawGuide, bool UseCancelAsDecide); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.InitParameterWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetupGuide(); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.SetupGuide // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSkill(enum class EPlayerSkill SkillID, enum class enum_ui_skill_type SkillType, bool IsKasane, bool UseCancelAsDecide); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.SetSkill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetResultIndex(int32_t ResultIndex); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.GetResultIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Decide(); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.Decide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateFocus(); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.UpdateFocus // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitParameterSelect(struct FText Title, struct FText Message, struct FText Select0, struct FText Select1, int32_t StartIndex, bool isEnableCancel, int32_t CancelIndex, bool IsDrawGuide); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.InitParameterSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCursor(); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.UpdateCursor // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void  �� (struct FRedMouseArgument argument, struct UUserWidget* pWidget); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C. ��  // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void  �� (struct FRedMouseArgument argument, struct UUserWidget* pWidget); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C. ��  // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_MainChoice_Parts_2(int32_t EntryPoint); // Function WB_ui_MainChoice_Parts_2.WB_ui_MainChoice_Parts_1_C.ExecuteUbergraph_WB_ui_MainChoice_Parts_2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

