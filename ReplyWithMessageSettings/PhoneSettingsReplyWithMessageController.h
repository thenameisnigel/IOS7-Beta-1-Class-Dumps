/* PhoneSettingsReplyWithMessageController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class TUReplyWithMessageStore;

@interface PhoneSettingsReplyWithMessageController : XXUnknownSuperclass {
	TUReplyWithMessageStore* _replyWithMessageStore;
}
@property(readonly, assign) TUReplyWithMessageStore* replyWithMessageStore;
-(int)customReplyIndexOfSpecifier:(id)specifier;
-(id)customReply:(id)reply;
-(void)setCustomReply:(id)reply specifier:(id)specifier;
-(void)returnPressedAtEnd;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)specifiers;
-(void)dealloc;
@end