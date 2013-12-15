//
//  LLSignalTestRecorder.h
//  LLReactiveMatchers
//
//  Created by Lawrence Lomax on 10/12/2013.
//
//

#import <Foundation/Foundation.h>

#import <ReactiveCocoa/ReactiveCocoa.h>

/// This class is used to record the events sent by a Signal for asserting against procedurally
@interface LLSignalTestRecorder : NSObject

/// The designated initializer, will subscribe and record to the events sent by ```Signal```
+ (instancetype) recordWithSignal:(RACSignal *)signal;

@property (nonatomic, readonly) RACSignal *signal;

@property (nonatomic, readonly) NSArray *values;

@property (nonatomic, readonly) BOOL haveErrored;
@property (nonatomic, readonly) BOOL hasErrored;
@property (nonatomic, readonly) NSError *error;

@property (nonatomic, readonly) BOOL hasCompleted;
@property (nonatomic, readonly) BOOL haveCompleted;

@property (nonatomic, readonly) BOOL hasFinished;
@property (nonatomic, readonly) BOOL haveFinished;

@end