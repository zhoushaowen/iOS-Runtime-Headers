/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface WirelessDataUsageWorkspace : NSObject {
    AnalyticsWorkspace * _analyticsWorkspace;
    BOOL  _pendingProcessAnalytics;
    ProcessAnalytics * _processAnalytics;
    NSNumber * _subscriberTag;
}

@property (nonatomic, retain) AnalyticsWorkspace *analyticsWorkspace;
@property BOOL pendingProcessAnalytics;
@property (nonatomic, retain) ProcessAnalytics *processAnalytics;
@property (nonatomic, retain) NSNumber *subscriberTag;

- (void).cxx_destruct;
- (id)analyticsWorkspace;
- (BOOL)pendingProcessAnalytics;
- (id)processAnalytics;
- (void)setAnalyticsWorkspace:(id)arg1;
- (void)setPendingProcessAnalytics:(BOOL)arg1;
- (void)setProcessAnalytics:(id)arg1;
- (void)setSubscriberTag:(id)arg1;
- (id)subscriberTag;
- (BOOL)valid;

@end