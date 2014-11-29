MerrySix iOS SDK
==========
About MerrySix iOS SDK
Add the SDK to your Xcode project
----------
1. Drag `Merry6SDK.h`, `libMerry6SDK.a` and `M6SDKResource.bundle` to your project.
	![sdkinstall_step1.png](https://github.com/merrysix/MerrySix-iOS-SDK/raw/master/screenshot/sdkinstall_step1.png)
	![sdkinstall_step2.png](https://github.com/merrysix/MerrySix-iOS-SDK/raw/master/screenshot/sdkinstall_step2.png)

2. Verify that `libMerry6SDK.a` appears in the "Link Binary With Libraries" section in your target's Build Phases. If it does not, you can add it by dragging the `xxx.a` from your Project Navigator to the "Link Binary With Libraries" section.

3. Verify that `M6SDKResource.bundle` appears in the "Copy Bundle Resources" section in your target's Build Phases. If it does not, you can add it by dragging the `xxxx.bundle` from your Project Navigator to the "Copy Bundle Resources" section.
	![sdkinstall_step3.png](https://github.com/merrysix/MerrySix-iOS-SDK/raw/master/screenshot/sdkinstall_step3.png)

4. Under the "Link Binary With Libraries" section in your target's Build Phases, press the plus (+) button. Add the following system frameworks:
	* SystemConfiguration.framework

5. That's it!

Integrate with the SDK
----------
1. Import the `Merry6SDK.h` header file:
	```
	#import "Merry6.h"
	```
2. Instanse a Merry6SDK object:
	```
	Merry6SDK *m6sdk = [Merry6SDK sharedM6SDK];
	```
3. Configure your Access Key:
	```
	[m6sdk setAccessKey:@"YOUR-ACCESS-KEY"];
	```
4. Assign your view controller as a delegate:
	```
	[m6sdk setDelegate:self];
	```