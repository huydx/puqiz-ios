//
//  PQView.m
//  puqiz
//
//  Created by Le Van Nghia on 4/29/14.
//  Copyright (c) 2014 Le Van Nghia. All rights reserved.
//

#import "PQView.h"

@implementation PQView
@synthesize delegate = mDelegate;

- (id)initWithFrame:(CGRect)frame andDelegate:(id)delegate
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
        self.delegate = delegate;
        [self initView];
    }
    return self;
}

- (id)initFromXib:(NSString *)xibname andFrame:(CGRect)frame andDelegate:(id)delegate andOwner:(id)owner
{
    UINib *nib = [UINib nibWithNibName:xibname bundle:nil];
    self = [nib instantiateWithOwner:owner options:nil][0];
    //TODO: find other approach
    if (self) {
        self.frame = frame;
        self.delegate = delegate;
        [self initView];
    }
    
    return self;
}

- (void)initView
{

}

- (void)updateContent
{

}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect
{
    // Drawing code
}
*/

@end
