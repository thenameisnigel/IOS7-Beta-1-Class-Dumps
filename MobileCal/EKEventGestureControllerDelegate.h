/* EKEventGestureControllerDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"
#import "MobileCal-Structs.h"


@protocol EKEventGestureControllerDelegate <NSObject>
-(BOOL)didScrollWhenEventGestureController:(id)controller scrollTimerFiredToMoveLeft:(BOOL)moveLeft right:(BOOL)right vertically:(BOOL)vertically towardPoint:(CGPoint)point;
-(void)eventGestureController:(id)controller didSingleTapOccurrence:(id)occurrence;
-(void)eventGestureController:(id)controller didCancelEditingOccurrence:(id)occurrence fadedOut:(BOOL)anOut;
-(BOOL)eventGestureController:(id)controller didCommitOccurrence:(id)occurrence toDate:(double)date isAllDay:(BOOL)day span:(int)span;
-(void)eventGestureController:(id)controller didMoveToDate:(double)date isAllDay:(BOOL)day;
-(void)eventGestureController:(id)controller didSetUpAtDate:(double)date isAllDay:(BOOL)day;
-(float)eventGestureController:(id)controller heightForOccurrenceViewOfDuration:(double)duration allDay:(BOOL)day;
-(float)eventGestureController:(id)controller widthForOccurrenceViewOfDays:(unsigned)days;
-(CGPoint)eventGestureController:(id)controller pointAtDate:(double)date isAllDay:(BOOL)day;
-(double)eventGestureController:(id)controller dateAtPoint:(CGPoint)point;
-(BOOL)eventGestureController:(id)controller isAllDayAtPoint:(CGPoint)point requireInsistence:(BOOL)insistence;
-(void)eventGestureController:(id)controller addViewToScroller:(id)scroller isAllDay:(BOOL)day;
-(float)eventGestureController:(id)controller yPositionPerhapsMatchingAllDayOccurrence:(id)occurrence atPoint:(CGPoint)point;
-(id)eventGestureController:(id)controller occurrenceViewAtPoint:(CGPoint)point;
-(id)createEventForEventGestureController:(id)eventGestureController;
-(void)eventGestureController:(id)controller adjustDraggingViewForAllDay:(BOOL)allDay;
-(id)createOccurrenceViewForEventGestureController:(id)eventGestureController;
-(float)timedRegionOriginForEventGestureController:(id)eventGestureController;
-(id)occurrenceViewSuperviewForEventGestureController:(id)eventGestureController;
-(id)touchTrackingViewForEventGestureController:(id)eventGestureController;
@optional
-(BOOL)eventGestureController:(id)controller shouldFadeOccurrenceAfterFling:(id)fling;
-(BOOL)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)eventGestureController;
-(CGRect)marginFrameForEventGestureController:(id)eventGestureController;
-(float)eventGestureController:(id)controller convertXForMargin:(float)margin;
-(BOOL)eventGestureControllerShouldAllowLongPress:(id)eventGestureController;
-(BOOL)moreThanOneDayVisibleForEventGestureController:(id)eventGestureController;
-(float)computeXDragOffsetForEventGestureController:(id)eventGestureController currentX:(float)x startX:(float)x3;
-(float)horizontalOffsetForPagingForEventGestureController:(id)eventGestureController;
-(float)pageChangeMarginForEventGestureController:(id)eventGestureController;
@end