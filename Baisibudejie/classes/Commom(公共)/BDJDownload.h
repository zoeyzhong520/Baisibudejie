//
//  BDJDownload.h
//  Baisibudejie
//
//  Created by qianfeng on 16/11/22.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#import <Foundation/Foundation.h>

//将闭包定义成一个类型
typedef void(^SUCCESSBLOCK)(NSData *data);
typedef void(^FAILBLOCK)(NSError *error);

@interface BDJDownload : NSObject

//+ (void)downloadWithURLString:(NSString *)urlString success:(SUCCESSBLOCK) finishBlock fail:(FAILBLOCK) failBlock;

+ (void)downloadWithURLString:(NSString *)urlString success:(void(^)(NSData *data)) finishBlock fail:(void(^)(NSError *error)) failBlock;

@end
