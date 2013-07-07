/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol ACUIIdentityPickerViewControllerDelegate <NSObject>
- (BOOL)allowEditingForIdentityPickerController:(id)arg1;
- (id)emailAddressesForIdentityPickerController:(id)arg1;
- (struct __SecTrust *)copyTrustForIdentityPickerController:(id)arg1 identity:(struct __SecIdentity *)arg2;
- (id)copyIdentitiesForIdentityPickerController:(id)arg1;
- (id)localizedSwitchNameForIdentityPickerController:(id)arg1;
- (void)identityPickerController:(id)arg1 setPropertyEnabled:(BOOL)arg2 withIdentity:(struct __SecIdentity *)arg3;
- (struct __SecIdentity *)selectedIdentityForIdentityPickerController:(id)arg1;
- (BOOL)isPropertyEnabledForIdentityPickerController:(id)arg1;
@end
