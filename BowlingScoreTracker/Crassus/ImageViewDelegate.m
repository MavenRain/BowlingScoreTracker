//
//  ImageViewDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

@import UIKit;
#import "GlobalDefinitions.h"


void* CrassusCreateImageViewFromImage(void* image)
{
    return (void*)CFBridgingRetain([[UIImageView alloc] initWithImage:(__bridge_transfer UIImage*)image]);
}

void CrassusSetUserInteraction(void* imageView, Bools enabled)
{
    ((__bridge UIImageView*)imageView).userInteractionEnabled = enabled == BoolsYES;
}