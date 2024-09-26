//    
//  PDDOMStorageTypes.h
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


// DOM Storage entry.
@interface PDDOMStorageEntry : PDObject

// Document origin.
// Type: string
@property (nonatomic, strong) NSString *origin;

// True for local storage.
// Type: boolean
@property (nonatomic, strong) NSNumber *isLocalStorage;

// Entry id for further reference.
@property (nonatomic, strong) NSString *identifier;

@end


