//
//  ImageDelegate.h
//  TheObiG LLC
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#ifndef ImageDelegate_h
#define ImageDelegate_h

#include <stdio.h>
typedef void*(*TextObjectFunction)(const char *);

void* CreateImage(const char * url, TextObjectFunction function);
void* CrassusCreateImage(const char * url);

#endif /* ImageDelegate_h */
