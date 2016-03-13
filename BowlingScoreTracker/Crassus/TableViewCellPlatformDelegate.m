//
//  TableViewCellPlatformDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

@import UIKit;

UITableViewCell* PressTableViewCell(void* cell)
{
    return CFBridgingRelease(cell);
}


