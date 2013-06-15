/* SBBookmarkIcon.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBLeafIcon.h"
#import "SpringBoard-Structs.h"

@class SBBookmark;

__attribute__((visibility("hidden")))
@interface SBBookmarkIcon : SBLeafIcon {
	SBBookmark* _bookmark;
}
@property(retain, nonatomic) SBBookmark* bookmark;
-(id)folderFallbackTitle;
-(id)folderTitleOptions;
-(id)webClip;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithBookmark:(id)bookmark;
@end