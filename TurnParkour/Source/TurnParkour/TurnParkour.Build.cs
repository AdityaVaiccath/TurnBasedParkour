// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TurnParkour : ModuleRules
{
	public TurnParkour(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"TurnParkour",
			"TurnParkour/Variant_Platforming",
			"TurnParkour/Variant_Platforming/Animation",
			"TurnParkour/Variant_Combat",
			"TurnParkour/Variant_Combat/AI",
			"TurnParkour/Variant_Combat/Animation",
			"TurnParkour/Variant_Combat/Gameplay",
			"TurnParkour/Variant_Combat/Interfaces",
			"TurnParkour/Variant_Combat/UI",
			"TurnParkour/Variant_SideScrolling",
			"TurnParkour/Variant_SideScrolling/AI",
			"TurnParkour/Variant_SideScrolling/Gameplay",
			"TurnParkour/Variant_SideScrolling/Interfaces",
			"TurnParkour/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
