#pragma once

#include "C:\Program Files\Unreal Engine - CSS\Engine\Source\Runtime\Renderer\Private\SceneOcclusion.h"
#include "BugRemover.generated.h"

UCLASS(Blueprintable)
class UOcclusionBugRemover : public UObject {
	GENERATED_BODY()
	public:
		void registerHooks();
		UOcclusionBugRemover();
};