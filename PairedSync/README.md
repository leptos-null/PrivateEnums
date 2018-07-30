## PairedSync (PrivateFramework)

PairedSync is a private framework on iOS seemingly responsible for device syncing. Its bundle identifier is "com.apple.PairedSync". I spent about an hour going over the pseudocode in Hopper, and I cannot figure out what the framework is supposed to do. There are a lot of IPC mechanisms, and there's a lot of discussion about syncing, but almost all the important methods call out to other frameworks, and nothing of importance appears to get done internally.
