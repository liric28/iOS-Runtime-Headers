/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFAnnotationButtonWidget : PDFAnnotation <NSCopying> {
    PDFAnnotationButtonWidgetPrivateVars * _private2;
}

- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (void)addNormalAndDownAppearanceToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addNormalAndDownAppearanceWithStateToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addNormalAppearanceWithStateToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (BOOL)allowsToggleToOff;
- (id)appearanceCharacteristics;
- (id)backgroundColor;
- (id)caption;
- (struct __CFDictionary { }*)commonCreateDictionaryRef;
- (void)commonInit;
- (int)controlType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)drawCheckBox:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawPushButton:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawRadioButton:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (void)drawWithBox:(int)arg1 inContext:(struct CGContext { }*)arg2;
- (id)fieldName;
- (id)font;
- (id)fontColor;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1 forPage:(id)arg2;
- (BOOL)isHighlighted;
- (id)onStateValue;
- (int)rotation;
- (void)secondaryInit;
- (void)setAllowsToggleToOff:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setControlType:(int)arg1;
- (void)setFieldName:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFontColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setOnStateValue:(id)arg1;
- (void)setState:(int)arg1;
- (void)setView:(id)arg1;
- (int)state;

@end
