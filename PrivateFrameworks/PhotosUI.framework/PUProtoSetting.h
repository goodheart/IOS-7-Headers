/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString;

@interface PUProtoSetting : NSObject
{
    NSString *_defaultsKey;
    NSString *_displayName;
    NSString *_displayDescription;
    unsigned int _type;
    id _defaultValue;
    NSDictionary *_possibleValues;
}

+ (id)settingWithKey:(id)arg1 name:(id)arg2 description:(id)arg3 type:(unsigned int)arg4 defaultValue:(id)arg5 values:(id)arg6;
@property(retain, nonatomic) NSDictionary *possibleValues; // @synthesize possibleValues=_possibleValues;
@property(retain, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *displayDescription; // @synthesize displayDescription=_displayDescription;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *defaultsKey; // @synthesize defaultsKey=_defaultsKey;
- (void).cxx_destruct;
- (id)description;
- (void)resetSetting;
@property(nonatomic) id currentObjectValue;
@property(readonly, nonatomic) NSString *currentDisplayValue;

@end
