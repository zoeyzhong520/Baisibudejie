//
//  BDJMenuViewController.h
//  Baisibudejie
//
//  Created by qianfeng on 16/11/23.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#import "BaseViewController.h"

/**精华和最新界面公共的父类*/
@interface BDJMenuViewController : BaseViewController

//标题列表数据
@property (nonatomic, strong)NSArray *subMenus;

//右边按钮的图片
@property (nonatomic, copy)NSString *rightIamgeName;

//右边按钮的高亮图片
@property (nonatomic, copy)NSString *rightHLImageName;

//右边按钮的点击事件
@property (nonatomic, strong)void (^rightBtnBlock)(void);

@end
