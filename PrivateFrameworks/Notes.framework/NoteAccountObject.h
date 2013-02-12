/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NSDictionary, NSNumber, NSSet, NSString, NoteStoreObject;

@interface NoteAccountObject : NoteCollectionObject {
    NSDictionary *_constraints;
}

@property(retain) NSString * accountIdentifier;
@property int accountType;
@property(retain) NSDictionary * constraints;
@property(retain) NSString * constraintsPath;
@property(retain) NoteStoreObject * defaultStore;
@property(retain) NSString * name;
@property(retain) NSString * pathToConstraintsPlist;
@property(retain) NSSet * stores;
@property(retain) NSNumber * type;

- (int)accountType;
- (id)basicAccountIdentifier;
- (id)collectionInfo;
- (id)constraints;
- (void)dealloc;
- (void)didTurnIntoFault;
- (id)pathToConstraintsPlist;
- (id)predicateForNotes;
- (void)setAccountType:(int)arg1;
- (void)setConstraints:(id)arg1;
- (void)setPathToConstraintsPlist:(id)arg1;
- (BOOL)shouldMarkNotesAsDeleted;
- (id)storeForExternalId:(id)arg1;
- (BOOL)validateDefaultStore:(id*)arg1 error:(id*)arg2;

@end