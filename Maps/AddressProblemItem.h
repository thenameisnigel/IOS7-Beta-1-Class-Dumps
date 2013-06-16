/* AddressProblemItem.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface AddressProblemItem : XXUnknownSuperclass {
	NSString* _title;
	NSString* _value;
	NSString* _originalValue;
	NSString* _objectName;
	int _addressType;
	NSMutableArray* _items;
	BOOL isMarkedAsWrong;
}
@property(retain, nonatomic) NSMutableArray* items;
@property(assign, nonatomic) int addressType;
@property(assign, nonatomic) BOOL isMarkedAsWrong;
@property(retain, nonatomic) NSString* objectName;
@property(retain, nonatomic) NSString* originalValue;
@property(retain, nonatomic) NSString* value;
@property(retain, nonatomic) NSString* title;
+(id)addressItemWithTitle:(id)title objectName:(id)name addressType:(int)type;
-(void)dealloc;
-(BOOL)isEdited;
-(id)initWithTitle:(id)title objectName:(id)name addressType:(int)type;
@end