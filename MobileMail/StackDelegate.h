/* StackDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol StackDelegate <NSObject>
@optional
-(void)stackController:(id)controller willRemoveViewForItem:(id)item;
-(void)stackController:(id)controller willDisplayView:(id)view forItem:(id)item;
-(void)stackController:(id)controller willStackView:(id)view forItem:(id)item;
-(void)stackController:(id)controller dataLoadTimedOutInView:(id)view forItem:(id)item;
-(double)stackController:(id)controller delayForItem:(id)item animation:(int)animation;
-(void)stackControllerDidStopAnimatingViews:(id)stackController;
-(void)stackControllerWillStartAnimatingViews:(id)stackController;
-(void)stackControllerDidStopStackingViews:(id)stackController;
-(void)stackControllerWillStartStackingViews:(id)stackController;
@end