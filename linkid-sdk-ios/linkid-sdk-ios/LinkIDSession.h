//
//  LinkIDSession.h
//  linkid-sdk-ios
//
//  Created by Wim Vandenhaute on 23/07/14.
//  Copyright (c) 2014 Lin-k N.V. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LinkIDSession : NSObject

/**
 * The session ID of the created linkID session, use this when polling
 */
@property (nonatomic, retain) NSString* sessionId;
/**
 * The base64 encoded linkID QR code, use this to display the QR code in an imageview in your app
 */
@property (nonatomic, retain) NSString* qrCodeImageEncoded;
/**
 * The linkID QR code URL.
 * Use the LinkIDUtil class's methods launch the linkID app with callback parameters to let the user return to your app when finished
 */
@property (nonatomic, retain) NSString* qrCodeURL;
@property (nonatomic, retain) NSString* authenticationContext;

- (NSData *) qrCodeImage;

@end
