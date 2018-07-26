#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import Home
cy# extern "C" NSString *NSStringFromHFWallpaperVariant(NSInteger)
(extern "C" NSString *NSStringFromHFWallpaperVariant(long))
cy# NSStringFromHFWallpaperVariant(0)
@"original"
cy# NSStringFromHFWallpaperVariant(1)
@"processed"
cy# NSStringFromHFWallpaperVariant(2)
@"blurred"
cy# NSStringFromHFWallpaperVariant(3)
Segmentation fault: 11
*/

/* rationale for NSInteger
@interface HFWallpaper : NSObject
- (id)sliceIdentifierForVariant:(long long)variant;
@end
*/

typedef NS_ENUM(NSInteger, HFWallpaperVariant) {
    HFWallpaperVariantOriginal,
    HFWallpaperVariantProcessed,
    HFWallpaperVariantBlurred
};
