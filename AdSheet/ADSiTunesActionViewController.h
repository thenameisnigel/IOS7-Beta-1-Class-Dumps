/* ADSiTunesActionViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SKStoreProductViewControllerDelegate.h"
#import "ADSActionViewController.h"

@class SKStoreProductViewController;

__attribute__((visibility("hidden")))
@interface ADSiTunesActionViewController : ADSActionViewController <SKStoreProductViewControllerDelegate> {
	SKStoreProductViewController* _storeProductViewController;
}
@property(retain, nonatomic) SKStoreProductViewController* storeProductViewController;
-(void)productViewController:(id)controller didFinishWithResult:(int)result;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)view;
-(void)clientApplicationDidEnterBackground;
-(void)didSetAdSpaceController;
-(void)dealloc;
@end