//
//  EssenceImageCell.h
//  百思不得姐
//
//  Created by gaokunpeng on 2016/11/22.
//  Copyright © 2016年 gaokunpeng. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BDJEssenceDetail;

@interface EssenceImageCell : UITableViewCell

//数据
@property (nonatomic, strong)BDJEssenceDetail *detailModel;

//便利的创建cell的方法
+ (EssenceImageCell *)imageCellForTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath withModel:(BDJEssenceDetail *)detailModel;

@end
