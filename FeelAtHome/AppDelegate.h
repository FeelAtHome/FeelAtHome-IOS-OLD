//
//  AppDelegate.h
//  FeelAtHome
//
//  Created by Franck Lambertz on 10/01/2015.
//  Copyright (c) 2015 Franck Lambertz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <PebbleKit/PebbleKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) PBWatch *connectedWatch;

@end
