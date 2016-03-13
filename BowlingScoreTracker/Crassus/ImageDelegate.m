//
//  ImageDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

@import UIKit;

void* CrassusCreateImage(const char * url)
{
    return (void*)CFBridgingRetain([UIImage imageNamed:[NSString stringWithUTF8String:url]]);
}