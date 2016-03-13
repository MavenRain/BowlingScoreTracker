//
//  ViewControllerDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

@import UIKit;
#import "BowlingScoreTracker-Swift.h"

void* CrassusCreateViewController(SingleObjectAction viewDidLoad)
{
    return (void*)CFBridgingRetain([CrassusViewController create:viewDidLoad]);
}

void* CrassusGetView(void* viewController)
{
    return (__bridge void*)((__bridge UIViewController*)viewController).view;
}