/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <StoreKit/SKRequest.h>

@class NSDictionary;

@interface SKReceiptRefreshRequest : SKRequest
{
    NSDictionary *_properties;
}

@property(readonly, nonatomic) NSDictionary *receiptProperties; // @synthesize receiptProperties=_properties;
- (BOOL)_wantsVPP;
- (BOOL)_wantsRevoked;
- (BOOL)_wantsExpired;
- (void)_sendXPCMessage;
- (void)_handleReply:(id)arg1;
- (void)dealloc;
- (id)initWithReceiptProperties:(id)arg1;

@end

