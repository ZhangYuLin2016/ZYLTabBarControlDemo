//
//  ZYLTabBar.h
//  ZYLTabBarControlDemo
//
//  Created by 石家庄盛航 on 16/6/24.
//  Copyright © 2016年 sjzshtx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZYLTabBarItem.h"

@interface ZYLTabBar : UIView
@property (nonatomic,strong)NSArray <ZYLTabBarItem *>*items; //标签数组
@property (nonatomic,copy) void(^buttonIndexBlock)(NSInteger buttonIndex);//block属性

@property (nonatomic,strong)UIColor *lineColor;         //线条颜色
@property (nonatomic,strong)UIColor *backgroudColor;    //背景颜色
@property (nonatomic,assign)BOOL showRound;             //显示中间圆弧

//设置选中标签
- (void)selectItemAtIndex:(NSInteger)index;

@end
