//
//  MFClassDefinition.h
//  MangoFix
//
//  Created by jerry.yong on 2017/11/16.
//  Copyright © 2017年 yongpengliang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YTXMFFunctionDefinition.h"

@class YTXMFClassDefinition;

typedef NS_ENUM(NSInteger, AnnotationIfExprResult) {
	AnnotationIfExprResultNoComputed,
	AnnotationIfExprResultTrue,
	AnnotationIfExprResultFalse
};



typedef NS_ENUM(NSUInteger, MFPropertyModifier) {
	MFPropertyModifierMemStrong = 0x00,
	MFPropertyModifierMemWeak = 0x01,
	MFPropertyModifierMemCopy = 0x2,
	MFPropertyModifierMemAssign = 0x03,
	MFPropertyModifierMemMask = 0x0F,
	
	MFPropertyModifierAtomic = 0x00,
	MFPropertyModifierNonatomic =  0x10,
	MFPropertyModifierAtomicMask = 0xF0,
};


@interface MFMemberDefinition: NSObject

@property (strong, nonatomic) YTXMFExpression *annotationIfConditionExpr;
@property (weak, nonatomic) YTXMFClassDefinition *classDefinition;

@end


@interface MFPropertyDefinition: MFMemberDefinition

@property (assign, nonatomic) NSUInteger lineNumber;
@property (assign, nonatomic) MFPropertyModifier modifier;
@property (strong, nonatomic) YTXMFTypeSpecifier *typeSpecifier;
@property (copy, nonatomic) NSString *name;

@end


@interface MFMethodNameItem: NSObject

@property (copy, nonatomic) NSString *name;
@property (strong, nonatomic) MFParameter *param;

@end


@interface MFMethodDefinition: MFMemberDefinition

@property (assign, nonatomic) BOOL classMethod;
@property (strong, nonatomic) YTXMFFunctionDefinition *functionDefinition;

@end


@interface YTXMFClassDefinition : NSObject

@property (assign, nonatomic) NSUInteger lineNumber;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *superNmae;
@property (strong, nonatomic) NSArray<NSString *> *protocolNames;
@property (strong, nonatomic) NSArray<MFPropertyDefinition *> *properties;
@property (strong, nonatomic) NSArray<MFMethodDefinition *> *classMethods;
@property (strong, nonatomic) NSArray<MFMethodDefinition *> *instanceMethods;
@property (strong, nonatomic) YTXMFExpression *annotationIfConditionExpr;
@property (assign, nonatomic) AnnotationIfExprResult annotationIfExprResult;

@end















