//
//  GLBangumiBodyView.h
//  revaluation_Bili
//
//  Created by mac on 16/6/7.
//  Copyright © 2016年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GLBangumiBodyView : UIControl

+ (instancetype)GLBangumiBodyViewFromNib;

/** body */
@property (nonatomic, strong) NSDictionary *body;

@end
