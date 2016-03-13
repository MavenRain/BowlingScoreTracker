//
//  CrassusTableViewSource.swift
//  Crassus.Native.iOS
//
//  Created by SolomonRain on 2/24/16.
//  Copyright © 2016 TheObiGLLC. All rights reserved.
//

import Foundation
import UIKit

@objc public class CrassusTableViewSource : NSObject, UITableViewDataSource, UITableViewDelegate
{
    var tableViewSource: TableViewSource
    private override init()
    {
        tableViewSource = TableViewSource()
    }
    init(source: TableViewSource)
    {
        tableViewSource = source
    }
    
    public static func create(source: TableViewSource) -> CrassusTableViewSource
    {
        return CrassusTableViewSource(source: source)
    }
    
    @objc public func tableView(tableView: UITableView, numberOfRowsInSection section: Int) -> Int
    {
        return Int(ObjectNumberNumberFunctionBinder(tableViewSource.rowsInSection, LiftTableView(tableView), Int32(section)))
    }
    
    @objc public func tableView(tableView: UITableView, cellForRowAtIndexPath indexPath: NSIndexPath) -> UITableViewCell
    {
        return PressTableViewCell(DoubleObjectObjectFunctionBinder(tableViewSource.getCell, LiftTableView(tableView), LiftObject(indexPath)));
    }
    
    @objc public func tableView(tableView: UITableView, titleForHeaderInSection section: Int) -> String?
    {
        return PressString(ObjectWholeNumberTextFunctionBinder(tableViewSource.titleForHeader, LiftTableView(tableView), uint(section)));
    }
    
    @objc public func tableView(tableView: UITableView, didSelectRowAtIndexPath indexPath: NSIndexPath)
    {
        DoubleObjectActionBinder(tableViewSource.rowSelected, LiftTableView(tableView), LiftObject(indexPath));
    }
    
    @objc public func tableView(tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat
    {
        return CGFloat(ObjectWholeNumberDecimalFunctionBinder(tableViewSource.getHeightForHeader, LiftTableView(tableView), UInt32(section)))
    }
    
    @objc public func numberOfSectionsInTableView(tableView: UITableView) -> Int
    {
        return Int(SingleObjectWholeNumberFunctionBinder(tableViewSource.numberOfSections, LiftTableView(tableView)))
    }
    
}
