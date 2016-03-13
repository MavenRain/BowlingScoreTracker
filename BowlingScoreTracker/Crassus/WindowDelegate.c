//
//  WindowDelegate.c
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#include "WindowDelegate.h"

void SetRootViewController(void* window, void* viewController, DoubleObjectAction action)
{
    (*action)(window, viewController);
}

void * GetMasterView(void * window, Exchanger function)
{
    return (*function)(window);
}