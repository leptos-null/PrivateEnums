#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import VoiceMemos
cy# extern "C" NSString *NSStringFromRCCaptureOutputWriterState(int)
(extern "C" NSString *NSStringFromRCCaptureOutputWriterState(int))
cy# NSStringFromRCCaptureOutputWriterState(0)
@"inactive"
cy# NSStringFromRCCaptureOutputWriterState(1)
@"finalizing"
cy# NSStringFromRCCaptureOutputWriterState(2)
@"stopping"
cy# NSStringFromRCCaptureOutputWriterState(3)
@"paused"
cy# NSStringFromRCCaptureOutputWriterState(4)
@"recording active"
cy# NSStringFromRCCaptureOutputWriterState(5)
@"inactive"
*/

/* rationale for NSInteger
@interface RCDurationFormatter : NSObject
+ (id)_localizedDateTimeFormatForDurationFormattingStyle:(long long)style;
@end
*/

typedef NS_ENUM(NSInteger, RCCaptureOutputWriterState) {
    RCCaptureOutputWriterStateInactive,
    RCCaptureOutputWriterStateFinalizing,
    RCCaptureOutputWriterStateStopping,
    RCCaptureOutputWriterStatePaused,
    RCCaptureOutputWriterStateRecordingActive
};
