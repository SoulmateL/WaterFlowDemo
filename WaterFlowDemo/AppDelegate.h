//
//  AppDelegate.h
//  WaterFlowDemo
//
//  Created by 俊杰  廖 on 2018/10/15.
//  Copyright © 2018年 俊杰  廖. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

