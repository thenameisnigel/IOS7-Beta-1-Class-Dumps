/* StarkStepTableViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "StarkTableViewCell.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface StarkStepTableViewCell : StarkTableViewCell {
	NSArray* _instructionsAlternatives;
}
@property(copy, nonatomic) NSArray* instructionsAlternatives;
+(Class)layoutClass;
-(void)layoutSubviews;
-(void)setInstructions:(id)instructions alternatives:(id)alternatives;
@end