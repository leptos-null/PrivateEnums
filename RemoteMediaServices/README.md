## RemoteMediaServices (PrivateFramework)

RemoteMediaServices is a private framework on iOS that assists with AirPlaying audio. Its bundle identifier is "com.apple.RemoteMediaServices". The framework can find Bonjour servers, pair with devices, and has many protocol parsers.

```proto
//
//  RemoteMediaServices.proto
//  RemoteMediaServices
//
//  Created by Joel Angelone on 4/6/14.
//  Copyright (c) 2014 Apple. All rights reserved.
//

message RMSServiceMessage {
    optional string displayName = 1;
    optional string networkName = 2;
    optional string hostName = 3;
    optional int32 port = 4;
    optional int32 serviceType = 5;
    optional int32 serviceDiscoverySource = 6;
    optional int32 serviceLegacyFlags = 7;
    optional string homeSharingGroupKey = 8;
}

message RMSAudioRouteMessage {
    optional string displayName = 1;
    optional int64 macAddress = 2;
    optional bool supportsVideo = 3;
    optional bool selected = 4;
}

message RMSControlInterfaceMessage {
    optional bool supportsSpeakerSelection = 1;
    optional bool supportsVolumeControl = 2;
    optional bool supportsDirectionalControl = 3;
}

message RMSNowPlayingInfoMessage {
    optional uint64 itemID = 1;
    optional uint64 databaseID = 2;
    optional string trackName = 3;
    optional string artistName = 4;
    optional string albumName = 5;
    optional double timestamp = 6;
    optional double timeRemaining = 7;
    optional double totalDuration = 8;
    optional uint32 revisionNumber = 9;
    optional int32 mediaKind = 10;
    optional int32 playbackState = 11;
    optional int32 likedState = 12;
    optional int32 scrubbableState = 13;
    optional bool canSkipNext = 14;
    optional bool canSkipPrevious = 15;
    optional bool likeable = 16;
    optional bool canWishlist = 17;
    optional bool hasChapterData = 18;
}

message RMSSessionMessage {
    optional int32 sessionIdentifier = 1;
}

message RMSResponseCodeMessage {
    optional int32 responseCode = 1;
}

message RMSBeginDiscoveryMessage {
    optional int32 discoveryTypes = 1;
    repeated string pairedNetworkNames = 2 [packed=true];
    optional bool hasPairedNetworkNames = 3;
}

message RMSUpdatePairedNetworNamesMessage {
    optional int32 sessionIdentifier = 1;
    repeated string pairedNetworkNames = 2 [packed=true];
}

message RMSAvailableServicesDidUpdateMessage {
    optional int32 sessionIdentifier = 1;
    repeated RMSServiceMessage services = 2 [packed=true];
}

message RMSWifiAvailabilityDidChangeMessage {
    optional int32 sessionIdentifier = 1;
    optional bool wifiAvailable = 2;
}

message RMSConnectToServiceMessage {
    optional RMSServiceMessage service = 1;
    optional string pairingGUID = 2;
}

message RMSConnectToServiceResponseMessage {
    optional int32 responseCode = 1;
    optional int32 sessionIdentifier = 2;
    optional RMSControlInterfaceMessage controlInterface = 3;
}

message RMSPlaybackCommandMessage {
    optional int32 playbackCommand = 1;
    optional int32 sessionIdentifier = 2;
}

message RMSSeekToPlaybackTimeMessage {
    optional int32 sessionIdentifier = 1;
    optional int32 playbackTime = 2;
}

message RMSSetLikeStateMessage {
    optional int32 likeState = 1;
    optional uint64 itemID = 2;
    optional uint64 databaseID = 3;
    optional int32 sessionIdentifier = 4;
}

message RMSAddToWishlistMessage {
    optional uint64 itemID = 1;
    optional uint64 databaseID = 2;
    optional int32 sessionIdentifier = 3;
}

message RMSNowPlayingInfoDidUpdateMessage {
    optional int32 sessionIdentifier = 1;
    optional RMSNowPlayingInfoMessage nowPlayingInfo = 2;
}

message RMSAudioRoutesDidUpdateMessage {
    optional int32 sessionIdentifier = 1;
    repeated RMSAudioRouteMessage audioRoutes = 2 [packed=true];
}

message RMSVolumeDidUpdateMessage {
    optional int32 sessionIdentifier = 1;
    optional float volume = 2;
}

message RMSSetVolumeMessage {
    optional float volume = 1;
    optional int32 sessionIdentifier = 2;
}

message RMSNowPlayingArtworkRequestMessage {
    optional string artworkIdentifier = 1;
    optional uint32 width = 2;
    optional uint32 height = 3;
    optional float compressionQuality = 4;
}

message RMSNowPlayingArtworkAvailableMessage {
    optional int32 sessionIdentifier = 1;
    optional string artworkIdentifier = 2;
}

message RMSNavigationCommandMessage {
    optional int32 navigationCommand = 1;
    optional int32 sessionIdentifier = 2;
}

message RMSTouchMessage {
    optional int32 direction = 1;
    optional uint32 repeatCount = 2;
    optional int32 sessionIdentifier = 3;
}

message RMSPickAudioRouteMessage {
    optional int64 macAddress = 1;
    optional int32 sessionIdentifier = 2;
}

message RMSBeginPairingMessage {
    optional string appName = 1;
    optional string deviceName = 2;
    optional string deviceModel = 3;
    optional string passcode = 4;
}

message RMSBeginPairingResponseMessage {
    optional int32 sessionIdentifier = 1;
    optional int32 responseCode = 2;
}

message RMSPairingSessionDidPairMessage {
    optional int32 sessionIdentifier = 1;
    optional string serviceNetworkName = 2;
    optional string pairingGUID = 3;
}
```
