//
//  CrassusNativeTableViewSource.m
//  Crassus.Native.iOS
//
//  Created by SolomonRain on 3/11/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

@import UIKit;
#import "CrassusNativeTableViewSource.h"

@implementation CrassusNativeTableViewSource

- (id)init:(TableViewSource)source
{
    self = [super init];
    if (!self) return self;
    self->tableViewSource = source;
    return self;
}

- (NSInteger)tableView:(UITableView*)tableView numberOfRowsInSection:(NSInteger)section
{
    return (*tableViewSource.rowsInSection)((__bridge void*)tableView, (int)section);
}

- (UITableViewCell*)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    return (__bridge UITableViewCell*)(*tableViewSource.getCell)((__bridge void*)tableView, (__bridge void*)indexPath);
}

+ (CrassusNativeTableViewSource*)create:(TableViewSource)source
{
    return [[CrassusNativeTableViewSource alloc] init:source];
}

- (NSString*)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section
{
    return [NSString stringWithUTF8String:(*tableViewSource.titleForHeader)((__bridge void*)tableView, (int)section)];
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    (*tableViewSource.rowSelected)((__bridge void*)tableView, (__bridge void*)indexPath);
}

-(CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section
{
    return (*tableViewSource.getHeightForHeader)((__bridge void*)tableView, (int)section);
}

-(NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return (*tableViewSource.numberOfSections)((__bridge void*)tableView);
}

@end
