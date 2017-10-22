//
//  AppDelegate.h
//  AppRTC
//
//  Created by Kelly Chu on 3/7/15.
//  Copyright (c) 2015 ISBX. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <FirebaseDatabase/FirebaseDatabase.h>
#import <FirebaseMessaging/FIRMessaging.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic)NSString *strRoomId;

@property (strong, nonatomic) FIRDatabaseReference *ref;


@end

