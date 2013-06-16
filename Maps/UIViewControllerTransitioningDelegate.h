/* UIViewControllerTransitioningDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol UIViewControllerTransitioningDelegate <NSObject>
@optional
-(id)interactionControllerForDismissal:(id)dismissal;
-(id)interactionControllerForPresentation:(id)presentation;
-(id)animationControllerForDismissedController:(id)dismissedController;
-(id)animationControllerForPresentedController:(id)presentedController presentingController:(id)controller sourceController:(id)controller3;
@end