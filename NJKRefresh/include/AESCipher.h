//
//  AESCipher.m
//  NJKRefresh
//
//  Created by NJL on 2015/09/11.
//  Copyright © 2015年 RSC All rights reserved.
//

#import <Foundation/Foundation.h>

NSString * aesEncryptString(NSString *content, NSString *key);
NSString * aesDecryptString(NSString *content, NSString *key);

NSData * aesEncryptData(NSData *data, NSData *key);
NSData * aesDecryptData(NSData *data, NSData *key);
