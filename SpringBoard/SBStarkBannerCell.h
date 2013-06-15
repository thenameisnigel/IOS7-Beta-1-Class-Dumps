/* SBStarkBannerCell.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIBannerView.h"
#import "SpringBoard-Structs.h"
#import "SBCollectionViewCell.h"

@class SBBannerContextView, UIView;

__attribute__((visibility("hidden")))
@interface SBStarkBannerCell : SBCollectionViewCell <SBUIBannerView> {
	SBBannerContextView* _contextView;
	UIView* _darkeningOverlayView;
}
-(id)bannerContext;
-(void)prepareForReuse;
-(void)_didSetHighlighted:(BOOL)highlighted;
-(void)noteDidDismiss;
-(void)noteWillDismissWithReason:(int)note;
-(void)noteDidAppear;
-(void)noteWillAppear;
-(void)setBannerContext:(id)context;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end