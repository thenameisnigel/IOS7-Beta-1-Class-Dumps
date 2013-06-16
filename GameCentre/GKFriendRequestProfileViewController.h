/* GKFriendRequestProfileViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "GKPlayerProfileCollectionViewController.h"

@class GKPlayer;

__attribute__((visibility("hidden")))
@interface GKFriendRequestProfileViewController : GKPlayerProfileCollectionViewController {
	BOOL _didFloatInBubbles;
}
@property(assign, nonatomic) BOOL didFloatInBubbles;
@property(retain, nonatomic) GKPlayer* player;
+(Class)headerViewClass;
-(void)ignoreFriendRequest;
-(void)acceptFriendRequest;
-(void)acceptedFriendRequest:(BOOL)request withError:(id)error;
-(void)animateOutBubbleWithFocus:(int)focus completion:(id)completion;
-(void)viewDidAppear:(BOOL)view;
-(void)loadView;
-(id)init;
@end