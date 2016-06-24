//
//  ZYLTabBarItem.h
//  ZYLTabBarControlDemo
//
//  Created by 石家庄盛航 on 16/6/24.
//  Copyright © 2016年 sjzshtx. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, ZYLTabBarItemStyle) {
    WJTabbarItemStyleNone,          //没有
    WJTabbarItemStyleText,          //文字
    WJTabbarItemStyleImage,         //图片
    WJTabbarItemStyleTextAndImage   //文字和图片（类似系统）
};
@interface ZYLTabBarItem : UIControl
@property (nonatomic,strong)UILabel *label;
@property (nonatomic,strong)UIImageView *imageView;
@property (nonatomic,assign)ZYLTabBarItemStyle style; //样式

@property (nonatomic,assign)CGFloat itemHeight;//计算高度使用

//改变点击效果
- (void)selectAnimation:(BOOL)selected;

@end
