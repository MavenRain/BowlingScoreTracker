//
//  UniversalViewLoader.c
//  BowlingScoreTracker
//
//  Created by SolomonRain on 3/11/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

#include "UniversalViewLoader.h"
#include "GlobalDefinitions.h"
#include "ViewDelegate.h"
#include "BowlingView.hpp"

void UniversalViewLoader(void* containingView)
{
    Frame workingFrame = GetFrame(containingView, CrassusGetFrame);
    void* bowlingScreen = BowlingScreen(workingFrame);
    AddSubview(containingView, bowlingScreen, CrassusAddSubview);
}

SingleObjectAction ViewLoader()
{
    return UniversalViewLoader;
}