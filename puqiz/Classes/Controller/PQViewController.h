//
//  PQViewController.h
//  puqiz
//
//  Created by Le Van Nghia on 4/29/14.
//  Copyright (c) 2014 Le Van Nghia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FUIAlertView.h>
#import <FlatUIKit/UIColor+FlatUI.h>
#import <FlatUIKit/UIFont+FlatUI.h>
#import "PQDB5.h"

@interface PQViewController : UIViewController

@property (strong, nonatomic) FUIAlertView *alertView;

- (UIView *) errorView;
- (UIView *) loadingView;
- (void) showLoadingAnimated:(BOOL) animated;
- (void) hideLoadingAnimated:(BOOL) animated;
- (void) showErrorViewAnimated:(BOOL) animated;
- (void) hideErrorViewAnimated:(BOOL) animated;
- (void) showAlertWithTitle:(NSString *)title andMessage:(NSString *)message andDelegate:(id)delegate;

@end
