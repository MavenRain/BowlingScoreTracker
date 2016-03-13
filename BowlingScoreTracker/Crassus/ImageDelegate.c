//
//  ImageDelegate.c
//  TheObiG LLC
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#include "ImageDelegate.h"

void* CreateImage(const char * url, TextObjectFunction function)
{
    return (*function)(url);
}