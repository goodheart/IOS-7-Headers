/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSURL.h"

@interface NSURL (NSURLExtras)
+ (id)_web_URLWithComponents:(CDStruct_2b292156)arg1;
+ (id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2;
- (BOOL)_web_isJavaScriptURL;
- (id)_web_suggestedFilenameWithMIMEType:(id)arg1;
- (id)_web_scriptIfJavaScriptURL;
- (CDStruct_2b292156)_web_URLComponents;
@end
