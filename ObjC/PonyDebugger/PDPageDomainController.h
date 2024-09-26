//
//  PDPageDomainController.h
//  PonyDebugger
//
//  Created by Wen-Hao Lue on 8/6/12.
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
#import "PDPageDomain.h"
#else
#import <PonyDebugger/PDPageDomain.h>
#endif


@interface PDPageDomainController : PDDomainController

+ (PDPageDomainController *)defaultInstance;

@property (nonatomic, strong) PDPageDomain *domain;

@end
