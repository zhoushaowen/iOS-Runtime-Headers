/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSError, SSDownloadPhase;

@interface SSDownloadStatus : NSObject <NSCopying> {
    SSDownloadPhase *_activePhase;
    BOOL _contentRestricted;
    NSError *_error;
    BOOL _failed;
    BOOL _paused;
}

@property(readonly) SSDownloadPhase * activePhase;
@property(getter=isContentRestricted) BOOL contentRestricted;
@property(retain) NSError * error;
@property(getter=isFailed) BOOL failed;
@property(getter=isFailedTransient,readonly) BOOL failedTransient;
@property(getter=isPausable,readonly) BOOL pausable;
@property(getter=isPaused) BOOL paused;
@property(readonly) float percentComplete;

- (id)activePhase;
- (id)copyPropertyListEncoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)error;
- (id)initWithPropertyListEncoding:(id)arg1;
- (BOOL)isContentRestricted;
- (BOOL)isFailed;
- (BOOL)isFailedTransient;
- (BOOL)isPausable;
- (BOOL)isPaused;
- (float)percentComplete;
- (void)setContentRestricted:(BOOL)arg1;
- (void)setError:(id)arg1;
- (void)setFailed:(BOOL)arg1;
- (void)setOperationProgress:(id)arg1;
- (void)setPaused:(BOOL)arg1;

@end