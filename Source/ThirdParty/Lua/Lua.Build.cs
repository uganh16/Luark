using System.IO;
using UnrealBuildTool;

public class Lua : ModuleRules
{
	public Lua(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Inc"));

		string LibraryDirectory = Path.Combine(ModuleDirectory, "Lib", Target.Platform.ToString());
		if (Target.Platform == UnrealTargetPlatform.Mac)
		{
			PublicAdditionalLibraries.Add(Path.Combine(LibraryDirectory, "liblua.a"));
		}
	}
}
