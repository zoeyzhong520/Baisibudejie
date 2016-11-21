//
//  UIButton+Utill.h
//  Baisibudejie
//
//  Created by qianfeng on 16/11/21.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (Utill)

//创建按钮的便利方法
+ (UIButton *)createBtnTitle:(NSString *)title bgImageName:(NSString *)bgImageName hightlightBgImageName:(NSString *)hightlightImageName target:(id)target action:(SEL)action;

@end
