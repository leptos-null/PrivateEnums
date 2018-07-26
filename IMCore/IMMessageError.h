#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import IMCore
cy# extern "C" NSString *_NSStringFromIMMessageError(NSInteger)
(extern "C" NSString *_NSStringFromIMMessageError(long))
cy# _NSStringFromIMMessageError(0)
@"No Error"
cy# _NSStringFromIMMessageError(1)
@"Unknown Error"
cy# _NSStringFromIMMessageError(2)
@"Send Cancelled"
cy# _NSStringFromIMMessageError(3)
@"Send Timeout"
cy# _NSStringFromIMMessageError(4)
@"Send Failed"
cy# _NSStringFromIMMessageError(5)
@"Internal Failure"
cy# _NSStringFromIMMessageError(6)
@"Network Failure"
cy# _NSStringFromIMMessageError(7)
@"Network Lookup Failure"
cy# _NSStringFromIMMessageError(8)
@"Connection Failure"
cy# _NSStringFromIMMessageError(9)
@"No Network"
cy# _NSStringFromIMMessageError(10)
@"Network Busy"
cy# _NSStringFromIMMessageError(11)
@"Network Denied"
cy# _NSStringFromIMMessageError(12)
@"Signature Error"
cy# _NSStringFromIMMessageError(13)
@"Server Decode ERror"
cy# _NSStringFromIMMessageError(14)
@"Server Parse Error"
cy# _NSStringFromIMMessageError(15)
@"Server Internal Error"
cy# _NSStringFromIMMessageError(16)
@"Invalid Server Request"
cy# _NSStringFromIMMessageError(17)
@"Malformed Server Request"
cy# _NSStringFromIMMessageError(18)
@"Unknown Server Request"
cy# _NSStringFromIMMessageError(19)
@"Server Token Invalid"
cy# _NSStringFromIMMessageError(20)
@"Server Rejected"
cy# _NSStringFromIMMessageError(21)
@"Remote User Invalid"
cy# _NSStringFromIMMessageError(22)
@"No Remote User"
cy# _NSStringFromIMMessageError(23)
@"Remote User Incompatible"
cy# _NSStringFromIMMessageError(24)
@"Remote User Rejected"
cy# _NSStringFromIMMessageError(25)
@"Transcode Failure"
cy# _NSStringFromIMMessageError(26)
@"Encryption Error"
cy# _NSStringFromIMMessageError(27)
@"Decryption Error"
cy# _NSStringFromIMMessageError(28)
@"OTR Encryption Error"
cy# _NSStringFromIMMessageError(29)
@"OTR Decryption Error"
cy# _NSStringFromIMMessageError(30)
@"Account Disabled"
cy# _NSStringFromIMMessageError(31)
@"No Local Account"
cy# _NSStringFromIMMessageError(32)
@"Account Needs Update"
cy# _NSStringFromIMMessageError(33)
@"Account Invalid"
cy# _NSStringFromIMMessageError(34)
@"File Upload Failure"
cy# _NSStringFromIMMessageError(35)
@"File Download Failure"
cy# _NSStringFromIMMessageError(36)
@"Attachment Upload Error"
cy# _NSStringFromIMMessageError(37)
@"Attachment Download Error"
cy# _NSStringFromIMMessageError(38)
@"System Needs Update"
cy# _NSStringFromIMMessageError(39)
@"Agent Crashed"
cy# _NSStringFromIMMessageError(40)
@"Invalid Local Credentials"
cy# _NSStringFromIMMessageError(41)
@"Location Timeout"
cy# _NSStringFromIMMessageError(42)
@"Location Unauthorized"
cy# _NSStringFromIMMessageError(43)
@"Undefined Error"
*/

/* rationale for NSInteger
@interface NSError : NSObject
@property (readonly) long long code;
@end
*/

typedef NS_ENUM(NSInteger, IMMessageError) {
    IMMessageErrorNone,
    IMMessageErrorUnknown,
    IMMessageErrorSendCancelled,
    IMMessageErrorSendTimeout,
    IMMessageErrorSendFailed,
    IMMessageErrorInternalFailure,
    IMMessageErrorNetworkFailure,
    IMMessageErrorNetworkLookupFailure,
    IMMessageErrorConnectionFailure,
    IMMessageErrorNoNetwork,
    IMMessageErrorNetworkBusy,
    IMMessageErrorNetworkDenied,
    IMMessageErrorSignatureError,
    IMMessageErrorServerDecodeError,
    IMMessageErrorServerParseError,
    IMMessageErrorServerInternal,
    IMMessageErrorInvalidServerRequest,
    IMMessageErrorMalformedServerRequest,
    IMMessageErrorUnknownServerRequest,
    IMMessageErrorServerTokenInvalid,
    IMMessageErrorServerRejected,
    IMMessageErrorRemoteUserInvalid,
    IMMessageErrorNoRemoteUser,
    IMMessageErrorRemoteUserIncompatible,
    IMMessageErrorRemoteUserRejected,
    IMMessageErrorTranscodeFailure,
    IMMessageErrorEncryptionError,
    IMMessageErrorDecryptionError,
    IMMessageErrorOTREncryptionError,
    IMMessageErrorOTRDecryptionError,
    IMMessageErrorAccountDisabled,
    IMMessageErrorNoLocalAccount,
    IMMessageErrorAccountNeedsUpdate,
    IMMessageErrorAccountInvalid,
    IMMessageErrorFileUploadFailure,
    IMMessageErrorFileDownloadFailure,
    IMMessageErrorAttachmentUploadError,
    IMMessageErrorAttachmentDownloadError,
    IMMessageErrorSystemNeedsUpdate,
    IMMessageErrorAgentCrashed,
    IMMessageErrorInvalidLocalCredentials,
    IMMessageErrorLocationTimeout,
    IMMessageErrorLocationUnauthorized
};
