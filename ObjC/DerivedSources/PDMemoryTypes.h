//    
//  PDMemoryTypes.h
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


// Number of nodes with given name.
@interface PDMemoryNodeCount : PDObject

// Type: string
@property (nonatomic, strong) NSString *nodeName;

// Type: integer
@property (nonatomic, strong) NSNumber *count;

@end


// Number of JS event listeners by event type.
@interface PDMemoryListenerCount : PDObject

// Type: string
@property (nonatomic, strong) NSString *type;

// Type: integer
@property (nonatomic, strong) NSNumber *count;

@end


// Character data statistics for the page.
@interface PDMemoryStringStatistics : PDObject

// Type: integer
@property (nonatomic, strong) NSNumber *dom;

// Type: integer
@property (nonatomic, strong) NSNumber *js;

// Type: integer
@property (nonatomic, strong) NSNumber *shared;

@end


@interface PDMemoryDOMGroup : PDObject

// Type: integer
@property (nonatomic, strong) NSNumber *size;

// Type: string
@property (nonatomic, strong) NSString *title;

// Type: string
@property (nonatomic, strong) NSString *documentURI;

// Type: array
@property (nonatomic, strong) NSArray *nodeCount;

// Type: array
@property (nonatomic, strong) NSArray *listenerCount;

@end


@interface PDMemoryMemoryBlock : PDObject

// Size of the block in bytes if available
// Type: number
@property (nonatomic, strong) NSNumber *size;

// Unique name used to identify the component that allocated this block
// Type: string
@property (nonatomic, strong) NSString *name;

// Type: array
@property (nonatomic, strong) NSArray *children;

@end


