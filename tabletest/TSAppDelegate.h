//
//  TSAppDelegate.h
//  tabletest
//
//  Created by Brady Archambo on 9/6/13.
//  Copyright (c) 2013 Tiny Speck. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TSViewController;

@interface TSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) TSViewController *viewController;

@end
