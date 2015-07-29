//
//  UIAlertView+Vein.h
//  Vein
//
//  Created by StarNet on 7/29/15.
//  Copyright (c) 2015 StarNet. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIAlertView (Vein)

+ (instancetype)showWithTitle:(NSString* )title message:(NSString* )message;

- (NSInteger)addButtonWithTitle:(NSString *)title action:(void (^)(void))block;

@end
