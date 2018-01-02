//
//  Tweak.m
//  iosHook
//
//  Created by lm mac mini1 on 2017/11/20.
//  Copyright © 2017年 lm mac mini1. All rights reserved.
//

// 这里通过定义SBLockScreenManagerProtocol来解决引用私有头文件这一麻烦问题。

#import "Tweak.h"

@protocol SBLockScreenManagerProtocol

-(void)unlockUIFromSource:(int)arg1 withOptions:(id)arg2;

- (void)lockUIFromSource:(int)arg1 withOptions:(id)arg2;

@end

MSHookInterface(SBLockScreenManager, SBLockScreenManagerHook, NSObject<SBLockScreenManagerProtocol>);

@implementation SBLockScreenManagerHook

- (void)unlockUIFromSource:(int)arg1 withOptions:(id)arg2
{
    NSLog(@"unlockUIFromSource :%d  %@",arg1 ,arg2);
    return [super unlockUIFromSource:arg1 withOptions:arg2];
}

- (void)lockUIFromSource:(int)arg1 withOptions:(id)arg2
{
    NSLog(@"lockUIFromSource :%d  %@",arg1 ,arg2);
    return [super lockUIFromSource:arg1 withOptions:arg2];
}

@end

MSInitialize
{
    NSLog(@"[iosHook] start");
}
