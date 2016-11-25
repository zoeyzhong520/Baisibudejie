//
//  EssenceImageCell.m
//  百思不得姐
//
//  Created by gaokunpeng on 2016/11/22.
//  Copyright © 2016年 gaokunpeng. All rights reserved.
//

#import "EssenceImageCell.h"
#import "BDJEssenceModel.h"


@interface EssenceImageCell ()
@property (weak, nonatomic) IBOutlet UIImageView *userImageView;
@property (weak, nonatomic) IBOutlet UILabel *userNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *passTimeLabel;


@property (weak, nonatomic) IBOutlet UILabel *descLabel;
@property (weak, nonatomic) IBOutlet UIImageView *bigImageView;


@property (weak, nonatomic) IBOutlet UILabel *commentLabel;
@property (weak, nonatomic) IBOutlet UILabel *tagLabel;


@property (weak, nonatomic) IBOutlet UIButton *dingButton;
@property (weak, nonatomic) IBOutlet UIButton *caiButton;
@property (weak, nonatomic) IBOutlet UIButton *shareButton;
@property (weak, nonatomic) IBOutlet UIButton *commentButton;


//图片的高度
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *imageHCons;

//评论视图的高度和top偏移量
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *commentViewHCons;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *commnetViewYCons;





@end


@implementation EssenceImageCell


+ (EssenceImageCell *)imageCellForTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath withModel:(BDJEssenceDetail *)detailModel {
    
    static NSString *cellId = @"imageCellId";
    
    EssenceImageCell *cell = [tableView dequeueReusableCellWithIdentifier:cellId];
    if (nil == cell) {
        cell = [[[NSBundle mainBundle] loadNibNamed:@"EssenceImageCell" owner:nil options:nil] lastObject];
    }
    
    //数据
    cell.detailModel = detailModel;
    
    return cell;
}


- (void)setDetailModel:(BDJEssenceDetail *)detailModel {
    _detailModel = detailModel;
    
    
    //1.用户图标
    NSString *headerString = [detailModel.u.header firstObject];
    NSURL *url = [NSURL URLWithString:headerString];
    [self.userImageView sd_setImageWithURL:url];
    
    //2.用户名
    self.userNameLabel.text = detailModel.u.name;
    
    //3.时间
    self.passTimeLabel.text = detailModel.passtime;
    
    //4.描述文字
    self.descLabel.text = detailModel.text;
    
    //5.图片
    NSString *imageString = [detailModel.image.thumbnail_small firstObject];
    NSURL *imageURL = [NSURL URLWithString:imageString];
    [self.bigImageView sd_setImageWithURL:imageURL placeholderImage:[UIImage imageNamed:@"post_placeholderImage"]];
    
    //修改高度
    //图片的宽度/图片的高度  ==  width/height
    CGFloat imageH = (kScreenWidth-20)*detailModel.image.height.floatValue/detailModel.image.width.floatValue;
    //修改图片尺寸
    if (imageH > 400) {
        imageH = 400;
    }
    self.imageHCons.constant = imageH;
    
    
    //8.评论文字
    if (detailModel.top_comments.count > 0) {
        BDJEssenceComment *comment = [detailModel.top_comments firstObject];
        self.commentLabel.text = comment.content;
    }else{
        self.commentLabel.text = nil;
    }
    
    //强制cell布局一次
    [self layoutIfNeeded];
    
    //修改评论视图的约束
    if (detailModel.top_comments.count > 0) {
        //有评论的数据
        self.commnetViewYCons.constant = 10;
        self.commentViewHCons.constant = self.commentLabel.frame.size.height + 10 + 10;
    }else{
        //没有评论的部分
        self.commentViewHCons.constant = 0;
        self.commnetViewYCons.constant = 0;
    }
    
    //9.标签
    NSMutableString *tagString = [NSMutableString string];
    for (NSInteger i=0;i<detailModel.tags.count;i++) {
        BDJEssenceTag *tag = detailModel.tags[i];
        [tagString appendFormat:@"%@ ",tag.name];
    }
    self.tagLabel.text = tagString;
    
    
    //10.顶、踩、分享、评论的数量
    [self.dingButton setTitle:detailModel.up forState:UIControlStateNormal];
    [self.caiButton setTitle:[detailModel.down stringValue] forState:UIControlStateNormal];
    [self.shareButton setTitle:[detailModel.forward stringValue] forState:UIControlStateNormal];
    [self.commentButton setTitle:detailModel.comment forState:UIControlStateNormal];
    
    
    //强制刷新一次
    [self layoutIfNeeded];
    
    //获取cell的高度值
    detailModel.cellHeight = @(CGRectGetMaxY(self.dingButton.frame) + 10 + 10);
    
}


- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

//更多
- (IBAction)clickMoreBtn {
}


//顶一下
- (IBAction)dingAction:(id)sender {
}
//踩一下
- (IBAction)caiAction:(id)sender {
}
//分享
- (IBAction)shareAction:(id)sender {
}
//评论
- (IBAction)commentAction:(id)sender {
}

@end
