//
//  VEServiceCenter.h
//  Vein
//
//  Created by StarNet on 7/29/15.
//  Copyright (c) 2015 StarNet. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VEServiceCenter : NSObject

+ (instancetype)defaultCenter;

/** 装载 */
- (void)setup;

/** 卸载 */
- (void)teardown;

/** 启动所有服务 */
- (void)startAllServices;

/** 关闭所有服务 */
- (void)stopAllServices;

@end
