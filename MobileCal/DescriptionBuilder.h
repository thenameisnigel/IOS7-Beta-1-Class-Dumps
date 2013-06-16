/* DescriptionBuilder.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface DescriptionBuilder : XXUnknownSuperclass {
	BOOL _sortedByKey;
	NSString* _superclassDescription;
	NSString* _keyDelimiter;
	NSMutableDictionary* _descriptionUnderConstruction;
}
@property(retain, nonatomic) NSMutableDictionary* descriptionUnderConstruction;
@property(copy, nonatomic) NSString* keyDelimiter;
@property(copy, nonatomic) NSString* superclassDescription;
@property(assign, nonatomic) BOOL sortedByKey;
-(void).cxx_destruct;
-(id)build;
-(void)setKey:(id)key withTimeInterval:(double)timeInterval;
-(void)setKey:(id)key withSize:(unsigned long)size;
-(void)setKey:(id)key withSelector:(SEL)selector;
-(void)setKey:(id)key withProcessID:(int)processID;
-(void)setKey:(id)key withPointerAddress:(const void*)pointerAddress;
-(void)setKey:(id)key withMachPort:(unsigned)machPort;
-(void)setKey:(id)key withClass:(Class)aClass;
-(void)setKey:(id)key withUnsignedShort:(unsigned short)unsignedShort;
-(void)setKey:(id)key withUnsignedLongLong:(unsigned long long)unsignedLongLong;
-(void)setKey:(id)key withUnsignedLong:(unsigned long)unsignedLong;
-(void)setKey:(id)key withUnsignedInteger:(unsigned)unsignedInteger;
-(void)setKey:(id)key withUnsignedInt:(unsigned)unsignedInt;
-(void)setKey:(id)key withUnsignedChar:(unsigned char)unsignedChar;
-(void)setKey:(id)key withShort:(short)aShort;
-(void)setKey:(id)key withLongLong:(long long)longLong;
-(void)setKey:(id)key withLong:(long)aLong;
-(void)setKey:(id)key withInteger:(int)integer;
-(void)setKey:(id)key withInt:(int)int;
-(void)setKey:(id)key withFloat:(float)aFloat;
-(void)setKey:(id)key withDouble:(double)aDouble;
-(void)setKey:(id)key withCharArray:(const char*)charArray;
-(void)setKey:(id)key withChar:(BOOL)aChar;
-(void)setKey:(id)key withBoolean:(BOOL)boolean;
-(void)setKey:(id)key withString:(id)string;
-(void)setKey:(id)key withSet:(id)set;
-(void)setKey:(id)key withObject:(id)object;
-(void)setKey:(id)key withEnumNumericalValue:(int)enumNumericalValue andStringValue:(id)value;
-(void)setKey:(id)key withDictionary:(id)dictionary;
-(void)setKey:(id)key withDate:(id)date;
-(void)setKey:(id)key withArray:(id)array;
-(id)description;
-(id)initWithSuperclassDescription:(id)superclassDescription;
-(id)init;
@end