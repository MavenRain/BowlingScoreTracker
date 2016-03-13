//
//  SwitchDelegate.c
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#include "SwitchDelegate.h"
#include "GlobalDefinitions.h"

void* CreateSwitch(Frame frame, ViewCreator function)
{
    return (*function)(frame);
}

void AddSwitchValueChangedHandler(void* crassusSwitch, SingleObjectAction handler, ObjectActionBlockAction action)
{
    (*action)(crassusSwitch, handler);
}

Bools IsSwitchOn(void* crassusSwitch, ObjectPredicate function)
{
    return (*function)(crassusSwitch);
}