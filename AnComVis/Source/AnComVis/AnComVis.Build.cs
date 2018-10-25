using UnrealBuildTool;
using System.IO;

public class AnComVis : ModuleRules
{
    private string ThirdPartyPath
    {
        get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../ThirdParty/")); }
    }

    private string OpenCVPath
    {
        get
        {
            return Path.Combine(ThirdPartyPath, "opencv");
        }
    }

    private string LibFacePath
    {
        get
        {
            return Path.Combine(ThirdPartyPath, "libfacedetection");
        }
    }

    public AnComVis(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
                    Path.Combine(OpenCVPath, "include"),
                    Path.Combine(LibFacePath, "include")
                }
			);

        //opncv
        PublicLibraryPaths.Add(Path.Combine(OpenCVPath, "lib", "Win64"));
        PublicAdditionalLibraries.Add("opencv_world343.lib");
        PublicDelayLoadDLLs.Add("opencv_world343.dll");
        PublicDelayLoadDLLs.Add("opencv_ffmpeg343_64.dll");
        PublicDefinitions.Add("WITH_OPENCV_BINDING=1");
        //libfacedetection
        PublicLibraryPaths.Add(Path.Combine(LibFacePath, "lib", "Win64"));
        PublicAdditionalLibraries.Add("libfacedetect-x64.lib");
        PublicDelayLoadDLLs.Add("libfacedetect-x64.dll");
        PublicAdditionalLibraries.Add("libfacedetectcnn-x64.lib");
        PublicDelayLoadDLLs.Add("libfacedetectcnn-x64.dll");

        PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
                "Core", "CoreUObject", "Engine", "InputCore", "RHI", "RenderCore"
            }
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore"                			
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
