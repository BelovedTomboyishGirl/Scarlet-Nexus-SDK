// WidgetBlueprintGeneratedClass WB_ui_Caption_2.WB_ui_Caption_1_C
// Size: 0x5e1 (Inherited: 0x388)
struct UWB_ui_Caption_1_C : UUIBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UWidgetAnimation* default_full_change_in; // 0x390(0x08)
	struct UWidgetAnimation* default_full_out; // 0x398(0x08)
	struct UWidgetAnimation* choice_out_3; // 0x3a0(0x08)
	struct UWidgetAnimation* choice_out_2; // 0x3a8(0x08)
	struct UWidgetAnimation* choice_default; // 0x3b0(0x08)
	struct UWidgetAnimation* default_decision; // 0x3b8(0x08)
	struct UWidgetAnimation* choice_change_2_2; // 0x3c0(0x08)
	struct UWidgetAnimation* choice_change_1_3; // 0x3c8(0x08)
	struct UWidgetAnimation* choice_decision_3; // 0x3d0(0x08)
	struct UWidgetAnimation* choice_decision_2; // 0x3d8(0x08)
	struct UWidgetAnimation* choice_in; // 0x3e0(0x08)
	struct UWidgetAnimation* choice_select_3; // 0x3e8(0x08)
	struct UWidgetAnimation* choice_select_2; // 0x3f0(0x08)
	struct UWidgetAnimation* default_change_in; // 0x3f8(0x08)
	struct UWidgetAnimation* default_full; // 0x400(0x08)
	struct UWidgetAnimation* default_out; // 0x408(0x08)
	struct UWidgetAnimation* default_in; // 0x410(0x08)
	struct UWidgetAnimation* default_none; // 0x418(0x08)
	struct UWidgetAnimation* Default; // 0x420(0x08)
	struct UOverlay* All; // 0x428(0x08)
	struct UBorder* All_Color; // 0x430(0x08)
	struct UOverlay* All_Set; // 0x438(0x08)
	struct UREDOverlay* BG_Talk; // 0x440(0x08)
	struct UImage* BG_Talk03; // 0x448(0x08)
	struct UImage* C_line01a; // 0x450(0x08)
	struct UImage* c_line01b; // 0x458(0x08)
	struct UImage* c_line02a; // 0x460(0x08)
	struct UImage* c_line02b; // 0x468(0x08)
	struct UImage* Choice_Base; // 0x470(0x08)
	struct UImage* Choice_Grow; // 0x478(0x08)
	struct UImage* Choice_pattern; // 0x480(0x08)
	struct UBorder* Choice_Set; // 0x488(0x08)
	struct UImage* Ghost_Talker; // 0x490(0x08)
	struct UREDImageBase* icon_font; // 0x498(0x08)
	struct UImage* icon_font_3; // 0x4a0(0x08)
	struct UOverlay* Overlay_1; // 0x4a8(0x08)
	struct UOverlay* Overlay_2; // 0x4b0(0x08)
	struct UImage* Pagenext_01; // 0x4b8(0x08)
	struct UImage* Pagenext_03; // 0x4c0(0x08)
	struct UImage* Pagenext_04; // 0x4c8(0x08)
	struct UScaleBox* ScaleBox_31; // 0x4d0(0x08)
	struct UREDTextBlock* Subtitle; // 0x4d8(0x08)
	struct UBorder* Subtitle_set; // 0x4e0(0x08)
	struct UOverlay* Subtitle_Talker; // 0x4e8(0x08)
	struct UImage* Talker_01; // 0x4f0(0x08)
	struct UImage* Talker_02; // 0x4f8(0x08)
	struct UREDImageBase* Talker_parts01; // 0x500(0x08)
	struct UREDTextBlock*  alker話者U; // 0x508(0x08)
	struct UREDTextBlock* Text_choice_cancel; // 0x510(0x08)
	struct UUniformGridPanel* UniformGridPanel_1; // 0x518(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_1_2; // 0x520(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_1_3; // 0x528(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_1_4; // 0x530(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_1_5; // 0x538(0x08)
	struct UWB_ui_Choise_parts_1_C* WB_ui_Choise_parts_1_6; // 0x540(0x08)
	bool FlagChoice; // 0x548(0x01)
	char pad_549[0x3]; // 0x549(0x03)
	int32_t ChoiceNum; // 0x54c(0x04)
	int32_t ChoiceIndex; // 0x550(0x04)
	int32_t CancelIndex; // 0x554(0x04)
	struct TArray<struct Fstruct_work_caption> MessageBuffer; // 0x558(0x10)
	int32_t WorkCurrentIndex; // 0x568(0x04)
	int32_t WorkUsingNum; // 0x56c(0x04)
	int32_t WorkSize; // 0x570(0x04)
	float DrawSecond; // 0x574(0x04)
	float CurrentSecond; // 0x578(0x04)
	bool FlagSkip; // 0x57c(0x01)
	bool FlagSkipAll; // 0x57d(0x01)
	bool FlagChangeChoice; // 0x57e(0x01)
	bool FlagDecide; // 0x57f(0x01)
	bool FlagCancel; // 0x580(0x01)
	enum class ESlateVisibility _WorkVisibility; // 0x581(0x01)
	char pad_582[0x2]; // 0x582(0x02)
	int32_t ResultLastChoice; // 0x584(0x04)
	struct URSAtomComponentBase* Voice; // 0x588(0x08)
	bool FlagVoicePlay; // 0x590(0x01)
	bool FlagEnableSkip; // 0x591(0x01)
	bool FlagSkipVoiceEnd; // 0x592(0x01)
	char pad_593[0x5]; // 0x593(0x05)
	struct TArray<struct UWB_ui_Choise_parts_1_C*> ChoicePartsList; // 0x598(0x10)
	struct TArray<struct UWidgetAnimation*> ChoiceAnimationList; // 0x5a8(0x10)
	struct TArray<int32_t> ChoicePartsCurrentAnimIndex; // 0x5b8(0x10)
	struct TArray<int32_t> ChoicePartsState; // 0x5c8(0x10)
	float UIAnimationSpeed; // 0x5d8(0x04)
	bool FlagVoiceEnd; // 0x5dc(0x01)
	bool FlagIsMessageWithVoice; // 0x5dd(0x01)
	bool FlagDebugDraw; // 0x5de(0x01)
	enum class ERSGamepadLayoutType SavedLayout; // 0x5df(0x01)
	bool SavedLayoutFlag; // 0x5e0(0x01)

	void IsPlayOpenAnimation(bool isPlay); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.IsPlayOpenAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckFlagChoice(bool Flag); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.CheckFlagChoice // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void Get Debug Draw Flag(bool IsDraw); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.Get Debug Draw Flag // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SetDebugDrawFlag(bool IsDraw); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.SetDebugDrawFlag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void setGuide(struct UWB_ui_Caption_Guide_1_C* guide); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.setGuide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopCurrentVoice(); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.StopCurrentVoice // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetSkipAllMessage(bool IsSkip); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.SetSkipAllMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IsChoiceEnd(bool IsEnd); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.IsChoiceEnd // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void IsPlayChoiceAnimation(int32_t Index, bool isPlay); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.IsPlayChoiceAnimation // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void ChoicePartsUpdateState(); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.ChoicePartsUpdateState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void ChoicePartsSetup(); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.ChoicePartsSetup // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StopChoiceCurrentAnimation(int32_t PartsIndex); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.StopChoiceCurrentAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void PlayChoiceAnimation(int32_t PartsIndex, int32_t AnimIndex, bool IsLoop); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.PlayChoiceAnimation // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void UpdateCaptionFrameMaterial(); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.UpdateCaptionFrameMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetLastChoiceResult(int32_t Result); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.GetLastChoiceResult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckEndAllMessage(bool FlagCheckClose, bool IsEnd); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.CheckEndAllMessage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void SkipMessage(); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.SkipMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void GetChoiceResult(int32_t MessageIndex, int32_t Result); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.GetChoiceResult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void CheckEndMessage(int32_t MessageIndex, bool FlagCheckClose, bool IsEnd); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.CheckEndMessage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1685580
	void AddDrawMessageChoice(int32_t ChoiceNum, struct FString Choice0, struct FString Choice1, struct FString Choice2, struct FString Choice3, struct FString Choice4, int32_t DefaultIndex, int32_t CancelIndex, float DrawSecond, int32_t MessageIndex); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.AddDrawMessageChoice // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddDrawMessageNormal(struct FString Talker, struct FString Message, int32_t windowType, float DrawSecond, bool FlagEnableSkip, struct URSAtomComponentBase* Voice, bool isSkipVoiceEnd, int32_t MessageIndex); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.AddDrawMessageNormal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void IncWork(); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.IncWork // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoopChoice(int32_t SubState); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.StateLoopChoice // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void SetCurrentMessage(); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.SetCurrentMessage // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void InitWork(); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.InitWork // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void AddDrawMessage(bool IsChoice, int32_t ChoiceNum, int32_t DefaultChoiceIndex, int32_t CancelIndex, struct FString Talker, struct FString Message_1, struct FString Message_2, struct FString Message_3, struct FString Message_4, struct FString Message_5, int32_t windowType, float DrawSecond, bool FlagEnableSkip, struct URSAtomComponentBase* Voice, bool isSkipVoiceEnd, int32_t MessageIndex); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.AddDrawMessage // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateClose(int32_t SubState); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.StateClose // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateLoop(int32_t SubState); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.StateLoop // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateOpen(int32_t SubState); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.StateOpen // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void StateNone(int32_t SubState); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.StateNone // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void Construct(); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void UpdateState(int32_t State, int32_t SubState, float DeltaSeconds); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.UpdateState // (Event|Public|BlueprintEvent) // @ game+0x1685580
	void PreConstruct(bool IsDesignTime); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void Event_MouseDown(struct FRedMouseArgument argument, struct UUserWidget* pWidget); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.Event_MouseDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1685580
	void OnInitialized(); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1685580
	void ExecuteUbergraph_WB_ui_Caption_2(int32_t EntryPoint); // Function WB_ui_Caption_2.WB_ui_Caption_1_C.ExecuteUbergraph_WB_ui_Caption_2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1685580
};

