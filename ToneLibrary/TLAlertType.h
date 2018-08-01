#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import ToneLibrary
cy# extern "C" NSString *NSStringFromTLAlertType(NSInteger)
(extern "C" NSString *NSStringFromTLAlertType(long))
cy# NSStringFromTLAlertType(0)
@"TLAlertTypeNone"
cy# NSStringFromTLAlertType(1)
@"TLAlertTypeIncomingCall"
cy# NSStringFromTLAlertType(2)
@"TLAlertTypeTextMessage"
cy# NSStringFromTLAlertType(3)
@"TLAlertTypeTextMessageInConversation"
cy# NSStringFromTLAlertType(4)
@"TLAlertTypeNewVoicemail"
cy# NSStringFromTLAlertType(5)
@"TLAlertTypeNewMail"
cy# NSStringFromTLAlertType(6)
@"TLAlertTypeSentMail"
cy# NSStringFromTLAlertType(7)
@"TLAlertTypeSentTweet"
cy# NSStringFromTLAlertType(8)
@"TLAlertTypeFacebookPost"
cy# NSStringFromTLAlertType(9)
@"TLAlertTypePhotoStreamPost"
cy# NSStringFromTLAlertType(10)
@"TLAlertTypeCalendarAlert"
cy# NSStringFromTLAlertType(11)
@"TLAlertTypeReminderAlert"
cy# NSStringFromTLAlertType(12)
@"TLAlertTypeAirDropInvitation"
cy# NSStringFromTLAlertType(13)
@"TLAlertTypeAlarm"
cy# NSStringFromTLAlertType(14)
@"TLAlertTypeTimer"
cy# NSStringFromTLAlertType(15)
@"TLAlertTypeDigitalTouch"
cy# NSStringFromTLAlertType(16)
@"TLAlertTypeSystemNotification"
cy# NSStringFromTLAlertType(17)
@"TLAlertTypeAppNotification"
cy# NSStringFromTLAlertType(18)
@"TLAlertTypeEmergency"
cy# NSStringFromTLAlertType(19)
@"TLAlertTypeActivity"
cy# NSStringFromTLAlertType(20)
@"TLAlertTypePassbook"
cy# NSStringFromTLAlertType(21)
@"TLAlertTypeHummingbird"
cy# NSStringFromTLAlertType(22)
@"TLAlertTypeSOS"
cy# NSStringFromTLAlertType(23)
@"TLAlertTypeContinuityKeyboard"
cy# NSStringFromTLAlertType(24)
@"????"
*/

/* rationale for NSInteger
@interface TLAlert : NSObject
@property (nonatomic, readonly) long long type;
@end
*/

typedef NS_ENUM(NSInteger, TLAlertType) {
    TLAlertTypeNone,
    TLAlertTypeIncomingCall,
    TLAlertTypeTextMessage,
    TLAlertTypeTextMessageInConversation,
    TLAlertTypeNewVoicemail,
    TLAlertTypeNewMail,
    TLAlertTypeSentMail,
    TLAlertTypeSentTweet,
    TLAlertTypeFacebookPost,
    TLAlertTypePhotoStreamPost,
    TLAlertTypeCalendarAlert,
    TLAlertTypeReminderAlert,
    TLAlertTypeAirDropInvitation,
    TLAlertTypeAlarm,
    TLAlertTypeTimer,
    TLAlertTypeDigitalTouch,
    TLAlertTypeSystemNotification,
    TLAlertTypeAppNotification,
    TLAlertTypeEmergency,
    TLAlertTypeActivity,
    TLAlertTypePassbook,
    TLAlertTypeHummingbird,
    TLAlertTypeSOS,
    TLAlertTypeContinuityKeyboard
};
