//
//  ViewDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

@import UIKit;
#import "BowlingScoreTracker-Swift.h"
#import "ViewDelegate.h"

void CrassusAddSubview(void* view, void* subview)
{
    [(__bridge UIView*)view addSubview:(__bridge UIView*)subview];
}

float CrassusGetViewBoundsWidth(void* view)
{
    return ((__bridge UIView*)view).bounds.size.width;
}

float CrassusGetViewBoundsHeight(void* view)
{
    return ((__bridge UIView*)view).bounds.size.height;
}

void* CrassusCreateNewView(Frame frame)
{
    return (void*)CFBridgingRetain([[UIView alloc] initWithFrame:CGRectMake(frame.x, frame.y, frame.width, frame.height)]);
}

float CrassusGetViewFrameWidth(void* view)
{
    return ((__bridge UIView*)view).frame.size.width;
}

float CrassusGetViewFrameHeight(void* view)
{
    return ((__bridge UIView*)view).frame.size.height;
}

float CrassusGetFrameX(void* view)
{
    return ((__bridge UIView*)view).frame.origin.x;
}

float CrassusGetFrameY(void* view)
{
    return ((__bridge UIView*)view).frame.origin.y;
}

void CrassusResizeFrame(void* view, FrameSize size)
{
    float x = ((__bridge UIView*)view).frame.origin.x;
    float y = ((__bridge UIView*)view).frame.origin.y;
    ((__bridge UIView*)view).frame = CGRectMake(x, y, size.width, size.height);
}

void CrassusAdjustFrameHeight(void* view, float height)
{
    float x = ((__bridge UIView*)view).frame.origin.x;
    float y = ((__bridge UIView*)view).frame.origin.y;
    float width = ((__bridge UIView*)view).frame.size.width;
    ((__bridge UIView*)view).frame = CGRectMake(x, y, width, height);
}

void CrassusAdjustFrameWidth(void* view, float width)
{
    float x = ((__bridge UIView*)view).frame.origin.x;
    float y = ((__bridge UIView*)view).frame.origin.y;
    float height = ((__bridge UIView*)view).frame.size.height;
    ((__bridge UIView*)view).frame = CGRectMake(x, y, width, height);
}

void CrassusSetBackgroundColor(void* view, Rgba color)
{
    ((__bridge UIView*)view).backgroundColor = [[UIColor alloc] initWithRed:color.red green:color.green blue:color.blue alpha:color.alpha];
}

void CrassusSetViewFrame(void* view, Frame frame)
{
    ((__bridge UIView*)view).frame = CGRectMake(frame.x, frame.y, frame.width, frame.height);
}

float CrassusGetViewFrameBottom(void* view)
{
    return ((__bridge UIView*)view).frame.origin.y + ((__bridge UIView*)view).frame.size.height;
}

float CrassusGetViewFrameTop(void* view)
{
    return ((__bridge UIView*)view).frame.origin.y;
}

float CrassusGetViewBoundsLeft(void* view)
{
    return ((__bridge UIView*)view).bounds.origin.x;
}

float CrassusGetViewBoundsRight(void* view)
{
    return ((__bridge UIView*)view).bounds.origin.x + ((__bridge UIView*)view).bounds.size.width;
}

float CrassusGetViewBoundsTop(void* view)
{
    return ((__bridge UIView*)view).bounds.origin.y;
}

void CrassusSetContentMode(void* view, ViewContentMode mode)
{
    if (mode == ViewContentModeScaleAspectFit) ((__bridge UIView*)view).contentMode = UIViewContentModeScaleAspectFit;
    if (mode == ViewContentModeScaleAspectFill) ((__bridge UIView*)view).contentMode = UIViewContentModeScaleAspectFill;
    if (mode == ViewContentModeScaleToFill) ((__bridge UIView*)view).contentMode = UIViewContentModeScaleToFill;
    if (mode == ViewContentModeTopLeft) ((__bridge UIView*)view).contentMode = UIViewContentModeTopLeft;
    if (mode == ViewContentModeTop) ((__bridge UIView*)view).contentMode = UIViewContentModeTop;
    if (mode == ViewContentModeTopRight) ((__bridge UIView*)view).contentMode = UIViewContentModeTopRight;
    if (mode == ViewContentModeLeft) ((__bridge UIView*)view).contentMode = UIViewContentModeLeft;
    if (mode == ViewContentModeCenter) ((__bridge UIView*)view).contentMode = UIViewContentModeCenter;
    if (mode == ViewContentModeRight) ((__bridge UIView*)view).contentMode = UIViewContentModeRight;
    if (mode == ViewContentModeBottomLeft) ((__bridge UIView*)view).contentMode = UIViewContentModeBottomLeft;
    if (mode == ViewContentModeBottom) ((__bridge UIView*)view).contentMode = UIViewContentModeBottom;
    if (mode == ViewContentModeBottomRight) ((__bridge UIView*)view).contentMode = UIViewContentModeBottomRight;
    if (mode == ViewContentModeRedraw) ((__bridge UIView*)view).contentMode = UIViewContentModeRedraw;
}

void CrassusSetAutoresizingMask(void* view, AutoresizingMask mask)
{
    if (mask & AutoresizingMaskAll) ((__bridge UIView*)view).autoresizingMask |= UIViewAutoresizingFlexibleBottomMargin | UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleRightMargin | UIViewAutoresizingFlexibleTopMargin | UIViewAutoresizingFlexibleWidth;
    if (mask & AutoresizingMaskFlexibleBottomMargin) ((__bridge UIView*)view).autoresizingMask |= UIViewAutoresizingFlexibleBottomMargin;
    if (mask & AutoresizingMaskFlexibleDimensions) ((__bridge UIView*)view).autoresizingMask |= UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth;
    if (mask & AutoresizingMaskFlexibleHeight) ((__bridge UIView*)view).autoresizingMask |= UIViewAutoresizingFlexibleHeight;
    if (mask & AutoresizingMaskFlexibleLeftMargin) ((__bridge UIView*)view).autoresizingMask |= UIViewAutoresizingFlexibleLeftMargin;
    if (mask & AutoresizingMaskFlexibleMargins) ((__bridge UIView*)view).autoresizingMask |= UIViewAutoresizingFlexibleBottomMargin | UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleRightMargin | UIViewAutoresizingFlexibleTopMargin;
    if (mask & AutoresizingMaskFlexibleRightMargin) ((__bridge UIView*)view).autoresizingMask |= UIViewAutoresizingFlexibleRightMargin;
    if (mask & AutoresizingMaskFlexibleTopMargin) ((__bridge UIView*)view).autoresizingMask |= UIViewAutoresizingFlexibleTopMargin;
    if (mask & AutoresizingMaskFlexibleWidth) ((__bridge UIView*)view).autoresizingMask |= UIViewAutoresizingFlexibleWidth;
    if (!mask) ((__bridge UIView*)view).autoresizingMask &= UIViewAutoresizingNone;
}

void CrassusAnimate(float duration, Action animations, Action completion)
{
    [UIView animateWithDuration:duration animations:^{ animations(); } completion:^(BOOL finished){ completion(); }];
}

CArray CrassusGetSubviews(void* view)
{
    // 2016.02.25 - OEO - One may notice, here, that double the "required" allocation
    // size is given.  The views appeared to be delivered with variable size, and so
    // this hack persists until further debugging can determine the precise allocation
    // amount.
    
    // 2016.02.25 - OEO - Used a bridging cast trick in order to plug a memory leak
    
    unsigned long collectionCount = ((__bridge UIView*)view).subviews.count;
    UIView * __strong * subviews = (UIView * __strong *)malloc((collectionCount + 1) * sizeof(UIView*) * 2);
    memset(subviews, 0, (collectionCount + 1) * sizeof(UIView*) * 2);
    for (unsigned long index = 0; index < collectionCount; ++index)
    {
        subviews[index] = [((__bridge UIView*)view).subviews objectAtIndex:index];
        CFBridgingRelease((__bridge void*)[((__bridge UIView*)view).subviews objectAtIndex:index]);
    }
    CArray output = { subviews, collectionCount };
    return output;
}

void* CrassusGetSuperview(void* view)
{
    return (__bridge void*)((__bridge UIView*)view).superview;
}

void CrassusAddSubviews(void* containingView, CArray subviews)
{
    for (unsigned int index = 0; index < subviews.size; ++index)
    {
        [((__bridge UIView*)containingView) addSubview:((UIView * __weak *)subviews.array)[index]];
    }
}

void CrassusAnimateIntoView(void* view, float duration)
{
    [UIView animateWithDuration:duration animations:
     ^
     {
         ((__bridge UIView*)view).alpha = 1;
     }];
}

void CrassusAnimateOutOfView(void* view, float duration)
{
    [UIView animateWithDuration:duration animations:
     ^
     {
         CGRect newFrame = ((__bridge UIView*)view).frame;
         newFrame.origin.x += 320;
         ((__bridge UIView*)view).frame = newFrame;
     }];
}

void CrassusStageWithinView(void* view, void* subview)
{
    ((__bridge UIView*)subview).alpha = 0;
    [(__bridge UIView*)view addSubview: CFBridgingRelease(subview)];
}

void CrassusRemoveFromSuperview(void* view)
{
    [(__bridge UIView*)view removeFromSuperview];
}

void* LiftView(UIView* view)
{
    return (__bridge void*)view;
}

UIView* PressView(void* view)
{
    return (__bridge UIView*)view;
}

void CrassusSetViewAlpha(void* view, float alpha)
{
    ((__bridge UIView*)view).alpha = alpha;
}

void CrassusBringSubviewToFront(void* view, void* subview)
{
    [(__bridge UIView*)view bringSubviewToFront:CFBridgingRelease(subview)];
}

float CrassusGetViewBoundsBottom(void* view)
{
    return ((__bridge UIView*)view).bounds.origin.y + ((__bridge UIView*)view).bounds.size.height;
}


void* CrassusCreateButton(Frame frame, const char * selector)
{
    CrassusView* view = [CrassusView create:frame selector:[NSString stringWithUTF8String:selector]];
    UITapGestureRecognizer* tapRecognizer = [[UITapGestureRecognizer alloc] initWithTarget:view.dispatcher action:@selector(dispatch:)];
    tapRecognizer.delegate = view.dispatcher;
    [view addGestureRecognizer:tapRecognizer];
    return (void*)CFBridgingRetain(view);
}

void CrassusRemoveSubviews(CArray views)
{
    for (unsigned int index = 0; index < views.size; ++index)
    {
        if ([((UIView * __weak *)views.array)[index] isKindOfClass:[CrassusView class ]])
        {
            while (((CrassusView * __weak *)views.array)[index].gestureRecognizers.count)
            {
                [((CrassusView * __weak *)views.array)[index] removeGestureRecognizer:[((CrassusView * __weak *)views.array)[index].gestureRecognizers objectAtIndex:0]];
            }
        }
        [((UIView * __weak *)views.array)[index] removeFromSuperview];
    }
}

void CrassusAnimateSubviewsOutOfView(void* view, float duration)
{
    for (UIView* subview in ((__bridge UIView*)view).subviews)
    {
        [UIView animateWithDuration:duration animations:^{ subview.alpha = 0; } completion:^(BOOL finished){[subview removeFromSuperview];}];
    }
}

void* CrassusGetWindowFromView(void* view)
{
    return (__bridge void*)((__bridge UIView*)view).window;
}

void CrassusAnimateOutOfViewWithCompletion(void* view, float duration, SingleObjectAction completion)
{
    [UIView animateWithDuration:duration animations:^{ ((__bridge UIView __weak *)view).alpha = 0; } completion:^(BOOL completed){ completion((__bridge void*)(((__bridge UIView __weak *)view).superview)); }];
}

void CrassusAnimateSubviewsOutOfViewWithCompletion(void* containingView, float duration, SingleObjectAction completion)
{
    [UIView animateWithDuration:duration animations:^{ for (UIView* view in ((__bridge UIView*)containingView).subviews) view.alpha = 0; } completion:^(BOOL completed){ completion(containingView); }];
}

void* CrassusCreateSwipeRightView(Frame frame, const char * selector)
{
    CrassusSwipeView* view = [CrassusSwipeView create:frame selector:[NSString stringWithUTF8String:selector]];
    UISwipeGestureRecognizer* swipeRecognizer = [[UISwipeGestureRecognizer alloc] initWithTarget:view.dispatcher action:@selector(dispatch:)];
    swipeRecognizer.direction = UISwipeGestureRecognizerDirectionRight;
    [view addGestureRecognizer:swipeRecognizer];
    return (void*)CFBridgingRetain(view);
}

void* CrassusCreateSwipeLeftView(Frame frame, const char * selector)
{
    CrassusSwipeView* view = [CrassusSwipeView create:frame selector:[NSString stringWithUTF8String:selector]];
    UISwipeGestureRecognizer* swipeRecognizer = [[UISwipeGestureRecognizer alloc] initWithTarget:view.dispatcher action:@selector(dispatch:)];
    swipeRecognizer.direction = UISwipeGestureRecognizerDirectionLeft;
    [view addGestureRecognizer:swipeRecognizer];
    return (void*)CFBridgingRetain(view);
}

void CrassusSetClipsToBounds(void* view, Bools clipsToBounds)
{
    ((__bridge UIView*)view).clipsToBounds = clipsToBounds == BoolsYES;
}

void CrassusSlideIntoViewWithCompletion(void* view, float duration, SingleObjectAction completion)
{
    CGRect newFrame = ((__bridge __weak UIView*)view).frame;
    newFrame.origin.x -= 320;
    @autoreleasepool
    {
        [UIView animateWithDuration:duration animations:
         ^{
             ((__bridge __weak UIView*)view).frame = newFrame;
         } completion:^(BOOL completed){ completion(view); }];
    }
}

void CrassusStageOutOfView(void* view)
{
    CGRect newFrame = ((__bridge UIView*)view).frame;
    newFrame.origin.x += 320;
    ((__bridge UIView*)view).frame = newFrame;
}

void CrassusSlideSubviewsOutOfViewWithCompletion(void* containingView, float duration, SingleObjectAction completion)
{
    [UIView animateWithDuration:duration animations:
     ^
     {
         for (UIView* view in ((__bridge UIView*)containingView).subviews)
         {
             CGRect newFrame = view.frame;
             newFrame.origin.x += 320;
             view.frame = newFrame;
         }
     } completion:
     ^(BOOL complete)
     {
         completion(containingView);
         for (UIView* view in ((__bridge UIView*)containingView).subviews)
         {
             CFRelease(CFBridgingRetain(view));
         }
     }];
}

void CrassusSlideIntoView(void* view, float duration)
{
    CGRect newFrame = ((__bridge UIView*)view).frame;
    newFrame.origin.x -= 320;
    @autoreleasepool
    {
        [UIView animateWithDuration:duration animations:^{
            ((__bridge __weak UIView*)view).frame = newFrame;}];
    }
    
}

void CrassusShadeToNextViewWithCompletion(void* containingView, float duration, SingleObjectAction completion)
{
    
}

Frame CrassusGetFrame(void* view)
{
    Frame frame = { ((__bridge UIView*)view).frame.origin.x, ((__bridge UIView*)view).frame.origin.y, ((__bridge UIView*)view).frame.size.width, ((__bridge UIView*)view).frame.size.height };
    return frame;
}

void CrassusSlideViewsOutOfView(CArray views, float duration)
{
    [UIView animateWithDuration:duration animations:
     ^
     {
         for (unsigned long index = 0; index < views.size; ++index)
         {
             CGPoint newPosition = ((UIView * __weak *)views.array)[index].layer.mask.position;
             newPosition.x -= 320;
             ((UIView * __weak *)views.array)[index].layer.mask.position = newPosition;
         }
     } completion:
     ^(BOOL finished)
     {
         for (unsigned long index = 0; index < views.size; ++index)
         {
             [((UIView * __weak *)views.array)[index] removeFromSuperview];
             if ([((UIView * __weak *)views.array)[index] isKindOfClass:[CrassusView class ]])
             {
                 while (((CrassusView * __weak *)views.array)[index].gestureRecognizers.count)
                 {
                     [((CrassusView * __weak *)views.array)[index] removeGestureRecognizer:[((CrassusView * __weak *)views.array)[index].gestureRecognizers objectAtIndex:0]];
                 }
             }
         }
         free(views.array);
     }];
}

void CrassusBackSlideViewsOutOfView(CArray views, float duration)
{
    [UIView animateWithDuration:duration animations:
     ^
     {
         for (unsigned long index = 0; index < views.size; ++index)
         {
             CGRect newFrame = ((UIView * __weak *)views.array)[index].frame;
             newFrame.origin.x += 320;
             ((UIView * __weak *)views.array)[index].frame = newFrame;
         }
     } completion:
     ^(BOOL finished)
     {
         for (unsigned long index = 0; index < views.size; ++index)
         {
             [((UIView * __weak *)views.array)[index] removeFromSuperview];
             if ([((UIView * __weak *)views.array)[index] isKindOfClass:[CrassusView class ]])
             {
                 while (((CrassusView * __weak *)views.array)[index].gestureRecognizers.count)
                 {
                     [((CrassusView * __weak *)views.array)[index] removeGestureRecognizer:[((CrassusView * __weak *)views.array)[index].gestureRecognizers objectAtIndex:0]];
                 }
             }
         }
         free(views.array);
     }];
}

void CrassusSendViewToBottom(void* view)
{
    ((__bridge UIView*)view).layer.zPosition = 0;
}

void CrassusSetZorder(void* view, float zorder)
{
    ((__bridge UIView*)view).layer.zPosition = zorder;
}

void CrassusBackSlideIntoView(void* containingView, void* view, float duration)
{
    [((__bridge UIView*)containingView) addSubview:(__bridge UIView*)view];
    [UIView animateWithDuration:duration animations:
     ^
     {
         CGPoint newPosition = ((__bridge UIView*)view).layer.mask.position;
         newPosition.x += 320;
         ((__bridge UIView*)view).layer.mask.position = newPosition;
     } completion:^(BOOL finished){ }];
}

void CrassusSlideOutOfView(void* view, float duration)
{
    CGRect newFrame = ((__bridge UIView*)view).frame;
    newFrame.origin.x += 320;
    [UIView animateWithDuration:duration animations:^
     {
         ((__bridge __weak UIView*)view).frame = newFrame;
     } completion:^(BOOL finished)
     {
         [(__bridge __weak UIView*)view removeFromSuperview];
     }];
}

void* CrassusGetViewAtIndex(CArray views, unsigned int index)
{
    return (void*)CFBridgingRetain(((UIView * __weak *)views.array)[index]);
}

void CrassusFlushView(void* containingView)
{
    [((__bridge UIView*)containingView).subviews makeObjectsPerformSelector:@selector(removeFromSuperview)];
}

void CrassusRemoveGestureRecognizers(void* view)
{
    for (UIView* subview in ((__bridge UIView*)view).subviews)
    {
        CrassusRemoveGestureRecognizers((__bridge void*)subview);
    }
    for (UIGestureRecognizer* recognizer in ((__bridge UIView*)view).gestureRecognizers)
    {
        [(__bridge UIView*)view removeGestureRecognizer:recognizer];
    }
}

void CrassusReleaseView(void* view)
{
    CFBridgingRelease(view);
}

void CrassusSwapViews(void* oldView, void* newView, float duration)
{
    CGRect newFrame = ((__bridge __weak UIView*)newView).frame;
    newFrame.origin.x -= 320;
    @autoreleasepool
    {
        [UIView animateWithDuration:duration animations:^
         {
             ((__bridge __weak UIView*)newView).frame = newFrame;
         } completion:^(BOOL finished)
         {
             [(__bridge __weak UIView*)oldView removeFromSuperview];
         }];
    }
}

void* CrassusGetSnapShot(void* view)
{
    UIGraphicsBeginImageContextWithOptions(CGSizeMake(((__bridge UIView*)view).frame.size.width, ((__bridge UIView*)view).frame.size.height), NO, 0);
    CGContextRef context = UIGraphicsGetCurrentContext();
    [((__bridge UIView*)view).layer renderInContext:context];
    UIImage* screenShot = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return (void*)CFBridgingRetain(screenShot);
}

void CrassusSwapViewsWithCompletion(void* oldView, void* newView, void* containingView, float duration, TripleObjectAction completion)
{
    [(__bridge UIView*)containingView addSubview:(__bridge UIView*)oldView];
    [(__bridge UIView*)containingView addSubview:(__bridge UIView*)newView];
    CGRect oldFrame = ((__bridge __weak UIView*)oldView).frame;
    oldFrame.origin.x -= 80;
    CGRect newFrame = ((__bridge __weak UIView*)newView).frame;
    newFrame.origin.x -= 320;
    @autoreleasepool
    {
        [UIView animateWithDuration:duration animations:^
         {
             ((__bridge __weak UIView*)oldView).frame = oldFrame;
             ((__bridge __weak UIView*)newView).frame = newFrame;
         } completion:^(BOOL finished)
         {
             completion(oldView, newView, containingView);
         }];
    }
}

void CrassusBackSwapViewsWithCompletion(void* oldView, void* newView, void* containingView, float duration, TripleObjectAction completion)
{
    [(__bridge UIView*)containingView addSubview:(__bridge UIView*)newView];
    [(__bridge UIView*)containingView addSubview:(__bridge UIView*)oldView];
    CGRect oldFrame = ((__bridge __weak UIView*)oldView).frame;
    oldFrame.origin.x += 320;
    CGRect newFrame = ((__bridge UIView*)newView).frame;
    newFrame.origin.x += 80;
    @autoreleasepool
    {
        [UIView animateWithDuration:duration animations:^
         {
             ((__bridge __weak UIView*)oldView).frame = oldFrame;
             ((__bridge __weak UIView*)newView).frame = newFrame;
         } completion:^(BOOL finished)
         {
             completion(oldView, newView, containingView);
         }];
    }
}

void CrassusStageLeftOfView(void* view)
{
    CGRect frame = ((__bridge UIView*)view).frame;
    frame.origin.x -= 80;
    ((__bridge UIView*)view).frame = frame;
}

void* CrassusVitalize(void* view)
{
    return LiftView(PressView(view));
}

void CrassusSetCornerRadius(void* view, float radius)
{
    ((__bridge UIView*)view).layer.cornerRadius = radius;
}

void CrassusSetBorderWidth(void* view, float width)
{
    ((__bridge UIView*)view).layer.borderWidth = width;
}

void CrassusSetBorderColor(void* view, Rgba color)
{
    ((__bridge UIView*)view).layer.borderColor = (__bridge CGColorRef _Nullable)([[UIColor alloc] initWithRed:color.red green:color.green blue:color.blue alpha:color.alpha]);
}

void CrassusStageInsideOfView(void* view, void* subview)
{
    ((__bridge UIView*)subview).alpha = 0;
    [((__bridge UIView*)view) addSubview:(__bridge UIView*)subview];
}

unsigned int CrassusGetTag(void* view)
{
    return (unsigned int)((__bridge UIView *)view).tag;
}

void CrassusSetTag(void* view, unsigned int tag)
{
    ((__bridge UIView *)view).tag = tag;
}





























