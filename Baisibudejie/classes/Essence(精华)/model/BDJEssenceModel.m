//
//  BDJEssenceModel.m
//  Baisibudejie
//
//  Created by qianfeng on 16/11/22.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#import "BDJEssenceModel.h"

@implementation BDJEssenceModel


@end


@implementation BDJEssenceInfo

@end


@implementation BDJEssenceDetail

+ (JSONKeyMapper *)keyMapper {
    return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{@"detailId":@"id"}];
    
}

@end


@implementation BDJEssenceTag

+ (JSONKeyMapper *)keyMapper {
    return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{@"tagId":@"id"}];
}

@end


@implementation BDJEssenceComment

+ (JSONKeyMapper *)keyMapper {
    return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{@"commentId":@"id"}];
}

@end


@implementation BDJEssenceUser


@end


@implementation BDJEssenceVideo


@end









