//
//  CrassusSwitch.swift
//  Crassus.Native.iOS
//
//  Created by SolomonRain on 2/24/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

import Foundation
import UIKit

@objc public class CrassusSwitch : UISwitch
{
    public var valueChangedHandler: SingleObjectAction
    
    private init()
    {
        valueChangedHandler = { _ in }
        super.init(frame: CGRectMake(0, 0, 0, 0))
        self.addTarget(self, action: "handleChangedValue", forControlEvents: .ValueChanged)
    }
    
    public required init?(coder aDecoder: NSCoder)
    {
        valueChangedHandler = { _ in }
        super.init(coder: aDecoder)
        self.addTarget(self, action: "handleChangedValue", forControlEvents: .ValueChanged)
    }
    
    private init(frame: Frame, valueChanged: SingleObjectAction)
    {
        valueChangedHandler = valueChanged
        super.init(frame: CGRectMake(CGFloat(frame.x), CGFloat(frame.y), CGFloat(frame.width), CGFloat(frame.height)))
        self.addTarget(self, action: "handleChangedValue", forControlEvents: .ValueChanged)
    }
    
    private init(frame: Frame)
    {
        valueChangedHandler = { _ in }
        super.init(frame: CGRectMake(CGFloat(frame.x), CGFloat(frame.y), CGFloat(frame.width), CGFloat(frame.height)))
        self.addTarget(self, action: "handleChangedValue", forControlEvents: .ValueChanged)
    }
    
    @objc public static func create(frame: Frame) -> CrassusSwitch
    {
        return CrassusSwitch(frame: frame)
    }
    
    private func handleChangedValue()
    {
        valueChangedHandler(LiftView(self));
    }
    
    @objc public func addHandler(handler: SingleObjectAction)
    {
        valueChangedHandler = handler
    }
}

