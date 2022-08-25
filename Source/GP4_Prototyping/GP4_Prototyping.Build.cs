// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GP4_Prototyping : ModuleRules
{
	public GP4_Prototyping(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
