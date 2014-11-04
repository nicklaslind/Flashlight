//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPMoviesSliceView.h"

@class NSImageView, NSLayoutConstraint, NSTextField, SPTextView;

@interface SPThreeMoviesSliceView : SPMoviesSliceView
{
    NSImageView *_posterImageView1;
    NSImageView *_posterImageView2;
    NSImageView *_posterImageView3;
    NSTextField *_titleTextField1;
    NSTextField *_titleTextField2;
    NSTextField *_titleTextField3;
    SPTextView *_subtitleTextView1;
    SPTextView *_subtitleTextView2;
    SPTextView *_subtitleTextView3;
    NSLayoutConstraint *_subtitleTextViewMinHeightConstraint1;
    NSLayoutConstraint *_subtitleTextViewMinHeightConstraint2;
    NSLayoutConstraint *_subtitleTextViewMinHeightConstraint3;
}

@property NSLayoutConstraint *subtitleTextViewMinHeightConstraint3; // @synthesize subtitleTextViewMinHeightConstraint3=_subtitleTextViewMinHeightConstraint3;
@property NSLayoutConstraint *subtitleTextViewMinHeightConstraint2; // @synthesize subtitleTextViewMinHeightConstraint2=_subtitleTextViewMinHeightConstraint2;
@property NSLayoutConstraint *subtitleTextViewMinHeightConstraint1; // @synthesize subtitleTextViewMinHeightConstraint1=_subtitleTextViewMinHeightConstraint1;
@property SPTextView *subtitleTextView3; // @synthesize subtitleTextView3=_subtitleTextView3;
@property SPTextView *subtitleTextView2; // @synthesize subtitleTextView2=_subtitleTextView2;
@property SPTextView *subtitleTextView1; // @synthesize subtitleTextView1=_subtitleTextView1;
@property NSTextField *titleTextField3; // @synthesize titleTextField3=_titleTextField3;
@property NSTextField *titleTextField2; // @synthesize titleTextField2=_titleTextField2;
@property NSTextField *titleTextField1; // @synthesize titleTextField1=_titleTextField1;
@property NSImageView *posterImageView3; // @synthesize posterImageView3=_posterImageView3;
@property NSImageView *posterImageView2; // @synthesize posterImageView2=_posterImageView2;
@property NSImageView *posterImageView1; // @synthesize posterImageView1=_posterImageView1;
- (void)mouseUp:(id)arg1;
- (void)_sendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3;
- (id)subtitleTextViewMinHeightConstraintAtIndex:(unsigned long long)arg1;
- (id)subtitleTextViewAtIndex:(unsigned long long)arg1;
- (id)titleTextFieldAtIndex:(unsigned long long)arg1;
- (id)posterImageViewAtIndex:(unsigned long long)arg1;
- (unsigned long long)columnCount;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
