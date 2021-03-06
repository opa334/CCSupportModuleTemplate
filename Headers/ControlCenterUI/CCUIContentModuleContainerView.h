/*
 * This header is generated by classdump-dyld 1.0
 * on Thursday, January 25, 2018 at 11:29:33 PM Eastern European Standard Time
 * Operating System: Version 11.1.2 (Build 15B202)
 * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, UIView;

@interface CCUIContentModuleContainerView : UIView {

	NSArray* _views;
	BOOL _ignoreFrameUpdates;
	NSString* _moduleIdentifier;
	UIView* _c2AnimationContainerView;
	UIView* _caAnimationContainerView;

}

@property (nonatomic,copy,readonly) NSString * moduleIdentifier;		//@synthesize moduleIdentifier=_moduleIdentifier - In the implementation block
@property (nonatomic,readonly) UIView * c2AnimationContainerView;		//@synthesize c2AnimationContainerView=_c2AnimationContainerView - In the implementation block
@property (nonatomic,readonly) UIView * caAnimationContainerView;		//@synthesize caAnimationContainerView=_caAnimationContainerView - In the implementation block
@property (nonatomic,readonly) UIView * containerView;
@property (assign,nonatomic) BOOL ignoreFrameUpdates;				//@synthesize ignoreFrameUpdates=_ignoreFrameUpdates - In the implementation block
- (void)layoutSubviews;
- (UIView *)containerView;
- (NSString *)moduleIdentifier;
- (void)setIgnoreFrameUpdates:(BOOL)arg1;
- (instancetype)initWithModuleIdentifier:(id)arg1 options:(NSUInteger)arg2;
- (BOOL)ignoreFrameUpdates;
- (UIView *)c2AnimationContainerView;
- (UIView *)caAnimationContainerView;
@end
