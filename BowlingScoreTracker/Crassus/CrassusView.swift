//
//  CrassusView.swift
//  Crassus.Native.iOS
//
//  Created by SolomonRain on 2/24/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

import Foundation
import UIKit

@objc class CrassusView : UIView
{
    var handler: String
    var dispatcher: TapDispatcher
    init(frame: CGRect, selector: String)
    {
        handler = selector
        dispatcher = TapDispatcher()
        super.init(frame: frame)
    }
    
    required init?(coder aDecoder: NSCoder)
    {
        handler = ""
        dispatcher = TapDispatcher()
        super.init(frame: CGRectZero)
    }
    
    static func create(frame: Frame, selector: String) -> CrassusView
    {
        return CrassusView(frame: CGRectMake(CGFloat(frame.x), CGFloat(frame.y), CGFloat(frame.width), CGFloat(frame.height)), selector: selector)
    }
}
