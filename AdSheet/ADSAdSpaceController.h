/* ADSAdSpaceController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AdSheet-Structs.h"

@class ADSSession, ADSAdImpressionController, NSURL, ADSCreativeController, NSTimer, ADSCreativeContainerView, ADSAdSpace, ADSActionViewController, NSString, ADSLayerHostWindow;

__attribute__((visibility("hidden")))
@interface ADSAdSpaceController : XXUnknownSuperclass {
	ADSSession* _session;
	ADSAdSpace* _adSpace;
	BOOL _actionInProgress;
	BOOL _clientHasScheduledAd;
	BOOL _isOpen;
	BOOL _holdingAssertion;
	BOOL _hasSentWillLoad;
	BOOL _devBackoffScheduled;
	NSString* _section;
	ADSAdImpressionController* _adImpressionController;
	NSString* _controllerIdentifier;
	int _adType;
	NSURL* _serverURL;
	ADSCreativeController* _currentCreativeController;
	ADSActionViewController* _currentActionViewController;
	long _adRequestToken;
	ADSCreativeContainerView* _creativeContainerView;
	ADSLayerHostWindow* _creativeViewWindow;
	NSTimer* _processVisibilityTimer;
	ADSAdImpressionController* _loadingAdImpressionController;
	double _actionViewControllerRequestTime;
	double _createdAt;
}
@property(assign, nonatomic) double createdAt;
@property(assign, nonatomic) BOOL devBackoffScheduled;
@property(assign, nonatomic) BOOL hasSentWillLoad;
@property(assign, nonatomic) BOOL holdingAssertion;
@property(retain, nonatomic) ADSAdImpressionController* loadingAdImpressionController;
@property(retain, nonatomic) NSTimer* processVisibilityTimer;
@property(readonly, assign, nonatomic) BOOL isOpen;
@property(retain, nonatomic) ADSLayerHostWindow* creativeViewWindow;
@property(retain, nonatomic) ADSCreativeContainerView* creativeContainerView;
@property(assign, nonatomic) long adRequestToken;
@property(assign, nonatomic) BOOL clientHasScheduledAd;
@property(readonly, assign, nonatomic) BOOL hasAd;
@property(assign, nonatomic) BOOL actionInProgress;
@property(assign, nonatomic) double actionViewControllerRequestTime;
@property(retain, nonatomic) ADSActionViewController* currentActionViewController;
@property(retain, nonatomic) ADSCreativeController* currentCreativeController;
@property(copy, nonatomic) NSString* section;
@property(copy, nonatomic) NSURL* serverURL;
@property(assign, nonatomic) int adType;
@property(readonly, assign, nonatomic) NSString* controllerIdentifier;
@property(readonly, assign, nonatomic) unsigned windowContextID;
@property(retain, nonatomic) ADSAdImpressionController* adImpressionController;
@property(assign, nonatomic) __weak ADSAdSpace* adSpace;
@property(assign, nonatomic) ADSSession* session;
-(id)description;
-(void)authoredTransitionComplete;
-(void)storyboardRequestsOpenURL:(id)url;
-(void)storyboardFinishedFirstLoad;
-(void)actionCompletedWithSystemEvent:(int)systemEvent;
-(void)actionViewControllerDidAppear;
-(void)dismissPortraitOnlyModalViewControllerAnimated:(BOOL)animated;
-(void)presentPortraitOnlyModalViewControllerAnimated:(BOOL)animated;
-(void)setClientStatusBarHidden:(BOOL)hidden;
-(void)cancelAction;
-(void)refuseAction;
-(void)presentInterstitialStoryboard;
-(void)actionViewControllerReadyForPresentation;
-(void)requestForActionViewControllerTimedOut;
-(void)beginActionFromFrame:(CGRect)frame tapLocation:(CGPoint)location;
-(void)updateCreativeFrame:(CGRect)frame;
-(void)interstitialRemovedFromSuperview;
-(void)cancelScheduledAd;
-(void)scheduleAd;
-(void)playbackFailedForURL:(id)url;
-(void)playbackFinishedForContentHash:(id)contentHash;
-(void)processAdSpaceVisibility:(int)visibility;
-(void)_scheduledProcessAdSpaceVisibility:(id)visibility;
-(double)_cyclingInterval;
-(void)_resetAdRequest;
-(void)_requestAd;
-(void)_cancelCurrentAdRequest;
-(void)_unloadCurrentAd;
-(void)willLoadAd;
-(void)_test_clearCurrentAd;
-(void)_handleAdError:(id)error forAdData:(id)adData;
-(void)_handleAdLoad;
-(void)loadAdData:(id)data error:(id)error;
-(void)clientApplicationWillEnterForeground;
-(void)clientApplicationDidEnterBackground;
-(void)close;
-(id)initForAdSpace:(id)adSpace session:(id)session;
-(void)dealloc;
@end