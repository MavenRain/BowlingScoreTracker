//
//  ViewDelegate.h
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#ifndef ViewDelegate_h
#define ViewDelegate_h

#include <stdio.h>

#endif /* ViewDelegate_h */

typedef struct Frame Frame;

typedef struct FrameSize FrameSize;

typedef struct Rgba Rgba;

typedef struct Rgb Rgb;

#ifdef __cplusplus
extern "C"
{
typedef enum ViewContentMode : int ViewContentMode;

typedef enum AutoresizingMask : int AutoresizingMask;

typedef enum Bools : int Bools;

typedef enum TextFieldViewMode : int TextFieldViewMode;

typedef enum TableViewStyle : int TableViewStyle;
}
#else
typedef enum ViewContentMode ViewContentMode;

typedef enum AutoresizingMask AutoresizingMask;

typedef enum Bools Bools;

typedef enum TextFieldViewMode TextFieldViewMode;

typedef enum TableViewStyle TableViewStyle;
#endif

typedef struct EdgeInsets EdgeInsets;

typedef struct EdgeInsets LayoutMargins;

#ifdef __cplusplus
extern "C"
{
typedef enum CellAccessory : int CellAccessory;

typedef enum TableViewSelectionStyle : int TableViewSelectionStyle;

typedef enum LineBreakingMode : int LineBreakingMode;
}
#else
typedef enum CellAccessory CellAccessory;

typedef enum TableViewSelectionStyle TableViewSelectionStyle;

typedef enum LineBreakingMode LineBreakingMode;
#endif

#ifdef __cplusplus
extern "C"
{
#endif


typedef struct CArray CArray;

typedef void(*DoubleObjectAction)(void*,void*);
typedef float(*SingleObjectDecimalFunction)(void*);
typedef void*(*ViewCreator)(Frame);
typedef void*(*SingleObjectObjectFunction)(void*);
typedef void(*Sizer)(void*, FrameSize);
typedef void(*ObjectDecimalAction)(void*, float);
typedef void(*ViewColorAction)(void*, Rgba);
typedef void(*ViewFramer)(void*, Frame);
typedef void(*ViewContentModeSetter)(void*, ViewContentMode);
typedef void(*AutoresizingMasker)(void*, AutoresizingMask);
typedef void(*Action)();
typedef void (*ConditionalAction)();
typedef void (*DurationActivity)(float, Action, Action);
typedef void*(*Exchanger)(void*);
typedef void(*ObjectDecimalAction)(void*, float);
typedef void(*SingleObjectAction)(void*);
typedef void*(*ObjectActionBlockObjectFunction)(SingleObjectAction);
typedef void(*ViewShortColorAction)(void*, Rgb);
typedef void(*ViewModeAction)(void*, TextFieldViewMode);
typedef float(*ObjectDecimalDecimalFunction)(void*, float);
typedef void*(*DoubleObjectObjectFunction)(void*, void*);
typedef void*(*ObjectDecimalObjectFunction)(void*, float);
typedef float(*DoubleObjectDecimalFunction)(void*, void*);
typedef int(*ObjectNumberNumberFunction)(void*, int);
typedef void*(*NumberObjectFunction)(int);
typedef void*(*ObjectNumberObjectFunction)(void*, int);
typedef float(*ObjectWholeNumberDecimalFunction)(void*, unsigned int);
typedef void*(*ObjectWholeNumberObjectFunction)(void*, unsigned int);
typedef int(*ObjectNumberFunction)(void*);
typedef void*(*DoubleObjectObjectFunction)(void*, void*);
typedef void*(*TableViewCreator)(void*, Frame, TableViewStyle);
typedef void(*ObjectToggler)(void*, Bools);
typedef void(*DoubleObjectConditionalAction)(void*, void*, Bools);
typedef void(*InsetSetter)(void*, EdgeInsets);
typedef void*(*AccessoryProducer)(CellAccessory);
typedef void(*SelectionStyleAction)(void*, TableViewSelectionStyle);
typedef void(*MarginSetter)(void*, LayoutMargins);
typedef void(*ObjectActionBlockAction)(void*, SingleObjectAction);
typedef enum Bools(*ObjectPredicate)(void*);
typedef void*(*LabelCreator)(Frame, const char *, unsigned int);
typedef unsigned int(*ObjectWholeNumberFunction)(void*);
typedef long(*ObjectLongNumberFunction)(void*);
typedef void*(*CustomControlCreator)(Frame, SingleObjectAction);
typedef void(*LineBreakSetter)(void*, LineBreakingMode);
typedef void*(*Supplier)();
typedef void*(*StringProcessor)(const char *);
typedef void*(*StringArrayProcessor)(const char **, unsigned int);
typedef void(*DecimalAction)(float);
typedef void(*NativeEventDelegate)(SingleObjectAction, void*);
typedef void(*ObjectWholeNumberAction)(void*, unsigned int);
typedef void(*ReverseViewFramer)(Frame, void*);
typedef void*(*InteractiveControlCreator)(Frame, const char *);
typedef void(*ObjectDecimalSingleObjectActionBlockAction)(void*, float, SingleObjectAction);
typedef void(*Accessorizer)(void*, CellAccessory);
typedef float(*ObjectNumberDecimalFunction)(void*, int);
typedef unsigned int(*SingleObjectWholeNumberFunction)(void*);
typedef Frame(*FrameSupplier)(void*);
typedef CArray(*ArrayExchanger)(void*);
typedef void(*ArrayDecimalAction)(CArray,float);
typedef void(*DoubleObjectDecimalAction)(void*, void*, float);
typedef void(*ObjectArrayAction)(void*, CArray);
typedef void(*ArrayAction)(CArray);
typedef void*(ArrayWholeNumberObjectFunction)(CArray, unsigned int);
typedef void(*TripleObjectAction)(void*, void*, void*);
typedef void(*QuadrupleObjectAction)(void*, void*, void*, void*);
typedef void(*QuadrupleObjectActionBlockAction)(void*, void*, void*, void*, QuadrupleObjectAction);
typedef void(*ViewAnimator)(void*, void*, void*, void*, float duration, QuadrupleObjectAction);
typedef void(*ViewMotion)(void*, void*, void*, float duration, TripleObjectAction);
typedef void(*ObjectTextAction)(void*, const char *);
typedef void*(*TextObjectFunction)(const char *);
typedef const char *(*ObjectWholeNumberTextFunction)(void*, unsigned int);
typedef void*(*ObjectTextObjectFunction)(void*, const char *);
typedef enum Bools(*TextArrayBooleanFunction)(const char * *, unsigned int);
typedef enum Bools(*Query)();
typedef const char *(*Reporter)();
typedef void(*TextArrayActionBlockAction)(const char * *, unsigned int, Action);
typedef void(*ActionBlockAction)(Action);
typedef void(*TextAction)(const char *);
typedef void(*DoubleTextAction)(const char *, const char *);
typedef void(*DoubleTextObjectAction)(const char *, const char *, void*);
typedef void*(*DoubleTextObjectFunction)(const char *, const char *);
typedef enum Bools(*DoubleTextConditionalFunction)(const char *, const char *);
typedef const char *(*ObjectTextFunction)(void *);
    typedef void *(*WholeNumberObjectFunction)(unsigned int);

void AddSubview(void* view, void* subview, DoubleObjectAction action);

void CrassusAddSubview(void* view, void* subview);

float GetViewBoundsWidth(void* view, SingleObjectDecimalFunction function);

float CrassusGetViewBoundsWidth(void* view);

float GetViewBoundsHeight(void* view, SingleObjectDecimalFunction function);

float CrassusGetViewBoundsHeight(void* view);

void* CreateNewView(Frame frame, ViewCreator creator);

void* CrassusCreateNewView(Frame frame);

float GetViewFrameWidth(void* view, SingleObjectDecimalFunction function);

float CrassusGetViewFrameWidth(void* view);

float GetViewFrameHeight(void* view, SingleObjectDecimalFunction function);

float CrassusGetViewFrameHeight(void* view);

float GetFrameX(void* view, SingleObjectDecimalFunction function);

float CrassusGetFrameX(void* view);

float GetFrameY(void* view, SingleObjectDecimalFunction function);

float CrassusGetFrameY(void* view);

void ResizeFrame(void* view, FrameSize size, Sizer action);

void CrassusResizeFrame(void* view, FrameSize size);

void AdjustFrameHeight(void* view, float height, ObjectDecimalAction action);

void CrassusAdjustFrameHeight(void* view, float height);

void AdjustFrameWidth(void* view, float width, ObjectDecimalAction action);

void CrassusAdjustFrameWidth(void* view, float width);

void SetBackgroundColor(void* view, Rgba color, ViewColorAction action);

void CrassusSetBackgroundColor(void* view, Rgba color);

void SetViewFrame(void* view, Frame frame, ViewFramer action);

void CrassusSetViewFrame(void* view, Frame frame);

float GetViewFrameBottom(void* view, SingleObjectDecimalFunction function);

float CrassusGetViewFrameBottom(void* view);

float GetViewFrameTop(void* view, SingleObjectDecimalFunction function);

float CrassusGetViewFrameTop(void* view);

float GetViewBoundsLeft(void* view, SingleObjectDecimalFunction function);

float CrassusGetViewBoundsLeft(void* view);

float GetViewBoundsRight(void* view, SingleObjectDecimalFunction function);

float CrassusGetViewBoundsRight(void* view);

float GetViewBoundsTop(void* view, SingleObjectDecimalFunction function);

float CrassusGetViewBoundsTop(void* view);

void SetContentMode(void* view, enum ViewContentMode mode, ViewContentModeSetter action);

void CrassusSetContentMode(void* view, enum ViewContentMode mode);

void SetAutoresizingMask(void* view, enum AutoresizingMask mask, AutoresizingMasker action);

void CrassusSetAutoresizingMask(void* view, enum AutoresizingMask mask);

void Animate(float duration, Action animations, Action completion, DurationActivity action);

void CrassusAnimate(float duration, Action animations, Action completion);

CArray GetSubviews(void* view, ArrayExchanger function);

CArray CrassusGetSubviews(void* view);

void* GetSuperview(void* view, Exchanger function);

void* CrassusGetSuperview(void* view);

void AddSubviews(void* containingView, CArray subviews, ObjectArrayAction action);

void CrassusAddSubviews(void* containingView, CArray subviews);

void AnimateIntoView(void* view, float duration, ObjectDecimalAction action);

void CrassusAnimateIntoView(void* view, float duration);

void AnimateOutOfView(void* view, float duration, ObjectDecimalAction action);

void CrassusAnimateOutOfView(void* view, float duration);

void StageWithinView(void* view, void* subview, DoubleObjectAction action);

void CrassusStageWithinView(void* view, void* subview);

void RemoveFromSuperview(void* view, SingleObjectAction action);

void CrassusRemoveFromSuperview(void* view);

void ReleaseView(void* view, SingleObjectAction action);

void* RetainView(void* view, Exchanger function);

void* CrassusRetainView(void* view);

void SetViewAlpha(void* view, float alpha, ObjectDecimalAction action);

void CrassusSetViewAlpha(void* view, float alpha);

void BringSubviewToFront(void* view, void* subview, DoubleObjectAction action);

void CrassusBringSubviewToFront(void* view, void* subview);

float GetViewBoundsBottom(void* view, SingleObjectDecimalFunction function);

float CrassusGetViewBoundsBottom(void* view);

void* CreateButton(Frame frame, const char * selector, InteractiveControlCreator function);

void* CrassusCreateButton(Frame frame, const char * selector);

void RemoveSubviews(CArray views, ArrayAction action);

void CrassusRemoveSubviews(CArray views);

void AnimateSubviewsOutOfView(void* view, float duration, ObjectDecimalAction action);

void CrassusAnimateSubviewsOutOfView(void* view, float duration);

void* GetWindowFromView(void* view, Exchanger function);

void* CrassusGetWindowFromView(void* view);

void AnimateOutOfViewWithCompletion(void* view, float duration, SingleObjectAction completion, ObjectDecimalSingleObjectActionBlockAction action);

void CrassusAnimateOutOfViewWithCompletion(void* view, float duration, SingleObjectAction completion);

void AnimateSubviewsOutOfViewWithCompletion(void* containingView, float duration, SingleObjectAction completion, ObjectDecimalSingleObjectActionBlockAction action);

void CrassusAnimateSubviewsOutOfViewWithCompletion(void* containingView, float duration, SingleObjectAction completion);

void* CreateSwipeRightView(Frame frame, const char * selector, InteractiveControlCreator function);

void* CrassusCreateSwipeRightView(Frame frame, const char * selector);

void* CreateSwipeLeftView(Frame frame, const char * selector, InteractiveControlCreator function);

void* CrassusCreateSwipeLeftView(Frame frame, const char * selector);

void SetClipsToBounds(void* view, enum Bools clipsToBounds, ConditionalAction action);

void CrassusSetClipsToBounds(void* view, enum Bools clipsToBounds);

void SlideIntoViewWithCompletion(void* view, float duration, SingleObjectAction completion, ObjectDecimalSingleObjectActionBlockAction action);

void CrassusSlideIntoViewWithCompletion(void* view, float duration, SingleObjectAction completion);

void CrassusSlideOutOfViewWithCompletion(void* view, float duration, SingleObjectAction completion);

void StageOutOfView(void* view, SingleObjectAction action);

void CrassusStageOutOfView(void* view);

void SlideSubviewsOutOfViewWithCompletion(void* containingView, float duration, SingleObjectAction completion, ObjectDecimalSingleObjectActionBlockAction action);

void CrassusSlideSubviewsOutOfViewWithCompletion(void* containingView, float duration, SingleObjectAction completion);

void SlideIntoView(void* view, float duration, ObjectDecimalAction action);

void CrassusSlideIntoView(void* view, float duration);

void ShadeToNextViewWithCompletion(void* containingView, float duration, SingleObjectAction completion, ObjectDecimalSingleObjectActionBlockAction action);

void CrassusShadeToNextViewWithCompletion(void* containingView, float duration, SingleObjectAction completion);

Frame GetFrame(void* view, FrameSupplier function);

Frame CrassusGetFrame(void* view);

void SlideViewsOutOfView(CArray views, float duration, ArrayDecimalAction action);

void CrassusSlideViewsOutOfView(CArray views, float duration);

void BackSlideViewsOutOfView(CArray views, float duration, ArrayDecimalAction action);

void CrassusBackSlideViewsOutOfView(CArray views, float duration);

void UnearthIntoView(void* view, float duration, ObjectDecimalAction action);

void SendViewToBottom(void* view, SingleObjectAction action);

void CrassusSendViewToBottom(void* view);

void SetZorder(void* view, float zorder, ObjectDecimalAction action);

void CrassusSetZorder(void* view, float zorder);

void BackSlideIntoView(void* containingView, void* view, float duration, DoubleObjectDecimalAction action);

void CrassusBackSlideIntoView(void* containingView, void* view, float duration);

void SlideOutOfView(void* view, float duration, ObjectDecimalAction action);

void CrassusSlideOutOfView(void* view, float duration);

void* GetViewAtIndex(CArray views, unsigned int index, ArrayWholeNumberObjectFunction function);

void* CrassusGetViewAtIndex(CArray views, unsigned int index);

void FlushView(void* containingView, SingleObjectAction action);

void CrassusFlushView(void* containingView);

void RemoveGestureRecognizers(void* view, SingleObjectAction action);

void CrassusRemoveGestureRecognizers(void* view);

void ReleaseView(void* view, SingleObjectAction action);

void CrassusReleaseView(void* view);

void SwapViews(void* oldView, void* newView, float duration, DoubleObjectDecimalAction action);

void CrassusSwapViews(void* oldView, void* newView, float duration);

void* GetSnapShot(void* view, Exchanger function);

void* CrassusGetSnapShot(void* view);

void SwapViewsWithCompletion(void* oldView, void* newView, void* containingView, float duration, TripleObjectAction completion, ViewMotion action);

void CrassusSwapViewsWithCompletion(void* oldView, void* newView, void* containingView, float duration, TripleObjectAction completion);

void BackSwapViewsWithCompletion(void* oldView, void* newView, void* containingView, float duration, TripleObjectAction completion, ViewMotion action);

void CrassusBackSwapViewsWithCompletion(void* oldView, void* newView, void* containingView, float duration, TripleObjectAction completion);

void StageLeftOfView(void* view, SingleObjectAction action);

void CrassusStageLeftOfView(void* view);

void* Vitalize(void* view, Exchanger function);

void* CrassusVitalize(void* view);

void SetCornerRadius(void* view, float radius, ObjectDecimalAction action);

void CrassusSetCornerRadius(void* view, float radius);

void SetBorderWidth(void* view, float width, ObjectDecimalAction action);

void CrassusSetBorderWidth(void* view, float width);

void SetBorderColor(void* view, Rgba color, ViewColorAction action);

void CrassusSetBorderColor(void* view, Rgba color);

void StageInsideOfView(void* view, void* subview, DoubleObjectAction action);

void CrassusStageInsideOfView(void* view, void* subview);

unsigned int GetTag(void* view, ObjectWholeNumberFunction function);

unsigned int CrassusGetTag(void* view);

void SetTag(void* view, unsigned int tag, ObjectWholeNumberAction action);

void CrassusSetTag(void* view, unsigned int tag);
    
    void * GetViewFromTag(unsigned int tag, WholeNumberObjectFunction function);
    
    void * CrassusGetViewFromTag(unsigned int tag);

#ifdef __cplusplus
}
#endif






























