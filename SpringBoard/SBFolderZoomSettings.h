/* SBFolderZoomSettings.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBScaleZoomSettings.h"

@class SBAnimationSettings;

__attribute__((visibility("hidden")))
@interface SBFolderZoomSettings : SBScaleZoomSettings {
	SBAnimationSettings* _innerFolderFadeSettings;
}
@property(retain) SBAnimationSettings* innerFolderFadeSettings;
+(id)settingsControllerModule;
-(void)setDefaultValues;
@end