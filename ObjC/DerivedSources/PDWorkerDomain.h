//
//  PDWorkerDomain.h
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


@protocol PDWorkerCommandDelegate;

@interface PDWorkerDomain : PDDynamicDebuggerDomain 

@property (nonatomic, assign) id <PDWorkerCommandDelegate, PDCommandDelegate> delegate;

// Events
- (void)workerCreatedWithWorkerId:(NSNumber *)workerId url:(NSString *)url inspectorConnected:(NSNumber *)inspectorConnected;
- (void)workerTerminatedWithWorkerId:(NSNumber *)workerId;
- (void)dispatchMessageFromWorkerWithWorkerId:(NSNumber *)workerId message:(NSDictionary *)message;
- (void)disconnectedFromWorker;

@end

@protocol PDWorkerCommandDelegate <PDCommandDelegate>
@optional
- (void)domain:(PDWorkerDomain *)domain enableWithCallback:(void (^)(id error))callback;
- (void)domain:(PDWorkerDomain *)domain disableWithCallback:(void (^)(id error))callback;
- (void)domain:(PDWorkerDomain *)domain sendMessageToWorkerWithWorkerId:(NSNumber *)workerId message:(NSDictionary *)message callback:(void (^)(id error))callback;
- (void)domain:(PDWorkerDomain *)domain connectToWorkerWithWorkerId:(NSNumber *)workerId callback:(void (^)(id error))callback;
- (void)domain:(PDWorkerDomain *)domain disconnectFromWorkerWithWorkerId:(NSNumber *)workerId callback:(void (^)(id error))callback;
- (void)domain:(PDWorkerDomain *)domain setAutoconnectToWorkersWithValue:(NSNumber *)value callback:(void (^)(id error))callback;

@end

@interface PDDebugger (PDWorkerDomain)

@property (nonatomic, readonly, strong) PDWorkerDomain *workerDomain;

@end
