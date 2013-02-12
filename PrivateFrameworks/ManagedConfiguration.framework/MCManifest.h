/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableDictionary, NSString;

@interface MCManifest : NSObject {
    NSMutableDictionary *_manifest;
    NSString *_path;
    struct dispatch_queue_s { } *_syncQueue;
}

+ (void)_setManifestPath:(id)arg1;
+ (id)sharedManifest;

- (id)_manifest;
- (void)_setManifest:(id)arg1;
- (void)addIdentifierToManifest:(id)arg1 flag:(NSInteger)arg2;
- (id)allInstalledProfileIdentifiers;
- (void)dealloc;
- (id)identifiersOfProfilesWithFilterFlags:(NSInteger)arg1;
- (id)init;
- (void)invalidateCache;
- (id)manifest;
- (void)removeIdentifierFromManifest:(id)arg1;

@end