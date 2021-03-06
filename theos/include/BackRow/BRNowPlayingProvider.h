/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRProvider.h"

@class NSString, NSSet;
@protocol BRControlFactory;

@interface BRNowPlayingProvider : NSObject <BRProvider> {
@private
	id<BRControlFactory> _factory;	// 4 = 0x4
	NSSet *_types;	// 8 = 0x8
	NSString *_playerMediaAssetID;	// 12 = 0xc
}
+ (id)providerForTypes:(id)types;	// 0x31656645
- (void)_checkPlayerState;	// 0x316563d5
- (id)_initWithTypes:(id)types;	// 0x31656689
- (void)_playerStateChanged:(id)changed;	// 0x31656579
- (id)controlFactory;	// 0x316565f9
- (id)dataAtIndex:(long)index;	// 0x316565bd
- (long)dataCount;	// 0x316563b5
- (void)dealloc;	// 0x3165686d
- (id)hashForDataAtIndex:(long)index;	// 0x316563c9
@end

