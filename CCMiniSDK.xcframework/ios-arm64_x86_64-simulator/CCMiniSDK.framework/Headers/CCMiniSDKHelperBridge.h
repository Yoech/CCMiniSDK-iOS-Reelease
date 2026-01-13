//
//  CCMiniSDKHelperBridge.h
//  CCMiniSDK
//
//  Created by Cool.Cat on 2026-01-12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CCMiniSDKHelperBridge : NSObject

/// Configure SDK (C++ / ObjC++ safe)
+ (void)configureWithTopOnEnabled:(BOOL)enabled
                       topOnAppID:(NSString *)appID
                      topOnAppKey:(NSString *)appKey
             testDeviceIdentifiers:(NSString *)deviceID
                    enableDebugLog:(BOOL)debug
NS_SWIFT_NAME(configure(topOnEnabled:topOnAppID:topOnAppKey:testDeviceIdentifiers:enableDebugLog:));

/// User info
+ (BOOL)isAuthenticated;
+ (NSString *)uid;
+ (NSString *)displayName;
+ (NSString *)photoURL;
+ (NSString *)email;
+ (NSString *)phoneNumber;
+ (BOOL)anonymous;
+ (BOOL)emailVerified;

/// Provider operations
+ (BOOL)signInProvider:(NSString *)provider;
+ (BOOL)linkProvider:(NSString *)provider;
+ (BOOL)unlinkProvider:(NSString *)provider;
+ (BOOL)signOutProvider:(NSString *)provider;

/// JSON helpers
+ (NSString *)getLinkedProvidersStr;
+ (NSString *)getUserDictJson;

@end

NS_ASSUME_NONNULL_END
