//
//  TableViewPlatformDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

@import UIKit;

void* LiftTableView(UITableView* tableView)
{
    return (__bridge void*)tableView;
}