/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CBCentral, CBMutableCharacteristic, CBPeripheralManager, NSData, NSMutableData;

@interface TRBTServerPairingSession : NSObject
{
    CDStruct_a554bdc7 *_aesContext;
    unsigned char _cancelled;
    CBMutableCharacteristic *_cancellationCharacteristic;
    CBCentral *_central;
    NSMutableData *_mutableInputData;
    unsigned int _mutableInputDataExpectedLength;
    NSData *_outputData;
    CBMutableCharacteristic *_pairingCharacteristic;
    struct AirPlayPairingSessionPrivate *_pairingSession;
    int _pairingState;
    CBPeripheralManager *_peripheralManager;
    id <TRBTServerPairingSessionDelegate> _delegate;
}

@property(readonly, nonatomic) CBCentral *central; // @synthesize central=_central;
@property(retain, nonatomic) CBMutableCharacteristic *cancellationCharacteristic; // @synthesize cancellationCharacteristic=_cancellationCharacteristic;
@property(retain, nonatomic) CBMutableCharacteristic *pairingCharacteristic; // @synthesize pairingCharacteristic=_pairingCharacteristic;
@property(nonatomic) __weak id <TRBTServerPairingSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateCharacteristicValueForOutputData:(id)arg1;
- (long)_runVerifyStepWithInput:(const void *)arg1 inputLength:(unsigned long)arg2 outputData:(id *)arg3;
- (long)_runSetupStepWithInput:(const void *)arg1 inputLength:(unsigned long)arg2 outputData:(id *)arg3;
- (id)_inputDataForWriteRequests:(id)arg1;
- (void)_didReceiveEncryptedData:(id)arg1;
- (void)_didFinishPairing;
- (void)handleWriteRequests:(id)arg1;
- (void)handleReadRequest:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithCentral:(id)arg1 peripheralManager:(id)arg2;

@end

