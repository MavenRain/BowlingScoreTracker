//
//  TableViewSource.h
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#ifndef TableViewSource_h
#define TableViewSource_h

#include <stdio.h>
typedef int(*ObjectNumberNumberFunction)(void*, int);
typedef void*(*DoubleObjectObjectFunction)(void*, void*);
typedef int(*ObjectNumberFunction)(void*);
typedef void*(*ObjectNumberObjectFunction)(void*, int);
typedef void(*DoubleObjectAction)(void*, void*);
typedef float(*DoubleObjectDecimalFunction)(void*, void*);
typedef float(*ObjectWholeNumberDecimalFunction)(void*, unsigned int);
typedef const char *(*ObjectWholeNumberTextFunction)(void*, unsigned int);
typedef float(*ObjectNumberDecimalFunction)(void*, int);

typedef struct TableViewSource
{
    ObjectNumberNumberFunction rowsInSection;
    DoubleObjectObjectFunction getCell;
    ObjectNumberFunction numberOfSections;
    ObjectNumberObjectFunction getViewForHeader;
    ObjectNumberObjectFunction getViewForFooter;
    DoubleObjectAction accessoryButtonTapped;
    DoubleObjectDecimalFunction getHeightForRow;
    ObjectWholeNumberDecimalFunction getHeightForHeader;
    ObjectWholeNumberTextFunction titleForHeader;
    DoubleObjectAction rowSelected;
    
} TableViewSource;

typedef void*(*TableViewSourceCreator)(TableViewSource);

int ObjectNumberNumberFunctionBinder(ObjectNumberNumberFunction function, void* object, int number);
void* DoubleObjectObjectFunctionBinder(DoubleObjectObjectFunction function, void* object1, void* object2);
int ObjectNumberFunctionBinder(ObjectNumberFunction function, void* object);
void* ObjectNumberObjectFunctionBinder(ObjectNumberObjectFunction function, void* object, int number);
void DoubleObjectActionBinder(DoubleObjectAction action, void* object1, void* object2);
float DoubleObjectDecimalFunctionBinder(DoubleObjectDecimalFunction function, void* object1, void* object2);
float ObjectWholeNumberDecimalFunctionBinder(ObjectWholeNumberDecimalFunction function, void* object, unsigned int wholeNumber);
const char * ObjectWholeNumberTextFunctionBinder(ObjectWholeNumberTextFunction function, void* object, unsigned int wholeNumber);
float ObjectNumberDecimalFunctionBinder(ObjectNumberDecimalFunction function, void* object, int number);
unsigned int SingleObjectWholeNumberFunctionBinder(ObjectNumberFunction function, void* object);

#endif /* TableViewSource_h */

