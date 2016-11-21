//
//  BDJTabBar.m
//  Baisibudejie
//
//  Created by qianfeng on 16/11/21.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#import "BDJTabBar.h"

@implementation BDJTabBar

//重新实现初始化方法
- (instancetype)init {
    
    if (self == [super init]) {
        UIButton *addBtn = [UIButton createBtnTitle:nil bgImageName:@"tabBar_publish_icon" hightlightBgImageName:@"tabBar_publish_click_icon" target:self action:@selector(publishAction)];
        [self addSubview:addBtn];
    }
    return self;
}

- (void)publishAction {
    NSLog(@"~~~~~~~");
}

/*
 在什么时候子视图会重新布局：
 1.视图显示到父视图上面的时候
 2.手动调用了视图对象的layoutIfNeed方法
 */
//在当前对象的多子视图重新布局的时候调用
- (void)layoutSubviews {
    [super layoutSubviews];
    
    //修改按钮位置，注意：不能使用约束方式修改
    //按钮宽度
    CGFloat btnW = KScreenWidth/5;
    NSInteger index = 0;
    
    for (UIView *tmpView in self.subviews) {
        
        if ([tmpView isKindOfClass:[UIButton class]]) {
            //发布按钮
            //tmpView.frame = CGRectMake(btnW*2, 4, btnW, 40);
            tmpView.center = CGPointMake(KScreenWidth/2, 49.0f/2);
            tmpView.size = CGSizeMake(40, 40);
        }else if([tmpView isKindOfClass:NSClassFromString(@"UITabBarButton")]) {
            
            tmpView.width = btnW;
            if (index > 1) {
                //第三个开始，需要添加发布按钮的宽度值
                tmpView.x = (index+1)*btnW;
            }else{
                tmpView.x = index*btnW;
            }
            
            index ++;
        }
    }
}

@end


















