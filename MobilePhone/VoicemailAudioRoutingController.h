/* VoicemailAudioRoutingController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIActionSheetDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AudioDeviceController;

__attribute__((visibility("hidden")))
@interface VoicemailAudioRoutingController : XXUnknownSuperclass <UIActionSheetDelegate> {
	id _delegate;
	AudioDeviceController* _deviceController;
}
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)updateAvailableAudioRoutes;
-(void)promptForAudioDeviceOnView:(id)audioDeviceOnView;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
-(id)initWithAudioDeviceController:(id)audioDeviceController;
@end