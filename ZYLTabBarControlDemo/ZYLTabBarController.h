//
//  ZYLTabBarController.h
//  ZYLTabBarControlDemo
//
//  Created by 石家庄盛航 on 16/6/24.
//  Copyright © 2016年 sjzshtx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZYLTabBar.h"

typedef void (^ItemArrayBlock) (NSArray <ZYLTabBarItem *>*array);
//可以使用继承的方式
@interface ZYLTabBarController : UITabBarController
//自定义标签的参数，可以添加在标签上可以修改参数
- (void)changeItemForItemArray:(ItemArrayBlock)array;

//tabBar的显示
- (void)tabBarHidden;
//tabBar的隐藏
- (void)tabBarShow;
/** 跳到相应的控制器*/

- (void)selectControlAtIndex:(NSInteger)index;

@end


