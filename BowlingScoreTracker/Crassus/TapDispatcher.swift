//
//  TapDispatcher.swift
//  TheObiG LLC
//
//  Created by SolomonRain on 2/18/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

import Foundation

@objc class TapDispatcher : NSObject, UIGestureRecognizerDelegate
{
    func dispatch(sender: AnyObject)
    {
        self.performSelector(Selector((((sender as! UITapGestureRecognizer).view) as! CrassusView).handler), withObject: (((sender as! UITapGestureRecognizer).view) as! CrassusView).superview)
    }
    
    func dismissKeyboardFromSubviews(containingView: AnyObject)
    {
        for view in (containingView as! UIView).subviews
        {
            dismissKeyboardFromSubviews(view)
            if let textField = view as? CrassusTextField
            {
                textField.resignFirstResponder()
            }
        }
    }
    
    func updateTotal(containingView: AnyObject)
    {
        UpdateTotal(Sublimate(containingView))
    }
    
    func addHalfFrame(containingView: AnyObject)
    {
        AddHalfFrame(Sublimate(containingView))
    }
    
    func removeHalfFrame(containingView: AnyObject)
    {
        RemoveHalfFrame(Sublimate(containingView))
    }
    
}




























