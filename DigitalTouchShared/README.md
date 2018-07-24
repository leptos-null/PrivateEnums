## DigitalTouchShared (PrivateFramework)

DigitalTouchShared is a private framework on iOS and macOS (where the trailing "shared" likely means shared between the two platforms). Its bundle identifier is "com.apple.DigitalTouchShared". The framework is responsible for the "digital touches" in Messages, such as the beating hearts and drawings, introduced in iOS 10. 

While looking into the single enum exposed in this framework, I saw `-[ETPHeader messageTypeAsString:]`, which takes an int and returns an `NSString`. The issue was, the return values did not match the C function listed in [ETMessageType.h](ETMessageType.h), here was the output from the aforementioned Objective-C method:

```objc
cy# var header = [new ETPHeader init]
#"<ETPHeader: 0x10030f420> {\n}"
cy# [header messageTypeAsString:0]
@"(unknown: 0)"
cy# [header messageTypeAsString:1]
@"Tap"
cy# [header messageTypeAsString:2]
@"QuickTap"
cy# [header messageTypeAsString:3]
@"Heartbeat"
cy# [header messageTypeAsString:4]
@"Doodle"
cy# [header messageTypeAsString:5]
@"ReadReceipt"
cy# [header messageTypeAsString:6]
@"Video"
cy# [header messageTypeAsString:7]
@"Kiss"
cy# [header messageTypeAsString:8]
@"Anger"
cy# [header messageTypeAsString:9]
@"(unknown: 9)"
```

Further research revealed that these message types were used in two different places in slightly different ways. `ETMessage` uses the enum presented in the header in this folder, and `ETPHeader` uses a slightly different data set, displayed above.
