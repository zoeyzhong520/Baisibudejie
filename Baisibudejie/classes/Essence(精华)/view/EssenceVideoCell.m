//
//  EssenceVideoCell.m
//  Baisibudejie
//
//  Created by qianfeng on 16/11/22.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#import "EssenceVideoCell.h"
#import "BDJEssenceModel.h"

@interface EssenceVideoCell ()

@property (weak, nonatomic) IBOutlet UIImageView *userImageView;

@property (weak, nonatomic) IBOutlet UILabel *userNameLabel;

@property (weak, nonatomic) IBOutlet UILabel *paseTimeLabel;

//更多
- (IBAction)clickMoreBtn;

@property (weak, nonatomic) IBOutlet UILabel *descLabel;

@property (weak, nonatomic) IBOutlet UIImageView *videoImageView;

@property (weak, nonatomic) IBOutlet UILabel *playNumberLabel;

@property (weak, nonatomic) IBOutlet UILabel *playTimeLabel;

//播放按钮
- (IBAction)playAction;

@property (weak, nonatomic) IBOutlet UILabel *commentLabel;

@property (weak, nonatomic) IBOutlet UILabel *tagLabel;

@property (weak, nonatomic) IBOutlet UIButton *dingBtn;

@property (weak, nonatomic) IBOutlet UIButton *caiBtn;

@property (weak, nonatomic) IBOutlet UIButton *shareBtn;

@property (weak, nonatomic) IBOutlet UIButton *commentBtn;

//顶一下
- (IBAction)dingAction:(UIButton *)sender;

//踩一下
- (IBAction)caiAction:(UIButton *)sender;

//分享
- (IBAction)shareAction:(UIButton *)sender;

//评论
- (IBAction)commentAction:(UIButton *)sender;

//图片的高度
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *imageHCons;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *commentViewHCons;

//评论视图的高度和top偏移量
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *commentViewYCons;

@end

@implementation EssenceVideoCell

+ (EssenceVideoCell *)videoCellForTableView:(UITableView *)tableView atIndexPath:(NSIndexPath *)indexPath withModel:(BDJEssenceDetail *)detailModel {
    
    static NSString *cellId = @"videoCellId";
    EssenceVideoCell *cell = [tableView dequeueReusableCellWithIdentifier:cellId];
    if (cell == nil) {
        cell = [[[NSBundle mainBundle] loadNibNamed:@"EssenceVideoCell" owner:nil options:nil]lastObject];
    }
    cell.detailModel = detailModel;
    
    return cell;
}

- (void)setDetailModel:(BDJEssenceDetail *)detailModel {
    
    _detailModel = detailModel;
    
    //用户图标
    NSString *headerString = [detailModel.u.header firstObject];
    NSURL *url = [NSURL URLWithString:headerString];
    [self.userImageView sd_setImageWithURL:url placeholderImage:[UIImage imageNamed:@"post_placeholderImage"]];
    
    //用户名
    self.userNameLabel.text = detailModel.u.name;
    
    
    //时间
    self.paseTimeLabel.text = detailModel.passtime;
    
    //描述文字
    self.descLabel.text = detailModel.text;
    
    //图片
    NSString *videoString = [detailModel.video.thumbnail_small firstObject];
    NSURL *videoUrl = [NSURL URLWithString:videoString];
    [self.videoImageView sd_setImageWithURL:videoUrl placeholderImage:[UIImage imageNamed:@"post_placeholderImage"]];
    
    //修改高度
    //图片宽度/图片高度=width/height
    CGFloat imageH = (KScreenWidth-20)*detailModel.video.height.floatValue/detailModel.video.width.floatValue;
    self.imageHCons.constant = imageH;
    
    //播放次数
    self.playTimeLabel.text = [detailModel.video.playcount stringValue];
    
    //视频时间
    NSInteger min = 0;
    NSInteger sec = [detailModel.video.duration integerValue];
    if (sec >= 60) {
        min = sec/60;
        sec = sec%60;
    }
    self.playTimeLabel.text = [NSString stringWithFormat:@"%02ld:%02ld", min, sec];
    
    //评论文字
    if (detailModel.top_comments.count > 0) {
        BDJEssenceComment *comment = [detailModel.top_comments firstObject];
        self.commentLabel.text = comment.content;
    }
    
    //标签
    NSMutableString *tagString = [NSMutableString string];
    for (NSInteger i=0;i<detailModel.tags.count;i++) {
        BDJEssenceTag *tag = detailModel.tags[i];
        [tagString appendFormat:@"%@ ",tag.name];
    }
    self.tagLabel.text = tagString;
    
    //顶、踩、分享、评论的数量
    [self.dingBtn setTitle:detailModel.up forState:UIControlStateNormal];
    [self.caiBtn setTitle:[detailModel.down stringValue] forState:UIControlStateNormal];
    [self.shareBtn setTitle:[detailModel.forward stringValue] forState:UIControlStateNormal];
    [self.commentBtn setTitle:detailModel.comment forState:UIControlStateNormal];
    
}

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (IBAction)clickMoreBtn {
}
- (IBAction)playAction {
}
- (IBAction)dingAction:(UIButton *)sender {
}

- (IBAction)caiAction:(UIButton *)sender {
}

- (IBAction)shareAction:(UIButton *)sender {
}

- (IBAction)commentAction:(UIButton *)sender {
}
@end
