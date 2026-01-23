//
//  CCDevice.h
//  CCMiniSDK
//
//  Created by Cool.Cat on 2026-01-21.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CCDevice : NSObject

// Test
+ (void)test:(NSString *)value;

// Basic app/package info
+ (NSString *)getPackageName;        // bundle identifier
+ (NSString *)getPackageVersionName; // CFBundleShortVersionString
+ (NSString *)getPackageVersionCode; // CFBundleVersion

// System / device
+ (NSString *)getSysVersion; // e.g. iOS 26.2 or MacOS Tahoe 26.1
+ (NSString *)getDisplay;    // resolution WxH in pixels
+ (NSString *)getProduct;    // iOS / MacOS
+ (NSString *)getDevice;     // device name (e.g., iPhone 17 Pro Max)
+ (NSString *)getModel;      // model identifier (e.g., iPhone17,3)
+ (NSString *)getHardware;   // hw.model / hw.machine
+ (NSString *)getSku;        // best-effort serial/sku
+ (NSNumber *)getTime;       // timestamp in milliseconds
+ (NSString *)getLocale;     // language locale, e.g. zh_CN
+ (NSString *)getAbis;       // cpu arch, e.g. arm64

// Network
+ (BOOL)isUsingWifi;
+ (NSString *)getConnectionType;      // wifi / cellular / none
+ (NSInteger)getNetworkType;          // 0 none, 1 wifi, 2 cellular
+ (NSString *)getNetworkOperator;     // mobile operator code
+ (NSString *)getNetworkOperatorName; // carrier name
+ (NSString *)getNetworkCountryISO;   // iso country code
+ (BOOL)isNetworkAvailable;

// Screen
+ (NSNumber *)getScreenDensity; // DPI approximate
+ (NSNumber *)getScreenWidth;   // pixels
+ (NSNumber *)getScreenHeight;  // pixels
+ (BOOL)isTablet;
+ (NSNumber *)getScreenBrightness; // 0.0 - 1.0

// Battery
+ (NSNumber *)getBatteryLevel;  // 0-100
+ (NSString *)getBatteryStatus; // unknown / unplugged / charging / full

// CPU / memory / uptime
+ (NSString *)getProcessInfo; // textual cpu info
+ (NSNumber *)getTotalMemory; // bytes
+ (NSNumber *)getFreeMemory;  // bytes
+ (NSInteger)getCPUCount;
+ (NSTimeInterval)getUptime; // seconds since boot

// App package & GL
+ (NSString *)getPackageInfo;            // JSON bundle info
+ (NSString *)getGLVersion;              // GL version string
+ (NSString *)getCertificateFingerprint; // placeholder / best-effort

// Sensors / USB
+ (NSString *)getSensorList; // comma separated list
+ (BOOL)isUSBConnected;      // best-effort (iOS limitations)

// IDs
+ (NSString *)getRandomUUID;
+ (NSString *)getIDFV;
+ (NSString *)getDeviceId; // persisted via Keychain

// Misc
+ (NSInteger)getCPUCountDeprecated; // alias
+ (NSString *)getDeviceInfo;        // JSON string with aggregated device info

@end

NS_ASSUME_NONNULL_END
