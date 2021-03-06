/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class NSMutableDictionary, NSArray, NSMutableArray, BRImageControl;

@interface BRSegmentedSortControl : BRControl {
@private
	BRImageControl *_leftEndCapLayer;	// 40 = 0x28
	NSMutableArray *_dividerLayers;	// 44 = 0x2c
	NSMutableArray *_contentLayers;	// 48 = 0x30
	NSMutableArray *_textLayers;	// 52 = 0x34
	BRImageControl *_rightEndCapLayer;	// 56 = 0x38
	NSArray *_segmentNames;	// 60 = 0x3c
	NSMutableDictionary *_images;	// 64 = 0x40
	int _selectedSegment;	// 68 = 0x44
	float _widthRatio;	// 72 = 0x48
}
@property(assign) int selectedSegment;	// G=0x315b8e75; S=0x315b87cd; converted property
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment;	// 0x3160677d
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment widthRatio:(float)ratio;	// 0x315b83c5
- (id)_attributedTextForSegment:(int)segment forSelectedState:(BOOL)selectedState;	// 0x315b8705
- (id)_contentBackgroundTextureForSelectedState:(BOOL)selectedState;	// 0x315b8b9d
- (id)_dividerTextureForSelectedState:(BOOL)selectedState;	// 0x315b8bd1
- (id)_leftEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x315b8a2d
- (id)_loadImageFromFile:(id)file;	// 0x315b8a61
- (id)_rightEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x315b8b69
- (void)_updateSegmentState;	// 0x315b8899
- (BOOL)brEventAction:(id)action;	// 0x315b8da9
- (void)dealloc;	// 0x315b9db1
- (void)layoutSubcontrols;	// 0x31606835
- (int)segmentCount;	// 0x315b86e5
// converted property getter: - (int)selectedSegment;	// 0x315b8e75
// converted property setter: - (void)setSelectedSegment:(int)segment;	// 0x315b87cd
- (float)visualHorizontalCenter;	// 0x316067a1
@end

