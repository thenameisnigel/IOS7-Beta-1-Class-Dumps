/* ASAccessoryLookupViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SSURLBag, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ASAccessoryLookupViewController : XXUnknownSuperclass {
	NSMutableDictionary* _requestParameters;
	NSString* _serialNumber;
	SSURLBag* _urlBag;
}
-(void).cxx_destruct;
-(id)_urlBag;
-(void)_dismissTransientViewController;
-(void)_attemptResolutionWithBagDictionary:(id)bagDictionary;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(id)initWithLookupURL:(id)lookupURL;
@end