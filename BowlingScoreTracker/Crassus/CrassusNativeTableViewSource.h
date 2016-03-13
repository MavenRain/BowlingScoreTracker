//
//  CrassusNativeTableViewSource.h
//  Crassus.Native.iOS
//
//  Created by SolomonRain on 3/11/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

#ifndef CrassusNativeTableViewSource_h
#define CrassusNativeTableViewSource_h

#include "TableViewSource.h"

#endif /* CrassusNativeTableViewSource_h */

@interface CrassusNativeTableViewSource : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    TableViewSource tableViewSource;
}
- (id)init:(TableViewSource)source;

- (NSInteger)tableView:(UITableView*)tableView numberOfRowsInSection:(NSInteger)section;

- (UITableViewCell*)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;

+ (CrassusNativeTableViewSource*)create:(TableViewSource)source;

- (NSString*)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section;

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath;

-(CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section;

-(NSInteger)numberOfSectionsInTableView:(UITableView *)tableView;

@end
