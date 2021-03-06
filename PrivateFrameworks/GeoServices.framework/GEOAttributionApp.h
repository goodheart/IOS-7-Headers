/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSMutableArray, NSString;

@interface GEOAttributionApp : PBCodable
{
    NSString *_appBundleIdentifier;
    NSMutableArray *_handledSchemes;
}

@property(retain, nonatomic) NSMutableArray *handledSchemes; // @synthesize handledSchemes=_handledSchemes;
@property(retain, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)handledSchemesAtIndex:(unsigned int)arg1;
- (unsigned int)handledSchemesCount;
- (void)addHandledSchemes:(id)arg1;
- (void)clearHandledSchemes;
- (void)dealloc;

@end

