#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import ChatKit
cy# extern "C" NSString *NSStringFromTranscriptOrientation(char)
(extern "C" NSString *NSStringFromTranscriptOrientation(int))
cy# NSStringFromTranscriptOrientation(0)
@"CKTranscriptOrientationLeft"
cy# NSStringFromTranscriptOrientation(1)
@"CKTranscriptOrientationCenter"
cy# NSStringFromTranscriptOrientation(2)
@"CKTranscriptOrientationRight"
cy# NSStringFromTranscriptOrientation(3)
null
*/

/* rationale for char
@interface CKStampChatItem : CKChatItem
- (char)transcriptOrientation;
@end
*/

typedef NS_ENUM(char, CKTranscriptOrientation) {
    CKTranscriptOrientationLeft,
    CKTranscriptOrientationCenter,
    CKTranscriptOrientationRight
};
