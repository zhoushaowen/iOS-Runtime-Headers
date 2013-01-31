/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSFetchRequest, NSOrderedSet;

@interface PLFetchingAlbum : _PLFetchingAlbum <PLAssetContainerDisplayCount> {
    unsigned int _countForDisplay;
    unsigned int _photosCount;
    unsigned int _videosCount;
    int _emptyState;
}

@property(retain) NSFetchRequest * fetchRequest;
@property(readonly) BOOL hasAssetsCache;
@property(retain) NSOrderedSet * fetchedAssets;
@property(readonly) unsigned int countForDisplay;

+ (BOOL)contextShouldIgnoreChangesForFetchRequest;
+ (BOOL)contextShouldIgnoreChangesForFetchedAssetsSet;
+ (BOOL)contextShouldIgnoreChangesForFetchedAssets;

- (unsigned int)count;
- (BOOL)mayHaveAssetsInCommon:(id)arg1;
- (id)fastPointerAccessSetForAssets:(id)arg1;
- (BOOL)hasAssetsCache;
- (unsigned int)countForAssetsOfKind:(int)arg1;
- (void)setAssets:(id)arg1;
- (unsigned int)countForDisplay;
- (unsigned int)_fetchedCountForAssetsOfKind:(int)arg1;
- (void)setupFetchRequest;
- (unsigned int)batchSize;
- (void)updateSnapshotAndClearCaches:(id)arg1;
- (id)primitiveAssets;
- (void)setKeyAsset:(id)arg1;
- (id)keyAsset;
- (id)mutableAssets;
- (id)assets;
- (void)batchFetchAssets:(id)arg1;
- (BOOL)canPerformEditOperation:(int)arg1;
- (BOOL)isEmpty;
- (void)awakeFromInsert;
- (void)setFetchRequest:(id)arg1;
- (void)didTurnIntoFault;
- (id)fetchRequest;
- (void)awakeFromFetch;

@end