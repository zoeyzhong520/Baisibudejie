//
//  BDJEsenceModel.h
//  百思不得姐
//
//  Created by gaokunpeng on 2016/11/22.
//  Copyright © 2016年 gaokunpeng. All rights reserved.
//

#import <JSONModel/JSONModel.h>

@class BDJEssenceInfo;
@class BDJEssenceUser;
@class BDJEssenceVideo;
@class BDJEssenceImage;
@class BDJEssenceAudio;

@protocol BDJEssenceDetail;
@protocol BDJEssenceTag;
@protocol NSString;
@protocol BDJEssenceComment;


@interface BDJEssenceModel : JSONModel

@property (nonatomic, strong)BDJEssenceInfo<Optional> *info;
@property (nonatomic, strong)NSArray<Optional, BDJEssenceDetail> *list;

@end

@interface BDJEssenceInfo : JSONModel

@property (nonatomic, strong)NSNumber<Optional>  *count;
@property (nonatomic, strong)NSNumber<Optional>  *np;

@end


@interface BDJEssenceDetail : JSONModel

@property (nonatomic,copy)NSString<Optional> *bookmark;
@property (nonatomic,copy)NSString<Optional> *comment;
@property (nonatomic,strong)NSNumber<Optional> *down;

@property (nonatomic,strong)NSNumber<Optional> *forward;
@property (nonatomic,copy)NSString<Optional> *detailId;
@property (nonatomic,copy)NSString<Optional> *passtime;

@property (nonatomic,copy)NSString<Optional> *share_url;
@property (nonatomic,strong)NSNumber<Optional> *status;
@property (nonatomic,strong)NSArray<Optional,BDJEssenceTag> *tags;

@property (nonatomic,copy)NSString<Optional> *text;
@property (nonatomic,strong)NSArray<Optional,BDJEssenceComment> *top_comments;
@property (nonatomic,copy)NSString<Optional> *type;

@property (nonatomic, strong)BDJEssenceUser<Optional> *u;
@property (nonatomic, copy)NSString<Optional> *up;
@property (nonatomic, strong)BDJEssenceVideo<Optional> *video;

//图片数据
@property (nonatomic, strong)BDJEssenceImage<Optional> *image;

//音频数据
@property (nonatomic, strong)BDJEssenceAudio<Optional> *audio;



/**用来设置和获取对应cell的高度*/
@property (nonatomic, strong)NSNumber<Optional>  *cellHeight;

@end

@interface BDJEssenceAudio : JSONModel

@property (nonatomic, strong)NSArray<Optional,NSString> *audio;
@property (nonatomic, strong)NSArray<Optional,NSString> *download_url;
@property (nonatomic, strong)NSNumber<Optional,NSString> *duration;

@property (nonatomic, strong)NSNumber<Optional,NSString> *height;
@property (nonatomic, strong)NSNumber<Optional,NSString> *playcount;
@property (nonatomic, strong)NSNumber<Optional,NSString> *playfcount;

@property (nonatomic, strong)NSArray<Optional,NSString> *thumbnail;
@property (nonatomic, strong)NSArray<Optional,NSString> *thumbnail_small;
@property (nonatomic, strong)NSNumber<Optional,NSString> *width;

@end

/*
 audio" : {
 "audio" : [
 "http://wvoice.spriteapp.cn/voice/2016/1124/5836a6f7c6ff1.mp3"
 ],
 "download_url" : [
 "http://wimg.spriteapp.cn/picture/2016/1124/5836a6f7636ec_d.jpg",
 "http://dimg.spriteapp.cn/picture/2016/1124/5836a6f7636ec_d.jpg",
 "http://wimg.spriteapp.cn/picture/2016/1124/5836a6f7636ec.jpg",
 "http://dimg.spriteapp.cn/picture/2016/1124/5836a6f7636ec.jpg"
 ],
 "duration" : 229,
 "height" : 1080,
 "playcount" : 356,
 "playfcount" : 61,
 "thumbnail" : [
 "http://wimg.spriteapp.cn/picture/2016/1124/5836a6f7636ec.jpg",
 "http://dimg.spriteapp.cn/picture/2016/1124/5836a6f7636ec.jpg"
 ],
 "thumbnail_small" : [
 "http://wimg.spriteapp.cn/crop/150x150/picture/2016/1124/5836a6f7636ec.jpg",
 "http://dimg.spriteapp.cn/crop/150x150/picture/2016/1124/5836a6f7636ec.jpg"
 ],
 "width" : 1080
 },
 
 */

//图片数据
@interface BDJEssenceImage : JSONModel

@property (nonatomic, strong)NSArray<Optional> *big;
@property (nonatomic, strong)NSArray<Optional> *download_url;
@property (nonatomic, strong)NSNumber<Optional> *height;

@property (nonatomic, strong)NSArray<Optional,NSString> *medium;
@property (nonatomic, strong)NSArray<Optional,NSString> *small;
@property (nonatomic, strong)NSArray<Optional,NSString> *thumbnail_small;

@property (nonatomic, strong)NSNumber<Optional> *width;



@end

@interface BDJEssenceTag : JSONModel

@property (nonatomic,strong)NSNumber<Optional> *tagId;
@property (nonatomic,copy)NSString<Optional> *name;

@end

@interface BDJEssenceComment : JSONModel

@property (nonatomic, copy)NSString<Optional> *cmt_type;
@property (nonatomic, copy)NSString<Optional> *content;
@property (nonatomic, strong)NSNumber<Optional> *commentId;

@property (nonatomic, strong)NSNumber<Optional> *like_count;
@property (nonatomic, copy)NSString<Optional> *passtime;
@property (nonatomic, strong)NSNumber<Optional> *precid;

@property (nonatomic, strong)NSNumber<Optional> *preuid;
@property (nonatomic, strong)NSNumber<Optional> *status;
@property (nonatomic, strong)BDJEssenceUser<Optional> *u;

@property (nonatomic, strong)NSNumber<Optional> *voicetime;
@property (nonatomic, copy)NSString<Optional> *voiceuri;

@end

@interface BDJEssenceUser : JSONModel

@property (nonatomic, strong)NSArray<NSString, Optional> *header;
@property (nonatomic, strong)NSNumber<Optional> *is_vip;
@property (nonatomic, copy)NSString<Optional> *name;

@property (nonatomic, copy)NSString<Optional> *room_icon;
@property (nonatomic, copy)NSString<Optional> *room_name;
@property (nonatomic, copy)NSString<Optional> *room_role;

@property (nonatomic, copy)NSString<Optional> *room_url;
@property (nonatomic, copy)NSString<Optional> *sex;
@property (nonatomic, copy)NSString<Optional> *uid;

@end

@interface BDJEssenceVideo : JSONModel

@property (nonatomic, copy)NSArray<Optional, NSString> *download;
@property (nonatomic, strong)NSNumber<Optional> *duration;
@property (nonatomic, strong)NSNumber<Optional> *height;

@property (nonatomic, strong)NSNumber<Optional> *playcount;
@property (nonatomic, strong)NSNumber<Optional> *playfcount;
@property (nonatomic, copy)NSArray<Optional, NSString> *thumbnail;

@property (nonatomic, copy)NSArray<Optional, NSString> *thumbnail_small;
@property (nonatomic, copy)NSArray<Optional, NSString> *video;
@property (nonatomic, strong)NSNumber<Optional> *width;

@end




