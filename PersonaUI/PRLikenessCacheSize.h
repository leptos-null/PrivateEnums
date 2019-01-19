#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import PersonaUI
cy# extern "C" NSString *NSStringFromPRLikenessCacheSize(NSUInteger)
(extern "C" NSString *NSStringFromPRLikenessCacheSize(unsigned long))
cy# NSStringFromPRLikenessCacheSize(1 << 5)
@"32x32"
cy# NSStringFromPRLikenessCacheSize(1 << 6)
@"64x64"
cy# NSStringFromPRLikenessCacheSize(1 << 7)
@"128x128"
cy# NSStringFromPRLikenessCacheSize(1 << 8)
@"256x256"
cy# NSStringFromPRLikenessCacheSize(1 << 9)
@"512x512"
cy# NSStringFromPRLikenessCacheSize(1 << 10)
throw #"Unsupported PRLikenessCacheSize provided: 1024"
*/

/* rationale for NSUInteger
@interface PRLikenessCacheContext : NSObject
@property (assign, nonatomic) unsigned long long cacheSize;
@end
*/

typedef NS_ENUM(NSUInteger, PRLikenessCacheSize) {
    PRLikenessCacheSizeNano   = 1 << 5,
    PRLikenessCacheSizeMini   = 1 << 6,
    PRLikenessCacheSizeSmall  = 1 << 7,
    PRLikenessCacheSizeMedium = 1 << 8,
    PRLikenessCacheSizeLarge  = 1 << 9
};
