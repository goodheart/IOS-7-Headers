/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iWorkImport/GQDDrawable.h>

#import "GQDNameMappable.h"

@class GQDWPExternalTextWrap;

__attribute__((visibility("hidden")))
@interface GQDGroup : GQDDrawable <GQDNameMappable>
{
    struct __CFArray *mDrawables;
    GQDWPExternalTextWrap *mExternalTextWrap;
}

+ (const struct StateSpec *)stateForReading;
- (id)externalTextWrap;
- (struct __CFArray *)drawables;
- (void)dealloc;

@end
