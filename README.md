MerrySix iOS SDK
==========
MerrySix SDK connects your app with our services and enables the user to purchase customized product based on user generated content through your app. 
Each sale through your app will bring commission to your account managed at our affiliate backstage. MerrySix will be fully responsible for producing, shipping and handling after sale customer services. You can easily integrate MerrySix SDK to your iOS app by following the steps listed below and start earning commission in just a snap.For more information or further questions please contact us at affiliate@merrysix.com
Add the SDK to your Xcode project
-------

1. Drag `Merry6SDK.h`, `libMerry6SDK.a`, `AlipaySDK.framework` and `M6SDKResource.bundle` to your project.
	![sdkinstall_step1.png](https://github.com/merrysix/MerrySix-iOS-SDK/raw/master/screenshot/sdkinstall_step1.png)
	![sdkinstall_step2.png](https://github.com/merrysix/MerrySix-iOS-SDK/raw/master/screenshot/sdkinstall_step2.png)

2. Verify that `libMerry6SDK.a` appears in the "Link Binary With Libraries" section in your target's Build Phases. If it does not, you can add it by dragging the `libMerry6SDK.a` from your Project Navigator to the "Link Binary With Libraries" section.

3. Verify that `M6SDKResource.bundle` appears in the "Copy Bundle Resources" section in your target's Build Phases. If it does not, you can add it by dragging the `M6SDKResource.bundle` from your Project Navigator to the "Copy Bundle Resources" section.
	![sdkinstall_step3.png](https://github.com/merrysix/MerrySix-iOS-SDK/raw/master/screenshot/sdkinstall_step3.png)

4. Set your App's URL Schemes if not exists.
	![sdkinstall_setp4.png](https://github.com/merrysix/MerrySix-iOS-SDK/raw/master/screenshot/sdkinstall_step4.png)

5. Under the "Link Binary With Libraries" section in your target's Build Phases, press the plus (+) button. Add the following system frameworks:
	* SystemConfiguration.framework
	* MobileCoreServices.framework
	* MessageUI.framework
	* CoreMedia.framework
	* CoreLocation.framework
	* AVFoundation.framework
	* AudioToolbox.framework

6. That's it!

Integrate with the SDK
-------

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
	
4. Configure your App's URL Schemes:

	```
	[m6sdk setUrlSchemes:@"YOUR_URL_SCHEMES"];
	```
	
5. Assign your view controller as a delegate:

	```
	[m6sdk setDelegate:self];
	```

6. Implement the `Merry6SDKDelegate` protocol methods:

	```
	- (void)merry6SDKOrderCompleted {
		[self dismissModalViewControllerAnimated:YES];
		// TODO do something when order completed
	}
	- (void)merry6SDKUserCancelled {
		[self dismissModalViewControllerAnimated:YES];
		// TODO do something when user cancelled order
	}
	```
	
7. Present the Merry6ViewController

	```
	UIViewController *vc = [m6sdk newMerry6ViewController:yourImage];
	[self presentModalViewController:vc animated:YES];
	```

8. The final step, continue complete your AppDelegate.m:

	```
	#import "Merry6SDK.h"
	```
	```
	- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
		[Merry6SDK AlipayCallbackCheck:url];
		return YES;
	}
	```

Requirements
-------

* Xcode 5.0 and iOS SDK 6.0 or above
* iPhone and iOS Simulator are supported
* iOS 6.0 or above, retina display preferred

Support
-------

If there is any problem regarding the MerrySix iOS SDK, feel free to contact us at affiliate@merrysix.com

Issues?
-------

You may submit on github any issues encountered: https://github.com/merrysix/MerrySix-iOS-SDK/issues
