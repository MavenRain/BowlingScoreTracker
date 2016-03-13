//
//  CrassusTextField.swift
//  Crassus.Native.iOS
//
//  Created by SolomonRain on 3/11/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

import UIKit

class CrassusTextField : UITextField, UITextFieldDelegate
{
    override func textRectForBounds(bounds: CGRect) -> CGRect
    {
        return CGRectMake(bounds.origin.x + 35, bounds.origin.y, bounds.size.width, bounds.size.height)
    }
    
    override func editingRectForBounds(bounds: CGRect) -> CGRect
    {
        return CGRectMake(bounds.origin.x + 35, bounds.origin.y, bounds.size.width, bounds.size.height)
    }
    
    @objc static func create(frame: Frame) -> CrassusTextField
    {
        let textField = CrassusTextField(frame: CGRectMake(CGFloat(frame.x), CGFloat(frame.y), CGFloat(frame.width), CGFloat(frame.height)))
        textField.delegate = textField
        textField.addTarget(textField, action: Selector("textDidChange:"), forControlEvents: .EditingDidEnd)
        return textField
    }
    
    func textDidChange(textField: UITextField)
    {
        EditingChanged(Sublimate(textField))
    }
    
    func textFieldShouldReturn(textField: UITextField) -> Bool
    {
        self.resignFirstResponder()
        return true
    }
}
