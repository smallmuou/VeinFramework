//
//  VEBaseService.h
//  Vein
//
//  Created by StarNet on 7/29/15.
//  Copyright (c) 2015 StarNet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Vein/ServiceCenter.h>

@interface VEBaseService : NSObject

@property(nonatomic, strong) ServiceCenter*  serviceCenter;

+ (NSArray *) allSubclasses;

- (id)initWithServiceCenter:(ServiceCenter*)serviceCenter;

- (void)start;

- (void)stop;

@end
