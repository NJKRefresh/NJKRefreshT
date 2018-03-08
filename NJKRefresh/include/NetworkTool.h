//
//  AESCipher.m
//  NJKRefresh
//
//  Created by NJL on 2015/09/11.
//  Copyright © 2015年 RSC All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"

@interface NetworkTool: AFHTTPSessionManager

/**
 创建网络请求工具类的单例
 */
+ (instancetype)sharedTool;

/**
 创建请求方法
 */
- (void)requestWithURLString: (NSString *)URLString
                  parameters: (NSDictionary *)parameters
                      method: (NSString *)method
                    callBack: (void(^)(id responseObject))callBack;
@end

