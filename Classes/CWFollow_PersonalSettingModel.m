//
//  CWFollow_PersonalSettingModel.m
//  coinw
//
//  Created by DanielHuai on 2022/7/12.
//  Copyright © 2022 CoinW. All rights reserved.
//

#import "CWFollow_PersonalSettingModel.h"

@implementation CWFollow_PersonalSettingModel
+ (instancetype)modelWithTitle:(NSString *)title subTitle:(NSString*)subTitle imageURL:(NSString*)imageURL state:(NSInteger)state{
    CWFollow_PersonalSettingModel *result = [CWFollow_PersonalSettingModel new];
    result.title = title;
    result.subTitle = subTitle;
    result.imageURL = imageURL;
    result.state = state;
    return result;
}
@end
