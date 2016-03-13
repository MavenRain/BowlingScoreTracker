//
//  ScrollViewDelegate.m
//  BowlingScoreTracker
//
//  Created by SolomonRain on 3/12/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

@import UIKit;
#import "ScrollViewDelegate.h"
#import "GlobalDefinitions.h"

void * CrassusCreateScrollView(Frame frame)
{
    return (void*)CFBridgingRetain([[UIScrollView alloc] initWithFrame:CGRectMake(frame.x, frame.y, frame.width, frame.height)]);
}

float CrassusGetContentHeight(void * scrollView)
{
    return ((__bridge UIScrollView *)scrollView).contentSize.height;
}

float CrassusGetContentWidth(void * scrollView)
{
    return ((__bridge UIScrollView *)scrollView).contentSize.width;
}

void CrassusSetContentHeight(void * scrollView, float height)
{
    CGSize contentSize = ((__bridge UIScrollView *)scrollView).contentSize;
    contentSize.height = height;
    ((__bridge UIScrollView *)scrollView).contentSize = contentSize;
}

void CrassusSetContentWidth(void * scrollView, float width)
{
    CGSize contentSize = ((__bridge UIScrollView *)scrollView).contentSize;
    contentSize.width = width;
    ((__bridge UIScrollView *)scrollView).contentSize = contentSize;
}



