#import <Foundation/Foundation.h>
#import <Photos/Photos.h>

#define PLIST_PATH "/var/mobile/Library/Preferences/com.haoict.tiktokgodpref.plist"
#define PREF_CHANGED_NOTIF "com.haoict.tiktokgodpref/PrefChanged"

@interface AWEURLModel : NSObject
@property(retain, nonatomic) NSArray* originURLList;
@end

@interface AWEVideoModel : NSObject
@property(readonly, nonatomic) AWEURLModel* playURL;
@property(readonly, nonatomic) AWEURLModel* downloadURL;
@end

@interface AWEAwemeModel : NSObject
@property(nonatomic) BOOL isAds;
@property(retain, nonatomic) AWEVideoModel* video;
@end

@interface AWEAwemeDislikeNewReasonTableViewCell : NSObject
@property(retain, nonatomic) UILabel *titleLabel;
@end

@interface AWEAwemePlayDislikeViewController : UIViewController
@property(retain, nonatomic) AWEAwemeModel *model;
- (void)dismissActionsWithAnimation;
- (void)didSelectDownloadCell; // new method
- (void)saveVideoToPhotoLibrary; // new method
@end
