#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef BSIMAGEPICKER_SWIFT_H
#define BSIMAGEPICKER_SWIFT_H
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

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

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
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import Photos;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="BSImagePicker",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class PHAsset;

SWIFT_CLASS("_TtC13BSImagePicker10AssetStore")
@interface AssetStore : NSObject
@property (nonatomic, readonly, copy) NSArray<PHAsset *> * _Nonnull assets;
- (nonnull instancetype)initWithAssets:(NSArray<PHAsset *> * _Nonnull)assets OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly) NSInteger count;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class BSImagePickerSettings;
@class UIBarButtonItem;
@class UIButton;
@class NSString;
@class NSCoder;
@class UIViewController;
@class NSBundle;

SWIFT_CLASS("_TtC13BSImagePicker21ImagePickerController")
@interface ImagePickerController : UINavigationController
@property (nonatomic, strong) BSImagePickerSettings * _Nonnull settings;
@property (nonatomic, strong) UIBarButtonItem * _Nonnull doneButton;
@property (nonatomic, strong) UIBarButtonItem * _Nonnull cancelButton;
@property (nonatomic, strong) UIButton * _Nonnull albumButton;
@property (nonatomic, readonly, copy) NSArray<PHAsset *> * _Nonnull selectedAssets;
/// Title to use for button
@property (nonatomic, copy) NSString * _Nonnull doneButtonTitle;
- (nonnull instancetype)initWithSelectedAssets:(NSArray<PHAsset *> * _Nonnull)selectedAssets OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)deselectWithAsset:(PHAsset * _Nonnull)asset;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@interface ImagePickerController (SWIFT_EXTENSION(BSImagePicker))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) PHAuthorizationStatus currentAuthorization;)
+ (PHAuthorizationStatus)currentAuthorization SWIFT_WARN_UNUSED_RESULT;
@end

@class UIPresentationController;

@interface ImagePickerController (SWIFT_EXTENSION(BSImagePicker)) <UIAdaptivePresentationControllerDelegate>
- (BOOL)presentationControllerShouldDismiss:(UIPresentationController * _Nonnull)presentationController SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=13);
- (void)presentationControllerDidDismiss:(UIPresentationController * _Nonnull)presentationController SWIFT_AVAILABILITY(ios,introduced=13);
@end





@interface ImagePickerController (SWIFT_EXTENSION(BSImagePicker))
- (void)imagePicker:(ImagePickerController * _Nonnull)imagePicker didSelectAsset:(PHAsset * _Nonnull)asset;
- (void)imagePicker:(ImagePickerController * _Nonnull)imagePicker didDeselectAsset:(PHAsset * _Nonnull)asset;
- (void)imagePicker:(ImagePickerController * _Nonnull)imagePicker didFinishWithAssets:(NSArray<PHAsset *> * _Nonnull)assets;
- (void)imagePicker:(ImagePickerController * _Nonnull)imagePicker didCancelWithAssets:(NSArray<PHAsset *> * _Nonnull)assets;
- (void)imagePicker:(ImagePickerController * _Nonnull)imagePicker didReachSelectionLimit:(NSInteger)count;
@end

@class UIColor;

IB_DESIGNABLE
SWIFT_CLASS("_TtC13BSImagePicker9ImageView")
@interface ImageView : UIView
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic, strong) UIColor * _Null_unspecified tintColor;
@property (nonatomic) UIViewContentMode contentMode;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@end

@class UIImage;

@interface ImageView (SWIFT_EXTENSION(BSImagePicker))
/// See UIImageView documentation
@property (nonatomic, strong) IBInspectable UIImage * _Nullable image;
/// See UIImageView documentation
@property (nonatomic, strong) IBInspectable UIImage * _Nullable highlightedImage;
/// See UIImageView documentation
@property (nonatomic) IBInspectable BOOL isHighlighted;
@end

@class Theme;
@class Selection;
@class List;
@class Fetch;
@class Dismiss;
@class Preview;

SWIFT_CLASS_NAMED("Settings")
@interface BSImagePickerSettings : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) BSImagePickerSettings * _Nonnull shared;)
+ (BSImagePickerSettings * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// Theme settings
@property (nonatomic, strong) Theme * _Nonnull theme;
/// Selection settings
@property (nonatomic, strong) Selection * _Nonnull selection;
/// List settings
@property (nonatomic, strong) List * _Nonnull list;
/// Fetch settings
@property (nonatomic, strong) Fetch * _Nonnull fetch;
/// Dismiss settings
@property (nonatomic, strong) Dismiss * _Nonnull dismiss;
/// Preview options
@property (nonatomic, strong) Preview * _Nonnull preview;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@interface UIViewController (SWIFT_EXTENSION(BSImagePicker))
/// Present a image picker
/// \param imagePicker The image picker to present
///
/// \param animated Should presentation be animated
///
/// \param select Selection callback
///
/// \param deselect Deselection callback
///
/// \param cancel Cancel callback
///
/// \param finish Finish callback
///
/// \param completion Presentation completion callback
///
- (void)presentImagePicker:(ImagePickerController * _Nonnull)imagePicker animated:(BOOL)animated select:(void (^ _Nullable)(PHAsset * _Nonnull))select deselect:(void (^ _Nullable)(PHAsset * _Nonnull))deselect cancel:(void (^ _Nullable)(NSArray<PHAsset *> * _Nonnull))cancel finish:(void (^ _Nullable)(NSArray<PHAsset *> * _Nonnull))finish completion:(void (^ _Nullable)(void))completion;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.7.1 (swiftlang-5.7.1.135.3 clang-1400.0.29.51)
#ifndef BSIMAGEPICKER_SWIFT_H
#define BSIMAGEPICKER_SWIFT_H
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

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

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
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import Photos;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="BSImagePicker",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class PHAsset;

SWIFT_CLASS("_TtC13BSImagePicker10AssetStore")
@interface AssetStore : NSObject
@property (nonatomic, readonly, copy) NSArray<PHAsset *> * _Nonnull assets;
- (nonnull instancetype)initWithAssets:(NSArray<PHAsset *> * _Nonnull)assets OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly) NSInteger count;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class BSImagePickerSettings;
@class UIBarButtonItem;
@class UIButton;
@class NSString;
@class NSCoder;
@class UIViewController;
@class NSBundle;

SWIFT_CLASS("_TtC13BSImagePicker21ImagePickerController")
@interface ImagePickerController : UINavigationController
@property (nonatomic, strong) BSImagePickerSettings * _Nonnull settings;
@property (nonatomic, strong) UIBarButtonItem * _Nonnull doneButton;
@property (nonatomic, strong) UIBarButtonItem * _Nonnull cancelButton;
@property (nonatomic, strong) UIButton * _Nonnull albumButton;
@property (nonatomic, readonly, copy) NSArray<PHAsset *> * _Nonnull selectedAssets;
/// Title to use for button
@property (nonatomic, copy) NSString * _Nonnull doneButtonTitle;
- (nonnull instancetype)initWithSelectedAssets:(NSArray<PHAsset *> * _Nonnull)selectedAssets OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)viewDidLoad;
- (void)deselectWithAsset:(PHAsset * _Nonnull)asset;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@interface ImagePickerController (SWIFT_EXTENSION(BSImagePicker))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) PHAuthorizationStatus currentAuthorization;)
+ (PHAuthorizationStatus)currentAuthorization SWIFT_WARN_UNUSED_RESULT;
@end

@class UIPresentationController;

@interface ImagePickerController (SWIFT_EXTENSION(BSImagePicker)) <UIAdaptivePresentationControllerDelegate>
- (BOOL)presentationControllerShouldDismiss:(UIPresentationController * _Nonnull)presentationController SWIFT_WARN_UNUSED_RESULT SWIFT_AVAILABILITY(ios,introduced=13);
- (void)presentationControllerDidDismiss:(UIPresentationController * _Nonnull)presentationController SWIFT_AVAILABILITY(ios,introduced=13);
@end





@interface ImagePickerController (SWIFT_EXTENSION(BSImagePicker))
- (void)imagePicker:(ImagePickerController * _Nonnull)imagePicker didSelectAsset:(PHAsset * _Nonnull)asset;
- (void)imagePicker:(ImagePickerController * _Nonnull)imagePicker didDeselectAsset:(PHAsset * _Nonnull)asset;
- (void)imagePicker:(ImagePickerController * _Nonnull)imagePicker didFinishWithAssets:(NSArray<PHAsset *> * _Nonnull)assets;
- (void)imagePicker:(ImagePickerController * _Nonnull)imagePicker didCancelWithAssets:(NSArray<PHAsset *> * _Nonnull)assets;
- (void)imagePicker:(ImagePickerController * _Nonnull)imagePicker didReachSelectionLimit:(NSInteger)count;
@end

@class UIColor;

IB_DESIGNABLE
SWIFT_CLASS("_TtC13BSImagePicker9ImageView")
@interface ImageView : UIView
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic, strong) UIColor * _Null_unspecified tintColor;
@property (nonatomic) UIViewContentMode contentMode;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@end

@class UIImage;

@interface ImageView (SWIFT_EXTENSION(BSImagePicker))
/// See UIImageView documentation
@property (nonatomic, strong) IBInspectable UIImage * _Nullable image;
/// See UIImageView documentation
@property (nonatomic, strong) IBInspectable UIImage * _Nullable highlightedImage;
/// See UIImageView documentation
@property (nonatomic) IBInspectable BOOL isHighlighted;
@end

@class Theme;
@class Selection;
@class List;
@class Fetch;
@class Dismiss;
@class Preview;

SWIFT_CLASS_NAMED("Settings")
@interface BSImagePickerSettings : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) BSImagePickerSettings * _Nonnull shared;)
+ (BSImagePickerSettings * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// Theme settings
@property (nonatomic, strong) Theme * _Nonnull theme;
/// Selection settings
@property (nonatomic, strong) Selection * _Nonnull selection;
/// List settings
@property (nonatomic, strong) List * _Nonnull list;
/// Fetch settings
@property (nonatomic, strong) Fetch * _Nonnull fetch;
/// Dismiss settings
@property (nonatomic, strong) Dismiss * _Nonnull dismiss;
/// Preview options
@property (nonatomic, strong) Preview * _Nonnull preview;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@interface UIViewController (SWIFT_EXTENSION(BSImagePicker))
/// Present a image picker
/// \param imagePicker The image picker to present
///
/// \param animated Should presentation be animated
///
/// \param select Selection callback
///
/// \param deselect Deselection callback
///
/// \param cancel Cancel callback
///
/// \param finish Finish callback
///
/// \param completion Presentation completion callback
///
- (void)presentImagePicker:(ImagePickerController * _Nonnull)imagePicker animated:(BOOL)animated select:(void (^ _Nullable)(PHAsset * _Nonnull))select deselect:(void (^ _Nullable)(PHAsset * _Nonnull))deselect cancel:(void (^ _Nullable)(NSArray<PHAsset *> * _Nonnull))cancel finish:(void (^ _Nullable)(NSArray<PHAsset *> * _Nonnull))finish completion:(void (^ _Nullable)(void))completion;
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
