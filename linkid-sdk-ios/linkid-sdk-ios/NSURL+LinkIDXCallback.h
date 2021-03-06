//
//  NSURL+LinkIDXCallback.h
//  linkid-sdk-ios
//
//  Created by Wim Vandenhaute on 23/07/14.
//  Copyright (c) 2014 Lin-k N.V. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LinkIDXCallback.h"

@interface NSURL (LinkIDXCallback)

- (NSURL *) URLByAppendingXCallback:(LinkIDXCallback *)xCallback;

@end
