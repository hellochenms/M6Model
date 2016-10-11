//
//  SimpleModel.h
//  M6Model
//
//  Created by chenms on 16/10/10.
//  Copyright © 2016年 chenms.m2. All rights reserved.
//

#import <Foundation/Foundation.h>

@class SimpleInnerModel;

@interface SimpleModel : NSObject

@property (nonatomic) NSInteger i;
@property (nonatomic) double d;
@property (nonatomic) BOOL b;
@property (nonatomic, copy) NSString *string;
@property (nonatomic, copy) NSArray *array;
@property (nonatomic) SimpleInnerModel *innerModel;
@property (nonatomic) NSArray *innerModelArray;
@end

@interface SimpleInnerModel : NSObject
@property (nonatomic) NSInteger innerID;
@property (nonatomic, copy) NSString *innerName;
@end

@interface SubSimpleModel : SimpleModel
@property (nonatomic) NSInteger subID;
@end

@interface CustomPropertyMappingModel : NSObject
@property (nonatomic) NSInteger mID;
@property (nonatomic, copy) NSString *name;
@end
