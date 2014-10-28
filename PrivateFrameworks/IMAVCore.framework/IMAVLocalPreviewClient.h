/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMAVCamera;

@interface IMAVLocalPreviewClient : NSObject <IMSystemMonitorListener> {
    BOOL _supportsPreview;
    BOOL _wantsPausedPreview;
    BOOL _wantsPreview;
    BOOL _wantsUnpausedPreview;
}

@property unsigned int cameraOrientation;
@property unsigned int cameraType;
@property(readonly) BOOL isPreviewRunning;
@property IMAVCamera * localCamera;
@property void* localVideoBackLayer;
@property void* localVideoLayer;
@property BOOL supportsPreview;

+ (id)sharedInstance;

- (void)_avDaemonConnected;
- (BOOL)_shouldPreviewBeRunning;
- (void)_updatePreviewState;
- (void)beginAnimationToPIP;
- (void)beginAnimationToPreview;
- (unsigned int)cameraOrientation;
- (unsigned int)cameraType;
- (void)dealloc;
- (void)didChangeLocalScreenAttributes:(id)arg1;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didPausePreview;
- (void)didReceiveCommError;
- (void)didReceiveErrorFromCamera:(unsigned int)arg1 error:(id)arg2;
- (void)didReceiveFirstPreviewFrameFromCamera:(unsigned int)arg1;
- (void)didStartPreview;
- (void)didStopPreview;
- (void)endAnimationToPIP;
- (void)endAnimationToPreview;
- (id)init;
- (BOOL)isPreviewRunning;
- (id)localCamera;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (void*)localVideoBackLayer;
- (void*)localVideoLayer;
- (void)pausePreview;
- (void)setCameraOrientation:(unsigned int)arg1;
- (void)setCameraType:(unsigned int)arg1;
- (void)setLocalCamera:(id)arg1;
- (void)setLocalScreenAttributes:(id)arg1;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)setSupportsPreview:(BOOL)arg1;
- (void)startPreview;
- (void)stopPreview;
- (BOOL)supportsPreview;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)systemScreenDidPowerDown;
- (void)systemScreenDidPowerUp;
- (void)unpausePreview;

@end