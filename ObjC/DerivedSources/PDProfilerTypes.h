//    
//  PDProfilerTypes.h
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


// Profile header.
@interface PDProfilerProfileHeader : PDObject

// Profile type name.
// Type: string
@property (nonatomic, strong) NSString *typeId;

// Profile title.
// Type: string
@property (nonatomic, strong) NSString *title;

// Unique identifier of the profile.
// Type: integer
@property (nonatomic, strong) NSNumber *uid;

// Last seen JS object Id.
// Type: integer
@property (nonatomic, strong) NSNumber *maxJSObjectId;

@end


// Profile.
@interface PDProfilerProfile : PDObject

// Type: object
@property (nonatomic, strong) NSDictionary *head;

// Type: object
@property (nonatomic, strong) NSDictionary *bottomUpHead;

@end


