//
//  Configure.h
//  MarkLite
//
//  Created by zhubch on 11/9/15.
//  Copyright © 2015 zhubch. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Configure : NSObject <NSCoding>

@property (nonatomic,strong) NSString *style;

@property (nonatomic,strong) NSString *themeColor;

@property (nonatomic,strong) NSString *fontName;

@property (nonatomic,strong) NSDictionary *highlightColor;

@property (nonatomic,assign) BOOL keyboardAssist;

@property (nonatomic,strong) NSDate *upgradeTime;

@property (nonatomic,assign) BOOL hasRated;

@property (nonatomic,assign) CGFloat imageResolution;

@property (nonatomic,strong) NSString *currentVerion;

+ (instancetype)sharedConfigure;

- (BOOL)saveToFile;

@end
