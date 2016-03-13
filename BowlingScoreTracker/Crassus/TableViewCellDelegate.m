//
//  TableViewCellDelegate.m
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

@import UIKit;
#import "GlobalDefinitions.h"

void* CrassusCreateDefaultCell(const char * identifier)
{
    return (void*)CFBridgingRetain([[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:[NSString stringWithUTF8String:identifier]]);
}

void* CrassusCreateValue1Cell(const char * identifier)
{
    return (void*)CFBridgingRetain([[UITableViewCell alloc] initWithStyle:UITableViewCellStyleValue1 reuseIdentifier:[NSString stringWithUTF8String:identifier]]);
}

void CrassusSetCellTextLabel(void* cell, void* label)
{
    ((__bridge UITableViewCell*)cell).textLabel.text = CFBridgingRelease(label);
}

void CrassusSetImageForCell(void* cell, void* image)
{
    ((__bridge UITableViewCell*)cell).imageView.image = CFBridgingRelease(image);
}

void CrassusSetAccessoryViewForCell(void* cell, void* accessory)
{
    ((__bridge UITableViewCell*)cell).accessoryView = CFBridgingRelease(accessory);
}

void* CrassusCreateCellAccessory(CellAccessory accessoryValue)
{
    if (accessoryValue & CellAccessoryCheckmark) return (void*)UITableViewCellAccessoryCheckmark;
    if (accessoryValue & CellAccessoryDisclosureIndicator) return (void*)UITableViewCellAccessoryDisclosureIndicator;
    if (accessoryValue & CellAccessoryDetailDisclosureButton) return (void*)UITableViewCellAccessoryDetailDisclosureButton;
    return UITableViewCellAccessoryNone;
}

void* CrassusGetCellContentView(void* cell)
{
    return (__bridge void*)((__bridge UITableViewCell*)cell).contentView;
}

void* CrassusGetCellTextLabel(void* cell)
{
    return (__bridge void*)((__bridge UITableViewCell*)cell).textLabel;
}

void CrassusSetSelectionStyle(void* cell, TableViewSelectionStyle style)
{
    if (style & TableViewSelectionStyleBlue) ((__bridge UITableViewCell*)cell).selectionStyle = UITableViewCellSelectionStyleBlue;
    if (style & TableViewSelectionStyleDefault) ((__bridge UITableViewCell*)cell).selectionStyle = UITableViewCellSelectionStyleDefault;
    if (style & TableViewSelectionStyleGray) ((__bridge UITableViewCell*)cell).selectionStyle = UITableViewCellSelectionStyleGray;
    if (!style) ((__bridge UITableViewCell*)cell).selectionStyle = UITableViewCellSelectionStyleNone;
}

void CrassusSetSeparationInsets(void* cell, EdgeInsets insets)
{
    ((__bridge UITableViewCell*)cell).separatorInset = UIEdgeInsetsMake(insets.top, insets.left, insets.bottom, insets.right);
}

void CrassusSetLayoutMargins(void* cell, LayoutMargins margins)
{
    ((__bridge UITableViewCell*)cell).layoutMargins = UIEdgeInsetsMake(margins.top, margins.left, margins.bottom, margins.right);
}

void CrassusTogglePreservationOfSuperviewLayoutMargins(void* cell, Bools toggle)
{
    ((__bridge UITableViewCell*)cell).preservesSuperviewLayoutMargins = toggle == BoolsYES;
}

void CrassusSetCellAccessoryType(void* cell, CellAccessory accessoryType)
{
    if (accessoryType == CellAccessoryCheckmark) ((__bridge UITableViewCell*)cell).accessoryType = UITableViewCellAccessoryCheckmark;
    if (accessoryType == CellAccessoryDetailDisclosureButton) ((__bridge UITableViewCell*)cell).accessoryType = UITableViewCellAccessoryDetailDisclosureButton;
    if (accessoryType == CellAccessoryDisclosureIndicator) ((__bridge UITableViewCell*)cell).accessoryType = UITableViewCellAccessoryDisclosureIndicator;
    ((__bridge UITableViewCell*)cell).accessoryType = UITableViewCellAccessoryNone;
}

void CrassusSetTextLabelFontSize(void* cell, unsigned int size)
{
    ((__bridge UITableViewCell*)cell).textLabel.font = [UIFont systemFontOfSize:size];
}

void CrassusSetCellSeparatorInsets(void* cell, EdgeInsets insets)
{
    ((__bridge UITableViewCell*)cell).separatorInset = UIEdgeInsetsMake(insets.top, insets.left, insets.bottom, insets.right);
}

