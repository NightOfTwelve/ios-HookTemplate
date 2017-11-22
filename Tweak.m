//
//  Tweak.m
//  iosHook
//
//  Created by lm mac mini1 on 2017/11/20.
//  Copyright © 2017年 lm mac mini1. All rights reserved.
//

#import "Tweak.h"

MSHookInterface(SSMetricsController, SSMetricsControllerHook, SSMetricsController);

@implementation SSMetricsControllerHook

-(void)insertEvent:(id)event withCompletionHandler:(id)handler
{
    [super insertEvent:event withCompletionHandler:handler];
    
    NSLog(@"[iosHook] insertEvent");
}

@end

MSInitialize
{
    NSLog(@"[iosHook] start");
    
    
}
