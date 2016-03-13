//
//  SwipeDispatcher.swift
//  Crassus.Native.iOS
//
//  Created by SolomonRain on 3/11/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

import Foundation

@objc class SwipeDispatcher : NSObject, UIGestureRecognizerDelegate
{
    func dispatch(sender: AnyObject)
    {
        self.performSelector(Selector((((sender as! UISwipeGestureRecognizer).view) as! CrassusSwipeView).handler), withObject: (((sender as! UISwipeGestureRecognizer).view) as! CrassusSwipeView).superview)
    }
}
