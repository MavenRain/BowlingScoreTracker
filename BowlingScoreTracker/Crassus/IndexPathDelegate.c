//
//  IndexPathDelegate.c
//  TheObiG LLC
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#include "IndexPathDelegate.h"

long GetIndexPathSection(void* indexPath, ObjectLongNumberFunction function)
{
    return (*function)(indexPath);
}

long GetIndexPathRow(void* indexPath, ObjectLongNumberFunction function)
{
    return (*function)(indexPath);
}