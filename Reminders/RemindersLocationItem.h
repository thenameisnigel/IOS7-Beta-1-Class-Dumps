/* RemindersLocationItem.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EKStructuredLocation, NSDictionary;

__attribute__((visibility("hidden")))
@interface RemindersLocationItem : XXUnknownSuperclass {
	BOOL _isLocationBeingDetermined;
	EKStructuredLocation* _location;
	NSDictionary* _addressDictionary;
	int _type;
}
@property(assign, nonatomic) int type;
@property(assign, nonatomic) BOOL isLocationBeingDetermined;
@property(retain, nonatomic) NSDictionary* addressDictionary;
@property(retain, nonatomic) EKStructuredLocation* location;
-(void).cxx_destruct;
-(void)reset;
-(id)stringForSubtitle;
-(id)label;
-(id)description;
@end