/* LoadingLabel.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface LoadingLabel : XXUnknownSuperclass {
	UILabel* _label;
	UIActivityIndicatorView* _activityIndicator;
}
-(void).cxx_destruct;
-(void)setText:(id)text showingActivity:(BOOL)activity;
-(id)text;
-(void)setHidden:(BOOL)hidden;
-(void)sizeToFit;
-(id)init;
@end