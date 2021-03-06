/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface PUApertureSlider : UIView <UIScrollViewDelegate> {
    bool  __active;
    unsigned long long  __currentApertureIndex;
    UILabel * __depthEffectLabel;
    PUApertureSliderDotView * __dotView;
    unsigned int  __endStopSoundID;
    CAMSelectionFeedbackGenerator * __feedbackGenerator;
    unsigned int  __fullStopSoundID;
    UIView * __indicatorView;
    unsigned long long  __markedApertureIndex;
    unsigned long long  __maximumApertureIndex;
    unsigned long long  __minimumApertureIndex;
    PUApertureGradientView * __opaqueGradientView;
    unsigned int  __overscrollStopSoundID;
    bool  __overscrolling;
    UIScrollView * __scrollView;
    unsigned int  __thirdStopSoundID;
    PUApertureSliderTickMarksView * __tickMarksView;
    PUApertureGradientView * __transparentGradientView;
    UILabel * __valueLabel;
    NSNumberFormatter * _decimalFormatter;
    <PUApertureSliderDelegate> * _delegate;
    bool  _enabled;
    NSNumberFormatter * _wholeNumberFormatter;
}

@property (getter=_isActive, setter=_setActive:, nonatomic) bool _active;
@property (setter=_setCurrentApertureIndex:, nonatomic) unsigned long long _currentApertureIndex;
@property (nonatomic, readonly) UILabel *_depthEffectLabel;
@property (nonatomic, readonly) PUApertureSliderDotView *_dotView;
@property (nonatomic, readonly) unsigned int _endStopSoundID;
@property (nonatomic, readonly) CAMSelectionFeedbackGenerator *_feedbackGenerator;
@property (nonatomic, readonly) unsigned int _fullStopSoundID;
@property (nonatomic, readonly) UIView *_indicatorView;
@property (setter=_setMarkedApertureIndex:, nonatomic) unsigned long long _markedApertureIndex;
@property (setter=_setMaximumApertureIndex:, nonatomic) unsigned long long _maximumApertureIndex;
@property (setter=_setMinimumApertureIndex:, nonatomic) unsigned long long _minimumApertureIndex;
@property (nonatomic, readonly) PUApertureGradientView *_opaqueGradientView;
@property (nonatomic, readonly) unsigned int _overscrollStopSoundID;
@property (getter=_isOverscrolling, setter=_setOverscrolling:, nonatomic) bool _overscrolling;
@property (nonatomic, readonly) UIScrollView *_scrollView;
@property (nonatomic, readonly) unsigned int _thirdStopSoundID;
@property (nonatomic, readonly) PUApertureSliderTickMarksView *_tickMarksView;
@property (nonatomic, readonly) PUApertureGradientView *_transparentGradientView;
@property (nonatomic, readonly) UILabel *_valueLabel;
@property (nonatomic, readonly) double apertureValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUApertureSliderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (nonatomic) UIColor *gradientColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double markedApertureValue;
@property (nonatomic, readonly) double maximumApertureValue;
@property (nonatomic, readonly) double minimumApertureValue;
@property (readonly) Class superclass;

+ (unsigned long long)firstFullStopIndexAfterOrIncludingIndex:(unsigned long long)arg1;
+ (bool)isValidApertureIndex:(unsigned long long)arg1;
+ (bool)isValidApertureIndexFullStop:(unsigned long long)arg1;
+ (id)validApertureValues;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_contentOffsetForApertureIndex:(unsigned long long)arg1;
- (unsigned long long)_currentApertureIndex;
- (id)_depthEffectLabel;
- (id)_dotView;
- (unsigned int)_endStopSoundID;
- (id)_feedbackGenerator;
- (unsigned int)_fullStopSoundID;
- (unsigned long long)_indexOfClosestValidValueForAperture:(double)arg1;
- (id)_indicatorView;
- (bool)_isActive;
- (bool)_isOverscrolling;
- (unsigned long long)_markedApertureIndex;
- (unsigned long long)_maximumApertureIndex;
- (unsigned long long)_minimumApertureIndex;
- (id)_opaqueGradientView;
- (unsigned int)_overscrollStopSoundID;
- (void)_removeDotView;
- (id)_scrollView;
- (double)_scrollableDistanceInScrollView:(id)arg1;
- (void)_setActive:(bool)arg1;
- (void)_setActive:(bool)arg1 animated:(bool)arg2;
- (void)_setApertureWithIndex:(unsigned long long)arg1 shouldDelegate:(bool)arg2 shouldScroll:(bool)arg3 shouldEmitFeedback:(bool)arg4;
- (void)_setCurrentApertureIndex:(unsigned long long)arg1;
- (void)_setMarkedApertureIndex:(unsigned long long)arg1;
- (void)_setMaximumApertureIndex:(unsigned long long)arg1;
- (void)_setMinimumApertureIndex:(unsigned long long)arg1;
- (void)_setOverscrolling:(bool)arg1;
- (unsigned int)_thirdStopSoundID;
- (id)_tickMarksView;
- (id)_transparentGradientView;
- (void)_updateColorsAnimated:(bool)arg1;
- (void)_updateLabel;
- (void)_updateMarkedApertureViewAnimated:(bool)arg1;
- (void)_updateScrollViewContentOffset;
- (unsigned long long)_validApertureIndexForContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)_valueLabel;
- (double)apertureValue;
- (void)dealloc;
- (id)delegate;
- (bool)enabled;
- (id)gradientColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (double)markedApertureValue;
- (double)maximumApertureValue;
- (double)minimumApertureValue;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setApertureValueClosestTo:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGradientColor:(id)arg1;
- (void)setMarkedApertureValueClosestTo:(double)arg1;
- (void)setMarkedApertureValueToNone;
- (void)setMinimumApertureValueClosestTo:(double)arg1 maximumApertureValueClosestTo:(double)arg2;

@end
