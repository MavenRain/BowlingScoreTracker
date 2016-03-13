//
//  CrassusSwipeView.swift
//  Crassus.Native.iOS
//
//  Created by SolomonRain on 3/11/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

import UIKit

@objc class CrassusSwipeView : UIView
{
    var handler: String = ""
    var dispatcher: SwipeDispatcher
    init(frame: CGRect, selector: String)
    {
        handler = selector
        dispatcher = SwipeDispatcher()
        super.init(frame: frame)
    }
    
    required init?(coder aDecoder: NSCoder)
    {
        dispatcher = SwipeDispatcher()
        super.init(frame: CGRectZero)
    }
    
    static func create(frame: Frame, selector: String) -> CrassusSwipeView
    {
        return CrassusSwipeView(frame: CGRectMake(CGFloat(frame.x), CGFloat(frame.y), CGFloat(frame.width), CGFloat(frame.height)), selector: selector)
    }
}
