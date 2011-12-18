//
//  AnimationHelper.h
//  Pecunia
//
//  Created by Mike Lischke on 28.11.11.
//  Copyright 2011 Frank Emminghaus. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface AnimationHelper : NSObject {

}

+ (void)crossFadeFromView: (NSView*)oldView
                   toView: (NSView*)newView
             withDuration: (float)duration;

+ (void)switchFromView: (NSView*)from
                toView: (NSView*)to
             withSlide: (BOOL)doSlide;

@end