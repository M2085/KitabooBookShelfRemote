// Generated by Apple Swift version 5.5.1 (swiftlang-1300.0.31.4 clang-1300.0.29.6)
#ifndef KITABOOBOOKSHELFFRAMEWORK_SWIFT_H
#define KITABOOBOOKSHELFFRAMEWORK_SWIFT_H
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
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreData;
@import CoreGraphics;
@import Foundation;
@import KitabooSDKWithReader;
@import Kitaboo_Reader_SDK;
@import ObjectiveC;
@import UIKit;
#endif

#import <KitabooBookShelfFramework/KitabooBookShelfFramework.h>

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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="KitabooBookShelfFramework",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



SWIFT_CLASS("_TtC25KitabooBookShelfFramework28HDApplicationLanguageManager")
@interface HDApplicationLanguageManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) HDApplicationLanguageManager * _Nonnull sharedObject;)
+ (HDApplicationLanguageManager * _Nonnull)sharedObject SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC25KitabooBookShelfFramework20HDKitabooDataManager")
@interface HDKitabooDataManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC25KitabooBookShelfFramework27HDBookSessionHistoryManager")
@interface HDBookSessionHistoryManager : HDKitabooDataManager
- (void)saveSessionServiceRequest;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSCoder;
@class NSNumber;
@protocol UIViewControllerTransitionCoordinator;
@class NSString;
@class NSBundle;

SWIFT_CLASS("_TtC25KitabooBookShelfFramework21HDBookShelfController")
@interface HDBookShelfController : UIViewController
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
@property (nonatomic, readonly) BOOL shouldAutorotate;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end



@class UICollectionView;
@class NSIndexPath;

@interface HDBookShelfController (SWIFT_EXTENSION(KitabooBookShelfFramework)) <UICollectionViewDelegate>
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end



@class UIPopoverPresentationController;

@interface HDBookShelfController (SWIFT_EXTENSION(KitabooBookShelfFramework)) <UIPopoverPresentationControllerDelegate>
- (void)popoverPresentationControllerDidDismissPopover:(UIPopoverPresentationController * _Nonnull)popoverPresentationController;
@end


@class UICollectionViewLayout;

@interface HDBookShelfController (SWIFT_EXTENSION(KitabooBookShelfFramework)) <UICollectionViewDelegateFlowLayout>
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout referenceSizeForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
@end

@class CategorySliderBar;

@interface HDBookShelfController (SWIFT_EXTENSION(KitabooBookShelfFramework)) <CategorySliderBarDelegate>
- (void)didSelectCategoryName:(NSString * _Null_unspecified)categoryName;
- (CGFloat)minimumInterCategorySpacingForCategoryBar:(CategorySliderBar * _Null_unspecified)CategoryActionBar SWIFT_WARN_UNUSED_RESULT;
@end




@interface HDBookShelfController (SWIFT_EXTENSION(KitabooBookShelfFramework)) <HelpDelegate>
- (void)swipeAtIndex:(NSInteger)index;
- (void)didRemovedHelpScreen;
@end

@class UIGestureRecognizer;
@class UITouch;

@interface HDBookShelfController (SWIFT_EXTENSION(KitabooBookShelfFramework)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldReceiveTouch:(UITouch * _Nonnull)touch SWIFT_WARN_UNUSED_RESULT;
@end


@interface HDBookShelfController (SWIFT_EXTENSION(KitabooBookShelfFramework)) <HDKitabooHLSDownloaderManagerDelegate>
- (void)didDeleteHLSBookWithBookID:(NSString * _Nonnull)bookID;
- (void)didDownloadHLSRequestFailWithError:(NSError * _Nonnull)error forState:(NSString * _Nonnull)bookDownloadStatus forBookID:(NSString * _Nonnull)bookID;
- (void)didDownloadHLSStateUpdate:(NSString * _Nonnull)bookDownloadStatus withBookDownloadProgress:(CGFloat)progress forBookID:(NSString * _Nonnull)bookID;
@end


@interface HDBookShelfController (SWIFT_EXTENSION(KitabooBookShelfFramework)) <WebReaderViewControllerDelegate>
- (void)didClosedWebReaderForBookID:(NSNumber * _Nonnull)bookID andClassID:(NSString * _Nonnull)classID;
- (void)sessionExpired;
- (void)didSavedScormDataSuccessfully;
- (void)didFailedToSaveScormWithError:(NSError * _Null_unspecified)error withBookID:(NSNumber * _Null_unspecified)bookID withScormID:(NSString * _Null_unspecified)scormID withClassID:(NSString * _Null_unspecified)classID;
@end


@interface HDBookShelfController (SWIFT_EXTENSION(KitabooBookShelfFramework)) <HDAVTOCPlayerControllerDelegate>
- (void)videoTOCPlayerDidStopPlaying;
- (void)videoTOCPlayerDidPausePlaying;
- (void)videoTOCPlayerDidFinishPlaying;
- (void)videoTOCPlayerDidEnterFullScreen;
@end

@class UIScrollView;
@class UITableView;

@interface HDBookShelfController (SWIFT_EXTENSION(KitabooBookShelfFramework)) <UITableViewDelegate>
- (void)scrollViewDidScroll:(UIScrollView * _Nonnull)scrollView;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView estimatedHeightForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end


@class UIImageView;
@class KitabooUser;

@interface HDBookShelfController (SWIFT_EXTENSION(KitabooBookShelfFramework)) <HDKitabooMediaBookControllerDelegate>
- (void)didTapOnNextMediaWithBookID:(NSString * _Nonnull)bookID withLastPageFolio:(NSString * _Nonnull)lastPageFolio;
- (void)didTapOnPreviousMediaWithBookID:(NSString * _Nonnull)bookID withLastPageFolio:(NSString * _Nonnull)lastPageFolio;
- (void)didUserSessionExpired;
- (UIImageView * _Nonnull)imageViewForThumbnail:(NSString * _Nonnull)thumbnailURL SWIFT_WARN_UNUSED_RESULT;
- (void)didTapOnBackWithBookID:(NSString * _Nonnull)bookID withLastPageFolio:(NSString * _Nonnull)lastPageFolio;
- (void)didFetchLastAccessedForBookID:(NSString * _Nonnull)bookID withLastPageFolio:(NSString * _Nonnull)lastPageFolio;
- (void)refreshUserToken:(KitabooUser * _Nonnull)user withExpiredToken:(NSString * _Nonnull)expiredUserToken completed:(void (^ _Nonnull)(KitabooUser * _Nonnull))completionHandler;
@end

@class UICollectionViewCell;
@class UICollectionReusableView;

@interface HDBookShelfController (SWIFT_EXTENSION(KitabooBookShelfFramework)) <UICollectionViewDataSource>
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didEndDisplayingSupplementaryView:(UICollectionReusableView * _Nonnull)view forElementOfKind:(NSString * _Nonnull)elementKind atIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView willDisplayCell:(UICollectionViewCell * _Nonnull)cell forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView willDisplaySupplementaryView:(UICollectionReusableView * _Nonnull)view forElementKind:(NSString * _Nonnull)elementKind atIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UICollectionReusableView * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView viewForSupplementaryElementOfKind:(NSString * _Nonnull)kind atIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end





@interface HDBookShelfController (SWIFT_EXTENSION(KitabooBookShelfFramework))
- (void)checkAndValidateUserSession;
@end

@class UIView;
@class UITableViewCell;

@interface HDBookShelfController (SWIFT_EXTENSION(KitabooBookShelfFramework)) <UITableViewDataSource>
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView willDisplayCell:(UITableViewCell * _Nonnull)cell forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didEndDisplayingCell:(UITableViewCell * _Nonnull)cell forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UIView * _Nullable)tableView:(UITableView * _Nonnull)tableView viewForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView willDisplayFooterView:(UIView * _Nonnull)view forSection:(NSInteger)section;
- (void)tableView:(UITableView * _Nonnull)tableView didEndDisplayingFooterView:(UIView * _Nonnull)view forSection:(NSInteger)section;
@end

@class KitabooBookVO;
@class HDBookDownloadDetails;
@class NSError;
@class NSURL;

@interface HDBookShelfController (SWIFT_EXTENSION(KitabooBookShelfFramework)) <OldMigrationUGCHandlerDelegate, ReaderViewControllerDelegate, HDBookDownloaderManagerDelegate, HDBookUnZipManagerDelegate, KitabooDataSyncingManagerDelegate>
- (void)didRemoveProfilePopOver;
- (void)didTapOnProfilePic:(UIView * _Null_unspecified)view;
- (void)didOldDBMigrationFailedWithError;
- (void)didOldDBMigrationCompletedSuccessfully;
- (void)didBookLoadedSuccessfullyWithBook:(KitabooBookVO * _Null_unspecified)bookVO;
- (void)checkUgcSyncInProgress:(BOOL)syncInProgress;
- (void)didUGCSynchCompletedSuccessfully;
- (void)didSavedUGCSuccessfully;
- (void)didFailedToSaveUGCWithError:(NSError * _Null_unspecified)error;
- (void)bookDownloadRequestDidUpdateProgress:(HDBookDownloadDetails * _Nonnull)bookDownloadDetail bookID:(NSString * _Nonnull)bookID;
- (void)bookDownloadRequestCanceled:(HDBookDownloadDetails * _Nonnull)bookDownloadDetail bookID:(NSString * _Nonnull)bookID;
- (void)bookDownloadRequestDidRetry:(HDBookDownloadDetails * _Nonnull)bookDownloadDetail bookID:(NSString * _Nonnull)bookID;
- (void)bookDownloadRequestFinished:(HDBookDownloadDetails * _Nonnull)bookDownloadDetail bookID:(NSString * _Nonnull)bookID;
- (void)bookDownloadRequestDidPaused:(HDBookDownloadDetails * _Nonnull)bookDownloadDetail bookID:(NSString * _Nonnull)bookID;
- (void)bookDownloadRequestDidResumed:(HDBookDownloadDetails * _Nonnull)bookDownloadDetail bookID:(NSString * _Nonnull)bookID;
- (void)bookDownloadRequestDidFailedWithError:(NSError * _Nonnull)error bookDownloadDetail:(HDBookDownloadDetails * _Nonnull)bookDownloadDetail bookID:(NSString * _Nonnull)bookID;
- (void)bookDownloadRequestDestinationDoestNotExists:(HDBookDownloadDetails * _Nonnull)bookDownloadDetail bookID:(NSString * _Nonnull)bookID location:(NSURL * _Nonnull)location;
- (void)bookDownloadRequestDidPopulatedInterruptedTasks:(NSArray<HDBookDownloadDetails *> * _Nonnull)bookDownloadDetail;
- (void)bookDownloadRequestStarted:(HDBookDownloadDetails * _Nonnull)bookDownloadDetail bookID:(NSString * _Nonnull)bookID;
- (void)zipArchiveWillUnzipArchiveAtPath:(NSString * _Null_unspecified)path;
- (void)zipArchiveDidUnzipFileAtIndex:(NSInteger)fileIndex totalFiles:(NSInteger)totalFiles archivePath:(NSString * _Null_unspecified)archivePath;
- (void)zipArchiveWillUnzipFileAtIndex:(NSInteger)fileIndex totalFiles:(NSInteger)totalFiles archivePath:(NSString * _Null_unspecified)archivePath;
- (void)zipArchiveDidUnzipArchiveAtPath:(NSString * _Null_unspecified)path unzippedPath:(NSString * _Null_unspecified)unzippedPath;
- (void)didUGCFetchCompletedSuccessfullyWithUserID:(NSString * _Null_unspecified)userID withBookID:(NSString * _Null_unspecified)bookID;
- (void)didUpdateFurthestPageData:(NSString * _Null_unspecified)furthestPageData ForBookID:(NSString * _Null_unspecified)bookID ForUserID:(NSNumber * _Null_unspecified)userID;
- (void)didClosedReader:(UIViewController * _Null_unspecified)reader ForBookID:(NSNumber * _Null_unspecified)bookID withLastPageFolio:(NSString * _Nonnull)lastPageFolio withAvgTimePerPage:(NSNumber * _Nonnull)avgTimePerPage withIsReaderForceClosed:(BOOL)isReaderForceClosed;
- (void)didSessionExpiredForReader:(UIViewController * _Null_unspecified)reader;
- (void)didLastVisitedFolioNumberForBookID:(NSNumber * _Null_unspecified)bookID withLastPageFolio:(NSString * _Null_unspecified)lastPageFolio;
- (void)jumpToBookReaderForBookID:(NSString * _Null_unspecified)bookID withBookId:(NSString * _Null_unspecified)pageId;
- (void)refreshUserTokenForUser:(KitabooUser * _Null_unspecified)user withExpiredToken:(NSString * _Null_unspecified)expiredUserToken completed:(void (^ _Null_unspecified)(KitabooUser * _Nullable))completionHandler;
- (void)didSignOutForUser:(KitabooUser * _Null_unspecified)user;
- (BOOL)isBookDownloadedForBookID:(NSString * _Null_unspecified)bookID SWIFT_WARN_UNUSED_RESULT;
- (void)didUGCSynchFailedWithError:(NSError * _Null_unspecified)error withUserID:(NSString * _Null_unspecified)userID withBookID:(NSString * _Null_unspecified)bookID;
- (void)didUGCSaveCompletedSuccessfullyWithUserID:(NSString * _Null_unspecified)userID withBookID:(NSString * _Null_unspecified)bookID;
- (void)didUGCSaveFailedWithError:(NSError * _Null_unspecified)error withUserID:(NSString * _Null_unspecified)userID withBookID:(NSString * _Null_unspecified)bookID;
- (void)didSaveTrackingDataFailedWithError:(NSError * _Null_unspecified)error ForBookID:(NSNumber * _Null_unspecified)bookID ForUserId:(NSNumber * _Null_unspecified)userID;
/// Will be called when save furthest page request is successful
- (void)didSaveFurthestPageDataSuccessfully:(NSNumber * _Null_unspecified)bookID;
/// Will be called when save furthest page request is failed
/// *@param1 error is the save furthest request page fail error
- (void)didFailedToSaveFurthestPageDataWithError:(NSError * _Null_unspecified)error ForBookID:(NSNumber * _Null_unspecified)bookID;
@end



SWIFT_CLASS("_TtC25KitabooBookShelfFramework25HDKitabooServiceConstants")
@interface HDKitabooServiceConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull responseStatusCode200;)
+ (NSString * _Nonnull)responseStatusCode200 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull responseStatusCode600;)
+ (NSString * _Nonnull)responseStatusCode600 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull responseStatusCode400;)
+ (NSString * _Nonnull)responseStatusCode400 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull responseStatusCode103;)
+ (NSString * _Nonnull)responseStatusCode103 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull responseStatusCode202;)
+ (NSString * _Nonnull)responseStatusCode202 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull responseStatusCode426;)
+ (NSString * _Nonnull)responseStatusCode426 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull responseStatusCode501;)
+ (NSString * _Nonnull)responseStatusCode501 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull responseStatusCode401;)
+ (NSString * _Nonnull)responseStatusCode401 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull responseStatusCode101;)
+ (NSString * _Nonnull)responseStatusCode101 SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull responseStatusCode902;)
+ (NSString * _Nonnull)responseStatusCode902 SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC25KitabooBookShelfFramework24HDKitabooUserDataManager")
@interface HDKitabooUserDataManager : HDKitabooDataManager
- (void)authenticateUserWithUserName:(NSString * _Nonnull)name andPassword:(NSString * _Nonnull)password successHandler:(void (^ _Nonnull)(KitabooUser * _Nonnull))successHandler failureHandler:(void (^ _Nonnull)(NSError * _Nonnull))failureHandler;
- (KitabooUser * _Nullable)getLoggedInUser SWIFT_WARN_UNUSED_RESULT;
- (void)saveKitabooUser:(KitabooUser * _Nonnull)kitabooUser;
- (void)signout:(KitabooUser * _Nonnull)kitabooUser;
- (void)updateUserLoggedInStatusWithKitabooUser:(KitabooUser * _Nonnull)kitabooUser isLoggedIn:(BOOL)isLoggedIn;
- (void)getScreenShotGrabCountForUserID:(NSNumber * _Nonnull)userID completionBlock:(void (^ _Nonnull)(NSNumber * _Nonnull))completionBlock;
- (void)getUnSyncedScreenShotGrabCountForUserID:(NSNumber * _Nonnull)userID completionBlock:(void (^ _Nonnull)(NSNumber * _Nonnull))completionBlock;
- (void)setUnSyncedScreenShotGrabCount:(NSNumber * _Nonnull)count for:(NSNumber * _Nonnull)userID;
- (void)fetchDeviceSessionWithUserToken:(NSString * _Nonnull)userToken successHandler:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull))successHandler failureHandler:(void (^ _Nonnull)(NSError * _Nonnull))failureHandler;
- (void)deleteSessionWithUserToken:(NSString * _Nonnull)userToken uuId:(NSString * _Nonnull)uuId successHandler:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull))successHandler failureHandler:(void (^ _Nonnull)(NSError * _Nonnull))failureHandler;
- (void)deleteAllSessionWithUserToken:(NSString * _Nonnull)userToken successHandler:(void (^ _Nonnull)(NSDictionary<NSString *, id> * _Nonnull))successHandler failureHandler:(void (^ _Nonnull)(NSError * _Nonnull))failureHandler;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSOperationQueue;
@class NSBlockOperation;

SWIFT_CLASS("_TtC25KitabooBookShelfFramework25HDRefreshTokenDataManager")
@interface HDRefreshTokenDataManager : HDKitabooDataManager
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
+ (HDRefreshTokenDataManager * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, strong) NSOperationQueue * _Nonnull renewTokenOperationQue;
- (NSBlockOperation * _Nonnull)renewTokenBlockWithKitabooUser:(KitabooUser * _Nonnull)kitabooUser expiredToken:(NSString * _Nonnull)expiredToken completionBlock:(void (^ _Nonnull)(void))completionBlock SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC25KitabooBookShelfFramework21HDUserSettingsManager")
@interface HDUserSettingsManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) HDUserSettingsManager * _Nonnull sharedObject;)
+ (HDUserSettingsManager * _Nonnull)sharedObject SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getLogoUrl SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isBookmarkEnabled SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isSharingEnabled SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isAutoLoginEnabled SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isHighLightEnabled SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isStickyNotesEnabled SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isSearchEnabled SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isAutoReadAloudEnabled SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isMathEditorEnabled SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isMydataEnabled SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isProtractorEnabled SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isReviewEnabled SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isPenToolEnabled SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isContextualNoteEnabled SWIFT_WARN_UNUSED_RESULT;
- (NSArray<NSString *> * _Nonnull)pentoolPenColors SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isClearAllFIBsEnabled SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isTextAnnotationEnabled SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC25KitabooBookShelfFramework17HDVideoPlayerView")
@interface HDVideoPlayerView : UIView
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end





@interface HDVideoPlayerView (SWIFT_EXTENSION(KitabooBookShelfFramework))
- (void)layoutSubviews;
@end


SWIFT_RESILIENT_CLASS("_TtC25KitabooBookShelfFramework27KitabooAccessibilityManager")
@interface KitabooAccessibilityManager : AccessibilityManager
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) KitabooAccessibilityManager * _Nonnull sharedInstance;)
+ (KitabooAccessibilityManager * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (void)setAccessibilityBundle;
- (void)setAccessibilityLanguage;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC25KitabooBookShelfFramework21LandingViewController")
@interface LandingViewController : UIViewController
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS("_TtC25KitabooBookShelfFramework13PartnerDetail")
@interface PartnerDetail : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class NSDate;

@interface PartnerDetail (SWIFT_EXTENSION(KitabooBookShelfFramework))
@property (nonatomic, copy) NSString * _Nullable city;
@property (nonatomic, copy) NSString * _Nullable contact;
@property (nonatomic, copy) NSString * _Nullable country;
@property (nonatomic, copy) NSDate * _Nullable createdOn;
@property (nonatomic, strong) NSNumber * _Nullable disabled;
@property (nonatomic, copy) NSString * _Nullable districtId;
@property (nonatomic, copy) NSString * _Nullable districtName;
@property (nonatomic, copy) NSString * _Nullable email;
@property (nonatomic, copy) NSString * _Nullable firstName;
@property (nonatomic, strong) NSNumber * _Nullable isAssign;
@property (nonatomic, copy) NSString * _Nullable lastName;
@property (nonatomic, copy) NSString * _Nullable logoUrl;
@property (nonatomic, copy) NSString * _Nullable partnerName;
@property (nonatomic, copy) NSString * _Nullable partnerReferenceId;
@property (nonatomic, copy) NSString * _Nullable ssoType;
@property (nonatomic, copy) NSString * _Nullable street;
@property (nonatomic, strong) NSNumber * _Nullable type;
@property (nonatomic, copy) NSString * _Nullable username;
@property (nonatomic, copy) NSString * _Nullable userReferenceId;
@property (nonatomic, copy) NSString * _Nullable zip;
@end


SWIFT_CLASS("_TtC25KitabooBookShelfFramework18RTLorLTRFlowLayout")
@interface RTLorLTRFlowLayout : UICollectionViewFlowLayout
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly) BOOL flipsHorizontallyInOppositeLayoutDirection;
@end


SWIFT_CLASS("_TtC25KitabooBookShelfFramework27ScreenShotCaptureController")
@interface ScreenShotCaptureController : UIViewController
- (void)viewDidLoad;
- (nonnull instancetype)init:(NSNumber * _Nonnull)userID OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)checkScreenShotGrabLimitExceeded;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end






@class UIColor;

@interface UIImage (SWIFT_EXTENSION(KitabooBookShelfFramework))
+ (UIImage * _Nullable)circularImage:(UIColor * _Nonnull)color size:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
@end




@interface UITextField (SWIFT_EXTENSION(KitabooBookShelfFramework))
@property (nonatomic, readonly) UIEditingInteractionConfiguration editingInteractionConfiguration SWIFT_AVAILABILITY(ios,introduced=13.0);
@end


@interface UITextView (SWIFT_EXTENSION(KitabooBookShelfFramework))
@property (nonatomic, readonly) UIEditingInteractionConfiguration editingInteractionConfiguration SWIFT_AVAILABILITY(ios,introduced=13.0);
@end






#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
