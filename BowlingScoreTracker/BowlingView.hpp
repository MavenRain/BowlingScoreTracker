//
//  BowlingView.hpp
//  BowlingScoreTracker
//
//  Created by SolomonRain on 3/11/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

#ifndef BowlingView_hpp
#define BowlingView_hpp

#include <stdio.h>
typedef struct Frame Frame;
#endif /* BowlingView_hpp */


#ifdef __cplusplus
extern "C"
{
#endif
    
    void* BowlingScreen(Frame frame);
    void EditingChanged(void * textField);
    void UpdateTotal(void * containingView);
    void AddHalfFrame(void * containingView);
    void RemoveHalfFrame(void * containingView);
    
    
#ifdef __cplusplus
}
#endif
