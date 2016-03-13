//
//  TableViewCellDelegate.h
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#ifndef TableViewCellDelegate_h
#define TableViewCellDelegate_h

#endif /* TableViewCellDelegate_h */

#include <stdio.h>

#ifdef __cplusplus
extern "C"
{
#endif
    
typedef void*(*TextObjectFunction)(const char *);
typedef void(*DoubleObjectAction)(void*, void*);
typedef enum CellAccessory CellAccessory;
typedef void*(*AccessoryProducer)(CellAccessory);
typedef void*(*Exchanger)(void*);
typedef enum TableViewSelectionStyle TableViewSelectionStyle;
typedef void(*SelectionStyleAction)(void*, TableViewSelectionStyle);
typedef struct EdgeInsets EdgeInsets;
typedef void(*InsetSetter)(void*, EdgeInsets);
typedef struct EdgeInsets LayoutMargins;
typedef void(*MarginSetter)(void*, LayoutMargins);
typedef enum Bools Bools;
typedef void(*ObjectToggler)(void*, Bools);
typedef void(*Accessorizer)(void*, CellAccessory);
typedef void(*ObjectWholeNumberAction)(void*, unsigned int);



void* CreateDefaultCell(const char * identifier, TextObjectFunction function);
void* CrassusCreateDefaultCell(const char * identifier);
void* CreateValue1Cell(const char * identifier, TextObjectFunction function);
void* CrassusCreateValue1Cell(const char * identifier);
void SetCellTextLabel(void* cell, void* label, DoubleObjectAction action);
void CrassusSetCellTextLabel(void* cell, void* label);
void SetImageForCell(void* cell, void* image, DoubleObjectAction action);
void CrassusSetImageForCell(void* cell, void* image);
void SetAccessoryViewForCell(void* cell, void* accessory, DoubleObjectAction action);
void CrassusSetAccessoryViewForCell(void* cell, void* accessory);
void* CreateCellAccessory(CellAccessory accessoryValue, AccessoryProducer function);
void* CrassusCreateCellAccessory(CellAccessory accessoryValue);
void* GetCellContentView(void* cell, Exchanger function);
void* CrassusGetCellContentView(void* cell);
void* GetCellTextLabel(void* cell, Exchanger function);
void* CrassusGetCellTextLabel(void* cell);
void SetSelectionStyle(void* cell, TableViewSelectionStyle style, SelectionStyleAction action);
void CrassusSetSelectionStyle(void* cell, TableViewSelectionStyle style);
void SetSeparationInsets(void* cell, EdgeInsets insets, InsetSetter action);
void CrassusSetSeparationInsets(void* cell, EdgeInsets insets);
void SetLayoutMargins(void* cell, LayoutMargins margins, MarginSetter action);
void CrassusSetLayoutMargins(void* cell, LayoutMargins margins);
void TogglePreservationOfSuperviewLayoutMargins(void* cell, Bools toggle, ObjectToggler action);
void CrassusTogglePreservationOfSuperviewLayoutMargins(void* cell, Bools toggle);
void SetCellAccessoryType(void* cell, CellAccessory accessoryType, Accessorizer action);
void CrassusSetCellAccessoryType(void* cell, CellAccessory accessoryType);
void SetTextLabelFontSize(void* cell, unsigned int size, ObjectWholeNumberAction action);
void CrassusSetTextLabelFontSize(void* cell, unsigned int size);
void SetCellSeparatorInsets(void* cell, EdgeInsets insets, InsetSetter action);
void CrassusSetCellSeparatorInsets(void* cell, EdgeInsets insets);


    
#ifdef __cplusplus
}
#endif














