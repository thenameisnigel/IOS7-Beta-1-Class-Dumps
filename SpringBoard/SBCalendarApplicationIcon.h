/* SBCalendarApplicationIcon.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBApplicationIcon.h"


__attribute__((visibility("hidden")))
@interface SBCalendarApplicationIcon : SBApplicationIcon {
}
-(void)_drawIconIntoCurrentContextWithImageSize:(CGSize)imageSize iconBase:(id)base;
-(BOOL)canGenerateImageInBackgroundForFormat:(int)format;
-(id)getUnmaskedIconImage:(int)image;
-(id)generateIconImage:(int)image;
-(void)localeChanged;
-(void)dealloc;
-(id)initWithApplication:(id)application;
@end