/* VoicemailOutOfOrderView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MobilePhone-Structs.h"

@class UIButton, UILabel, NSString, UIImageView;

__attribute__((visibility("hidden")))
@interface VoicemailOutOfOrderView : XXUnknownSuperclass {
	UIImageView* _spoolImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _callButton;
	NSString* _carrierPhoneNumber;
}
-(void)_callCustomerService:(id)service;
-(void)dealloc;
-(void)setFrame:(CGRect)frame;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end