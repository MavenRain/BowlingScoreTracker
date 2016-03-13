//
//  TableViewDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

@import UIKit;
#import "GlobalDefinitions.h"

static void* CrassusGlobalTableViewSourceClientInstance = NULL;

void* CrassusDequeueReusableCell(void* tableView, const char * identifier)
{
    return (__bridge void*)[(__bridge UITableView*)tableView dequeueReusableCellWithIdentifier: [NSString stringWithUTF8String:identifier]];
}

void* CrassusCreateTableViewWithSource(void* tableViewSource, Frame frame, TableViewStyle style)
{
    CrassusGlobalTableViewSourceClientInstance = tableViewSource;
    void* output = (void*)CFBridgingRetain([[UITableView alloc] initWithFrame:CGRectMake(frame.x, frame.y, frame.width, frame.height) style:style == TableViewStyleGrouped ? UITableViewStyleGrouped : UITableViewStylePlain]);
    ((__bridge UITableView*)output).dataSource = (__bridge id)CrassusGlobalTableViewSourceClientInstance;
    ((__bridge UITableView*)output).delegate = (__bridge id)CrassusGlobalTableViewSourceClientInstance;
    return output;
}

void CrassusReloadTableView(void* tableView)
{
    [(__bridge UITableView*)tableView reloadData];
}

void* CrassusGetHeaderView(void* tableView)
{
    return (__bridge void*)(((__bridge UITableView*)tableView).tableHeaderView);
}

void CrassusSetRowHeight(void* tableView, float height)
{
    ((__bridge UITableView*)tableView).rowHeight = height;
}

void CrassusTableViewSetScrollability(void* tableView, Bools scrollable)
{
    ((__bridge UITableView*)tableView).scrollEnabled = scrollable == BoolsYES;
}

void CrassusDeselectRow(void* tableView, void* indexPath, Bools animated)
{
    [(__bridge UITableView*)tableView deselectRowAtIndexPath:(__bridge NSIndexPath*)indexPath animated:animated == BoolsYES];
}

void CrassusSetSeparatorInsets(void* tableView, EdgeInsets insets)
{
    ((__bridge UITableView*)tableView).separatorInset = UIEdgeInsetsMake(insets.top, insets.left, insets.bottom, insets.right);
}
