//
//  TextFieldDelegate.c
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#include "TextFieldDelegate.h"
#include "GlobalDefinitions.h"

void* CreateTextField(Frame frame, ViewCreator function)
{
    return (*function)(frame);
}

void SetTextFieldText(void* textField, const char * text, ObjectTextAction action)
{
    (*action)(textField, text);
}

void SetPlaceholder(void* textField, const char * placeholder, ObjectTextAction action)
{
    (*action)(textField, placeholder);
}

void SetTextFieldBorderColor(void* textField, Rgb color, ViewShortColorAction action)
{
    (*action)(textField, color);
}

void SetTextFieldBorderWidth(void* textField, float width, ObjectDecimalAction action)
{
    (*action)(textField, width);
}

void SetTextFieldCornerRadius(void* textField, float radius, ObjectDecimalAction action)
{
    (*action)(textField, radius);
}

void SetTextFieldLeftView(void* textField, void* view, DoubleObjectAction action)
{
    (*action)(textField, view);
}

void SetTextFieldViewMode(void* textField, TextFieldViewMode mode, ViewModeAction action)
{
    (*action)(textField, mode);
}

void SetSecureEntry(void* textField, Bools secure, ObjectToggler action)
{
    (*action)(textField, secure);
}

const char * GetTextFieldText(void * textField, ObjectTextFunction function)
{
    return (*function)(textField);
}

void SelectAllText(void * textField, SingleObjectAction action)
{
    (*action)(textField);
}


























