#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import FrontBoardServices
cy# extern "C" NSString *NSStringFromDiagnosticReportType(NSInteger)
(extern "C" NSString *NSStringFromDiagnosticReportType(long))
cy# NSStringFromDiagnosticReportType(0)
@"(none)"
cy# NSStringFromDiagnosticReportType(1)
@"CrashLog"
cy# NSStringFromDiagnosticReportType(2)
@"StackShot"
cy# NSStringFromDiagnosticReportType(3)
null
*/

/* rationale for NSInteger
@interface FBSProcessTerminationRequest : NSObject
@property (assign, nonatomic) long long reportType;
@end
*/

typedef NS_ENUM(NSInteger, FBSProcessTerminationReportType) {
    FBSProcessTerminationReportTypeNone,
    FBSProcessTerminationReportTypeCrashLog,
    FBSProcessTerminationReportTypeStackShot
};
