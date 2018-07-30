#import <Foundation/Foundation.h>

/* proof
 * dumped from a command line tool because there are 157 cases
 *********************************************************

@import Foundation;

NSString *NSStringFromITDBTrackField(int);

int main() {
    for (int i = 0; i < 159; i++) {
        puts(NSStringFromITDBTrackField(i).UTF8String);
    }
}

*********************************************************

kITDBTrackField_Invalid (0)
kITDBTrackField_PlayStatus (1)
kITDBTrackField_Name (2)
kITDBTrackField_Album (3)
kITDBTrackField_Artist (4)
kITDBTrackField_BitRate (5)
kITDBTrackField_SampleRate (6)
kITDBTrackField_Year (7)
kITDBTrackField_Genre (8)
kITDBTrackField_Kind (9)
kITDBTrackField_Date (10)
kITDBTrackField_TrackNumber (11)
kITDBTrackField_TotalSize (12)
kITDBTrackField_TotalTime (13)
kITDBTrackField_Comment (14)
kITDBTrackField_Location (15)
kITDBTrackField_DateAdded (16)
kITDBTrackField_EQPreset (17)
kITDBTrackField_Composer (18)
kITDBTrackField_ObsoleteDisplayArtist (19)
kITDBTrackField_NormalizedVolume (20)
kITDBTrackField_StreamStatus (21)
kITDBTrackField_UserPlayCount (22)
kITDBTrackField_PlayDate (23)
kITDBTrackField_DiscNumber (24)
kITDBTrackField_TrackRating (25)
kITDBTrackField_Price (26)
kITDBTrackField_ObjectID (27)
kITDBTrackField_PersistentID (28)
kITDBTrackField_OldUserDisabled (29)
kITDBTrackField_PlaylistItemID (30)
kITDBTrackField_Compilation (31)
kITDBTrackField_PurchaseDate (32)
kITDBTrackField_Relevance (33)
kITDBTrackField_ReleaseDate (34)
kITDBTrackField_BeatsPerMinute (35)
kITDBTrackField_ParentContainerID (36)
kITDBTrackField_Artwork (37)
kITDBTrackField_Popularity (38)
kITDBTrackField_Grouping (39)
kITDBTrackField_PlaylistPersistentID (40)
kITDBTrackField_SongID (41)
kITDBTrackField_ArtistID (42)
kITDBTrackField_PlaylistID (43)
kITDBTrackField_ComposerID (44)
kITDBTrackField_GenreID (45)
kITDBTrackField_CodecType (46)
kITDBTrackField_CodecSubType (47)
kITDBTrackField_SongDataKind (48)
kITDBTrackField_DiscCount (49)
kITDBTrackField_StartTime (50)
kITDBTrackField_StopTime (51)
kITDBTrackField_TrackCount (52)
kITDBTrackField_StorefrontID (53)
kITDBTrackField_Description (54)
kITDBTrackField_Category (55)
kITDBTrackField_Keywords (56)
kITDBTrackField_Podcast (57)
kITDBTrackField_CloudMatchState (58)
kITDBTrackField_HasLyrics (59)
kITDBTrackField_MediaKind (60)
kITDBTrackField_Debug (61)
kITDBTrackField_SeriesName (62)
kITDBTrackField_SeasonNumber (63)
kITDBTrackField_EpisodeID (64)
kITDBTrackField_EpisodeSortID (65)
kITDBTrackField_NetworkName (66)
kITDBTrackField_LastBackupDate (67)
kITDBTrackField_UserSkipCount (68)
kITDBTrackField_SkipDate (69)
kITDBTrackField_GaplessAlbum (70)
kITDBTrackField_AlbumArtist (71)
kITDBTrackField_ShuffleID (72)
kITDBTrackField_TrackID (73)
kITDBTrackField_RelativeVolume (74)
kITDBTrackField_Attributes (75)
kITDBTrackField_Private (76)
kITDBTrackField_AlbumInfo (77)
kITDBTrackField_SortName (78)
kITDBTrackField_SortAlbum (79)
kITDBTrackField_SortArtist (80)
kITDBTrackField_SortAlbumArtist (81)
kITDBTrackField_SortComposer (82)
kITDBTrackField_SortSeriesName (83)
kITDBTrackField_MovieInfo (84)
kITDBTrackField_PodcastURL (85)
kITDBTrackField_LongDescription (86)
kITDBTrackField_ExternalGUID (87)
kITDBTrackField_ChapterData (88)
kITDBTrackField_ExtendedContentRating (89)
kITDBTrackField_AlbumRating (90)
kITDBTrackField_RentalExpirationDate (91)
kITDBTrackField_ObsoleteRingtoneStatus (92)
kITDBTrackField_BookmarkTime (93)
kITDBTrackField_RememberBookmark (94)
kITDBTrackField_HasBeenPlayed (95)
kITDBTrackField_HasAlternateAudio (96)
kITDBTrackField_HasSubtitles (97)
kITDBTrackField_AudioLanguage (98)
kITDBTrackField_AudioTrackIndex (99)
kITDBTrackField_AudioTrackID (100)
kITDBTrackField_SubtitleLanguage (101)
kITDBTrackField_SubtitleTrackIndex (102)
kITDBTrackField_SubtitleTrackID (103)
kITDBTrackField_Studio (104)
kITDBTrackField_Reserved1 (105)
kITDBTrackField_Reserved2 (106)
kITDBTrackField_Reserved3 (107)
kITDBTrackField_Reserved4 (108)
kITDBTrackField_Reserved5 (109)
kITDBTrackField_GaplessInfo (110)
kITDBTrackField_GeniusID (111)
kITDBTrackField_ExcludeFromShuffle (112)
kITDBTrackField_Lyrics (113)
kITDBTrackField_StorePersistentID (114)
kITDBTrackField_JukeboxVotes (115)
kITDBTrackField_VoiceOverLanguage (116)
kITDBTrackField_iTunesU (117)
kITDBTrackField_UncompressedSize (118)
kITDBTrackField_XID (119)
kITDBTrackField_GameGUID (120)
kITDBTrackField_AppIdentifier (121)
kITDBTrackField_ObsoleteTrackKind (122)
kITDBTrackField_Version (123)
kITDBTrackField_Copyright (124)
kITDBTrackField_UserDisabled (125)
kITDBTrackField_AlbumArtwork (126)
kITDBTrackField_CollectionDescription (127)
kITDBTrackField_Flavor (128)
kITDBTrackField_CloudID (129)
kITDBTrackField_CloudDownload (130)
kITDBTrackField_ChosenByAutoFill (131)
kITDBTrackField_CloudUserID (132)
kITDBTrackField_TrackKinds (133)
kITDBTrackField_CloudType (134)
kITDBTrackField_Tags (135)
kITDBTrackField_NumChannels (136)
kITDBTrackField_CloudFlavorID (137)
kITDBTrackField_CloudLibraryKind (138)
kITDBTrackField_StoreVersion (139)
kITDBTrackField_AppFamilyIDMask (140)
kITDBTrackField_ItemIsCompilation (141)
kITDBTrackField_ArtistInfo (142)
kITDBTrackField_PlaylistItemPersistentID (143)
kITDBTrackField_AppleID (144)
kITDBTrackField_OwnerName (145)
kITDBTrackField_URLExtraInfo (146)
kITDBTrackField_ManuallyMarked (147)
kITDBTrackField_DownloaderAppleID (148)
kITDBTrackField_DownloaderName (149)
kITDBTrackField_CloudServerAssetState (150)
kITDBTrackField_SubscriptionAdamID (151)
kITDBTrackField_ReportPlayEvents (152)
kITDBTrackField_IsPlaylistOnly (153)
kITDBTrackField_LikedState (154)
kITDBTrackField_CloudPlaybackEndpointType (155)
kITDBTrackField_AlbumLikedState (156)
kITDBTrackField_MaxValue (157)
Unknown kITDBTrackField_??? (158)
*/

/* rationale for int
@interface ML3Container : ML3Entity
+ (BOOL)hasCriterionInCriteriaList:(SearchCriteriaListRef)criteriaList forITDBTrackField:(int)trackField;
@end
*/

typedef enum kITDBTrackField {
    kITDBTrackFieldInvalid,
    kITDBTrackFieldPlayStatus,
    kITDBTrackFieldName,
    kITDBTrackFieldAlbum,
    kITDBTrackFieldArtist,
    kITDBTrackFieldBitRate,
    kITDBTrackFieldSampleRate,
    kITDBTrackFieldYear,
    kITDBTrackFieldGenre,
    kITDBTrackFieldKind,
    kITDBTrackFieldDate,
    kITDBTrackFieldTrackNumber,
    kITDBTrackFieldTotalSize,
    kITDBTrackFieldTotalTime,
    kITDBTrackFieldComment,
    kITDBTrackFieldLocation,
    kITDBTrackFieldDateAdded,
    kITDBTrackFieldEQPreset,
    kITDBTrackFieldComposer,
    kITDBTrackFieldObsoleteDisplayArtist,
    kITDBTrackFieldNormalizedVolume,
    kITDBTrackFieldStreamStatus,
    kITDBTrackFieldUserPlayCount,
    kITDBTrackFieldPlayDate,
    kITDBTrackFieldDiscNumber,
    kITDBTrackFieldTrackRating,
    kITDBTrackFieldPrice,
    kITDBTrackFieldObjectID,
    kITDBTrackFieldPersistentID,
    kITDBTrackFieldOldUserDisabled,
    kITDBTrackFieldPlaylistItemID,
    kITDBTrackFieldCompilation,
    kITDBTrackFieldPurchaseDate,
    kITDBTrackFieldRelevance,
    kITDBTrackFieldReleaseDate,
    kITDBTrackFieldBeatsPerMinute,
    kITDBTrackFieldParentContainerID,
    kITDBTrackFieldArtwork,
    kITDBTrackFieldPopularity,
    kITDBTrackFieldGrouping,
    kITDBTrackFieldPlaylistPersistentID,
    kITDBTrackFieldSongID,
    kITDBTrackFieldArtistID,
    kITDBTrackFieldPlaylistID,
    kITDBTrackFieldComposerID,
    kITDBTrackFieldGenreID,
    kITDBTrackFieldCodecType,
    kITDBTrackFieldCodecSubType,
    kITDBTrackFieldSongDataKind,
    kITDBTrackFieldDiscCount,
    kITDBTrackFieldStartTime,
    kITDBTrackFieldStopTime,
    kITDBTrackFieldTrackCount,
    kITDBTrackFieldStorefrontID,
    kITDBTrackFieldDescription,
    kITDBTrackFieldCategory,
    kITDBTrackFieldKeywords,
    kITDBTrackFieldPodcast,
    kITDBTrackFieldCloudMatchState,
    kITDBTrackFieldHasLyrics,
    kITDBTrackFieldMediaKind,
    kITDBTrackFieldDebug,
    kITDBTrackFieldSeriesName,
    kITDBTrackFieldSeasonNumber,
    kITDBTrackFieldEpisodeID,
    kITDBTrackFieldEpisodeSortID,
    kITDBTrackFieldNetworkName,
    kITDBTrackFieldLastBackupDate,
    kITDBTrackFieldUserSkipCount,
    kITDBTrackFieldSkipDate,
    kITDBTrackFieldGaplessAlbum,
    kITDBTrackFieldAlbumArtist,
    kITDBTrackFieldShuffleID,
    kITDBTrackFieldTrackID,
    kITDBTrackFieldRelativeVolume,
    kITDBTrackFieldAttributes,
    kITDBTrackFieldPrivate,
    kITDBTrackFieldAlbumInfo,
    kITDBTrackFieldSortName,
    kITDBTrackFieldSortAlbum,
    kITDBTrackFieldSortArtist,
    kITDBTrackFieldSortAlbumArtist,
    kITDBTrackFieldSortComposer,
    kITDBTrackFieldSortSeriesName,
    kITDBTrackFieldMovieInfo,
    kITDBTrackFieldPodcastURL,
    kITDBTrackFieldLongDescription,
    kITDBTrackFieldExternalGUID,
    kITDBTrackFieldChapterData,
    kITDBTrackFieldExtendedContentRating,
    kITDBTrackFieldAlbumRating,
    kITDBTrackFieldRentalExpirationDate,
    kITDBTrackFieldObsoleteRingtoneStatus,
    kITDBTrackFieldBookmarkTime,
    kITDBTrackFieldRememberBookmark,
    kITDBTrackFieldHasBeenPlayed,
    kITDBTrackFieldHasAlternateAudio,
    kITDBTrackFieldHasSubtitles,
    kITDBTrackFieldAudioLanguage,
    kITDBTrackFieldAudioTrackIndex,
    kITDBTrackFieldAudioTrackID,
    kITDBTrackFieldSubtitleLanguage,
    kITDBTrackFieldSubtitleTrackIndex,
    kITDBTrackFieldSubtitleTrackID,
    kITDBTrackFieldStudio,
    kITDBTrackFieldReserved1,
    kITDBTrackFieldReserved2,
    kITDBTrackFieldReserved3,
    kITDBTrackFieldReserved4,
    kITDBTrackFieldReserved5,
    kITDBTrackFieldGaplessInfo,
    kITDBTrackFieldGeniusID,
    kITDBTrackFieldExcludeFromShuffle,
    kITDBTrackFieldLyrics,
    kITDBTrackFieldStorePersistentID,
    kITDBTrackFieldJukeboxVotes,
    kITDBTrackFieldVoiceOverLanguage,
    kITDBTrackFieldiTunesU,
    kITDBTrackFieldUncompressedSize,
    kITDBTrackFieldXID,
    kITDBTrackFieldGameGUID,
    kITDBTrackFieldAppIdentifier,
    kITDBTrackFieldObsoleteTrackKind,
    kITDBTrackFieldVersion,
    kITDBTrackFieldCopyright,
    kITDBTrackFieldUserDisabled,
    kITDBTrackFieldAlbumArtwork,
    kITDBTrackFieldCollectionDescription,
    kITDBTrackFieldFlavor,
    kITDBTrackFieldCloudID,
    kITDBTrackFieldCloudDownload,
    kITDBTrackFieldChosenByAutoFill,
    kITDBTrackFieldCloudUserID,
    kITDBTrackFieldTrackKinds,
    kITDBTrackFieldCloudType,
    kITDBTrackFieldTags,
    kITDBTrackFieldNumChannels,
    kITDBTrackFieldCloudFlavorID,
    kITDBTrackFieldCloudLibraryKind,
    kITDBTrackFieldStoreVersion,
    kITDBTrackFieldAppFamilyIDMask,
    kITDBTrackFieldItemIsCompilation,
    kITDBTrackFieldArtistInfo,
    kITDBTrackFieldPlaylistItemPersistentID,
    kITDBTrackFieldAppleID,
    kITDBTrackFieldOwnerName,
    kITDBTrackFieldURLExtraInfo,
    kITDBTrackFieldManuallyMarked,
    kITDBTrackFieldDownloaderAppleID,
    kITDBTrackFieldDownloaderName,
    kITDBTrackFieldCloudServerAssetState,
    kITDBTrackFieldSubscriptionAdamID,
    kITDBTrackFieldReportPlayEvents,
    kITDBTrackFieldIsPlaylistOnly,
    kITDBTrackFieldLikedState,
    kITDBTrackFieldCloudPlaybackEndpointType,
    kITDBTrackFieldAlbumLikedState,
    kITDBTrackFieldMaxValue
} ITDBTrackField;
