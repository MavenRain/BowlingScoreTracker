//
//  ImageViewDelegate.h
//  TheObiG LLC
//
//  Created by SolomonRain on 2/16/16.
//  Copyright © 2016 Crassus. All rights reserved.
//

#ifndef ImageViewDelegate_h
#define ImageViewDelegate_h

typedef struct Frame Frame;

typedef struct FrameSize FrameSize;

typedef struct Rgba Rgba;

typedef struct Rgb Rgb;

#ifdef __cplusplus
extern "C"
{
    typedef enum ViewContentMode : int ViewContentMode;
    
    typedef enum AutoresizingMask : int AutoresizingMask;
    
    typedef enum Bools : int Bools;
    
    typedef enum TextFieldViewMode : int TextFieldViewMode;
    
    typedef enum TableViewStyle : int TableViewStyle;
}
#else
typedef enum ViewContentMode ViewContentMode;

typedef enum AutoresizingMask AutoresizingMask;

typedef enum Bools Bools;

typedef enum TextFieldViewMode TextFieldViewMode;

typedef enum TableViewStyle TableViewStyle;
#endif

typedef struct EdgeInsets EdgeInsets;

typedef struct EdgeInsets LayoutMargins;

#ifdef __cplusplus
extern "C"
{
    typedef enum CellAccessory : int CellAccessory;
    
    typedef enum TableViewSelectionStyle : int TableViewSelectionStyle;
    
    typedef enum LineBreakingMode : int LineBreakingMode;
}
#else
typedef enum CellAccessory CellAccessory;

typedef enum TableViewSelectionStyle TableViewSelectionStyle;

typedef enum LineBreakingMode LineBreakingMode;
#endif

#ifdef __cplusplus
extern "C"
{
#endif
    
    
    typedef struct CArray CArray;
    
    typedef void(*DoubleObjectAction)(void*,void*);
    typedef float(*SingleObjectDecimalFunction)(void*);
    typedef void*(*ViewCreator)(Frame);
    typedef void*(*SingleObjectObjectFunction)(void*);
    typedef void(*Sizer)(void*, FrameSize);
    typedef void(*ObjectDecimalAction)(void*, float);
    typedef void(*ViewColorAction)(void*, Rgba);
    typedef void(*ViewFramer)(void*, Frame);
    typedef void(*ViewContentModeSetter)(void*, ViewContentMode);
    typedef void(*AutoresizingMasker)(void*, AutoresizingMask);
    typedef void(*Action)();
    typedef void (*ConditionalAction)();
    typedef void (*DurationActivity)(float, Action, Action);
    typedef void*(*Exchanger)(void*);
    typedef void(*ObjectDecimalAction)(void*, float);
    typedef void(*SingleObjectAction)(void*);
    typedef void*(*ObjectActionBlockObjectFunction)(SingleObjectAction);
    typedef void(*ViewShortColorAction)(void*, Rgb);
    typedef void(*ViewModeAction)(void*, TextFieldViewMode);
    typedef float(*ObjectDecimalDecimalFunction)(void*, float);
    typedef void*(*DoubleObjectObjectFunction)(void*, void*);
    typedef void*(*ObjectDecimalObjectFunction)(void*, float);
    typedef float(*DoubleObjectDecimalFunction)(void*, void*);
    typedef int(*ObjectNumberNumberFunction)(void*, int);
    typedef void*(*NumberObjectFunction)(int);
    typedef void*(*ObjectNumberObjectFunction)(void*, int);
    typedef float(*ObjectWholeNumberDecimalFunction)(void*, unsigned int);
    typedef void*(*ObjectWholeNumberObjectFunction)(void*, unsigned int);
    typedef int(*ObjectNumberFunction)(void*);
    typedef void*(*DoubleObjectObjectFunction)(void*, void*);
    typedef void*(*TableViewCreator)(void*, Frame, TableViewStyle);
    typedef void(*ObjectToggler)(void*, Bools);
    typedef void(*DoubleObjectConditionalAction)(void*, void*, Bools);
    typedef void(*InsetSetter)(void*, EdgeInsets);
    typedef void*(*AccessoryProducer)(CellAccessory);
    typedef void(*SelectionStyleAction)(void*, TableViewSelectionStyle);
    typedef void(*MarginSetter)(void*, LayoutMargins);
    typedef void(*ObjectActionBlockAction)(void*, SingleObjectAction);
    typedef enum Bools(*ObjectPredicate)(void*);
    typedef void*(*LabelCreator)(Frame, const char *, unsigned int);
    typedef unsigned int(*ObjectWholeNumberFunction)(void*);
    typedef long(*ObjectLongNumberFunction)(void*);
    typedef void*(*CustomControlCreator)(Frame, SingleObjectAction);
    typedef void(*LineBreakSetter)(void*, LineBreakingMode);
    typedef void*(*Supplier)();
    typedef void*(*StringProcessor)(const char *);
    typedef void*(*StringArrayProcessor)(const char **, unsigned int);
    typedef void(*DecimalAction)(float);
    typedef void(*NativeEventDelegate)(SingleObjectAction, void*);
    typedef void(*ObjectWholeNumberAction)(void*, unsigned int);
    typedef void(*ReverseViewFramer)(Frame, void*);
    typedef void*(*InteractiveControlCreator)(Frame, const char *);
    typedef void(*ObjectDecimalSingleObjectActionBlockAction)(void*, float, SingleObjectAction);
    typedef void(*Accessorizer)(void*, CellAccessory);
    typedef float(*ObjectNumberDecimalFunction)(void*, int);
    typedef unsigned int(*SingleObjectWholeNumberFunction)(void*);
    typedef Frame(*FrameSupplier)(void*);
    typedef CArray(*ArrayExchanger)(void*);
    typedef void(*ArrayDecimalAction)(CArray,float);
    typedef void(*DoubleObjectDecimalAction)(void*, void*, float);
    typedef void(*ObjectArrayAction)(void*, CArray);
    typedef void(*ArrayAction)(CArray);
    typedef void*(ArrayWholeNumberObjectFunction)(CArray, unsigned int);
    typedef void(*TripleObjectAction)(void*, void*, void*);
    typedef void(*QuadrupleObjectAction)(void*, void*, void*, void*);
    typedef void(*QuadrupleObjectActionBlockAction)(void*, void*, void*, void*, QuadrupleObjectAction);
    typedef void(*ViewAnimator)(void*, void*, void*, void*, float duration, QuadrupleObjectAction);
    typedef void(*ViewMotion)(void*, void*, void*, float duration, TripleObjectAction);
    typedef void(*ObjectTextAction)(void*, const char *);
    typedef void*(*TextObjectFunction)(const char *);
    typedef const char *(*ObjectWholeNumberTextFunction)(void*, unsigned int);
    typedef void*(*ObjectTextObjectFunction)(void*, const char *);
    typedef enum Bools(*TextArrayBooleanFunction)(const char * *, unsigned int);
    typedef enum Bools(*Query)();
    typedef const char *(*Reporter)();
    typedef void(*TextArrayActionBlockAction)(const char * *, unsigned int, Action);
    typedef void(*ActionBlockAction)(Action);
    typedef void(*TextAction)(const char *);
    typedef void(*DoubleTextAction)(const char *, const char *);
    typedef void(*DoubleTextObjectAction)(const char *, const char *, void*);
    typedef void*(*DoubleTextObjectFunction)(const char *, const char *);
    typedef enum Bools(*DoubleTextConditionalFunction)(const char *, const char *);
    typedef const char *(*ObjectTextFunction)(void *);

void* CreateImageViewFromImage(void* image, Exchanger function);
void* CrassusCreateImageViewFromImage(void* image);
void SetUserInteraction(void* imageView, Bools enabled, ObjectToggler function);
void CrassusSetUserInteraction(void* imageView, Bools enabled);


#ifdef __cplusplus
}
#endif

#endif /* ImageViewDelegate_h */
