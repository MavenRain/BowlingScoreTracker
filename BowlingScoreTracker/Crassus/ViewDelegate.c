//
//  ViewDelegate.c
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#include "GlobalDefinitions.h"
#include "ViewDelegate.h"


void AddSubview(void* view, void* subview, DoubleObjectAction action)
{
    (*action)(view, subview);
}

float GetViewBoundsWidth(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

float GetViewBoundsHeight(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

void* CreateNewView(Frame frame, ViewCreator creator)
{
    return (*creator)(frame);
}

float GetViewFrameWidth(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

float GetViewFrameHeight(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

void* GetViewFrame(void* view, SingleObjectObjectFunction function)
{
    return (*function)(view);
}

float GetFrameX(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

float GetFrameY(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

void ResizeFrame(void* view, FrameSize size, Sizer action)
{
    return (*action)(view, size);
}

void AdjustFrameHeight(void* view, float height, ObjectDecimalAction action)
{
    (*action)(view, height);
}

void AdjustFrameWidth(void* view, float width, ObjectDecimalAction action)
{
    (*action)(view, width);
}

void SetBackgroundColor(void* view, Rgba color, ViewColorAction action)
{
    (*action)(view, color);
}

void SetViewFrame(void* view, Frame frame, ViewFramer action)
{
    (*action)(view, frame);
}

float GetViewFrameBottom(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

float GetViewFrameTop(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

float GetViewBoundsLeft(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

float GetViewBoundsRight(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

float GetViewBoundsTop(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

void SetContentMode(void* view, ViewContentMode mode, ViewContentModeSetter action)
{
    (*action)(view, mode);
}

void SetAutoresizingMask(void* view, AutoresizingMask mask, AutoresizingMasker action)
{
    (*action)(view, mask);
}

void Animate(float duration, Action animations, Action completion, DurationActivity action)
{
    (*action)(duration, animations, completion);
}

CArray GetSubviews(void* view, ArrayExchanger function)
{
    return (*function)(view);
}

void* GetSuperview(void* view, Exchanger function)
{
    return (*function)(view);
}

void AddSubviews(void* containingView, CArray subviews, ObjectArrayAction action)
{
    (*action)(containingView, subviews);
}

void AnimateIntoView(void* view, float duration, ObjectDecimalAction action)
{
    (*action)(view, duration);
}

void AnimateOutOfView(void* view, float duration, ObjectDecimalAction action)
{
    (*action)(view, duration);
}

void StageWithinView(void* view, void* subview, DoubleObjectAction action)
{
    (*action)(view, subview);
}

void RemoveFromSuperview(void* view, SingleObjectAction action)
{
    (*action)(view);
}
void SetViewAlpha(void* view, float alpha, ObjectDecimalAction action)
{
    (*action)(view, alpha);
}

void BringSubviewToFront(void* view, void* subview, DoubleObjectAction action)
{
    (*action)(view, subview);
}

float GetViewBoundsBottom(void* view, SingleObjectDecimalFunction function)
{
    return (*function)(view);
}

void* CreateButton(Frame frame, const char * selector, InteractiveControlCreator function)
{
    return (*function)(frame, selector);
}

void RemoveSubviews(CArray views, ArrayAction action)
{
    (*action)(views);
}

void AnimateSubviewsOutOfView(void* view, float duration, ObjectDecimalAction action)
{
    (*action)(view, duration);
}

void* GetWindowFromView(void* view, Exchanger function)
{
    return (*function)(view);
}

void AnimateOutOfViewWithCompletion(void* view, float duration, SingleObjectAction completion, ObjectDecimalSingleObjectActionBlockAction action)
{
    (*action)(view, duration, completion);
}

void AnimateSubviewsOutOfViewWithCompletion(void* containingView, float duration, SingleObjectAction completion, ObjectDecimalSingleObjectActionBlockAction action)
{
    (*action)(containingView, duration, completion);
}

void* CreateSwipeRightView(Frame frame, const char * selector, InteractiveControlCreator function)
{
    return (*function)(frame, selector);
}

void* CreateSwipeLeftView(Frame frame, const char * selector, InteractiveControlCreator function)
{
    return (*function)(frame, selector);
}

void SetClipsToBounds(void* view, Bools clipsToBounds, ConditionalAction action)
{
    (*action)(view, clipsToBounds);
}

void SlideIntoViewWithCompletion(void* view, float duration, SingleObjectAction completion, ObjectDecimalSingleObjectActionBlockAction action)
{
    (*action)(view, duration, completion);
}

void StageOutOfView(void* view, SingleObjectAction action)
{
    (*action)(view);
}

void SlideSubviewsOutOfViewWithCompletion(void* containingView, float duration, SingleObjectAction completion, ObjectDecimalSingleObjectActionBlockAction action)
{
    (*action)(containingView, duration, completion);
}

void SlideIntoView(void* view, float duration, ObjectDecimalAction action)
{
    (*action)(view, duration);
}

void ShadeToNextViewWithCompletion(void* containingView, float duration, SingleObjectAction completion, ObjectDecimalSingleObjectActionBlockAction action)
{
    (*action)(containingView, duration, completion);
}

Frame GetFrame(void* view, FrameSupplier function)
{
    return (*function)(view);
}

void SlideViewsOutOfView(CArray views, float duration, ArrayDecimalAction action)
{
    (*action)(views, duration);
}

void BackSlideViewsOutOfView(CArray views, float duration, ArrayDecimalAction action)
{
    (*action)(views, duration);
}

void SendViewToBottom(void* view, SingleObjectAction action)
{
    (*action)(view);
}

void SetZorder(void* view, float zorder, ObjectDecimalAction action)
{
    (*action)(view, zorder);
}

void BackSlideIntoView(void* containingView, void* view, float duration, DoubleObjectDecimalAction action)
{
    (*action)(containingView, view, duration);
}

void SlideOutOfView(void* view, float duration, ObjectDecimalAction action)
{
    (*action)(view, duration);
}

void* GetViewAtIndex(CArray views, unsigned int index, ArrayWholeNumberObjectFunction function)
{
    return (*function)(views, index);
}

void FlushView(void* containingView, SingleObjectAction action)
{
    (*action)(containingView);
}

void RemoveGestureRecognizers(void* view, SingleObjectAction action)
{
    (*action)(view);
}

void ReleaseView(void* view, SingleObjectAction action)
{
    (*action)(view);
}

void SwapViews(void* oldView, void* newView, float duration, DoubleObjectDecimalAction action)
{
    (*action)(oldView, newView, duration);
}

void* GetSnapShot(void* view, Exchanger function)
{
    return (*function)(view);
}

void SwapViewsWithCompletion(void* oldView, void* newView, void* containingView, float duration, TripleObjectAction completion, ViewMotion action)
{
    (*action)(oldView, newView, containingView, duration, completion);
}

void BackSwapViewsWithCompletion(void* oldView, void* newView, void* containingView, float duration, TripleObjectAction completion, ViewMotion action)
{
    (*action)(oldView, newView, containingView, duration, completion);
}

void StageLeftOfView(void* view, SingleObjectAction action)
{
    (*action)(view);
}

void* Vitalize(void* view, Exchanger function)
{
    return (*function)(view);
}

void SetCornerRadius(void* view, float radius, ObjectDecimalAction action)
{
    (*action)(view, radius);
}

void SetBorderWidth(void* view, float width, ObjectDecimalAction action)
{
    (*action)(view, width);
}

void SetBorderColor(void* view, Rgba color, ViewColorAction action)
{
    (*action)(view, color);
}

void StageInsideOfView(void* view, void* subview, DoubleObjectAction action)
{
    (*action)(view, subview);
}

unsigned int GetTag(void* view, ObjectWholeNumberFunction function)
{
    return (*function)(view);
}

void SetTag(void* view, unsigned int tag, ObjectWholeNumberAction action)
{
    (*action)(view, tag);
}

void * GetViewFromTag(unsigned int tag, WholeNumberObjectFunction function)
{
    return (*function)(tag);
}



































