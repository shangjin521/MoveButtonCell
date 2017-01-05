//
//  PTSingletonManager.h
//  iPos
//
//  Created by wzp on 14-8-1.
//  Copyright (c) 2014年 Zhang Cheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PTSingletonManager : NSObject

// 主页 按钮 数组
@property (strong,nonatomic) NSMutableArray * showGridArray; // 标题
@property (strong,nonatomic) NSMutableArray * showImageGridArray; // 图片
@property (strong,nonatomic) NSMutableArray * showGridIDArray;  //button的ID

// 主页 更多 按钮 数组
@property (strong,nonatomic) NSMutableArray * moreshowGridArray; // 标题
@property (strong,nonatomic) NSMutableArray * moreshowImageGridArray; // 图片
@property (strong,nonatomic) NSMutableArray * moreshowGridIDArray;  //button的ID

+(PTSingletonManager *)shareInstance;

@end
