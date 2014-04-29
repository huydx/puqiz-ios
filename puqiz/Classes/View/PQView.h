//
//  PQView.h
//  puqiz
//
//  Created by Le Van Nghia on 4/29/14.
//  Copyright (c) 2014 Le Van Nghia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FUIButton.h>
#import <FlatUIKit/UIColor+FlatUI.h>
#import <FlatUIKit/UIFont+FlatUI.h>
#import "PQDB5.h"

@protocol PQViewDelegate <NSObject>

@end

@interface PQView : UIView

@property (weak, nonatomic) id delegate;

- (id)initWithFrame:(CGRect)frame andDelegate:(id) delegate;
- (id)initFromXib:(NSString *)xibname andFrame:(CGRect)frame andDelegate:(id)delegate andOwner:(id)owner;
- (void)initView;
- (void)updateContent;

@end
