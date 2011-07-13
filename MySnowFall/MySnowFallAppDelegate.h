//
//  MySnowFallAppDelegate.h
//  MySnowFall
//
//  Created by John Mann on 7/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MySnowFallViewController;

@interface MySnowFallAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet MySnowFallViewController *viewController;

@end
