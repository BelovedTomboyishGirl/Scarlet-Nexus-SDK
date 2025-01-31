// Class StaticMeshDescription.StaticMeshDescription
// Size: 0x390 (Inherited: 0x390)
struct UStaticMeshDescription : UMeshDescriptionBase {

	void SetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, struct FVector2D UV, int32_t UVIndex); // Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x2777580
	void SetPolygonGroupMaterialSlotName(struct FPolygonGroupID PolygonGroupID, struct FName SlotName); // Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x27774a0
	struct FVector2D GetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, int32_t UVIndex); // Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x27773d0
	void CreateCube(struct FVector Center, struct FVector HalfExtents, struct FPolygonGroupID PolygonGroup, struct FPolygonID PolygonID_PlusX, struct FPolygonID PolygonID_MinusX, struct FPolygonID PolygonID_PlusY, struct FPolygonID PolygonID_MinusY, struct FPolygonID PolygonID_PlusZ, struct FPolygonID PolygonID_MinusZ); // Function StaticMeshDescription.StaticMeshDescription.CreateCube // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x27770a0
};

