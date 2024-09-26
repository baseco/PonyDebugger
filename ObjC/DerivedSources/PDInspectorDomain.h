//
//  PDInspectorDomain.h
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

@class PDRuntimeRemoteObject;

@protocol PDInspectorCommandDelegate;

@interface PDInspectorDomain : PDDynamicDebuggerDomain 

@property (nonatomic, assign) id <PDInspectorCommandDelegate, PDCommandDelegate> delegate;

// Events
- (void)evaluateForTestInFrontendWithTestCallId:(NSNumber *)testCallId script:(NSString *)script;
- (void)inspectWithObject:(PDRuntimeRemoteObject *)object hints:(NSDictionary *)hints;

@end

@protocol PDInspectorCommandDelegate <PDCommandDelegate>
@optional

// Enables inspector domain notifications.
- (void)domain:(PDInspectorDomain *)domain enableWithCallback:(void (^)(id error))callback;

// Disables inspector domain notifications.
- (void)domain:(PDInspectorDomain *)domain disableWithCallback:(void (^)(id error))callback;

@end

@interface PDDebugger (PDInspectorDomain)

@property (nonatomic, readonly, strong) PDInspectorDomain *inspectorDomain;

@end
