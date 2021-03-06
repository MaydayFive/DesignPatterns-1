//
//  Invoker.h
//  命令模式
//
//  Created by 饶君波 on 2018/8/29.
//  Copyright © 2018年 饶君波. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CommandProtocol.h"

@interface Invoker : NSObject

+ (instancetype)sharedInstance;

- (void)goBack;

- (void)addAndExcute:(id<CommandProtocol>)command;

@end
