//
//  ViewControllerDelegate.c
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#include "ViewControllerDelegate.h"

void* CreateViewController(SingleObjectAction viewDidLoad, ObjectActionBlockObjectFunction function)
{
    return (*function)(viewDidLoad);
}

void* GetView(void* viewController, Exchanger function)
{
    return (*function)(viewController);
}

void ReleaseViewController(void* viewController, SingleObjectAction action)
{
    (*action)(viewController);
}

void* AutoReleaseViewController(void* viewController, Exchanger function)
{
    return (*function)(viewController);
}

void* RetainViewController(void* viewController, Exchanger function)
{
    return (*function)(viewController);
}
