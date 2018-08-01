#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import VoiceMemos
cy# extern "C" NSString *NSStringFromRCDurationFormattingStyle(NSInteger)
(extern "C" NSString *NSStringFromRCDurationFormattingStyle(long))
cy# NSStringFromRCDurationFormattingStyle(0)
@"RCDurationFormattingStyle_HHMMSSss"
cy# NSStringFromRCDurationFormattingStyle(1)
@"RCDurationFormattingStyle_HHMMSS"
cy# NSStringFromRCDurationFormattingStyle(2)
@"RCDurationFormattingStyle_HHMMSS"
cy# NSStringFromRCDurationFormattingStyle(3)
@"RCDurationFormattingStyle_MMSSss"
cy# NSStringFromRCDurationFormattingStyle(4)
@"RCDurationFormattingStyle_MMSS"
cy# NSStringFromRCDurationFormattingStyle(5)
@"RCDurationFormattingStyle_SSss"
cy# NSStringFromRCDurationFormattingStyle(6)
@"RCDurationFormattingStyle_SS"
cy# NSStringFromRCDurationFormattingStyle(7)
@"RCDurationFormattingStyle_???"
*/

/* rationale for NSInteger
@interface RCDurationFormatter : NSObject
+ (id)_localizedDateTimeFormatForDurationFormattingStyle:(long long)style;
@end
*/

/* it's unlikely this is the naming convention used */
typedef NS_ENUM(NSInteger, RCDurationFormattingStyle) {
    RCDurationFormattingStyleHHMMSSss,
    RCDurationFormattingStyleHHMMSS,
    RCDurationFormattingStyleHHMMSS,
    RCDurationFormattingStyleHHSSss,
    RCDurationFormattingStyleMMSS,
    RCDurationFormattingStyleSSss,
    RCDurationFormattingStyleSS
};

/* note: 
cy# [RCDurationFormatter _localizedDateTimeFormatForDurationFormattingStyle:0]
@"HH:mm:ss.SS"
cy# [RCDurationFormatter _localizedDateTimeFormatForDurationFormattingStyle:1]
@"HH:mm:ss"
cy# [RCDurationFormatter _localizedDateTimeFormatForDurationFormattingStyle:2]
@"HH:mm:ss"
cy# [RCDurationFormatter _localizedDateTimeFormatForDurationFormattingStyle:3]
@"mm:ss.SS"
cy# [RCDurationFormatter _localizedDateTimeFormatForDurationFormattingStyle:4]
@"mm:ss"
cy# [RCDurationFormatter _localizedDateTimeFormatForDurationFormattingStyle:5]
@"s.SS"
cy# [RCDurationFormatter _localizedDateTimeFormatForDurationFormattingStyle:6]
@"s"
cy# [RCDurationFormatter _localizedDateTimeFormatForDurationFormattingStyle:7]
Segmentation fault: 11
*/
