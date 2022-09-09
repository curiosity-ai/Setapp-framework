#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef SETAPP_SWIFT_H
#define SETAPP_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Setapp",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif







@class NSBundle;
@class NSString;

/// A configuration object that holds necessary information for the operation of the Setapp
/// framework.
SWIFT_CLASS_NAMED("SetappConfiguration")
@interface STPConfiguration : NSObject
/// The default configuration for the current app.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) STPConfiguration * _Nonnull defaultConfiguration;)
+ (STPConfiguration * _Nonnull)defaultConfiguration SWIFT_WARN_UNUSED_RESULT;
/// A bundle containing a public key file.
@property (nonatomic, readonly, strong) NSBundle * _Nonnull publicKeyBundle;
/// A public key filename.
@property (nonatomic, readonly, copy) NSString * _Nonnull publicKeyFilename;
/// Creates a new configuration with the given parameters.
/// \param publicKeyBundle A bundle containing a public key file. If <code>nil</code>, the main bundle is
/// used.
///
/// \param publicKeyFilename A name of a public key file. If <code>nil</code>, the <code>setappPublicKey.pem</code>
/// string is used.
///
- (nonnull instancetype)initWithPublicKeyBundle:(NSBundle * _Nullable)publicKeyBundle publicKeyFilename:(NSString * _Nullable)publicKeyFilename OBJC_DESIGNATED_INITIALIZER;
/// Returns a Boolean value that indicates whether the configuration and a given object are
/// equal.
/// \param object The object to be compared to the configuration. May be nil, in which
/// case this method returns false.
///
///
/// returns:
/// <code>true</code> if the configuration and <code>object</code> are equal, otherwise <code>false</code>.
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
/// A textual representation of the configuration.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Setapp log levels.
typedef SWIFT_ENUM_NAMED(NSInteger, STPLogLevel, "SetappLogLevel", open) {
/// Error, warning, information, debug, and verbose logs.
  STPLogLevelVerbose = 0,
/// Error, warning, and information logs.
  STPLogLevelDebug = 1,
/// Error, warning, and information logs.
  STPLogLevelInfo = 2,
/// Error and warning logs.
  STPLogLevelWarning = 3,
/// Error logs only.
  STPLogLevelError = 4,
/// No logs.
  STPLogLevelOff = 5,
};

@class STPSubscription;

/// An object that provides an interface for the Setapp framework.
SWIFT_CLASS_NAMED("SetappManager")
@interface STPManager : NSObject
/// A current Setapp subscription.
@property (nonatomic, readonly, strong) STPSubscription * _Nullable subscription;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSError;

@interface STPManager (SWIFT_EXTENSION(Setapp))
/// Requests an authorization code for communication with Setapp backend server.
/// The code is used to obtain the access & refresh tokens from the Vendor API.
/// This method requires an active Setapp subscription and an Internet connection,
/// otherwise the request fails with a corresponding error.
/// \param clientID A string ID generated for the app’s client in the Setapp developer account.
///
/// \param scope An array of case-sensitive strings that specify the scope of functionalities
/// to be authorized for the app’s client. See the full list of possible values in the
/// <a href="https://docs.setapp.com/reference#authorization-code-by-setapp-library-grant">Vendor API reference</a>.
///
/// \param completionHandler A completion handler to call once the auth code has been fetched.
/// The handler is executed on the main thread. Accepts one parameter:
/// <code>result</code>
/// A <code>Result</code> with a <code>String</code> as a success value if the code has
/// been fetched successfully. Otherwise, it’s a failure with an error
/// describing why the request failed.
///
- (void)requestAuthorizationCodeWithClientID:(NSString * _Nonnull)clientID scope:(NSArray<NSString *> * _Nonnull)scope completionHandler:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completionHandler;
@end



enum STPUsageEvent : NSInteger;

@interface STPManager (SWIFT_EXTENSION(Setapp))
/// A shared Setapp manager object for an application.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) STPManager * _Nonnull sharedInstance;)
+ (STPManager * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
/// Current log level.
/// Default value: <code>SetappLogLevel.info</code>.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) enum STPLogLevel logLevel;)
+ (enum STPLogLevel)logLevel SWIFT_WARN_UNUSED_RESULT;
+ (void)setLogLevel:(enum STPLogLevel)newValue;
/// Sets a log handle for Setapp log messages.
/// \param logHandle A closure to handle log messages. Can be <code>nil</code>. If <code>logHandle</code> is
/// not <code>nil</code>, no messages are printed in the device console.
///
+ (void)setLogHandle:(void (^ _Nullable)(NSString * _Nonnull, enum STPLogLevel))logHandle;
/// Shows a release notes window if the application is launched for the first time after update.
- (void)showReleaseNotesWindowIfNeeded;
/// Shows a window with release notes.
- (void)showReleaseNotesWindow;
/// Reports special application events that denote app usage.
/// Events must be reported only after the <code>applicationDidFinishLaunching</code> method is called
/// (if applicable).
/// \param usageEvent Setapp event names are described in the knowledge base.
///
- (void)reportUsageEvent:(enum STPUsageEvent)usageEvent;
/// Shows the dialog that offers sharing an email address.
/// Although you should call this method when it makes sense in the user experience flow of your app,
/// the actual display of an email sharing dialog is governed by Setapp policy.
/// For example, the dialog won’t show if user has already shared the email or one was
/// recently shown and user selected “later” option. Each time user selects “later” option,
/// the presentation cooldown increases (up to one month).
- (void)askUserToShareEmail;
@end


/// A protocol that defines the methods that Setapp manager instances call on their delegates to
/// handle events, like subscription changes.
SWIFT_PROTOCOL_NAMED("SetappManagerDelegate")
@protocol STPManagerDelegate
/// Tells the delegate that the Setapp subscription has been updated.
/// \param manager A manager containing a subscription that has been updated.
///
/// \param newSetappSubscription A new Setapp subscription.
///
- (void)setappManager:(STPManager * _Nonnull)manager didUpdateSubscriptionTo:(STPSubscription * _Nonnull)newSetappSubscription;
@end

@class NSDate;

/// An object describing current user’s Setapp subscription state.
SWIFT_CLASS_NAMED("SetappSubscription")
@interface STPSubscription : NSObject
@property (nonatomic, readonly) BOOL isActive;
@property (nonatomic, readonly, copy) NSDate * _Nullable expirationDate;
/// Returns a Boolean value that indicates whether the subscription and a given object are
/// equal.
/// \param object The object to be compared to the receiver. May be nil, in which case
/// this method returns false.
///
///
/// returns:
/// <code>true</code> if the Subscription and <code>object</code> are equal, otherwise <code>false</code>.
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
/// A textual representation of the subscription.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Events used to report how a Setapp member (subscriber) uses Setapp and its apps.
typedef SWIFT_ENUM_NAMED(NSInteger, STPUsageEvent, "SetappUsageEvent", open) {
/// A sign-in event.
  STPUsageEventSignIn = 0,
/// A sign-out event.
  STPUsageEventSignOut = 1,
/// A user interaction event.
  STPUsageEventUserInteraction = 2,
};




#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef SETAPP_SWIFT_H
#define SETAPP_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Setapp",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif







@class NSBundle;
@class NSString;

/// A configuration object that holds necessary information for the operation of the Setapp
/// framework.
SWIFT_CLASS_NAMED("SetappConfiguration")
@interface STPConfiguration : NSObject
/// The default configuration for the current app.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) STPConfiguration * _Nonnull defaultConfiguration;)
+ (STPConfiguration * _Nonnull)defaultConfiguration SWIFT_WARN_UNUSED_RESULT;
/// A bundle containing a public key file.
@property (nonatomic, readonly, strong) NSBundle * _Nonnull publicKeyBundle;
/// A public key filename.
@property (nonatomic, readonly, copy) NSString * _Nonnull publicKeyFilename;
/// Creates a new configuration with the given parameters.
/// \param publicKeyBundle A bundle containing a public key file. If <code>nil</code>, the main bundle is
/// used.
///
/// \param publicKeyFilename A name of a public key file. If <code>nil</code>, the <code>setappPublicKey.pem</code>
/// string is used.
///
- (nonnull instancetype)initWithPublicKeyBundle:(NSBundle * _Nullable)publicKeyBundle publicKeyFilename:(NSString * _Nullable)publicKeyFilename OBJC_DESIGNATED_INITIALIZER;
/// Returns a Boolean value that indicates whether the configuration and a given object are
/// equal.
/// \param object The object to be compared to the configuration. May be nil, in which
/// case this method returns false.
///
///
/// returns:
/// <code>true</code> if the configuration and <code>object</code> are equal, otherwise <code>false</code>.
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
/// A textual representation of the configuration.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Setapp log levels.
typedef SWIFT_ENUM_NAMED(NSInteger, STPLogLevel, "SetappLogLevel", open) {
/// Error, warning, information, debug, and verbose logs.
  STPLogLevelVerbose = 0,
/// Error, warning, and information logs.
  STPLogLevelDebug = 1,
/// Error, warning, and information logs.
  STPLogLevelInfo = 2,
/// Error and warning logs.
  STPLogLevelWarning = 3,
/// Error logs only.
  STPLogLevelError = 4,
/// No logs.
  STPLogLevelOff = 5,
};

@class STPSubscription;

/// An object that provides an interface for the Setapp framework.
SWIFT_CLASS_NAMED("SetappManager")
@interface STPManager : NSObject
/// A current Setapp subscription.
@property (nonatomic, readonly, strong) STPSubscription * _Nullable subscription;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSError;

@interface STPManager (SWIFT_EXTENSION(Setapp))
/// Requests an authorization code for communication with Setapp backend server.
/// The code is used to obtain the access & refresh tokens from the Vendor API.
/// This method requires an active Setapp subscription and an Internet connection,
/// otherwise the request fails with a corresponding error.
/// \param clientID A string ID generated for the app’s client in the Setapp developer account.
///
/// \param scope An array of case-sensitive strings that specify the scope of functionalities
/// to be authorized for the app’s client. See the full list of possible values in the
/// <a href="https://docs.setapp.com/reference#authorization-code-by-setapp-library-grant">Vendor API reference</a>.
///
/// \param completionHandler A completion handler to call once the auth code has been fetched.
/// The handler is executed on the main thread. Accepts one parameter:
/// <code>result</code>
/// A <code>Result</code> with a <code>String</code> as a success value if the code has
/// been fetched successfully. Otherwise, it’s a failure with an error
/// describing why the request failed.
///
- (void)requestAuthorizationCodeWithClientID:(NSString * _Nonnull)clientID scope:(NSArray<NSString *> * _Nonnull)scope completionHandler:(void (^ _Nonnull)(NSString * _Nullable, NSError * _Nullable))completionHandler;
@end



enum STPUsageEvent : NSInteger;

@interface STPManager (SWIFT_EXTENSION(Setapp))
/// A shared Setapp manager object for an application.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) STPManager * _Nonnull sharedInstance;)
+ (STPManager * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
/// Current log level.
/// Default value: <code>SetappLogLevel.info</code>.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class) enum STPLogLevel logLevel;)
+ (enum STPLogLevel)logLevel SWIFT_WARN_UNUSED_RESULT;
+ (void)setLogLevel:(enum STPLogLevel)newValue;
/// Sets a log handle for Setapp log messages.
/// \param logHandle A closure to handle log messages. Can be <code>nil</code>. If <code>logHandle</code> is
/// not <code>nil</code>, no messages are printed in the device console.
///
+ (void)setLogHandle:(void (^ _Nullable)(NSString * _Nonnull, enum STPLogLevel))logHandle;
/// Shows a release notes window if the application is launched for the first time after update.
- (void)showReleaseNotesWindowIfNeeded;
/// Shows a window with release notes.
- (void)showReleaseNotesWindow;
/// Reports special application events that denote app usage.
/// Events must be reported only after the <code>applicationDidFinishLaunching</code> method is called
/// (if applicable).
/// \param usageEvent Setapp event names are described in the knowledge base.
///
- (void)reportUsageEvent:(enum STPUsageEvent)usageEvent;
/// Shows the dialog that offers sharing an email address.
/// Although you should call this method when it makes sense in the user experience flow of your app,
/// the actual display of an email sharing dialog is governed by Setapp policy.
/// For example, the dialog won’t show if user has already shared the email or one was
/// recently shown and user selected “later” option. Each time user selects “later” option,
/// the presentation cooldown increases (up to one month).
- (void)askUserToShareEmail;
@end


/// A protocol that defines the methods that Setapp manager instances call on their delegates to
/// handle events, like subscription changes.
SWIFT_PROTOCOL_NAMED("SetappManagerDelegate")
@protocol STPManagerDelegate
/// Tells the delegate that the Setapp subscription has been updated.
/// \param manager A manager containing a subscription that has been updated.
///
/// \param newSetappSubscription A new Setapp subscription.
///
- (void)setappManager:(STPManager * _Nonnull)manager didUpdateSubscriptionTo:(STPSubscription * _Nonnull)newSetappSubscription;
@end

@class NSDate;

/// An object describing current user’s Setapp subscription state.
SWIFT_CLASS_NAMED("SetappSubscription")
@interface STPSubscription : NSObject
@property (nonatomic, readonly) BOOL isActive;
@property (nonatomic, readonly, copy) NSDate * _Nullable expirationDate;
/// Returns a Boolean value that indicates whether the subscription and a given object are
/// equal.
/// \param object The object to be compared to the receiver. May be nil, in which case
/// this method returns false.
///
///
/// returns:
/// <code>true</code> if the Subscription and <code>object</code> are equal, otherwise <code>false</code>.
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
/// A textual representation of the subscription.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Events used to report how a Setapp member (subscriber) uses Setapp and its apps.
typedef SWIFT_ENUM_NAMED(NSInteger, STPUsageEvent, "SetappUsageEvent", open) {
/// A sign-in event.
  STPUsageEventSignIn = 0,
/// A sign-out event.
  STPUsageEventSignOut = 1,
/// A user interaction event.
  STPUsageEventUserInteraction = 2,
};




#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
