/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCameraStream : PBCodable <NSCopying> {
    unsigned long long  _duration;
    unsigned int  _errorCode;
    struct { 
        unsigned int duration : 1; 
        unsigned int startupDelay : 1; 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int resolutionOnClose : 1; 
        unsigned int isLocal : 1; 
        unsigned int isStreamStarted : 1; 
    }  _has;
    BOOL  _isLocal;
    BOOL  _isStreamStarted;
    NSMutableArray * _resolutionCounts;
    int  _resolutionOnClose;
    NSString * _sessionID;
    unsigned long long  _startupDelay;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasIsLocal;
@property (nonatomic) BOOL hasIsStreamStarted;
@property (nonatomic) BOOL hasResolutionOnClose;
@property (nonatomic, readonly) BOOL hasSessionID;
@property (nonatomic) BOOL hasStartupDelay;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) BOOL isStreamStarted;
@property (nonatomic, retain) NSMutableArray *resolutionCounts;
@property (nonatomic) int resolutionOnClose;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) unsigned long long startupDelay;
@property (nonatomic) unsigned long long timestamp;

+ (Class)resolutionCountType;

- (void).cxx_destruct;
- (int)StringAsResolutionOnClose:(id)arg1;
- (void)addResolutionCount:(id)arg1;
- (void)clearResolutionCounts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (unsigned int)errorCode;
- (BOOL)hasDuration;
- (BOOL)hasErrorCode;
- (BOOL)hasIsLocal;
- (BOOL)hasIsStreamStarted;
- (BOOL)hasResolutionOnClose;
- (BOOL)hasSessionID;
- (BOOL)hasStartupDelay;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLocal;
- (BOOL)isStreamStarted;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)resolutionCountAtIndex:(unsigned int)arg1;
- (id)resolutionCounts;
- (unsigned int)resolutionCountsCount;
- (int)resolutionOnClose;
- (id)resolutionOnCloseAsString:(int)arg1;
- (id)sessionID;
- (void)setDuration:(unsigned long long)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasIsLocal:(BOOL)arg1;
- (void)setHasIsStreamStarted:(BOOL)arg1;
- (void)setHasResolutionOnClose:(BOOL)arg1;
- (void)setHasStartupDelay:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setIsLocal:(BOOL)arg1;
- (void)setIsStreamStarted:(BOOL)arg1;
- (void)setResolutionCounts:(id)arg1;
- (void)setResolutionOnClose:(int)arg1;
- (void)setSessionID:(id)arg1;
- (void)setStartupDelay:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)startupDelay;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end