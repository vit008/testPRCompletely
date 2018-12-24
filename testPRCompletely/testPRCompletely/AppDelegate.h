//
//  AppDelegate.h
//  testPRCompletely
//
//  Created by Vitaliy Fedun on 12/24/18.
//  Copyright © 2018 Vitaliy Fedun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

