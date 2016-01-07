//
//  AppDelegate.h
//  ShareToSina
//
//  Created by 冯振玲 on 16/1/5.
//  Copyright © 2016年 冯振玲. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, retain)NSString *wbtoken;
@property (nonatomic, retain)NSString *wbCurrentUserID;

@end

