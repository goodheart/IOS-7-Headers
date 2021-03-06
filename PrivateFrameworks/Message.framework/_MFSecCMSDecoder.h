/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFCollectingDataConsumer.h"

@class NSArray;

@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer>
{
    long _SecCMSError;
    struct SecCmsMessageStr *_message;
    struct SecCmsDigestContextStr *_digest;
    NSArray *_signers;
    struct SecCmsSignedDataStr *_signedData;
    struct SecCmsEnvelopedDataStr *_envelopedData;
    BOOL _isEncrypted;
}

@property(readonly, nonatomic) NSArray *signers; // @synthesize signers=_signers;
@property(readonly, nonatomic) long lastSecCMSError; // @synthesize lastSecCMSError=_SecCMSError;
- (id)signedData;
- (BOOL)isContentSigned;
- (BOOL)isContentEncrypted;
- (id)verifyAgainstSenders:(id)arg1 signingError:(id *)arg2;
- (id)data;
- (void)done;
- (int)appendData:(id)arg1;
- (void)dealloc;
- (id)initWithPartData:(id)arg1 error:(id *)arg2;

@end

