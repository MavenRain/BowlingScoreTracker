//
//  LabelDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

@import UIKit;
#import "GlobalDefinitions.h"

void* CrassusCreateLabel(Frame frame, const char * text, unsigned int fontSize)
{
    UILabel* label = [[UILabel alloc] initWithFrame:CGRectMake(frame.x, frame.y, frame.width, frame.height)];
    [label setText:[NSString stringWithUTF8String:text]];
    [label setFont:[UIFont systemFontOfSize:fontSize]];
    return (void*)CFBridgingRetain(label);
}

void CrassusCenterLabelText(void* label)
{
    ((__bridge UILabel*)label).textAlignment = NSTextAlignmentCenter;
}

void CrassusSetLabelTextColor(void* label, Rgba color)
{
    ((__bridge UILabel*)label).textColor = [UIColor colorWithRed:color.red green:color.green blue:color.blue alpha:color.alpha];
}

void* CrassusCreateBoldLabel(Frame frame, const char * text, unsigned int fontSize)
{
    UILabel* label = [[UILabel alloc] initWithFrame:CGRectMake(frame.x, frame.y, frame.width, frame.height)];
    [label setText:[NSString stringWithUTF8String:text]];
    [label setFont:[UIFont boldSystemFontOfSize:fontSize]];
    return (void*)CFBridgingRetain(label);
}

void CrassusSetNumberOfLines(void* label, unsigned int numberOfLines)
{
    ((__bridge UILabel*)label).numberOfLines = numberOfLines;
}
















