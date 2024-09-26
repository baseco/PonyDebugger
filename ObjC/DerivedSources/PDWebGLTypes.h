//    
//  PDWebGLTypes.h
//  PonyDebuggerDerivedSources
//
//  Generated on 8/23/12
//
//  Licensed to Square, Inc. under one or more contributor license agreements.
//  See the LICENSE file distributed with this work for the terms under
//  which Square, Inc. licenses this file to you.
//
    
#ifdef SWIFTPM
#import "PDObject.h"
#else
#import <PonyDebugger/PDObject.h>
#endif
#ifdef SWIFTPM
#import "PDDebugger.h"
#else
#import <PonyDebugger/PDDebugger.h>
#endif
#ifdef SWIFTPM
#import "PDDynamicDebuggerDomain.h"
#else
#import <PonyDebugger/PDDynamicDebuggerDomain.h>
#endif


@interface PDWebGLCall : PDObject

// Type: string
@property (nonatomic, strong) NSString *functionName;

@end


@interface PDWebGLTraceLog : PDObject

@property (nonatomic, strong) NSString *identifier;

// Type: array
@property (nonatomic, strong) NSArray *calls;

@end


