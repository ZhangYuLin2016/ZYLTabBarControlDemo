//
//  UIViewController+ZYLTabBarVC.m
//  ZYLTabBarControlDemo
//
//  Created by 石家庄盛航 on 16/6/24.
//  Copyright © 2016年 sjzshtx. All rights reserved.
//

#import "UIViewController+ZYLTabBarVC.h"
#import "ZYLTabBarController.h"

@implementation UIViewController (ZYLTabBarVC)
/**
 *  隐藏标签栏
 */
- (void)tabBarHidden {
    ZYLTabBarController *tabBar= (ZYLTabBarController *)self.tabBarController;
    [tabBar tabBarHidden];
}

/**
 *  显示标签栏
 */
- (void)tabBarShow {
    ZYLTabBarController *tabBar= (ZYLTabBarController *)self.tabBarController;
    [tabBar tabBarShow];
}
@end
