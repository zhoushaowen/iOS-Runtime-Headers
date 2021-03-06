/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessFriendsNotificationBBDataProvider : NSObject <BBRemoteDataProvider, HDFitnessFriendsManagerReadyObserver> {
    NSMutableDictionary * _bulletinByFriendID;
    NSObject<OS_dispatch_queue> * _bulletinQueue;
    BBDataProviderConnection * _dataProviderConnection;
    BBDataProviderProxy * _dataProviderProxy;
    HDFitnessFriendsManager * _fitnessFriendsManager;
    int  notifyAchievementToken;
    int  notifyGoalCompletionToken;
    int  notifyWorkoutToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_appleWatchSourceRevision;
- (id)_contactWithName:(id)arg1;
- (id)_fakeAchievementDuringDayStartingAtDate:(id)arg1;
- (id)_fakeOutdoorRunningWorkoutDuringDayStartingAtDate:(id)arg1;
- (id)_fakeSnapshotForDate:(id)arg1;
- (id)_fakeWorkoutDuringDayStartingAtDate:(id)arg1;
- (void)_migrateSectionInfo;
- (id)_newPrepopulatedBulletinRequestForContact:(id)arg1;
- (id)_phoneNumberFromDefaults;
- (void)_queue_addBulletinRequest:(id)arg1 fromContact:(id)arg2 isFakedBulletin:(BOOL)arg3;
- (void)_queue_withdrawBulletinRequest:(id)arg1 fromFriendWithID:(id)arg2;
- (void)_showAchievementEarnedNotificationFromContact:(id)arg1 achievement:(id)arg2 isFakedBulletin:(BOOL)arg3;
- (void)_showFakeAchievementNotification;
- (void)_showFakeGoalCompletionNotification;
- (void)_showFakeWorkoutNotification;
- (void)_showGoalCompletionNotificationFromContact:(id)arg1 activitySnapshot:(id)arg2 isFakedBulletin:(BOOL)arg3;
- (void)_showWorkoutFinishedNotificationFromContact:(id)arg1 workout:(id)arg2 isFakedBulletin:(BOOL)arg3;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (void)dataProviderDidLoad;
- (void)dealloc;
- (id)defaultSectionInfo;
- (void)fitnessFriendsManagerReady:(id)arg1;
- (void)handleBulletinActionResponse:(id)arg1;
- (id)init;
- (id)sectionDisplayName;
- (id)sectionIcon;
- (id)sectionIdentifier;
- (void)showAchievementEarnedNotificationFromContact:(id)arg1 achievement:(id)arg2;
- (void)showGoalCompletionNotificationFromContact:(id)arg1 activitySnapshot:(id)arg2;
- (void)showWorkoutFinishedNotificationFromContact:(id)arg1 workout:(id)arg2;
- (id)sortDescriptors;
- (id)universalSectionIdentifier;

@end
