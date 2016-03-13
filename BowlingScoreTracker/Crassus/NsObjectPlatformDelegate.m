//
//  NsObjectPlatformDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

@import Foundation;

void* LiftObject(NSObject* object)
{
    return (__bridge void*)object;
}
