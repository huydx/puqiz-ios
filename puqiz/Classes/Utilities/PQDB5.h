//
//  PQDB5.h
//  puqiz
//
//  Created by Le Van Nghia on 4/29/14.
//  Copyright (c) 2014 Le Van Nghia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <VSTheme.h>
#import <VSThemeLoader.h>

@interface PQDB5 : NSObject

@property (strong, nonatomic) VSThemeLoader *themeLoader;
@property (strong, nonatomic) VSTheme *theme;

+ (PQDB5 *)sharedInstance;
+ (VSTheme *)theme;

@end
