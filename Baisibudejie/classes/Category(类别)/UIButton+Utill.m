//
//  UIButton+Utill.m
//  Baisibudejie
//
//  Created by qianfeng on 16/11/21.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#import "UIButton+Utill.h"

@implementation UIButton (Utill)

+ (UIButton *)createBtnTitle:(NSString *)title bgImageName:(NSString *)bgImageName hightlightBgImageName:(NSString *)hightlightImageName target:(id)target action:(SEL)action {
    
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    if (title) {
        [btn setTitle:title forState:UIControlStateNormal];
        [btn setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    }
    
    if (bgImageName) {
        [btn setBackgroundImage:[UIImage imageNamed:bgImageName] forState:UIControlStateNormal];
    }
    
    if (hightlightImageName) {
        [btn setBackgroundImage:[UIImage imageNamed:hightlightImageName] forState:UIControlStateNormal];
    }
    
    if (target && action) {
        [btn addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    }
    
    return btn;
}



@end
