//
//  CrassusViewController.swift
//  Crassus.Native.iOS
//
//  Created by SolomonRain on 2/24/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

import Foundation
import UIKit

@objc public class CrassusViewController : UIViewController
{
    var viewLoaded: SingleObjectAction!
    
    init()
    {
        viewLoaded = { _ in }
        super.init(nibName: nil, bundle: nil)
        self.automaticallyAdjustsScrollViewInsets = true
    }
    
    init(viewLoaded: SingleObjectAction)
    {
        self.viewLoaded = viewLoaded
        super.init(nibName: nil, bundle: nil)
    }
    
    public required init?(coder aDecoder: NSCoder)
    {
        viewLoaded = { _ in }
        super.init(nibName: nil, bundle: nil)
    }
    
    public static func create(viewLoaded: SingleObjectAction) -> CrassusViewController
    {
        return CrassusViewController(viewLoaded: viewLoaded)
    }
    
    public override func viewDidLoad()
    {
        super.viewDidLoad()
        self.viewLoaded(LiftView(self.view));
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
