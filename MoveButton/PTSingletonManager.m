//
//  PTSingletonManager.m
//  iPos
//
//  Created by wzp on 14-8-1.
//  Copyright (c) 2014年 Zhang Cheng. All rights reserved.
//

#import "PTSingletonManager.h"

@implementation PTSingletonManager

+(PTSingletonManager *)shareInstance
{
    static PTSingletonManager * singletonManager = nil;
    @synchronized(self){
        if (!singletonManager) {
            singletonManager = [[PTSingletonManager alloc]init];
        }
    }
    return singletonManager;
}

@end
