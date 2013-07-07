/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol ACUIAccountViewsProviderProtocol <NSObject>
- (id)configurationInfoForCreatingAccountWithType:(id)arg1;
- (id)configurationInfoForViewingAccount:(id)arg1;
- (Class)viewControllerClassForCreatingAccountWithType:(id)arg1;
- (Class)viewControllerClassForViewingAccount:(id)arg1;
- (id)supportedAccountTypeIdentifiers;
@end
