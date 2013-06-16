/* ProgressView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "BackgroundDrawing.h"
#import "MobileSafari-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AddressView, ReaderButton, NSMutableDictionary, UIButton, UIImageView;

__attribute__((visibility("hidden")))
@interface ProgressView : XXUnknownSuperclass <BackgroundDrawing> {
	AddressView* _delegate;
	float _progress;
	BOOL _isShowingProgress;
	BOOL _drawActiveBackground;
	BOOL _usesPrivateBrowsingStyle;
	BOOL _readerButtonPressed;
	ReaderButton* _readerButton;
	UIImageView* _backgroundImageView;
	UIImageView* _progressImageView;
	NSMutableDictionary* _imagesWithReaderText;
	int _readerButtonState;
}
@property(readonly, assign, nonatomic) float readerButtonWidth;
@property(assign, nonatomic) int readerButtonState;
@property(readonly, assign, nonatomic) UIButton* readerButton;
-(void)drawBackgroundInContext:(CGContextRef)context;
-(void)setDelegate:(id)delegate;
-(void)setUsesPrivateBrowsingStyle:(BOOL)style;
-(void)layoutSubviews;
-(void)_updateImageViewGeometry:(id)geometry forProgress:(float)progress flip:(BOOL)flip;
-(id)_progressImage;
-(id)_backgroundImage;
-(id)_imageForReaderButtonState:(int)readerButtonState withPressedHighlight:(BOOL)pressedHighlight progressFill:(BOOL)fill;
-(id)_imageNameForReaderButtonState:(int)readerButtonState withPressedHighlight:(BOOL)pressedHighlight progressFill:(BOOL)fill;
-(id)_textAttributesForReaderButtonState:(int)readerButtonState;
-(void)_setReaderButtonPressed:(BOOL)pressed;
-(float)progress;
-(void)setProgress:(float)progress;
-(void)_updateShowsProgress;
-(void)setFrame:(CGRect)frame;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end