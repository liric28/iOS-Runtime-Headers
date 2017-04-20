/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKOpenFilesRequest : CATTaskRequest {
    BOOL  _autoAccept;
    NSSet * _fileItems;
    NSData * _previewImageData;
    NSString * _senderName;
    NSString * _sourceBundleIdentifier;
}

@property (nonatomic) BOOL autoAccept;
@property (nonatomic, copy) NSSet *fileItems;
@property (nonatomic, copy) NSData *previewImageData;
@property (nonatomic, copy) NSString *senderName;
@property (nonatomic, copy) NSString *sourceBundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)autoAccept;
- (void)encodeWithCoder:(id)arg1;
- (id)fileItems;
- (id)initWithCoder:(id)arg1;
- (id)previewImageData;
- (id)senderName;
- (void)setAutoAccept:(BOOL)arg1;
- (void)setFileItems:(id)arg1;
- (void)setPreviewImageData:(id)arg1;
- (void)setSenderName:(id)arg1;
- (void)setSourceBundleIdentifier:(id)arg1;
- (id)sourceBundleIdentifier;

@end