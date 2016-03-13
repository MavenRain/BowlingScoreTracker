//
//  TextFieldDelegate.h
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#ifndef TextFieldDelegate_h
#define TextFieldDelegate_h

#endif /* TextFieldDelegate_h */

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdio.h>
typedef struct Frame Frame;
typedef struct Rgb Rgb;
typedef enum TextFieldViewMode TextFieldViewMode;
typedef enum Bools Bools;
typedef void*(*ViewCreator)(Frame);
typedef void(*DoubleObjectAction)(void*, void*);
typedef void(*ViewShortColorAction)(void*, Rgb);
typedef void(*ObjectDecimalAction)(void*, float);
typedef void(*ViewModeAction)(void*, TextFieldViewMode);
typedef void(*ObjectTextAction)(void*, const char *);
typedef void(*ObjectToggler)(void*, Bools);
typedef const char *(*ObjectTextFunction)(void *);



void* CreateTextField(Frame frame, ViewCreator function);

void* CrassusCreateTextField(Frame frame);

void SetTextFieldText(void* textField, const char * text, ObjectTextAction action);

void CrassusSetTextFieldText(void* textField, const char * text);

void SetPlaceholder(void* textField, const char * placeholder, ObjectTextAction action);

void CrassusSetPlaceholder(void* textField, const char * placeholder);

void SetTextFieldBorderColor(void* textField, Rgb color, ViewShortColorAction action);

void CrassusSetTextFieldBorderColor(void* textField, Rgb color);

void SetTextFieldBorderWidth(void* textField, float width, ObjectDecimalAction action);

void CrassusSetTextFieldBorderWidth(void* textField, float width);

void SetTextFieldCornerRadius(void* textField, float radius, ObjectDecimalAction action);

void CrassusSetTextFieldCornerRadius(void* textField, float radius);

void SetTextFieldLeftView(void* textField, void* view, DoubleObjectAction action);

void CrassusSetTextFieldLeftView(void* textField, void* view);

void SetTextFieldViewMode(void* textField, TextFieldViewMode mode, ViewModeAction action);

void CrassusSetTextFieldViewMode(void* textField, TextFieldViewMode mode);

void SetSecureEntry(void* textField, Bools secure, ObjectToggler action);

void CrassusSetSecureEntry(void* textField, Bools secure);

const char * GetTextFieldText(void* textField, ObjectTextFunction function);

const char * CrassusGetTextFieldText(void* textField);


#ifdef __cplusplus
}
#endif











































