/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class ACDDatabase;

@interface ACDClientAuthorizationManager : NSObject
{
    ACDDatabase *_database;
}

- (void).cxx_destruct;
- (id)_setFromCSVString:(id)arg1;
- (id)_csvStringFromSet:(id)arg1;
- (id)removeAllClientAuthorizationsForAccountType:(id)arg1;
- (id)allAuthorizationsForAccountType:(id)arg1;
- (id)removeAuthorizationForClient:(id)arg1 accountType:(id)arg2;
- (id)setAuthorization:(id)arg1 forClient:(id)arg2 onAccountType:(id)arg3;
- (id)authorizationForClient:(id)arg1 accountType:(id)arg2;
- (id)initWithDatabase:(id)arg1;

@end

