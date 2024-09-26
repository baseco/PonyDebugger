//
//  PDConsoleDomainController.h
//  PonyDebugger
//
//  Created by Wen-Hao Lue on 2013-01-30.
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
#import "PDConsoleDomain.h"
#else
#import <PonyDebugger/PDConsoleDomain.h>
#endif

@interface PDConsoleDomainController : PDDomainController

@property (nonatomic, strong) PDConsoleDomain *domain;

+ (PDConsoleDomainController *)defaultInstance;

- (void)logWithArguments:(NSArray *)args severity:(NSString *)severity;
- (void)clear;

@end
