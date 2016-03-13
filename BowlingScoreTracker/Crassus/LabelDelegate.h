//
//  LabelDelegate.h
//  TheObiG LLC
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#ifndef LabelDelegate_h
#define LabelDelegate_h

#endif /* LabelDelegate_h */

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdio.h>
typedef struct Frame Frame;
typedef void*(*LabelCreator)(Frame, const char *, unsigned int);
typedef void(*SingleObjectAction)(void*);
typedef struct Rgba Rgba;
typedef void(*ViewColorAction)(void*, Rgba);
typedef void(*ObjectWholeNumberAction)(void*, unsigned int);

void* CreateLabel(Frame frame, const char * text, unsigned int fontSize, LabelCreator function);
void* CrassusCreateLabel(Frame frame, const char * text, unsigned int fontSize);
void CenterLabelText(void* label, SingleObjectAction action);
void CrassusCenterLabelText(void* label);
void SetLabelTextColor(void* label, Rgba color, ViewColorAction action);
void CrassusSetLabelTextColor(void* label, Rgba color);
void* CreateBoldLabel(Frame frame, const char * text, unsigned int fontSize, LabelCreator function);
void* CrassusCreateBoldLabel(Frame frame, const char * text, unsigned int fontSize);
void SetNumberOfLines(void* label, unsigned int numberOfLines, ObjectWholeNumberAction action);
void CrassusSetNumberOfLines(void* label, unsigned int numberOfLines);





#ifdef __cplusplus
}
#endif



































































