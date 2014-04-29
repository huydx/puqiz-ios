//
//  PQDB5.m
//  puqiz
//
//  Created by Le Van Nghia on 4/29/14.
//  Copyright (c) 2014 Le Van Nghia. All rights reserved.
//

#import "PQDB5.h"

@implementation PQDB5

+ (PQDB5 *)sharedInstance
{
    __strong static PQDB5 *sharedDB5 = nil;
    static dispatch_once_t onceQueue = 0;
    dispatch_once(&onceQueue, ^{
        sharedDB5 = [[PQDB5 alloc] init];
        sharedDB5.themeLoader = [VSThemeLoader new];
        sharedDB5.theme = sharedDB5.themeLoader.defaultTheme;
    });

    return sharedDB5;
}

+ (VSTheme *)theme
{
    return [[self sharedInstance] theme];
}

@end
