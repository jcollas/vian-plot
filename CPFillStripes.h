//
//  CPFillStripes.h
//  AAPLot
//
//  Created by admin on 4/4/11.
//  Copyright 2011 Crystalnix. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CorePlot-CocoaTouch.h"

@interface CPTFill(Stripes)

+(CPTFill *)fillWithFirstColor:(CPTColor *)_firstColor secondColor:(CPTColor *)_secondColor stripeWidth:(NSUInteger)_stripeWidth;

-(id)initWithFirstColor:(CPTColor *)_firstColor secondColor:(CPTColor *)_secondColor stripeWidth:(NSUInteger)_stripeWidth;

@end
