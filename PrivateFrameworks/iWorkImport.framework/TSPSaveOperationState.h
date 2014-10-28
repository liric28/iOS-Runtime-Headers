/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMapTable;

@interface TSPSaveOperationState : NSObject {
    NSMapTable *_newDataStorages;
    int _sampleID;
    int _updateType;
}

@property(readonly) BOOL preserveDocumentUUID;
@property int sampleID;
@property(readonly) BOOL shouldUpdate;
@property(readonly) int updateType;

- (void).cxx_destruct;
- (void)addNewStorage:(id)arg1 forData:(id)arg2;
- (void)enumerateDatasAndStoragesUsingBlock:(id)arg1;
- (BOOL)hasNewStorageForData:(id)arg1;
- (id)init;
- (id)initWithUpdateType:(int)arg1;
- (BOOL)preserveDocumentUUID;
- (int)sampleID;
- (void)setSampleID:(int)arg1;
- (BOOL)shouldUpdate;
- (int)updateType;

@end