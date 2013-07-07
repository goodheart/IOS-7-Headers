/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface VGLResourceFactory : NSObject
{
    struct recursive_mutex _mutex;
    NSMutableSet *_activeResources;
    NSMutableArray *_unusedResources;
    NSMutableDictionary *_programFactories;
    NSMutableDictionary *_shaderCache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)fragmentShaderWithName:(id)arg1;
- (id)vertexShaderWithName:(id)arg1;
- (id)programFactoryWithCohort:(id)arg1;
- (void)deleteUnusedResources;
- (void)deleteActiveResources;
- (void)moveUnusedResourceImpl:(id)arg1;
- (id)newResourceWithType:(int)arg1 count:(int)arg2;
- (void)dealloc;
- (id)init;

@end
