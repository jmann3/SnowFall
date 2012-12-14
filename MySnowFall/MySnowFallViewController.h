//
//  MySnowFallViewController.h
//  MySnowFall
//
//  Created by John Mann on 7/13/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MySnowFallViewController : UIViewController {
    
    UIImage *flakeImage;
    
}

@property (nonatomic, retain) UIImage *flakeImage;

- (void)onTimer;
- (void)onAnimationComplete:(NSString *)animationID finished:(NSNumber *)finished context:(void *)context;

@end
