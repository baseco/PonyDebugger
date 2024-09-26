//
//  PDRuntimeDomainController.h
//  PonyDebugger
//
//  Created by Wen-Hao Lue on 8/7/12.
//
//  Licensed to Square, Inc. under one or more contributor license agreements.
//  See the LICENSE file distributed with this work for the terms under
//  which Square, Inc. licenses this file to you.
//

#ifdef SWIFTPM
#import "PonyDebugger.h"
#else
#import <PonyDebugger/PonyDebugger.h>
#endif
#ifdef SWIFTPM
#import "PDRuntimeDomain.h"
#else
#import <PonyDebugger/PDRuntimeDomain.h>
#endif


@interface PDRuntimeDomainController : PDDomainController

+ (PDRuntimeDomainController *)defaultInstance;

@property (nonatomic, strong) PDRuntimeDomain *domain;

- (NSString *)registerAndGetKeyForObject:(id)object;
- (void)clearObjectReferencesByKey:(NSArray *)objectKeys;
- (void)clearAllObjectReferences;

@end
