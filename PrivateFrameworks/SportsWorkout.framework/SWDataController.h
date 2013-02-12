/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSDictionary, NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface SWDataController : NSObject {
    struct dispatch_queue_s { } *_dispatchQueue;
    BOOL _isPerformingMigration;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    int _priorMigrationVersionKey;
}

@property(readonly) NSDictionary * achievements;

+ (id)sharedDataController;

- (id)_achievementsForName:(id)arg1 sensorSerialNumber:(id)arg2;
- (void)_addValue:(id)arg1 toAchievementName:(id)arg2 sensorSerialNumber:(id)arg3;
- (id)_allWorkoutsWithSyncState:(int)arg1;
- (id)_databasePropertiesForName:(id)arg1;
- (void)_databaseProperty:(id)arg1 setName:(id)arg2 andIntegerValue:(int)arg3;
- (void)_deleteXMLFileForWorkout:(id)arg1;
- (id)_dictionaryForWorkoutRecord:(id)arg1;
- (id)_entitiesOfTypeName:(id)arg1 forPropertyName:(id)arg2 isNull:(BOOL)arg3;
- (id)_entitiesOfTypeName:(id)arg1 forPropertyName:(id)arg2 values:(id)arg3;
- (void)_fixupDatabase;
- (void)_importWorkoutFilesFromDirectory:(id)arg1;
- (void)_migrateBests;
- (void)_migrateCalibrationData;
- (void)_migrateTotals;
- (void)_migrateWorkoutData;
- (void)_notifyDataStoreChanged;
- (id)_onQueue_achievements;
- (id)_onQueue_calibrationDataForSensorSerialNumber:(id)arg1 walkCalibrationDate:(id*)arg2 runCalibrationDate:(id*)arg3;
- (id)_pathOfSnapshotForWorkout:(id)arg1;
- (id)_plistForDatabaseProperty:(id)arg1;
- (void)_registerEmpedIdWithCheckpointIfNecessary:(id)arg1;
- (void)_removeSnapshotForWorkout:(id)arg1;
- (void)_replaceValueIfLarger:(id)arg1 forAchievementName:(id)arg2 sensorSerialNumber:(id)arg3;
- (void)_replaceValueIfSmaller:(id)arg1 forAchievementName:(id)arg2 sensorSerialNumber:(id)arg3;
- (id)_runWorkoutFileName;
- (void)_saveRunAchievementsToDatabase:(id)arg1 forPreset:(id)arg2 sensorSerialNumber:(id)arg3;
- (void)_saveRunWorkout:(id)arg1 preset:(id)arg2;
- (void)_saveRunWorkoutToDatabase:(id)arg1 xmlFileName:(id)arg2;
- (void)_setCalibrationData:(id)arg1 forSensorSerialNumber:(id)arg2 walkCalibrationDate:(id)arg3 runCalibrationDate:(id)arg4;
- (id)_snapshotForDictionary:(id)arg1;
- (BOOL)_workoutIsSynced:(id)arg1;
- (void)_writeBestsForSensorSerialNumber:(id)arg1;
- (id)achievements;
- (id)allWorkouts;
- (id)calibrationDataForSensorSerialNumber:(id)arg1 walkCalibrationDate:(id*)arg2 runCalibrationDate:(id*)arg3;
- (void)clearAchievementForName:(id)arg1;
- (void)dealloc;
- (void)deleteAllWorkouts;
- (void)deleteWorkoutForGUID:(id)arg1;
- (void)importExistingWorkoutSnapshotsWithCompletionBlock:(id)arg1;
- (id)init;
- (id)latestWorkout;
- (void)performMigrationIfNecessary;
- (void)saveRunWorkout:(id)arg1 preset:(id)arg2 completionBlock:(id)arg3;
- (void)saveWorkoutSnapshot:(id)arg1 preset:(id)arg2;
- (void)setCalibrationData:(id)arg1 forSensorSerialNumber:(id)arg2 date:(id)arg3 isWalk:(BOOL)arg4;
- (id)syncedWorkouts;
- (id)unsyncedWorkouts;

@end