//
//  PDDatabaseDomainController.h
//  PonyDebugger
//
//  Created by Mike Lewis on 2/29/12.
//
//  Licensed to Square, Inc. under one or more contributor license agreements.
//  See the LICENSE file distributed with this work for the terms under
//  which Square, Inc. licenses this file to you.
//

#ifdef SWIFTPM
#import "PDDomainController.h"
#else
#import <PonyDebugger/PDDomainController.h>
#endif
#ifdef SWIFTPM
#import "PDIndexedDBDomain.h"
#else
#import <PonyDebugger/PDIndexedDBDomain.h>
#endif
#ifdef SWIFTPM
#import "PDIndexedDBTypes.h"
#else
#import <PonyDebugger/PDIndexedDBTypes.h>
#endif

@class NSManagedObjectContext;

@interface PDIndexedDBDomainController : PDDomainController <PDIndexedDBCommandDelegate>

@property (nonatomic, strong) PDIndexedDBDomain *domain;

+ (PDIndexedDBDomainController *)defaultInstance;

- (void)addManagedObjectContext:(NSManagedObjectContext *)context;
- (void)addManagedObjectContext:(NSManagedObjectContext *)context withName:(NSString *)name;

- (void)removeManagedObjectContext:(NSManagedObjectContext *)context;

@end
