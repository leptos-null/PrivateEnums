#import <Foundation/Foundation.h>

/* proof
mobile:~$ cycript 
cy# @import MusicLibrary
cy# extern "C" NSString *NSStringFromITMediaKind(NSInteger)
(extern "C" NSString *NSStringFromITMediaKind(long))
cy# NSStringFromITMediaKind(0)
@""
cy# NSStringFromITMediaKind(1 << 0)
@"Song"
cy# NSStringFromITMediaKind(1 << 1)
@"Movie"
cy# NSStringFromITMediaKind(1 << 2)
@"Podcast"
cy# NSStringFromITMediaKind(1 << 3)
@"AudioBook"
cy# NSStringFromITMediaKind(1 << 4)
@"PDFBooklet"
cy# NSStringFromITMediaKind(1 << 5)
@"MusicVideo"
cy# NSStringFromITMediaKind(1 << 6)
@"TVShow"
cy# NSStringFromITMediaKind(1 << 7)
@"InteractiveBooklet"
cy# NSStringFromITMediaKind(1 << 8)
@"CoachedAudio"
cy# NSStringFromITMediaKind(1 << 9)
@"VPass"
cy# NSStringFromITMediaKind(1 << 10)
@"HomeVideo"
cy# NSStringFromITMediaKind(1 << 11)
@"FV3"
cy# NSStringFromITMediaKind(1 << 12)
@"SWPkg"
cy# NSStringFromITMediaKind(1 << 13)
@"ForcedMusicPlaylist"
cy# NSStringFromITMediaKind(1 << 14)
@"Ringtone"
cy# NSStringFromITMediaKind(1 << 15)
@"Rental"
cy# NSStringFromITMediaKind(1 << 16)
@"DigitalBookleet"
cy# NSStringFromITMediaKind(1 << 17)
@"SWApp"
cy# NSStringFromITMediaKind(1 << 18)
@"SWGame"
cy# NSStringFromITMediaKind(1 << 19)
@"AudioPass"
cy# NSStringFromITMediaKind(1 << 20)
@"VoiceMemo"
cy# NSStringFromITMediaKind(1 << 21)
@"iTunesU"
cy# NSStringFromITMediaKind(1 << 22)
@"Book"
cy# NSStringFromITMediaKind(1 << 23)
@"PDFBook"
cy# NSStringFromITMediaKind(1 << 24)
@"AlertTone"
cy# NSStringFromITMediaKind(1 << 25)
@""
*/

/* rationale for NSInteger
@interface ML3Container : ML3Entity
- (id)_stringForTrackFieldMediaKind:(long long)mediaKind;
@end
*/

typedef NS_OPTIONS(NSInteger, ITMediaKind) {
    ITMediaKindSong                = 1 << 0,
    ITMediaKindMovie               = 1 << 1,
    ITMediaKindPodcast             = 1 << 2,
    ITMediaKindAudioBook           = 1 << 3,
    ITMediaKindPDFBooklet          = 1 << 4,
    ITMediaKindMusicVideo          = 1 << 5,
    ITMediaKindTVShow              = 1 << 6,
    ITMediaKindInteractiveBooklet  = 1 << 7,
    ITMediaKindCoachedAudio        = 1 << 8,
    ITMediaKindVPass               = 1 << 9,
    ITMediaKindHomeVideo           = 1 << 10,
    ITMediaKindFV3                 = 1 << 11,
    ITMediaKindSWPkg               = 1 << 12,
    ITMediaKindForcedMusicPlaylist = 1 << 13,
    ITMediaKindRingtone            = 1 << 14,
    ITMediaKindRental              = 1 << 15,
    ITMediaKindDigitalBookleet     = 1 << 16,
    ITMediaKindSWApp               = 1 << 17,
    ITMediaKindSWGame              = 1 << 18,
    ITMediaKindAudioPass           = 1 << 19,
    ITMediaKindVoiceMemo           = 1 << 20,
    ITMediaKindiTunesU             = 1 << 21,
    ITMediaKindBook                = 1 << 22,
    ITMediaKindPDFBook             = 1 << 23,
    ITMediaKindAlertTone           = 1 << 24
};
