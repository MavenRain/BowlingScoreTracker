//
//  TableViewSource.c
//  TheObiG LLC
//
//  Created by SolomonRain on 2/18/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#include "GlobalDefinitions.h"
#include "TableViewSource.h"

int ObjectNumberNumberFunctionBinder(ObjectNumberNumberFunction function, void* object, int number)
{
    return (*function)(object, number);
}
void* DoubleObjectObjectFunctionBinder(DoubleObjectObjectFunction function, void* object1, void* object2)
{
    return (*function)(object1, object2);
}
int ObjectNumberFunctionBinder(ObjectNumberFunction function, void* object)
{
    return (*function)(object);
}
void* ObjectNumberObjectFunctionBinder(ObjectNumberObjectFunction function, void* object, int number)
{
    return (*function)(object, number);
}
void DoubleObjectActionBinder(DoubleObjectAction action, void* object1, void* object2)
{
    (*action)(object1, object2);
}
float DoubleObjectDecimalFunctionBinder(DoubleObjectDecimalFunction function, void* object1, void* object2)
{
    return (*function)(object1, object2);
}
float ObjectWholeNumberDecimalFunctionBinder(ObjectWholeNumberDecimalFunction function, void* object, unsigned int wholeNumber)
{
    return (*function)(object, wholeNumber);
}
const char * ObjectWholeNumberTextFunctionBinder(ObjectWholeNumberTextFunction function, void* object, unsigned int wholeNumber)
{
    return (*function)(object, wholeNumber);
}

float ObjectNumberDecimalFunctionBinder(ObjectNumberDecimalFunction function, void* object, int number)
{
    return (*function)(object, number);
}

unsigned int SingleObjectWholeNumberFunctionBinder(ObjectNumberFunction function, void* object)
{
    return (*function)(object);
}