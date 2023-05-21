//
//  CWFollow_PersonalSettingModel.h
//  coinw
//
//  Created by DanielHuai on 2022/7/12.
//  Copyright © 2022 CoinW. All rights reserved.
//

#import "CWBaseModel.h"



@interface CWFollow_PersonalSettingModel : CWBaseModel
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, copy) NSString *imageURL;

//是否在审核中
@property (nonatomic, assign) NSInteger state;


+ (instancetype)modelWithTitle:(NSString *)title subTitle:(NSString*)subTitle imageURL:(NSString*)imageURL state:(NSInteger)state;

@end


