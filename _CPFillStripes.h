//
//  _CPFillStripes.h
//  CorePlot-CocoaTouch
//
//  Created by admin on 3/21/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CPTFill.h"

@class CPTGradient;

@interface _CPFillStripes : CPTFill <NSCopying, NSCoding> {
    @private
    CPTColor *firstColor;
    CPTColor *secondColor;
    NSUInteger stripeWidth;
}

/// @name Initialization
/// @{
-(id)initWithFirstColor:(CPTColor *)_firstColor secondColor:(CPTColor *)_secondColor stripeWidth:(NSUInteger)_stripeWidth;
///	@}

/// @name Drawing
/// @{
-(void)fillRect:(CGRect)theRect inContext:(CGContextRef)theContext;
-(void)fillPathInContext:(CGContextRef)theContext;
///	@}

@end
