/* ADJSODelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AdSheet-Structs.h"


@protocol ADJSODelegate
-(id)clientAuditToken;
-(int)interfaceOrientation;
-(void)dispatchDOMEventWithName:(id)name canBubble:(BOOL)bubble cancelable:(BOOL)cancelable;
-(void)scriptObjectContentSignalsReady:(id)ready;
-(id)scriptObject:(id)object requestsURLForString:(id)string allowOtherDomains:(BOOL)domains error:(id*)error;
-(void)javaScriptObjectDidFinishModalActivity:(id)javaScriptObject;
-(void)scriptObject:(id)object requestsPreview:(id)preview completion:(id)completion;
-(void)scriptObject:(id)object requestsDismissPopoverViewControllerAnimated:(BOOL)animated;
-(void)scriptObjectPopoverShouldResize:(id)scriptObjectPopover;
-(void)scriptObject:(id)object requestsPresentPopoverViewController:(id)controller fromRect:(CGRect)rect animated:(BOOL)animated tapDismissalHandler:(id)handler;
-(void)scriptObject:(id)object requestsDismissModalViewControllerAnimated:(BOOL)animated;
-(void)scriptObject:(id)object requestsPresentModalViewController:(id)controller animated:(BOOL)animated;
-(BOOL)javaScriptObjectShouldBeginModalActivity:(id)javaScriptObject;
-(void)scriptObjectDidTakeScreenShot:(id)scriptObject;
-(void)scriptObjectWillTakeScreenShot:(id)scriptObject;
-(void)scriptObjectRequestsGeolocation:(id)geolocation;
-(void)privilegedAdWantsToDismiss;
-(void)scriptObject:(id)object didChangeSupportedInterfaceOrientations:(unsigned)orientations;
-(unsigned)scriptObjectRequestsSupportedInterfaceOrientations:(id)orientations;
-(void)scriptObject:(id)object didReportSystemEventWithType:(int)type;
-(void)scriptObject:(id)object didReportClickEventWithContext:(id)context;
-(void)scriptObject:(id)object didCreateView:(id)view;
-(id)webViewForScriptObject:(id)scriptObject;
-(void)registerForAdDimissal:(id)adDimissal;
@end