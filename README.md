MerrySix iOS SDK
==========
MerrySix SDK connects your app with our services and enable the users to make customized products based on user generated contents. Each sale through your app will bring commission to your account managed at our affiliate backstage. MerrySix will be fully responsible for producing, shipping and handling after sale customer services. You can easily integrate MerrySix SDK to your iOS app by following the steps listed below and start earning commission in just a snap.For more information or further questions please contact us at support@merrysix.com
Add the SDK to your Xcode project
-------

1. Drag `Merry6SDK.h`, `libMerry6SDK.a` and `M6SDKResource.bundle` to your project.
	![sdkinstall_step1.png](https://github.com/merrysix/MerrySix-iOS-SDK/raw/master/screenshot/sdkinstall_step1.png)
	![sdkinstall_step2.png](https://github.com/merrysix/MerrySix-iOS-SDK/raw/master/screenshot/sdkinstall_step2.png)

2. Verify that `libMerry6SDK.a` appears in the "Link Binary With Libraries" section in your target's Build Phases. If it does not, you can add it by dragging the `libMerry6SDK.a` from your Project Navigator to the "Link Binary With Libraries" section.

3. Verify that `M6SDKResource.bundle` appears in the "Copy Bundle Resources" section in your target's Build Phases. If it does not, you can add it by dragging the `M6SDKResource.bundle` from your Project Navigator to the "Copy Bundle Resources" section.
	![sdkinstall_step3.png](https://github.com/merrysix/MerrySix-iOS-SDK/raw/master/screenshot/sdkinstall_step3.png)

4. Under the "Link Binary With Libraries" section in your target's Build Phases, press the plus (+) button. Add the following system frameworks:
	* SystemConfiguration.framework
	* MobileCoreServices.framework
	* MessageUI.framework
	* CoreMedia.framework
	* CoreLocation.framework
	* AVFoundation.framework
	* AudioToolbox.framework

5. That's it!

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
4. Assign your view controller as a delegate:

	```
	[m6sdk setDelegate:self];
	```

5. Implement the `Merry6SDKDelegate` protocol methods:

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
	
6. The final step to present the Merry6ViewController

	```
	UIViewController *vc = [m6sdk newMerry6ViewController:yourImage];
	[self presentModalViewController:vc animated:YES];
	```

Requirements
-------

* Xcode 5.0 and iOS SDK 6.0 or above
* iPhone and iOS Simulator are supported
* iOS 6.0 or above, retina display preferred

Support
-------

If there is any problem regarding the MerrySix iOS SDK, feel free to contact us at support@merrysix.com

Issues?
-------

You may submit on github any issues encountered: https://github.com/merrysix/MerrySix-iOS-SDK/issues
