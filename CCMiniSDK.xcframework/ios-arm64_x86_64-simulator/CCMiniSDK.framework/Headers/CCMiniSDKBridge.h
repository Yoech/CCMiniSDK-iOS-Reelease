//
//  CCMiniSDK.h
//  CCMiniSDK
//
//  Created by Cool.Cat on 2026-01-08.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (*CCMiniSDKDispatchToJSFunc)(const char *msg);
typedef void (*CCMiniSDKDispatchToJSWithParamsFunc)(const char *funcName, const char *params);
typedef void (*CCMiniSDKDispatchEventFunc)(const char *eventName, const char *json);

@interface CCMiniSDKBridge : NSObject

+ (void)sendToJS:(NSString *)msg;
+ (void)sendToJSWithFuncName:(NSString *)funcName params:(NSString *)params;
+ (void)postEvent:(NSString *)eventName data:(NSDictionary *)data;

// 供宿主工程（Cocos 工程）注册自己实现的桥接函数
+ (void)registerDispatchToJS:(CCMiniSDKDispatchToJSFunc)func;
+ (void)registerDispatchToJSWithParams:(CCMiniSDKDispatchToJSWithParamsFunc)func;
+ (void)registerDispatchEvent:(CCMiniSDKDispatchEventFunc)func;

@end


NS_ASSUME_NONNULL_END
