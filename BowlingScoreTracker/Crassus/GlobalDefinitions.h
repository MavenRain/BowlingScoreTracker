//
//  GlobalDefinitions.h
//  TheObiG LLC
//
//  Created by SolomonRain on 2/15/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#ifndef GlobalDefinitions_h
#define GlobalDefinitions_h

typedef struct Frame
{
    float x;
    float y;
    float width;
    float height;
} Frame;

typedef struct FrameSize
{
    float width;
    float height;
} FrameSize;

typedef struct Rgba
{
    float red;
    float green;
    float blue;
    float alpha;
} Rgba;

typedef struct Rgb
{
    float red;
    float green;
    float blue;
} Rgb;

#ifdef __cplusplus

typedef enum ViewContentMode : int
{
    ViewContentModeScaleAspectFit,
    ViewContentModeScaleAspectFill,
    ViewContentModeScaleToFill,
    ViewContentModeTopLeft,
    ViewContentModeTop,
    ViewContentModeTopRight,
    ViewContentModeLeft,
    ViewContentModeCenter,
    ViewContentModeRight,
    ViewContentModeBottomLeft,
    ViewContentModeBottom,
    ViewContentModeBottomRight,
    ViewContentModeRedraw
} ViewContentMode;

typedef enum AutoresizingMask : int
{
    AutoresizingMaskNone = 0,
    AutoresizingMaskFlexibleWidth = 1,
    AutoresizingMaskFlexibleHeight = 2,
    AutoresizingMaskFlexibleTopMargin = 4,
    AutoresizingMaskFlexibleRightMargin = 8,
    AutoresizingMaskFlexibleBottomMargin = 16,
    AutoresizingMaskFlexibleLeftMargin = 32,
    AutoresizingMaskFlexibleDimensions = AutoresizingMaskFlexibleWidth | AutoresizingMaskFlexibleHeight,
    AutoresizingMaskFlexibleMargins = AutoresizingMaskFlexibleLeftMargin | AutoresizingMaskFlexibleTopMargin | AutoresizingMaskFlexibleRightMargin | AutoresizingMaskFlexibleBottomMargin,
    AutoresizingMaskAll = AutoresizingMaskFlexibleDimensions | AutoresizingMaskFlexibleMargins
} AutoresizingMask;

typedef enum Bools : int
{
    BoolsYES,
    BoolsNO
} Bools;

typedef enum TextFieldViewMode : int
{
    TextFieldViewModeAlways,
    TextFieldViewModeNever,
    TextFieldViewModeUnlessEditing,
    TextFieldViewModeWhileEditing
} TextFieldViewMode;

typedef enum TableViewStyle : int
{
    TableViewStylePlain,
    TableViewStyleGrouped
} TableViewStyle;

typedef enum CellAccessory : int
{
    CellAccessoryNone = 0,
    CellAccessoryCheckmark = 1,
    CellAccessoryDisclosureIndicator = 2,
    CellAccessoryDetailDisclosureButton = 4
} CellAccessory;

typedef enum TableViewSelectionStyle : int
{
    TableViewSelectionStyleNone = 0,
    TableViewSelectionStyleBlue = 1,
    TableViewSelectionStyleDefault = 2,
    TableViewSelectionStyleGray = 4
} TableViewSelectionStyle;

    typedef enum LineBreakingMode : int
{
    LineBreakingModeCharacterWrap = 1,
    LineBreakingModeWordWrap = 2,
    LineBreakingModeClip = 4,
    LineBreakingModeHeadTruncation = 8,
    LineBreakingModeMiddleTruncation = 16,
    LineBreakingModeTailTruncation = 32
} LineBreakingMode;


#else
    
typedef enum ViewContentMode
{
    ViewContentModeScaleAspectFit,
    ViewContentModeScaleAspectFill,
    ViewContentModeScaleToFill,
    ViewContentModeTopLeft,
    ViewContentModeTop,
    ViewContentModeTopRight,
    ViewContentModeLeft,
    ViewContentModeCenter,
    ViewContentModeRight,
    ViewContentModeBottomLeft,
    ViewContentModeBottom,
    ViewContentModeBottomRight,
    ViewContentModeRedraw
} ViewContentMode;

typedef enum AutoresizingMask
{
    AutoresizingMaskNone = 0,
    AutoresizingMaskFlexibleWidth = 1,
    AutoresizingMaskFlexibleHeight = 2,
    AutoresizingMaskFlexibleTopMargin = 4,
    AutoresizingMaskFlexibleRightMargin = 8,
    AutoresizingMaskFlexibleBottomMargin = 16,
    AutoresizingMaskFlexibleLeftMargin = 32,
    AutoresizingMaskFlexibleDimensions = AutoresizingMaskFlexibleWidth | AutoresizingMaskFlexibleHeight,
    AutoresizingMaskFlexibleMargins = AutoresizingMaskFlexibleLeftMargin | AutoresizingMaskFlexibleTopMargin | AutoresizingMaskFlexibleRightMargin | AutoresizingMaskFlexibleBottomMargin,
    AutoresizingMaskAll = AutoresizingMaskFlexibleDimensions | AutoresizingMaskFlexibleMargins
} AutoresizingMask;

typedef enum Bools
{
    BoolsYES,
    BoolsNO
} Bools;

typedef enum TextFieldViewMode
{
    TextFieldViewModeAlways,
    TextFieldViewModeNever,
    TextFieldViewModeUnlessEditing,
    TextFieldViewModeWhileEditing
} TextFieldViewMode;

typedef enum TableViewStyle
{
    TableViewStylePlain,
    TableViewStyleGrouped
} TableViewStyle;

typedef enum CellAccessory
{
    CellAccessoryNone = 0,
    CellAccessoryCheckmark = 1,
    CellAccessoryDisclosureIndicator = 2,
    CellAccessoryDetailDisclosureButton = 4
} CellAccessory;

typedef enum TableViewSelectionStyle
{
    TableViewSelectionStyleNone = 0,
    TableViewSelectionStyleBlue = 1,
    TableViewSelectionStyleDefault = 2,
    TableViewSelectionStyleGray = 4
} TableViewSelectionStyle;

typedef enum LineBreakingMode
{
    LineBreakingModeCharacterWrap = 1,
    LineBreakingModeWordWrap = 2,
    LineBreakingModeClip = 4,
    LineBreakingModeHeadTruncation = 8,
    LineBreakingModeMiddleTruncation = 16,
    LineBreakingModeTailTruncation = 32
} LineBreakingMode;

#endif


typedef struct EdgeInsets
{
    float top;
    float left;
    float bottom;
    float right;
} EdgeInsets, LayoutMargins;



typedef struct CArray
{
    void* array;
    unsigned long size;
} CArray;

#endif /* GlobalDefinitions_h */
















































