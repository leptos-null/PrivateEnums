#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import MusicLibrary
cy# extern "C" NSString *NSStringFromMLMediaType(NSUInteger)
(extern "C" NSString *NSStringFromMLMediaType(unsigned long))
cy# NSStringFromMLMediaType(0)
@"(0 => 'MLMediaTypeUndefined')"
cy# NSStringFromMLMediaType(1 << 0)
@"(1 => 'MLMediaTypeMusicQuiz')"
cy# NSStringFromMLMediaType(1 << 1)
@"(2 => 'MLMediaTypeAudioBook')"
cy# NSStringFromMLMediaType(1 << 2)
@"(4 => 'MLMediaTypePodcast')"
cy# NSStringFromMLMediaType(1 << 3)
@"(8 => 'MLMediaTypeSong')"
cy# NSStringFromMLMediaType(1 << 4)
@"(16 => 'MLMediaTypeVoiceMemo')"
cy# NSStringFromMLMediaType(1 << 5)
@"(32 => 'MLMediaTypeITunesUAudio')"
cy# NSStringFromMLMediaType(1 << 6)
@"(64 => 'MLMediaType []')"
cy# NSStringFromMLMediaType(1 << 7)
@"(128 => 'MLMediaType []')"
cy# NSStringFromMLMediaType(1 << 8)
@"(256 => 'MLMediaTypeVideoPodcast')"
cy# NSStringFromMLMediaType(1 << 9)
@"(512 => 'MLMediaTypeTVShow')"
cy# NSStringFromMLMediaType(1 << 10)
@"(1024 => 'MLMediaTypeMusicVideo')"
cy# NSStringFromMLMediaType(1 << 11)
@"(2048 => 'MLMediaTypeMovie')"
cy# NSStringFromMLMediaType(1 << 12)
@"(4096 => 'MLMediaTypeVideoITunesU')"
cy# NSStringFromMLMediaType(1 << 13)
@"(8192 => 'MLMediaTypeHomeVideo')"
cy# NSStringFromMLMediaType(1 << 14)
@"(16384 => 'MLMediaType []')"
*/

/* rationale for NSUInteger
That's how it is in the macOS SDK.
MediaLibrary (macOS framework) isn't
on iOS, and MusicLibrary seems to have
some macOS-iOS bridge, likely for iCloud
*/

typedef NS_OPTIONS(NSUInteger, MLMediaType) {
    MLMediaTypeMusicQuiz    = 1 << 0,
    MLMediaTypeAudioBook    = 1 << 1,
    MLMediaTypePodcast      = 1 << 2,
    MLMediaTypeSong         = 1 << 3,
    MLMediaTypeVoiceMemo    = 1 << 4,
    MLMediaTypeITunesUAudio = 1 << 5,
    /* optimized to use high bytes
    */
    MLMediaTypeVideoPodcast = 1 << 8,
    MLMediaTypeTVShow       = 1 << 9,
    MLMediaTypeMusicVideo   = 1 << 10,
    MLMediaTypeMovie        = 1 << 11,
    MLMediaTypeVideoITunesU = 1 << 12,
    MLMediaTypeHomeVideo    = 1 << 13
};
