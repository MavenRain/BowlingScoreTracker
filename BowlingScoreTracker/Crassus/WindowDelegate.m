//
//  WindowDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

@import UIKit;

void CrassusSetRootViewController(void* window, void* viewController)
{
    ((__bridge UIWindow*)window).rootViewController = CFBridgingRelease(viewController);
}

void * CrassusGetMasterView(void * window)
{
    return (__bridge void *)[((__bridge UIWindow *)window).subviews objectAtIndex:0];
}