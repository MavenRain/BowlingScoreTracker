//
//  TextFieldDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

@import UIKit;
#import "GlobalDefinitions.h"
#import "BowlingScoreTracker-Swift.h"

void* CrassusCreateTextField(Frame frame)
{
    return (void*)CFBridgingRetain([CrassusTextField create:frame]);
}

void CrassusSetTextFieldText(void* textField, const char * text)
{
    ((__bridge UITextField*)textField).text = [NSString stringWithUTF8String:text];
}

void CrassusSetPlaceholder(void* textField, const char * placeholder)
{
    ((__bridge UITextField*)textField).placeholder = [NSString stringWithUTF8String:placeholder];
}

void CrassusSetTextFieldBorderColor(void* textField, Rgb color)
{
    ((__bridge UITextField*)textField).layer.borderColor = [UIColor colorWithRed:color.red green:color.green blue:color.blue alpha:1.0].CGColor;
}

void CrassusSetTextFieldBorderWidth(void* textField, float width)
{
    ((__bridge UITextField*)textField).layer.borderWidth = width;
}

void CrassusSetTextFieldCornerRadius(void* textField, float radius)
{
    ((__bridge UITextField*)textField).layer.cornerRadius = radius;
}

void CrassusSetTextFieldLeftView(void* textField, void* view)
{
    ((__bridge UITextField*)textField).leftView = CFBridgingRelease(view);
}

void CrassusSetTextFieldViewMode(void* textField, TextFieldViewMode mode)
{
    if (mode == TextFieldViewModeAlways) ((__bridge UITextField*)textField).leftViewMode = UITextFieldViewModeAlways;
    if (mode == TextFieldViewModeNever) ((__bridge UITextField*)textField).leftViewMode = UITextFieldViewModeNever;
    if (mode == TextFieldViewModeUnlessEditing) ((__bridge UITextField*)textField).leftViewMode = UITextFieldViewModeUnlessEditing;
    if (mode == TextFieldViewModeWhileEditing) ((__bridge UITextField*)textField).leftViewMode = UITextFieldViewModeWhileEditing;
}

void CrassusSetSecureEntry(void* textField, Bools secure)
{
    ((__bridge UITextField*)textField).secureTextEntry = secure == BoolsYES;
}

const char * CrassusGetTextFieldText(void* textField)
{
    return [((__bridge UITextField *)textField).text cStringUsingEncoding:NSUTF8StringEncoding];
}













































