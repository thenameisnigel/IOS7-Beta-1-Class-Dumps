/* RAPFixedProblemViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, RAPFixedProblem;

__attribute__((visibility("hidden")))
@interface RAPFixedProblemViewController : XXUnknownSuperclass {
	UILabel* _headerView;
	UILabel* _footerView;
	RAPFixedProblem* _fixedProblem;
}
@property(retain, nonatomic) RAPFixedProblem* fixedProblem;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)handleDone:(id)done;
-(void)dealloc;
-(id)initWithStyle:(int)style;
@end