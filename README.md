## PrivateEnums

Using cycript on an iOS 10.2 device, expose private enums for public use by using native `NSStringFrom*` functions. Enums are typically reverse engineered by monitoring side effects of values. [LockGlyphX](https://github.com/evilgoldfish/LockGlyphX/blob/master/LockGlyphX.xm#L26-L32) is a primary example of this. Understanding what this values really are, can help developers write better, more maintainable code. 

### Process

0. `grep "NSStringFrom" $THEOS/sdks/iPhoneOS10.2.sdk/System/Library/*Frameworks/*.framework/*.tbd`

1. The above shell command prints a list of all `NSStringFrom*` functions. Some of them are for structs, not enums.

2. Open the simulator binary in Hopper to check that the function is for a fixed point numerical value, and not a struct. 

3. Using Hopper, check how the function is called. This should inform us which fixed point type is being used. Hopper will always say `int` as the argument type of C functions. 

4. On an iOS device, use cycript to call the function. Compare the cycript output with the Hopper disassembly to ensure all cases have been exhausted. 

### Disclaimer

Some guesses have to be made. I've done my best to give rational explanations to all components of this research. Explanations are in the pertinent header, or the README of the framework. 

### License 

**All iOS frameworks and contents are property of Apple Inc.** This repository contains the *research* of Leptos, and licensed for free-use under [Creative Commons Attribution 4.0 International Public License](LICENSE.md).
