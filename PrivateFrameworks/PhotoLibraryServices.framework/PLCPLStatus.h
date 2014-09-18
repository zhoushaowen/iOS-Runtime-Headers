/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class <PLCPLStatusDelegate>, CPLStatus, NSDate, NSProgress, NSString;

@interface PLCPLStatus : NSObject <CPLStatusDelegate> {
    CPLStatus *_cplStatus;
    <PLCPLStatusDelegate> *_delegate;
    NSProgress *_progress;
    id _progressSubscriber;
    double _syncProgress;
}

@property(copy,readonly) NSString * debugDescription;
@property <PLCPLStatusDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) bool isExceedingQuota;
@property(readonly) bool isSyncing;
@property(retain,readonly) NSDate * lastSuccessfulSyncDate;
@property(setter=_setProgress:,retain) NSProgress * progress;
@property(readonly) Class superclass;
@property(readonly) double syncProgress;

- (void)_setProgress:(id)arg1;
- (void)_setSyncProgress:(double)arg1;
- (void)_setup;
- (void)_subscribeToProgress;
- (void)_teardown;
- (void)_unsubscribeFromProgress;
- (void)_updateSyncProgress;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isExceedingQuota;
- (bool)isSyncing;
- (id)lastSuccessfulSyncDate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progress;
- (void)setDelegate:(id)arg1;
- (void)statusDidChange:(id)arg1;
- (double)syncProgress;

@end