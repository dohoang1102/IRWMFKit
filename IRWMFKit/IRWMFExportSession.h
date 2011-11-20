//
//  IRWMFExportSession.h
//  IRWMFKit
//
//  Created by Evadne Wu on 11/20/11.
//  Copyright (c) 2011 Iridia Productions. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IRWMFExportSession : NSObject

@property (nonatomic, readwrite, assign) CGContextRef context;	//	if not nil, released on -dealloc

@end
