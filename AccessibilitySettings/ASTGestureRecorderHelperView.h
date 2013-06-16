/* ASTGestureRecorderHelperView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AccessibilitySettings-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ASTGestureRecorderStyleProvider;
@protocol ASTGestureRecorderHelperViewDataSource, ASTGestureRecorderHelperViewDelegate;

@interface ASTGestureRecorderHelperView : XXUnknownSuperclass {
@private
	ASTGestureRecorderStyleProvider* _styleProvider;
	id<ASTGestureRecorderHelperViewDataSource> _dataSource;
	id<ASTGestureRecorderHelperViewDelegate> _delegate;
}
@property(assign, nonatomic) id<ASTGestureRecorderHelperViewDataSource> dataSource;
@property(assign, nonatomic) id<ASTGestureRecorderHelperViewDelegate> delegate;
@property(retain, nonatomic) ASTGestureRecorderStyleProvider* styleProvider;
-(CGRect)boundsForRenderingFingerPath:(id)renderingFingerPath;
-(CGRect)constrainedBoundsForDrawing;
-(void)enumerateDynamicFingerPathsUsingBlock:(id)block;
-(id)dynamicFingerPathAtIndex:(unsigned)index;
-(unsigned)numberOfDynamicFingerPaths;
-(void)enumerateStaticFingerPathsUsingBlock:(id)block;
-(id)staticFingerPathAtIndex:(unsigned)index;
-(unsigned)numberOfStaticFingerPaths;
-(void)_replacedDataSource:(id)source withDataSource:(id)dataSource;
-(void)_replacedStyleProvider:(id)provider withStyleProvider:(id)styleProvider;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(id)initWithFrame:(CGRect)frame;
-(void)_commonInit;
@end