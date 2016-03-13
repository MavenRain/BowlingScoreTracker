//
//  ScrollViewDelegate.c
//  BowlingScoreTracker
//
//  Created by SolomonRain on 3/12/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

#include "ScrollViewDelegate.h"
#include "GlobalDefinitions.h"

void* CreateScrollView(Frame frame, ViewCreator function)
{
    return (*function)(frame);
}

float GetContentHeight(void* scrollView, ObjectDecimalFunction function)
{
    return (*function)(scrollView);
}

float GetContentWidth(void* scrollView, ObjectDecimalFunction function)
{
    return (*function)(scrollView);
}

void SetContentHeight(void* scrollView, float height, ObjectDecimalAction action)
{
    (*action)(scrollView, height);
}

void SetContentWidth(void* scrollView, float width, ObjectDecimalAction action)
{
    (*action)(scrollView, width);
}
