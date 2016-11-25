//
//  UILabel+Util.m
//  百思不得姐
//
//  Created by gaokunpeng on 2016/11/24.
//  Copyright © 2016年 gaokunpeng. All rights reserved.
//

#import "UILabel+Util.h"

@implementation UILabel (Util)

+ (UILabel *)createLabel:(NSString *)title textColor:(UIColor *)color font:(UIFont *)font {
    UILabel *label = [[UILabel alloc] init];
    if (title) {
        label.text = title;
    }
    
    if (color) {
        label.textColor = color;
    }
    
    if (font) {
        label.font = font;
    }
    
    return label;
}

@end
