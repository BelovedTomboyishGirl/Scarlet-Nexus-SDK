// BlueprintGeneratedClass BP_SplineMesh_Simple.BP_SplineMesh_Simple_C
// Size: 0x2f2 (Inherited: 0x240)
struct ABP_SplineMesh_Simple_C : ABP_SplineBase_C {
	struct UBoxComponent* Box; // 0x240(0x08)
	struct USplineComponent* Spline; // 0x248(0x08)
	struct UStaticMesh* StaticMesh; // 0x250(0x08)
	struct UMaterialInterface* Material; // 0x258(0x08)
	float Spacing; // 0x260(0x04)
	float TangentMod; // 0x264(0x04)
	enum class ESplineMeshAxis ForwardAxis; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float Roll; // 0x26c(0x04)
	bool Closed; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float RandomRotation_X; // 0x274(0x04)
	float RandomRotation_Y; // 0x278(0x04)
	float RandomRotation_Z; // 0x27c(0x04)
	float RandomScale; // 0x280(0x04)
	struct FRandomStream RandomStream; // 0x284(0x08)
	bool Collision; // 0x28c(0x01)
	bool NotRoll; // 0x28d(0x01)
	bool LockRotatePitch; // 0x28e(0x01)
	char pad_28F[0x1]; // 0x28f(0x01)
	struct FVector PositionOffset; // 0x290(0x0c)
	struct FVector MeshScale; // 0x29c(0x0c)
	float Yaw; // 0x2a8(0x04)
	bool CollisionCameraThrough; // 0x2ac(0x01)
	bool AttachParentBound; // 0x2ad(0x01)
	bool CastShadow; // 0x2ae(0x01)
	bool DynamicShadow; // 0x2af(0x01)
	struct UMaterialInterface* Material1; // 0x2b0(0x08)
	struct UMaterialInterface* Material2; // 0x2b8(0x08)
	struct UMaterialInterface* Material3; // 0x2c0(0x08)
	struct UMaterialInterface* Material4; // 0x2c8(0x08)
	struct UMaterialInterface* Material5; // 0x2d0(0x08)
	bool CanEverAffectNavigation; // 0x2d8(0x01)
	bool OverrideLightMapRes; // 0x2d9(0x01)
	char pad_2DA[0x2]; // 0x2da(0x02)
	int32_t OverridenLightMapRes; // 0x2dc(0x04)
	bool StaticShadow; // 0x2e0(0x01)
	bool TwoSidedLighting; // 0x2e1(0x01)
	bool ShadowTwoSided; // 0x2e2(0x01)
	bool LightmapTypeVolumetric; // 0x2e3(0x01)
	bool VisibleInReflectionCaptures; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	float MinDrawDistance; // 0x2e8(0x04)
	float DesiredMaxDrawDistance; // 0x2ec(0x04)
	bool AllowCullDistanceVolume; // 0x2f0(0x01)
	bool NotYaw; // 0x2f1(0x01)

	void UserConstructionScript(); // Function BP_SplineMesh_Simple.BP_SplineMesh_Simple_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1685580
};

