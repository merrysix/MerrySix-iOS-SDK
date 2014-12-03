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

@interface Merry6SDK : NSObject

@property (nonatomic, strong) NSString *accessKey;

@property (nonatomic, weak) id<Merry6SDKDelegate> delegate;

+ (instancetype)sharedM6SDK;
+ (NSString *)m6PathForResource:(NSString *)resource ofType:(NSString *)type inDirectory:(NSString *)directory;
- (UIViewController *)newMerry6ViewController:(UIImage *)phoneCase;

@end