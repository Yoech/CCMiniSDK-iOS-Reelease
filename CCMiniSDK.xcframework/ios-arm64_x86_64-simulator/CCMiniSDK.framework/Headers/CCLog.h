#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// Use NSString-based constants for log levels (NS_STRING_ENUM) so they are available as NSString * values
typedef NSString * CCLogLevel NS_STRING_ENUM;

extern CCLogLevel const CCLogLevelDebug;
extern CCLogLevel const CCLogLevelInfo;
extern CCLogLevel const CCLogLevelWarn;
extern CCLogLevel const CCLogLevelError;

@interface CCLog : NSObject

+ (NSDateFormatter *)dateFormatter;
+ (NSString *)timestamp;

+ (void)debug:(id)items, ... NS_REQUIRES_NIL_TERMINATION;
+ (void)info:(id)items, ... NS_REQUIRES_NIL_TERMINATION;
+ (void)warn:(id)items, ... NS_REQUIRES_NIL_TERMINATION;
+ (void)error:(id)items, ... NS_REQUIRES_NIL_TERMINATION;

// ObjC-friendly single-string and array entry points (callable from Swift)
+ (void)debugString:(NSString *)message;
+ (void)infoString:(NSString *)message;
+ (void)warnString:(NSString *)message;
+ (void)errorString:(NSString *)message;

+ (void)debugItems:(NSArray<id> *)items;
+ (void)infoItems:(NSArray<id> *)items;
+ (void)warnItems:(NSArray<id> *)items;
+ (void)errorItems:(NSArray<id> *)items;

+ (void)outputWithLevel:(CCLogLevel)level items:(id)firstItem args:(va_list)args;
+ (void)outputWithLevel:(CCLogLevel)level itemsArray:(NSArray *)items separator:(NSString *)separator terminator:(NSString *)terminator;

@end

NS_ASSUME_NONNULL_END
