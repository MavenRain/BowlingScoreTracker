//
//  LabelDelegate.c
//  TheObiG LLC
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#include "LabelDelegate.h"
#include "GlobalDefinitions.h"

void* CreateLabel(Frame frame, const char * text, unsigned int fontSize, LabelCreator function)
{
    return (*function)(frame, text, fontSize);
}

void CenterLabelText(void* label, SingleObjectAction action)
{
    (*action)(label);
}

void SetLabelTextColor(void* label, Rgba color, ViewColorAction action)
{
    (*action)(label, color);
}

void* CreateBoldLabel(Frame frame, const char * text, unsigned int fontSize, LabelCreator function)
{
    return (*function)(frame, text, fontSize);
}

void SetNumberOfLines(void* label, unsigned int numberOfLines, ObjectWholeNumberAction action)
{
    (*action)(label, numberOfLines);
}