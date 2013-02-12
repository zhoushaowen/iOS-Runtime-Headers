/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@class <APSConnectionDelegate>, NSArray, NSLock, NSMutableDictionary, NSString;

@interface APSConnection : NSObject {
    unsigned int _connectionPort;
    NSString *_connectionPortName;
    unsigned int _connectionServerPort;
    struct __CFMachPort { } *_connectionSeverCFMachPort;
    <APSConnectionDelegate> *_delegate;
    BOOL _enableCriticalReliability;
    NSArray *_enabledTopics;
    NSString *_environmentName;
    NSArray *_ignoredTopics;
    NSLock *_lock;
    struct __CFRunLoopSource { } *_runLoopSource;
    int _serverPID;
    NSMutableDictionary *_subtopics;
}

@property <APSConnectionDelegate> * delegate;
@property(readonly) int serverPID;

+ (id)connectionsDebuggingState;
+ (struct __SecIdentity { }*)copyIdentity;
+ (double)keepAliveIntervalForEnvironmentName:(id)arg1;

- (void)_connect;
- (void)_connectionServerPortInvalidated;
- (id)_dataForPropertyList:(id)arg1;
- (void)_deliverMessageForTopic:(id)arg1 userInfo:(id)arg2;
- (void)_deliverPublicToken:(id)arg1;
- (void)_disconnect;
- (void)_sendEnableCriticalReliability;
- (void)_sendEnabledTopics;
- (void)_sendIgnoredTopics;
- (void)dealloc;
- (id)delegate;
- (BOOL)hasIdentity;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;
- (id)initWithEnvironmentName:(id)arg1;
- (id)publicToken;
- (void)removeFromRunLoop;
- (void)scheduleInRunLoop:(id)arg1;
- (int)serverPID;
- (void)setDelegate:(id)arg1;
- (void)setEnableCriticalReliability:(BOOL)arg1;
- (void)setEnabledTopics:(id)arg1;
- (void)setIgnoredTopics:(id)arg1;
- (void)setSubtopic:(id)arg1 forEnabledTopic:(id)arg2;

@end