#include <BugRemover.h>
#include <mod/hooking.h>

//TArray< FOcclusionPrimitive, SceneRenderingAllocator >	Primitives;

//void registerHooks() {
//	SUBSCRIBE_METHOD_MANUAL("?AddBounds@FHZBOcclusionTester@@QEAAIAEBUFVector@@0@Z", FHZBOcclusionTester::AddBounds, [](auto& scope, FHZBOcclusionTester* self, const FVector& BoundsCenter, const FVector& BoundsExtent) {
//		uint32 Index = Primitives.AddUninitialized();
//		//check( Index < SizeX * SizeY );
//		Primitives[Index].Center = BoundsCenter;
//		Primitives[Index].Extent = BoundsExtent;
//		return Index;
//		})
//}
//

void UOcclusionBugRemover::registerHooks() {
	SUBSCRIBE_METHOD_MANUAL("?AddBounds@FHZBOcclusionTester@@QEAAIAEBUFVector@@0@Z", FHZBOcclusionTester::AddBounds, [](auto& scope, FHZBOcclusionTester* self, const FVector& BoundsCenter, const FVector& BoundsExtent) {
		uint32 Index;

		if (self->Primitives.Num() >= FHZBOcclusionTester::SizeX * FHZBOcclusionTester::SizeY -1 )
		{
			//self->Primitives.Empty();
			Index = self->Primitives.Num();
			self->Primitives[Index].Center = BoundsCenter;
			self->Primitives[Index].Extent = BoundsExtent;
			scope.Override(Index);
			return Index;
		}
		else
		{
			Index = self->Primitives.AddUninitialized();
			self->Primitives[Index].Center = BoundsCenter;
			self->Primitives[Index].Extent = BoundsExtent;
			scope.Override(Index);
			return Index;
		}
		})
}

UOcclusionBugRemover::UOcclusionBugRemover()
{
	registerHooks();
}


//class SomeClass {
//public:
//	int MemberFunction(int arg1);
//	static void StaticFunction();
//};
//
//void registerHooks() {
//	SUBSCRIBE_METHOD(SomeClass::MemberFunction, [](auto& scope, SomeClass* self, int arg1) {
//		// do some nice stuff there
//		})
//
//		SUBSCRIBE_METHOD(SomeClass::StaticFunction, [](auto& scope) {
//			// do some nice stuff there
//			})
//}