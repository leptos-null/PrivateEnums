## PrivateEnums

Using cycript on an iOS 10.2 device, expose private enums for public use by using native `NSStringFrom*` functions. Enums are typically reverse engineered by monitoring side effects of values. [LockGlyphX](https://github.com/evilgoldfish/LockGlyphX/blob/master/LockGlyphX.xm#L26-L32) is a primary example of this. Understanding what this values really are, can help developers write better, more maintainable code. 


### Disclaimer

Some guesses have to be made. I've done my best to give rational explanations to all components of this research. Explanations are in the pertinent header, or the README of the framework. 


### License 

**All iOS frameworks and contents are property of Apple Inc.** This repository contains the *research* of Leptos, and licensed for free-use under [Creative Commons Attribution 4.0 International Public License](LICENSE.md).
