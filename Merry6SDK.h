//
//  Merry6SDK.h
//  Merry6SDK
//
//  Created by mrgaolei on 14/11/10.
//  Copyright (c) 2014 MerrySix. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol Merry6SDKDelegate <NSObject>

- (void)merry6SDKOrderCompleted;
- (void)merry6SDKUserCancelled;

@end

extern NSString * const kM6DeviceiPhone4;
extern NSString * const kM6DeviceiPhone5;
extern NSString * const kM6DeviceiPhone5c;
extern NSString * const kM6DeviceiPhone6;
extern NSString * const kM6DeviceiPhone6Plus;
extern NSString * const kM6DeviceMugs;
extern NSString * const kM6DeviceiPadAir;
extern NSString * const kM6DeviceiPadAir2;
extern NSString * const kM6DeviceiPadMini;
extern NSString * const kM6DeviceiPadMini2;


@interface Merry6SDK : NSObject

@property (nonatomic, strong) NSString *accessKey;
@property (nonatomic, strong) NSString *urlSchemes;

@property (nonatomic, weak) id<Merry6SDKDelegate> delegate;

+ (instancetype)sharedM6SDK;
+ (NSString *)m6PathForResource:(NSString *)resource ofType:(NSString *)type inDirectory:(NSString *)directory;
+ (NSString *)m6LocalizedString:(NSString *)key forComment:(NSString *)comment;
- (UIViewController *)newMerry6ViewController:(UIImage *)phoneCase;
- (UIViewController *)newMerry6ViewController:(UIImage *)phoneCase withDevicePhoneCase:(NSDictionary *)devicePhoneCase;
+ (void)AlipayCallbackCheck:(NSURL *)url;

@end