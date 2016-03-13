//
//  UniversalViewLoader.h
//  BowlingScoreTracker
//
//  Created by SolomonRain on 3/11/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

#ifndef UniversalViewLoader_h
#define UniversalViewLoader_h

#include <stdio.h>
typedef void(*SingleObjectAction)(void*);
#endif /* UniversalViewLoader_h */

void UniversalViewLoader(void* containingView);
SingleObjectAction ViewLoader();
