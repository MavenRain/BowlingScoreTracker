//
//  TableViewDelegate.h
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#ifndef TableViewDelegate_h
#define TableViewDelegate_h

#include <stdio.h>

#endif /* TableViewDelegate_h */

#ifdef __cplusplus
extern "C"
{
typedef enum TableViewStyle : int TableViewStyle;
typedef enum Bools : int Bools;
}
#else
typedef enum TableViewStyle TableViewStyle;
typedef enum Bools Bools;
#endif

#ifdef __cplusplus
extern "C"
{
#endif

typedef struct Frame Frame;
typedef void(*SingleObjectAction)(void*);
typedef void*(*Exchanger)(void*);
typedef void(*ObjectDecimalAction)(void*, float);
typedef void(*ObjectToggler)(void*, Bools);
typedef void(*DoubleObjectConditionalAction)(void*, void*, Bools);
typedef struct EdgeInsets EdgeInsets;
typedef void(*InsetSetter)(void*, EdgeInsets);
typedef void*(*TableViewCreator)(void*, Frame, TableViewStyle);
typedef void*(*ObjectTextObjectFunction)(void*, const char *);

void* DequeueReusableCell(void* tableView, const char * identifier, ObjectTextObjectFunction function);
void* CrassusDequeueReusableCell(void* tableView, const char * identifier);
void* CreateTableViewWithSource(void* tableViewSource, Frame frame, TableViewStyle style, TableViewCreator function);
void* CrassusCreateTableViewWithSource(void* tableViewSource, Frame frame, TableViewStyle style);
void ReloadTableView(void* tableView, SingleObjectAction action);
void CrassusReloadTableView(void* tableView);
void* GetHeaderView(void* tableView, Exchanger function);
void* CrassusGetHeaderView(void* tableView);
void SetRowHeight(void* tableView, float height, ObjectDecimalAction action);
void CrassusSetRowHeight(void* tableView, float height);
void TableViewSetScrollability(void* tableView, Bools scrollable, ObjectToggler action);
void CrassusTableViewSetScrollability(void* tableView, Bools scrollable);
void DeselectRow(void* tableView, void* indexPath, Bools animated, DoubleObjectConditionalAction action);
void CrassusDeselectRow(void* tableView, void* indexPath, Bools animated);
void SetSeparatorInsets(void* tableView, EdgeInsets insets, InsetSetter action);
void CrassusSetSeparatorInsets(void* tableView, EdgeInsets insets);

#ifdef __cplusplus
}
#endif
