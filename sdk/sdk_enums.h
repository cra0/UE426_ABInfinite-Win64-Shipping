#pragma once
#include "common.h"
namespace SDK
{


    enum class EAkCallbackType : uint8_t //Enum AkAudio.EAkCallbackType
    {
        EndOfEvent = 0,
        Marker = 2,
        Duration = 3,
        Starvation = 5,
        MusicPlayStarted = 7,
        MusicSyncBeat = 8,
        MusicSyncBar = 9,
        MusicSyncEntry = 10,
        MusicSyncExit = 11,
        MusicSyncGrid = 12,
        MusicSyncUserCue = 13,
        MusicSyncPoint = 14,
        MIDIEvent = 16,
        EAkCallbackType_MAX = 17
    };

    enum class Default__Enum : uint8_t //Enum CoreUObject.Default__Enum
    {
    };

    enum class EAkResult : uint8_t //Enum AkAudio.EAkResult
    {
        NotImplemented = 0,
        Success = 1,
        Fail = 2,
        PartialSuccess = 3,
        NotCompatible = 4,
        AlreadyConnected = 5,
        InvalidFile = 7,
        AudioFileHeaderTooLarge = 8,
        MaxReached = 9,
        InvalidID = 14,
        IDNotFound = 15,
        InvalidInstanceID = 16,
        NoMoreData = 17,
        InvalidStateGroup = 20,
        ChildAlreadyHasAParent = 21,
        InvalidLanguage = 22,
        CannotAddItseflAsAChild = 23,
        InvalidParameter = 31,
        ElementAlreadyInList = 35,
        PathNotFound = 36,
        PathNoVertices = 37,
        PathNotRunning = 38,
        PathNotPaused = 39,
        PathNodeAlreadyInList = 40,
        PathNodeNotInList = 41,
        DataNeeded = 43,
        NoDataNeeded = 44,
        DataReady = 45,
        NoDataReady = 46,
        InsufficientMemory = 52,
        Cancelled = 53,
        UnknownBankID = 54,
        BankReadError = 56,
        InvalidSwitchType = 57,
        FormatNotReady = 63,
        WrongBankVersion = 64,
        FileNotFound = 66,
        DeviceNotReady = 67,
        BankAlreadyLoaded = 69,
        RenderedFX = 71,
        ProcessNeeded = 72,
        ProcessDone = 73,
        MemManagerNotInitialized = 74,
        StreamMgrNotInitialized = 75,
        SSEInstructionsNotSupported = 76,
        Busy = 77,
        UnsupportedChannelConfig = 78,
        PluginMediaNotAvailable = 79,
        MustBeVirtualized = 80,
        CommandTooLarge = 81,
        RejectedByFilter = 82,
        InvalidCustomPlatformName = 83,
        DLLCannotLoad = 84,
        DLLPathNotFound = 85,
        NoJavaVM = 86,
        OpenSLError = 87,
        PluginNotRegistered = 88,
        DataAlignmentError = 89,
        EAkResult_MAX = 90
    };

    enum class EInterpCurveMode : uint8_t //Enum CoreUObject.EInterpCurveMode
    {
        CIM_Linear = 0,
        CIM_CurveAuto = 1,
        CIM_Constant = 2,
        CIM_CurveUser = 3,
        CIM_CurveBreak = 4,
        CIM_CurveAutoClamped = 5,
        CIM_MAX = 6
    };

    enum class ERangeBoundTypes : uint8_t //Enum CoreUObject.ERangeBoundTypes
    {
        Exclusive = 0,
        Inclusive = 1,
        Open = 2,
        ERangeBoundTypes_MAX = 3
    };

    enum class ELocalizedTextSourceCategory : uint8_t //Enum CoreUObject.ELocalizedTextSourceCategory
    {
        Game = 0,
        Engine = 1,
        Editor = 2,
        ELocalizedTextSourceCategory_MAX = 3
    };

    enum class EAutomationEventType : uint8_t //Enum CoreUObject.EAutomationEventType
    {
        Info = 0,
        Warning = 1,
        Error = 2,
        EAutomationEventType_MAX = 3
    };

    enum class EAkAndroidAudioAPI : uint8_t //Enum AkAudio.EAkAndroidAudioAPI
    {
        AAudio = 0,
        OpenSL_ES = 1,
        EAkAndroidAudioAPI_MAX = 2
    };

    enum class EAkAudioSessionMode : uint8_t //Enum AkAudio.EAkAudioSessionMode
    {
        Default = 0,
        VoiceChat = 1,
        GameChat = 2,
        VideoRecording = 3,
        Measurement = 4,
        MoviePlayback = 5,
        VideoChat = 6,
        EAkAudioSessionMode_MAX = 7
    };

    enum class EAkAudioSessionCategoryOptions : uint8_t //Enum AkAudio.EAkAudioSessionCategoryOptions
    {
        MixWithOthers = 0,
        DuckOthers = 1,
        AllowBluetooth = 2,
        DefaultToSpeaker = 3,
        EAkAudioSessionCategoryOptions_MAX = 4
    };

    enum class EAkAudioSessionCategory : uint8_t //Enum AkAudio.EAkAudioSessionCategory
    {
        Ambient = 0,
        SoloAmbient = 1,
        PlayAndRecord = 2,
        EAkAudioSessionCategory_MAX = 3
    };

    enum class EReflectionFilterBits : uint8_t //Enum AkAudio.EReflectionFilterBits
    {
        Wall = 0,
        Ceiling = 1,
        Floor = 2,
        EReflectionFilterBits_MAX = 3
    };

    enum class AkCodecId : uint8_t //Enum AkAudio.AkCodecId
    {
        None = 0,
        PCM = 1,
        ADPCM = 2,
        XMA = 3,
        Vorbis = 4,
        AAC = 10,
        ATRAC9 = 12,
        OpusNX = 17,
        AkOpus = 19,
        AkOpusWEM = 20,
        AkCodecId_MAX = 21
    };

    enum class EAkMidiCcValues : uint8_t //Enum AkAudio.EAkMidiCcValues
    {
        AkMidiCcBankSelectCoarse = 0,
        AkMidiCcModWheelCoarse = 1,
        AkMidiCcBreathCtrlCoarse = 2,
        AkMidiCcCtrl3Coarse = 3,
        AkMidiCcFootPedalCoarse = 4,
        AkMidiCcPortamentoCoarse = 5,
        AkMidiCcDataEntryCoarse = 6,
        AkMidiCcVolumeCoarse = 7,
        AkMidiCcBalanceCoarse = 8,
        AkMidiCcCtrl9Coarse = 9,
        AkMidiCcPanPositionCoarse = 10,
        AkMidiCcExpressionCoarse = 11,
        AkMidiCcEffectCtrl1Coarse = 12,
        AkMidiCcEffectCtrl2Coarse = 13,
        AkMidiCcCtrl14Coarse = 14,
        AkMidiCcCtrl15Coarse = 15,
        AkMidiCcGenSlider1 = 16,
        AkMidiCcGenSlider2 = 17,
        AkMidiCcGenSlider3 = 18,
        AkMidiCcGenSlider4 = 19,
        AkMidiCcCtrl20Coarse = 20,
        AkMidiCcCtrl21Coarse = 21,
        AkMidiCcCtrl22Coarse = 22,
        AkMidiCcCtrl23Coarse = 23,
        AkMidiCcCtrl24Coarse = 24,
        AkMidiCcCtrl25Coarse = 25,
        AkMidiCcCtrl26Coarse = 26,
        AkMidiCcCtrl27Coarse = 27,
        AkMidiCcCtrl28Coarse = 28,
        AkMidiCcCtrl29Coarse = 29,
        AkMidiCcCtrl30Coarse = 30,
        AkMidiCcCtrl31Coarse = 31,
        AkMidiCcBankSelectFine = 32,
        AkMidiCcModWheelFine = 33,
        AkMidiCcBreathCtrlFine = 34,
        AkMidiCcCtrl3Fine = 35,
        AkMidiCcFootPedalFine = 36,
        AkMidiCcPortamentoFine = 37,
        AkMidiCcDataEntryFine = 38,
        AkMidiCcVolumeFine = 39,
        AkMidiCcBalanceFine = 40,
        AkMidiCcCtrl9Fine = 41,
        AkMidiCcPanPositionFine = 42,
        AkMidiCcExpressionFine = 43,
        AkMidiCcEffectCtrl1Fine = 44,
        AkMidiCcEffectCtrl2Fine = 45,
        AkMidiCcCtrl14Fine = 46,
        AkMidiCcCtrl15Fine = 47,
        AkMidiCcCtrl20Fine = 52,
        AkMidiCcCtrl21Fine = 53,
        AkMidiCcCtrl22Fine = 54,
        AkMidiCcCtrl23Fine = 55,
        AkMidiCcCtrl24Fine = 56,
        AkMidiCcCtrl25Fine = 57,
        AkMidiCcCtrl26Fine = 58,
        AkMidiCcCtrl27Fine = 59,
        AkMidiCcCtrl28Fine = 60,
        AkMidiCcCtrl29Fine = 61,
        AkMidiCcCtrl30Fine = 62,
        AkMidiCcCtrl31Fine = 63,
        AkMidiCcHoldPedal = 64,
        AkMidiCcPortamentoOnOff = 65,
        AkMidiCcSustenutoPedal = 66,
        AkMidiCcSoftPedal = 67,
        AkMidiCcLegatoPedal = 68,
        AkMidiCcHoldPedal2 = 69,
        AkMidiCcSoundVariation = 70,
        AkMidiCcSoundTimbre = 71,
        AkMidiCcSoundReleaseTime = 72,
        AkMidiCcSoundAttackTime = 73,
        AkMidiCcSoundBrightness = 74,
        AkMidiCcSoundCtrl6 = 75,
        AkMidiCcSoundCtrl7 = 76,
        AkMidiCcSoundCtrl8 = 77,
        AkMidiCcSoundCtrl9 = 78,
        AkMidiCcSoundCtrl10 = 79,
        AkMidiCcGeneralButton1 = 80,
        AkMidiCcGeneralButton2 = 81,
        AkMidiCcGeneralButton3 = 82,
        AkMidiCcGeneralButton4 = 83,
        AkMidiCcReverbLevel = 91,
        AkMidiCcTremoloLevel = 92,
        AkMidiCcChorusLevel = 93,
        AkMidiCcCelesteLevel = 94,
        AkMidiCcPhaserLevel = 95,
        AkMidiCcDataButtonP1 = 96,
        AkMidiCcDataButtonM1 = 97,
        AkMidiCcNonRegisterCoarse = 98,
        AkMidiCcNonRegisterFine = 99,
        AkMidiCcAllSoundOff = 120,
        AkMidiCcAllControllersOff = 121,
        AkMidiCcLocalKeyboard = 122,
        AkMidiCcAllNotesOff = 123,
        AkMidiCcOmniModeOff = 124,
        AkMidiCcOmniModeOn = 125,
        AkMidiCcOmniMonophonicOn = 126,
        AkMidiCcOmniPolyphonicOn = 127,
        EAkMidiCcValues_MAX = 128
    };

    enum class EAkMidiEventType : uint32_t //Enum AkAudio.EAkMidiEventType
    {
        AkMidiEventTypeInvalid = 0,
        AkMidiEventTypeNoteOff = 128,
        AkMidiEventTypeNoteOn = 144,
        AkMidiEventTypeNoteAftertouch = 160,
        AkMidiEventTypeController = 176,
        AkMidiEventTypeProgramChange = 192,
        AkMidiEventTypeChannelAftertouch = 208,
        AkMidiEventTypePitchBend = 224,
        AkMidiEventTypeSysex = 240,
        AkMidiEventTypeEscape = 247,
        AkMidiEventTypeMeta = 255,
        EAkMidiEventType_MAX = 256
    };

    enum class ERTPCValueType : uint8_t //Enum AkAudio.ERTPCValueType
    {
        Default = 0,
        Global = 1,
        GameObject = 2,
        PlayingID = 3,
        Unavailable = 4,
        ERTPCValueType_MAX = 5
    };

    enum class EAkCurveInterpolation : uint8_t //Enum AkAudio.EAkCurveInterpolation
    {
        Log3 = 0,
        Sine = 1,
        Log1 = 2,
        InvSCurve = 3,
        Linear = 4,
        SCurve = 5,
        Exp1 = 6,
        SineRecip = 7,
        Exp3 = 8,
        LastFadeCurve = 8,
        Constant = 9,
        EAkCurveInterpolation_MAX = 10
    };

    enum class AkActionOnEventType : uint8_t //Enum AkAudio.AkActionOnEventType
    {
        Stop = 0,
        Pause = 1,
        Resume = 2,
        Break = 3,
        ReleaseEnvelope = 4,
        AkActionOnEventType_MAX = 5
    };

    enum class AkMultiPositionType : uint8_t //Enum AkAudio.AkMultiPositionType
    {
        SingleSource = 0,
        MultiSources = 1,
        MultiDirections = 2,
        AkMultiPositionType_MAX = 3
    };

    enum class AkSpeakerConfiguration : uint32_t //Enum AkAudio.AkSpeakerConfiguration
    {
        Ak_Speaker_Front_Left = 1,
        Ak_Speaker_Front_Right = 2,
        Ak_Speaker_Front_Center = 4,
        Ak_Speaker_Low_Frequency = 8,
        Ak_Speaker_Back_Left = 16,
        Ak_Speaker_Back_Right = 32,
        Ak_Speaker_Back_Center = 256,
        Ak_Speaker_Side_Left = 512,
        Ak_Speaker_Side_Right = 1024,
        Ak_Speaker_Top = 2048,
        Ak_Speaker_Height_Front_Left = 4096,
        Ak_Speaker_Height_Front_Center = 8192,
        Ak_Speaker_Height_Front_Right = 16384,
        Ak_Speaker_Height_Back_Left = 32768,
        Ak_Speaker_Height_Back_Center = 65536,
        Ak_Speaker_Height_Back_Right = 131072,
        Ak_Speaker_MAX = 131073
    };

    enum class AkChannelConfiguration : uint8_t //Enum AkAudio.AkChannelConfiguration
    {
        Ak_Parent = 0,
        Ak_MainMix = 1,
        Ak_Passthrough = 2,
        Ak_LFE = 3,
        AK_Audio_Objects = 4,
        Ak_1_1 = 5,
        Ak_2_1 = 6,
        Ak_2_2 = 7,
        Ak_3_1 = 8,
        Ak_3_2 = 9,
        Ak_4_1 = 10,
        Ak_4_2 = 11,
        Ak_5_1 = 12,
        Ak_5_2 = 13,
        Ak_7_2 = 14,
        Ak_5_1_3 = 15,
        Ak_7_1_3 = 16,
        Ak_7_1_5 = 17,
        Ak_Auro_9_2 = 18,
        Ak_Auro_10_2 = 19,
        Ak_Auro_11_2 = 20,
        Ak_Auro_13_2 = 21,
        Ak_Ambisonics_1st_order = 22,
        Ak_Ambisonics_2nd_order = 23,
        Ak_Ambisonics_3rd_order = 24,
        Ak_Ambisonics_4th_order = 25,
        Ak_Ambisonics_5th_order = 26,
        AkChannelConfiguration_MAX = 27
    };

    enum class AkAcousticPortalState : uint8_t //Enum AkAudio.AkAcousticPortalState
    {
        Closed = 0,
        Open = 1,
        AkAcousticPortalState_MAX = 2
    };

    enum class PanningRule : uint8_t //Enum AkAudio.PanningRule
    {
        PanningRule_Speakers = 0,
        PanningRule_Headphones = 1,
        PanningRule_MAX = 2
    };

    enum class EAkAudioContext : uint8_t //Enum AkAudio.EAkAudioContext
    {
        Foreign = 0,
        GameplayAudio = 1,
        EditorAudio = 2,
        AlwaysActive = 3,
        EAkAudioContext_MAX = 4
    };

    enum class AkMeshType : uint8_t //Enum AkAudio.AkMeshType
    {
        StaticMesh = 0,
        CollisionMesh = 1,
        AkMeshType_MAX = 2
    };

    enum class EAkCommSystem : uint8_t //Enum AkAudio.EAkCommSystem
    {
        Socket = 0,
        HTCS = 1,
        EAkCommSystem_MAX = 2
    };

    enum class EAkChannelMask : uint8_t //Enum AkAudio.EAkChannelMask
    {
        FrontLeft = 0,
        FrontRight = 1,
        FrontCenter = 2,
        LowFrequency = 3,
        BackLeft = 4,
        BackRight = 5,
        BackCenter = 8,
        SideLeft = 9,
        SideRight = 10,
        Top = 11,
        HeightFrontLeft = 12,
        HeightFrontCenter = 13,
        HeightFrontRight = 14,
        HeightBackLeft = 15,
        HeightBackCenter = 16,
        HeightBackRight = 17,
        EAkChannelMask_MAX = 18
    };

    enum class EAkChannelConfigType : uint8_t //Enum AkAudio.EAkChannelConfigType
    {
        Anonymous = 0,
        Standard = 1,
        Ambisonic = 2,
        EAkChannelConfigType_MAX = 3
    };

    enum class EAkPanningRule : uint8_t //Enum AkAudio.EAkPanningRule
    {
        Speakers = 0,
        Headphones = 1,
        EAkPanningRule_MAX = 2
    };

    enum class EAkFitToGeometryMode : uint8_t //Enum AkAudio.EAkFitToGeometryMode
    {
        OrientedBox = 0,
        AlignedBox = 1,
        ConvexPolyhedron = 2,
        EAkFitToGeometryMode_MAX = 3
    };

    enum class AudioBankOperation : uint8_t //Enum AkAudio.AudioBankOperation
    {
        LoadBank = 0,
        UnloadBank = 1,
        AudioBankOperation_MAX = 2
    };

    enum class AudioObjectType : uint8_t //Enum AkAudio.AudioObjectType
    {
        SFX = 0,
        Music = 1,
        Voice = 2,
        Switch = 3,
        State = 4,
        RTPC = 5,
        Trigger = 6,
        SoundBank = 7,
        AudioPackage = 8,
        AuxBus = 9,
        Room = 10,
        MIDI = 11,
        Emitter = 12,
        Listener = 13,
        Language = 14,
        Device = 15,
        Portal = 16,
        AudioObjectType_MAX = 17
    };

    enum class AudioAction : uint8_t //Enum AkAudio.AudioAction
    {
        PostEvent = 0,
        Stop = 1,
        Break = 2,
        Pause = 3,
        Resume = 4,
        Mute = 5,
        Unmute = 6,
        Load = 7,
        Unload = 8,
        Reload = 9,
        SetValue = 10,
        GetValue = 11,
        Activate = 12,
        Deactivate = 13,
        AudioRegister = 14,
        UnRegister = 15,
        AudioAction_MAX = 16
    };

    enum class AudioLogVerbosity : uint8_t //Enum AkAudio.AudioLogVerbosity
    {
        Notification = 0,
        Warning = 1,
        Error = 2,
        AudioLogVerbosity_MAX = 3
    };

    enum class EGeographicRTPCType : uint8_t //Enum AkAudio.EGeographicRTPCType
    {
        Distance = 0,
        Altitude = 1,
        Longitude = 2,
        Latitude = 3,
        HeadSetDistance = 4,
        EGeographicRTPCType_MAX = 5
    };

    enum class EProcMeshSliceCapOption : uint8_t //Enum ProceduralMeshComponent.EProcMeshSliceCapOption
    {
        NoCap = 0,
        CreateNewSectionForCap = 1,
        UseLastSectionForCap = 2,
        EProcMeshSliceCapOption_MAX = 3
    };

    enum class ETextGender : uint8_t //Enum Engine.ETextGender
    {
        Masculine = 0,
        Feminine = 1,
        Neuter = 2,
        ETextGender_MAX = 3
    };

    enum class EFormatArgumentType : uint8_t //Enum Engine.EFormatArgumentType
    {
        Int = 0,
        UInt = 1,
        Float = 2,
        Double = 3,
        Text = 4,
        Gender = 5,
        EFormatArgumentType_MAX = 6
    };

    enum class ETouchIndex : uint8_t //Enum InputCore.ETouchIndex
    {
        Touch1 = 0,
        Touch2 = 1,
        Touch3 = 2,
        Touch4 = 3,
        Touch5 = 4,
        Touch6 = 5,
        Touch7 = 6,
        Touch8 = 7,
        Touch9 = 8,
        Touch10 = 9,
        CursorPointerIndex = 10,
        MAX_TOUCHES = 11,
        ETouchIndex_MAX = 12
    };

    enum class EEndPlayReason : uint8_t //Enum Engine.EEndPlayReason
    {
        Destroyed = 0,
        LevelTransition = 1,
        EndPlayInEditor = 2,
        RemovedFromWorld = 3,
        Quit = 4,
        EEndPlayReason_MAX = 5
    };

    enum class ETickingGroup : uint8_t //Enum Engine.ETickingGroup
    {
        TG_PrePhysics = 0,
        TG_StartPhysics = 1,
        TG_DuringPhysics = 2,
        TG_EndPhysics = 3,
        TG_PostPhysics = 4,
        TG_PostUpdateWork = 5,
        TG_LastDemotable = 6,
        TG_NewlySpawned = 7,
        TG_MAX = 8
    };

    enum class EComponentCreationMethod : uint8_t //Enum Engine.EComponentCreationMethod
    {
        Native = 0,
        SimpleConstructionScript = 1,
        UserConstructionScript = 2,
        Instance = 3,
        EComponentCreationMethod_MAX = 4
    };

    enum class ESkippableTickMode : uint8_t //Enum Engine.ESkippableTickMode
    {
        FollowTickGroup = 0,
        Skippable = 1,
        UnSkippable = 2,
        ESkippableTickMode_MAX = 3
    };

    enum class ETemperatureSeverityType : uint8_t //Enum Engine.ETemperatureSeverityType
    {
        Unknown = 0,
        Good = 1,
        Bad = 2,
        Serious = 3,
        Critical = 4,
        NumSeverities = 5,
        ETemperatureSeverityType_MAX = 6
    };

    enum class EQuartzCommandQuantization : uint8_t //Enum Engine.EQuartzCommandQuantization
    {
        Bar = 0,
        Beat = 1,
        ThirtySecondNote = 2,
        SixteenthNote = 3,
        EighthNote = 4,
        QuarterNote = 5,
        HalfNote = 6,
        WholeNote = 7,
        DottedSixteenthNote = 8,
        DottedEighthNote = 9,
        DottedQuarterNote = 10,
        DottedHalfNote = 11,
        DottedWholeNote = 12,
        SixteenthNoteTriplet = 13,
        EighthNoteTriplet = 14,
        QuarterNoteTriplet = 15,
        HalfNoteTriplet = 16,
        Tick = 17,
        Count = 18,
        EQuartzCommandQuantization_MAX = 19
    };

    enum class EQuartzCommandDelegateSubType : uint8_t //Enum Engine.EQuartzCommandDelegateSubType
    {
        CommandOnFailedToQueue = 0,
        CommandOnQueued = 1,
        CommandOnCanceled = 2,
        CommandOnAboutToStart = 3,
        CommandOnStarted = 4,
        Count = 5,
        EQuartzCommandDelegateSubType_MAX = 6
    };

    enum class EAudioComponentPlayState : uint8_t //Enum Engine.EAudioComponentPlayState
    {
        Playing = 0,
        Stopped = 1,
        Paused = 2,
        FadingIn = 3,
        FadingOut = 4,
        Count = 5,
        EAudioComponentPlayState_MAX = 6
    };

    enum class EPlaneConstraintAxisSetting : uint8_t //Enum Engine.EPlaneConstraintAxisSetting
    {
        Custom = 0,
        X = 1,
        Y = 2,
        Z = 3,
        UseGlobalPhysicsSetting = 4,
        EPlaneConstraintAxisSetting_MAX = 5
    };

    enum class EInterpToBehaviourType : uint8_t //Enum Engine.EInterpToBehaviourType
    {
        OneShot = 0,
        OneShot_Reverse = 1,
        Loop_Reset = 2,
        PingPong = 3,
        EInterpToBehaviourType_MAX = 4
    };

    enum class ETeleportType : uint8_t //Enum Engine.ETeleportType
    {
        None = 0,
        TeleportPhysics = 1,
        ResetPhysics = 2,
        ETeleportType_MAX = 3
    };

    enum class ERelativeTransformSpace : uint8_t //Enum Engine.ERelativeTransformSpace
    {
        RTS_World = 0,
        RTS_Actor = 1,
        RTS_Component = 2,
        RTS_ParentBoneSpace = 3,
        RTS_MAX = 4
    };

    enum class EAttachLocation : uint8_t //Enum Engine.EAttachLocation
    {
        KeepRelativeOffset = 0,
        KeepWorldPosition = 1,
        SnapToTarget = 2,
        SnapToTargetIncludingScale = 3,
        EAttachLocation_MAX = 4
    };

    enum class EAttachmentRule : uint8_t //Enum Engine.EAttachmentRule
    {
        KeepRelative = 0,
        KeepWorld = 1,
        SnapToTarget = 2,
        EAttachmentRule_MAX = 3
    };

    enum class EDetachmentRule : uint8_t //Enum Engine.EDetachmentRule
    {
        KeepRelative = 0,
        KeepWorld = 1,
        EDetachmentRule_MAX = 2
    };

    enum class EComponentMobility : uint8_t //Enum Engine.EComponentMobility
    {
        Static = 0,
        Stationary = 1,
        Movable = 2,
        EComponentMobility_MAX = 3
    };

    enum class EDetailMode : uint8_t //Enum Engine.EDetailMode
    {
        DM_Low = 0,
        DM_Medium = 1,
        DM_High = 2,
        DM_MAX = 3
    };

    enum class EPlatformInterfaceDataType : uint8_t //Enum Engine.EPlatformInterfaceDataType
    {
        PIDT_None = 0,
        PIDT_Int = 1,
        PIDT_Float = 2,
        PIDT_String = 3,
        PIDT_Object = 4,
        PIDT_Custom = 5,
        PIDT_MAX = 6
    };

    enum class EMovementMode : uint8_t //Enum Engine.EMovementMode
    {
        MOVE_None = 0,
        MOVE_Walking = 1,
        MOVE_NavWalking = 2,
        MOVE_Falling = 3,
        MOVE_Swimming = 4,
        MOVE_Flying = 5,
        MOVE_Custom = 6,
        MOVE_MAX = 7
    };

    enum class ENetworkFailure : uint8_t //Enum Engine.ENetworkFailure
    {
        NetDriverAlreadyExists = 0,
        NetDriverCreateFailure = 1,
        NetDriverListenFailure = 2,
        ConnectionLost = 3,
        ConnectionTimeout = 4,
        FailureReceived = 5,
        OutdatedClient = 6,
        OutdatedServer = 7,
        PendingConnectionFailure = 8,
        NetGuidMismatch = 9,
        NetChecksumMismatch = 10,
        ENetworkFailure_MAX = 11
    };

    enum class ETravelFailure : uint8_t //Enum Engine.ETravelFailure
    {
        NoLevel = 0,
        LoadMapFailure = 1,
        InvalidURL = 2,
        PackageMissing = 3,
        PackageVersion = 4,
        NoDownload = 5,
        TravelFailure = 6,
        CheatCommands = 7,
        PendingNetGameCreateFailure = 8,
        CloudSaveFailure = 9,
        ServerTravelFailure = 10,
        ClientTravelFailure = 11,
        ETravelFailure_MAX = 12
    };

    enum class EScreenOrientation : uint8_t //Enum Engine.EScreenOrientation
    {
        Unknown = 0,
        Portrait = 1,
        PortraitUpsideDown = 2,
        LandscapeLeft = 3,
        LandscapeRight = 4,
        FaceUp = 5,
        FaceDown = 6,
        EScreenOrientation_MAX = 7
    };

    enum class EApplicationState : uint8_t //Enum Engine.EApplicationState
    {
        Unknown = 0,
        Inactive = 1,
        Background = 2,
        Active = 3,
        EApplicationState_MAX = 4
    };

    enum class EObjectTypeQuery : uint8_t //Enum Engine.EObjectTypeQuery
    {
        ObjectTypeQuery1 = 0,
        ObjectTypeQuery2 = 1,
        ObjectTypeQuery3 = 2,
        ObjectTypeQuery4 = 3,
        ObjectTypeQuery5 = 4,
        ObjectTypeQuery6 = 5,
        ObjectTypeQuery7 = 6,
        ObjectTypeQuery8 = 7,
        ObjectTypeQuery9 = 8,
        ObjectTypeQuery10 = 9,
        ObjectTypeQuery11 = 10,
        ObjectTypeQuery12 = 11,
        ObjectTypeQuery13 = 12,
        ObjectTypeQuery14 = 13,
        ObjectTypeQuery15 = 14,
        ObjectTypeQuery16 = 15,
        ObjectTypeQuery17 = 16,
        ObjectTypeQuery18 = 17,
        ObjectTypeQuery19 = 18,
        ObjectTypeQuery20 = 19,
        ObjectTypeQuery21 = 20,
        ObjectTypeQuery22 = 21,
        ObjectTypeQuery23 = 22,
        ObjectTypeQuery24 = 23,
        ObjectTypeQuery25 = 24,
        ObjectTypeQuery26 = 25,
        ObjectTypeQuery27 = 26,
        ObjectTypeQuery28 = 27,
        ObjectTypeQuery29 = 28,
        ObjectTypeQuery30 = 29,
        ObjectTypeQuery31 = 30,
        ObjectTypeQuery32 = 31,
        ObjectTypeQuery_MAX = 32,
        EObjectTypeQuery_MAX = 33
    };

    enum class EDrawDebugTrace : uint8_t //Enum Engine.EDrawDebugTrace
    {
        None = 0,
        ForOneFrame = 1,
        ForDuration = 2,
        Persistent = 3,
        EDrawDebugTrace_MAX = 4
    };

    enum class ETraceTypeQuery : uint8_t //Enum Engine.ETraceTypeQuery
    {
        TraceTypeQuery1 = 0,
        TraceTypeQuery2 = 1,
        TraceTypeQuery3 = 2,
        TraceTypeQuery4 = 3,
        TraceTypeQuery5 = 4,
        TraceTypeQuery6 = 5,
        TraceTypeQuery7 = 6,
        TraceTypeQuery8 = 7,
        TraceTypeQuery9 = 8,
        TraceTypeQuery10 = 9,
        TraceTypeQuery11 = 10,
        TraceTypeQuery12 = 11,
        TraceTypeQuery13 = 12,
        TraceTypeQuery14 = 13,
        TraceTypeQuery15 = 14,
        TraceTypeQuery16 = 15,
        TraceTypeQuery17 = 16,
        TraceTypeQuery18 = 17,
        TraceTypeQuery19 = 18,
        TraceTypeQuery20 = 19,
        TraceTypeQuery21 = 20,
        TraceTypeQuery22 = 21,
        TraceTypeQuery23 = 22,
        TraceTypeQuery24 = 23,
        TraceTypeQuery25 = 24,
        TraceTypeQuery26 = 25,
        TraceTypeQuery27 = 26,
        TraceTypeQuery28 = 27,
        TraceTypeQuery29 = 28,
        TraceTypeQuery30 = 29,
        TraceTypeQuery31 = 30,
        TraceTypeQuery32 = 31,
        TraceTypeQuery_MAX = 32,
        ETraceTypeQuery_MAX = 33
    };

    enum class EMoveComponentAction : uint8_t //Enum Engine.EMoveComponentAction
    {
        Move = 0,
        Stop = 1,
        Return = 2,
        EMoveComponentAction_MAX = 3
    };

    enum class EQuitPreference : uint8_t //Enum Engine.EQuitPreference
    {
        Quit = 0,
        Background = 1,
        EQuitPreference_MAX = 2
    };

    enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8_t //Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
    {
        CancelAbilityImmediately = 0,
        RemoveAbilityOnEnd = 1,
        DoNothing = 2,
        EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3
    };

    enum class EGameplayModsSelector : uint8_t //Enum GameplayAbilities.EGameplayModsSelector
    {
        Additive = 0,
        Max = 1,
        Min = 2,
        Length = 3
    };

    enum class EGameplayEffectAttributeCaptureSource : uint8_t //Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
    {
        Source = 0,
        Target = 1,
        EGameplayEffectAttributeCaptureSource_MAX = 2
    };

    enum class ETaskResourceOverlapPolicy : uint8_t //Enum GameplayTasks.ETaskResourceOverlapPolicy
    {
        StartOnTop = 0,
        StartAtEnd = 1,
        ETaskResourceOverlapPolicy_MAX = 2
    };

    enum class EGameplayTaskRunResult : uint8_t //Enum GameplayTasks.EGameplayTaskRunResult
    {
        Error = 0,
        Failed = 1,
        Success_Paused = 2,
        Success_Active = 3,
        Success_Finished = 4,
        EGameplayTaskRunResult_MAX = 5
    };

    enum class EGameplayAbilityActivationMode : uint8_t //Enum GameplayAbilities.EGameplayAbilityActivationMode
    {
        Authority = 0,
        NonAuthority = 1,
        Predicting = 2,
        Confirmed = 3,
        Rejected = 4,
        EGameplayAbilityActivationMode_MAX = 5
    };

    enum class EAbilityGenericReplicatedEvent : uint8_t //Enum GameplayAbilities.EAbilityGenericReplicatedEvent
    {
        GenericConfirm = 0,
        GenericCancel = 1,
        InputPressed = 2,
        InputReleased = 3,
        GenericSignalFromClient = 4,
        GenericSignalFromServer = 5,
        GameCustom1 = 6,
        GameCustom2 = 7,
        GameCustom3 = 8,
        GameCustom4 = 9,
        GameCustom5 = 10,
        GameCustom6 = 11,
        MAX = 12
    };

    enum class EFastArraySerializerDeltaFlags : uint8_t //Enum Engine.EFastArraySerializerDeltaFlags
    {
        None = 0,
        HasBeenSerialized = 1,
        HasDeltaBeenRequested = 2,
        IsUsingDeltaSerialization = 4,
        EFastArraySerializerDeltaFlags_MAX = 5
    };

    enum class EGameplayEffectReplicationMode : uint8_t //Enum GameplayAbilities.EGameplayEffectReplicationMode
    {
        Minimal = 0,
        Mixed = 1,
        Full = 2,
        EGameplayEffectReplicationMode_MAX = 3
    };

    enum class EAbilityTaskWaitState : uint8_t //Enum GameplayAbilities.EAbilityTaskWaitState
    {
        WaitingOnGame = 1,
        WaitingOnUser = 2,
        WaitingOnAvatar = 4,
        EAbilityTaskWaitState_MAX = 5
    };

    enum class ERootMotionMoveToActorTargetOffsetType : uint8_t //Enum GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
    {
        AlignFromTargetToSource = 0,
        AlignToTargetForward = 1,
        AlignToWorldSpace = 2,
        ERootMotionMoveToActorTargetOffsetType_MAX = 3
    };

    enum class EAbilityTaskNetSyncType : uint8_t //Enum GameplayAbilities.EAbilityTaskNetSyncType
    {
        BothWait = 0,
        OnlyServerWait = 1,
        OnlyClientWait = 2,
        EAbilityTaskNetSyncType_MAX = 3
    };

    enum class EWaitAttributeChangeComparison : uint8_t //Enum GameplayAbilities.EWaitAttributeChangeComparison
    {
        None = 0,
        GreaterThan = 1,
        LessThan = 2,
        GreaterThanOrEqualTo = 3,
        LessThanOrEqualTo = 4,
        NotEqualTo = 5,
        ExactlyEqualTo = 6,
        MAX = 7
    };

    enum class EGameplayAbilityInputBinds : uint8_t //Enum GameplayAbilities.EGameplayAbilityInputBinds
    {
        Ability1 = 0,
        Ability2 = 1,
        Ability3 = 2,
        Ability4 = 3,
        Ability5 = 4,
        Ability6 = 5,
        Ability7 = 6,
        Ability8 = 7,
        Ability9 = 8,
        EGameplayAbilityInputBinds_MAX = 9
    };

    enum class ETargetDataFilterSelf : uint8_t //Enum GameplayAbilities.ETargetDataFilterSelf
    {
        TDFS_Any = 0,
        TDFS_NoSelf = 1,
        TDFS_NoOthers = 2,
        TDFS_MAX = 3
    };

    enum class EGameplayAbilityTargetingLocationType : uint8_t //Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
    {
        LiteralTransform = 0,
        ActorTransform = 1,
        SocketTransform = 2,
        EGameplayAbilityTargetingLocationType_MAX = 3
    };

    enum class EGameplayTargetingConfirmation : uint8_t //Enum GameplayAbilities.EGameplayTargetingConfirmation
    {
        Instant = 0,
        UserConfirmed = 1,
        Custom = 2,
        CustomMulti = 3,
        EGameplayTargetingConfirmation_MAX = 4
    };

    enum class ERepAnimPositionMethod : uint8_t //Enum GameplayAbilities.ERepAnimPositionMethod
    {
        Position = 0,
        CurrentSectionId = 1,
        ERepAnimPositionMethod_MAX = 2
    };

    enum class EGameplayAbilityTriggerSource : uint8_t //Enum GameplayAbilities.EGameplayAbilityTriggerSource
    {
        GameplayEvent = 0,
        OwnedTagAdded = 1,
        OwnedTagPresent = 2,
        EGameplayAbilityTriggerSource_MAX = 3
    };

    enum class EGameplayAbilityReplicationPolicy : uint8_t //Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
    {
        ReplicateNo = 0,
        ReplicateYes = 1,
        EGameplayAbilityReplicationPolicy_MAX = 2
    };

    enum class EGameplayAbilityNetSecurityAdvancedPolicy : uint8_t //Enum GameplayAbilities.EGameplayAbilityNetSecurityAdvancedPolicy
    {
        None = 0,
        DisallowClientCancelAbility = 1,
        DisallowClientEndAbility = 2,
        EGameplayAbilityNetSecurityAdvancedPolicy_MAX = 3
    };

    enum class EGameplayAbilityNetSecurityPolicy : uint8_t //Enum GameplayAbilities.EGameplayAbilityNetSecurityPolicy
    {
        ClientOrServer = 0,
        ServerOnlyExecution = 1,
        ServerOnlyTermination = 2,
        ServerOnly = 3,
        EGameplayAbilityNetSecurityPolicy_MAX = 4
    };

    enum class EGameplayAbilityNetExecutionPolicy : uint8_t //Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
    {
        LocalPredicted = 0,
        LocalOnly = 1,
        ServerInitiated = 2,
        ServerOnly = 3,
        Immediately = 4,
        EGameplayAbilityNetExecutionPolicy_MAX = 5
    };

    enum class EGameplayAbilityInstancingPolicy : uint8_t //Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
    {
        NonInstanced = 0,
        InstancedPerActor = 1,
        InstancedPerExecution = 2,
        EGameplayAbilityInstancingPolicy_MAX = 3
    };

    enum class EGameplayCuePayloadType : uint8_t //Enum GameplayAbilities.EGameplayCuePayloadType
    {
        CueParameters = 0,
        FromSpec = 1,
        EGameplayCuePayloadType_MAX = 2
    };

    enum class EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t //Enum GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
    {
        NeverReset = 0,
        ResetPeriod = 1,
        ExecuteAndResetPeriod = 2,
        EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3
    };

    enum class EGameplayEffectStackingExpirationPolicy : uint8_t //Enum GameplayAbilities.EGameplayEffectStackingExpirationPolicy
    {
        ClearEntireStack = 0,
        RemoveSingleStackAndRefreshDuration = 1,
        RefreshDuration = 2,
        EGameplayEffectStackingExpirationPolicy_MAX = 3
    };

    enum class EGameplayEffectStackingPeriodPolicy : uint8_t //Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
    {
        ResetOnSuccessfulApplication = 0,
        NeverReset = 1,
        EGameplayEffectStackingPeriodPolicy_MAX = 2
    };

    enum class EGameplayEffectStackingDurationPolicy : uint8_t //Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
    {
        RefreshOnSuccessfulApplication = 0,
        NeverRefresh = 1,
        EGameplayEffectStackingDurationPolicy_MAX = 2
    };

    enum class EGameplayEffectDurationType : uint8_t //Enum GameplayAbilities.EGameplayEffectDurationType
    {
        Instant = 0,
        Infinite = 1,
        HasDuration = 2,
        EGameplayEffectDurationType_MAX = 3
    };

    enum class EGameplayEffectScopedModifierAggregatorType : uint8_t //Enum GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
    {
        CapturedAttributeBacked = 0,
        Transient = 1,
        EGameplayEffectScopedModifierAggregatorType_MAX = 2
    };

    enum class EAttributeBasedFloatCalculationType : uint8_t //Enum GameplayAbilities.EAttributeBasedFloatCalculationType
    {
        AttributeMagnitude = 0,
        AttributeBaseValue = 1,
        AttributeBonusMagnitude = 2,
        AttributeMagnitudeEvaluatedUpToChannel = 3,
        EAttributeBasedFloatCalculationType_MAX = 4
    };

    enum class EGameplayEffectMagnitudeCalculation : uint8_t //Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
    {
        ScalableFloat = 0,
        AttributeBased = 1,
        CustomCalculationClass = 2,
        SetByCaller = 3,
        EGameplayEffectMagnitudeCalculation_MAX = 4
    };

    enum class EGameplayTagEventType : uint8_t //Enum GameplayAbilities.EGameplayTagEventType
    {
        NewOrRemoved = 0,
        AnyCountChange = 1,
        EGameplayTagEventType_MAX = 2
    };

    enum class EGameplayCueEvent : uint8_t //Enum GameplayAbilities.EGameplayCueEvent
    {
        OnActive = 0,
        WhileActive = 1,
        Executed = 2,
        Removed = 3,
        EGameplayCueEvent_MAX = 4
    };

    enum class EGameplayEffectStackingType : uint8_t //Enum GameplayAbilities.EGameplayEffectStackingType
    {
        None = 0,
        AggregateBySource = 1,
        AggregateByTarget = 2,
        EGameplayEffectStackingType_MAX = 3
    };

    enum class EGameplayModOp : uint8_t //Enum GameplayAbilities.EGameplayModOp
    {
        Additive = 0,
        Multiplicitive = 1,
        Division = 2,
        Override = 3,
        Max = 4
    };

    enum class EGameplayModEvaluationChannel : uint8_t //Enum GameplayAbilities.EGameplayModEvaluationChannel
    {
        Channel0 = 0,
        Channel1 = 1,
        Channel2 = 2,
        Channel3 = 3,
        Channel4 = 4,
        Channel5 = 5,
        Channel6 = 6,
        Channel7 = 7,
        Channel8 = 8,
        Channel9 = 9,
        Channel_MAX = 10,
        EGameplayModEvaluationChannel_MAX = 11
    };

    enum class ETriangleTessellationMode : uint8_t //Enum EditableMesh.ETriangleTessellationMode
    {
        ThreeTriangles = 0,
        FourTriangles = 1,
        ETriangleTessellationMode_MAX = 2
    };

    enum class EInsetPolygonsMode : uint8_t //Enum EditableMesh.EInsetPolygonsMode
    {
        All = 0,
        CenterPolygonOnly = 1,
        SidePolygonsOnly = 2,
        EInsetPolygonsMode_MAX = 3
    };

    enum class EPolygonEdgeHardness : uint8_t //Enum EditableMesh.EPolygonEdgeHardness
    {
        NewEdgesSoft = 0,
        NewEdgesHard = 1,
        AllEdgesSoft = 2,
        AllEdgesHard = 3,
        EPolygonEdgeHardness_MAX = 4
    };

    enum class EMeshElementAttributeType : uint8_t //Enum EditableMesh.EMeshElementAttributeType
    {
        None = 0,
        FVector4 = 1,
        FVector = 2,
        FVector2D = 3,
        Float = 4,
        Int = 5,
        Bool = 6,
        FName = 7,
        EMeshElementAttributeType_MAX = 8
    };

    enum class EMeshTopologyChange : uint8_t //Enum EditableMesh.EMeshTopologyChange
    {
        NoTopologyChange = 0,
        TopologyChange = 1,
        EMeshTopologyChange_MAX = 2
    };

    enum class EMeshModificationType : uint8_t //Enum EditableMesh.EMeshModificationType
    {
        FirstInterim = 0,
        Interim = 1,
        Final = 2,
        EMeshModificationType_MAX = 3
    };

    enum class EUdpMessageFormat : uint8_t //Enum UdpMessaging.EUdpMessageFormat
    {
        None = 0,
        Json = 1,
        TaggedProperty = 2,
        CborPlatformEndianness = 3,
        CborStandardEndianness = 4,
        EUdpMessageFormat_MAX = 5
    };

    enum class EControlRigComponentMapDirection : uint8_t //Enum ControlRig.EControlRigComponentMapDirection
    {
        Input = 0,
        Output = 1,
        EControlRigComponentMapDirection_MAX = 2
    };

    enum class EControlRigComponentSpace : uint8_t //Enum ControlRig.EControlRigComponentSpace
    {
        WorldSpace = 0,
        ActorSpace = 1,
        ComponentSpace = 2,
        RigSpace = 3,
        LocalSpace = 4,
        Max = 5
    };

    enum class ERigExecutionType : uint8_t //Enum ControlRig.ERigExecutionType
    {
        Runtime = 0,
        Editing = 1,
        Max = 2
    };

    enum class EBoneGetterSetterMode : uint8_t //Enum ControlRig.EBoneGetterSetterMode
    {
        LocalSpace = 0,
        GlobalSpace = 1,
        Max = 2
    };

    enum class ETransformGetterType : uint8_t //Enum ControlRig.ETransformGetterType
    {
        Initial = 0,
        Current = 1,
        Max = 2
    };

    enum class EControlRigClampSpatialMode : uint8_t //Enum ControlRig.EControlRigClampSpatialMode
    {
        Plane = 0,
        Cylinder = 1,
        Sphere = 2,
        EControlRigClampSpatialMode_MAX = 3
    };

    enum class ETransformSpaceMode : uint8_t //Enum ControlRig.ETransformSpaceMode
    {
        LocalSpace = 0,
        GlobalSpace = 1,
        BaseSpace = 2,
        BaseJoint = 3,
        Max = 4
    };

    enum class EControlRigDrawSettings : uint8_t //Enum ControlRig.EControlRigDrawSettings
    {
        Points = 0,
        Lines = 1,
        LineStrip = 2,
        DynamicMesh = 3,
        EControlRigDrawSettings_MAX = 4
    };

    enum class EControlRigDrawHierarchyMode : uint8_t //Enum ControlRig.EControlRigDrawHierarchyMode
    {
        Axes = 0,
        Max = 1
    };

    enum class EControlRigAnimEasingType : uint8_t //Enum ControlRig.EControlRigAnimEasingType
    {
        Linear = 0,
        QuadraticEaseIn = 1,
        QuadraticEaseOut = 2,
        QuadraticEaseInOut = 3,
        CubicEaseIn = 4,
        CubicEaseOut = 5,
        CubicEaseInOut = 6,
        QuarticEaseIn = 7,
        QuarticEaseOut = 8,
        QuarticEaseInOut = 9,
        QuinticEaseIn = 10,
        QuinticEaseOut = 11,
        QuinticEaseInOut = 12,
        SineEaseIn = 13,
        SineEaseOut = 14,
        SineEaseInOut = 15,
        CircularEaseIn = 16,
        CircularEaseOut = 17,
        CircularEaseInOut = 18,
        ExponentialEaseIn = 19,
        ExponentialEaseOut = 20,
        ExponentialEaseInOut = 21,
        ElasticEaseIn = 22,
        ElasticEaseOut = 23,
        ElasticEaseInOut = 24,
        BackEaseIn = 25,
        BackEaseOut = 26,
        BackEaseInOut = 27,
        BounceEaseIn = 28,
        BounceEaseOut = 29,
        BounceEaseInOut = 30,
        EControlRigAnimEasingType_MAX = 31
    };

    enum class EControlRigRotationOrder : uint8_t //Enum ControlRig.EControlRigRotationOrder
    {
        XYZ = 0,
        XZY = 1,
        YXZ = 2,
        YZX = 3,
        ZXY = 4,
        ZYX = 5,
        EControlRigRotationOrder_MAX = 6
    };

    enum class ECRSimPointIntegrateType : uint8_t //Enum ControlRig.ECRSimPointIntegrateType
    {
        Verlet = 0,
        SemiExplicitEuler = 1,
        ECRSimPointIntegrateType_MAX = 2
    };

    enum class ECRSimConstraintType : uint8_t //Enum ControlRig.ECRSimConstraintType
    {
        Distance = 0,
        DistanceFromA = 1,
        DistanceFromB = 2,
        Plane = 3,
        ECRSimConstraintType_MAX = 4
    };

    enum class ECRSimPointForceType : uint8_t //Enum ControlRig.ECRSimPointForceType
    {
        Direction = 0,
        ECRSimPointForceType_MAX = 1
    };

    enum class ECRSimSoftCollisionType : uint8_t //Enum ControlRig.ECRSimSoftCollisionType
    {
        Plane = 0,
        Sphere = 1,
        Cone = 2,
        ECRSimSoftCollisionType_MAX = 3
    };

    enum class EControlRigFKRigExecuteMode : uint8_t //Enum ControlRig.EControlRigFKRigExecuteMode
    {
        Replace = 0,
        Additive = 1,
        Max = 2
    };

    enum class ERigBoneType : uint8_t //Enum ControlRig.ERigBoneType
    {
        Imported = 0,
        User = 1,
        ERigBoneType_MAX = 2
    };

    enum class ERigControlAxis : uint8_t //Enum ControlRig.ERigControlAxis
    {
        X = 0,
        Y = 1,
        Z = 2,
        ERigControlAxis_MAX = 3
    };

    enum class ERigControlValueType : uint8_t //Enum ControlRig.ERigControlValueType
    {
        Initial = 0,
        Current = 1,
        Minimum = 2,
        Maximum = 3,
        ERigControlValueType_MAX = 4
    };

    enum class ERigControlType : uint8_t //Enum ControlRig.ERigControlType
    {
        Bool = 0,
        Float = 1,
        Integer = 2,
        Vector2D = 3,
        Position = 4,
        Scale = 5,
        Rotator = 6,
        Transform = 7,
        TransformNoScale = 8,
        EulerTransform = 9,
        ERigControlType_MAX = 10
    };

    enum class ERigHierarchyImportMode : uint8_t //Enum ControlRig.ERigHierarchyImportMode
    {
        Append = 0,
        Replace = 1,
        ReplaceLocalTransform = 2,
        ReplaceGlobalTransform = 3,
        Max = 4
    };

    enum class EControlRigSetKey : uint8_t //Enum ControlRig.EControlRigSetKey
    {
        DoNotCare = 0,
        Always = 1,
        Never = 2,
        EControlRigSetKey_MAX = 3
    };

    enum class ERigEvent : uint8_t //Enum ControlRig.ERigEvent
    {
        None = 0,
        RequestAutoKey = 1,
        Max = 2
    };

    enum class ERigElementType : uint8_t //Enum ControlRig.ERigElementType
    {
        None = 0,
        Bone = 1,
        Space = 2,
        Control = 4,
        Curve = 8,
        All = 15,
        ERigElementType_MAX = 16
    };

    enum class ERigSpaceType : uint8_t //Enum ControlRig.ERigSpaceType
    {
        Global = 0,
        Bone = 1,
        Control = 2,
        Space = 3,
        ERigSpaceType_MAX = 4
    };

    enum class EAimMode : uint8_t //Enum ControlRig.EAimMode
    {
        AimAtTarget = 0,
        OrientToTarget = 1,
        MAX = 2
    };

    enum class EApplyTransformMode : uint8_t //Enum ControlRig.EApplyTransformMode
    {
        Override = 0,
        Additive = 1,
        Max = 2
    };

    enum class ERigUnitDebugPointMode : uint8_t //Enum ControlRig.ERigUnitDebugPointMode
    {
        Point = 0,
        Vector = 1,
        Max = 2
    };

    enum class ERigUnitDebugTransformMode : uint8_t //Enum ControlRig.ERigUnitDebugTransformMode
    {
        Point = 0,
        Axes = 1,
        Box = 2,
        Max = 3
    };

    enum class EControlRigCurveAlignment : uint8_t //Enum ControlRig.EControlRigCurveAlignment
    {
        Front = 0,
        Stretched = 1,
        EControlRigCurveAlignment_MAX = 2
    };

    enum class EControlRigVectorKind : uint8_t //Enum ControlRig.EControlRigVectorKind
    {
        Direction = 0,
        Location = 1,
        EControlRigVectorKind_MAX = 2
    };

    enum class ERBFVectorDistanceType : uint8_t //Enum ControlRig.ERBFVectorDistanceType
    {
        Euclidean = 0,
        Manhattan = 1,
        ArcLength = 2,
        ERBFVectorDistanceType_MAX = 3
    };

    enum class ERBFQuatDistanceType : uint8_t //Enum ControlRig.ERBFQuatDistanceType
    {
        Euclidean = 0,
        ArcLength = 1,
        SwingAngle = 2,
        TwistAngle = 3,
        ERBFQuatDistanceType_MAX = 4
    };

    enum class ERBFKernelType : uint8_t //Enum ControlRig.ERBFKernelType
    {
        Gaussian = 0,
        Exponential = 1,
        Linear = 2,
        Cubic = 3,
        Quintic = 4,
        ERBFKernelType_MAX = 5
    };

    enum class EControlRigModifyBoneMode : uint8_t //Enum ControlRig.EControlRigModifyBoneMode
    {
        OverrideLocal = 0,
        OverrideGlobal = 1,
        AdditiveLocal = 2,
        AdditiveGlobal = 3,
        Max = 4
    };

    enum class ERigUnitVisualDebugPointMode : uint8_t //Enum ControlRig.ERigUnitVisualDebugPointMode
    {
        Point = 0,
        Vector = 1,
        Max = 2
    };

    enum class EControlRigState : uint8_t //Enum ControlRig.EControlRigState
    {
        Init = 0,
        Update = 1,
        Invalid = 2,
        EControlRigState_MAX = 3
    };

    enum class FOBJPoolSpawning : uint8_t //Enum OBJPool.FOBJPoolSpawning
    {
        SpawnSuccessful = 0,
        SpawnFailed = 1,
        FOBJPoolSpawning_MAX = 2
    };

    enum class EPoolCollisionType : uint8_t //Enum OBJPool.EPoolCollisionType
    {
        NoCollision = 0,
        QueryOnly = 1,
        PhysicsOnly = 2,
        QueryAndPhysics = 3,
        EPoolCollisionType_MAX = 4
    };

    enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t //Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
    {
        SetSystemInactive = 0,
        Deactivate = 1,
        None = 2,
        ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
    };

    enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t //Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
    {
        ActivateIfInactive = 0,
        None = 1,
        ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
    };

    enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t //Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
    {
        Activate = 0,
        ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
    };

    enum class ENiagaraCollisionMode : uint8_t //Enum Niagara.ENiagaraCollisionMode
    {
        None = 0,
        SceneGeometry = 1,
        DepthBuffer = 2,
        DistanceField = 3,
        ENiagaraCollisionMode_MAX = 4
    };

    enum class ENiagaraLegacyTrailWidthMode : uint8_t //Enum Niagara.ENiagaraLegacyTrailWidthMode
    {
        FromCentre = 0,
        FromFirst = 1,
        FromSecond = 2,
        ENiagaraLegacyTrailWidthMode_MAX = 3
    };

    enum class ENiagaraRendererSourceDataMode : uint8_t //Enum Niagara.ENiagaraRendererSourceDataMode
    {
        Particles = 0,
        Emitter = 1,
        ENiagaraRendererSourceDataMode_MAX = 2
    };

    enum class ENiagaraBindingSource : uint8_t //Enum Niagara.ENiagaraBindingSource
    {
        ImplicitFromSource = 0,
        ExplicitParticles = 1,
        ExplicitEmitter = 2,
        ExplicitSystem = 3,
        ExplicitUser = 4,
        MaxBindingSource = 5,
        ENiagaraBindingSource_MAX = 6
    };

    enum class ENiagaraIterationSource : uint8_t //Enum Niagara.ENiagaraIterationSource
    {
        Particles = 0,
        DataInterface = 1,
        ENiagaraIterationSource_MAX = 2
    };

    enum class ENiagaraScriptGroup : uint8_t //Enum Niagara.ENiagaraScriptGroup
    {
        Particle = 0,
        Emitter = 1,
        System = 2,
        Max = 3
    };

    enum class ENiagaraScriptContextStaticSwitch : uint8_t //Enum Niagara.ENiagaraScriptContextStaticSwitch
    {
        System = 0,
        Emitter = 1,
        Particle = 2,
        ENiagaraScriptContextStaticSwitch_MAX = 3
    };

    enum class ENiagaraCompileUsageStaticSwitch : uint8_t //Enum Niagara.ENiagaraCompileUsageStaticSwitch
    {
        Spawn = 0,
        Update = 1,
        Event = 2,
        SimulationStage = 3,
        Default = 4,
        ENiagaraCompileUsageStaticSwitch_MAX = 5
    };

    enum class ENiagaraScriptUsage : uint8_t //Enum Niagara.ENiagaraScriptUsage
    {
        Function = 0,
        Module = 1,
        DynamicInput = 2,
        ParticleSpawnScript = 3,
        ParticleSpawnScriptInterpolated = 4,
        ParticleUpdateScript = 5,
        ParticleEventScript = 6,
        ParticleSimulationStageScript = 7,
        ParticleGPUComputeScript = 8,
        EmitterSpawnScript = 9,
        EmitterUpdateScript = 10,
        SystemSpawnScript = 11,
        SystemUpdateScript = 12,
        ENiagaraScriptUsage_MAX = 13
    };

    enum class ENiagaraScriptCompileStatus : uint8_t //Enum Niagara.ENiagaraScriptCompileStatus
    {
        NCS_Unknown = 0,
        NCS_Dirty = 1,
        NCS_Error = 2,
        NCS_UpToDate = 3,
        NCS_BeingCreated = 4,
        NCS_UpToDateWithWarnings = 5,
        NCS_ComputeUpToDateWithWarnings = 6,
        NCS_MAX = 7
    };

    enum class ENiagaraInputNodeUsage : uint8_t //Enum Niagara.ENiagaraInputNodeUsage
    {
        Undefined = 0,
        Parameter = 1,
        Attribute = 2,
        SystemConstant = 3,
        TranslatorConstant = 4,
        RapidIterationParameter = 5,
        ENiagaraInputNodeUsage_MAX = 6
    };

    enum class ENiagaraDataSetType : uint8_t //Enum Niagara.ENiagaraDataSetType
    {
        ParticleData = 0,
        Shared = 1,
        Event = 2,
        ENiagaraDataSetType_MAX = 3
    };

    enum class ENiagaraStatDisplayMode : uint8_t //Enum Niagara.ENiagaraStatDisplayMode
    {
        Percent = 0,
        Absolute = 1,
        ENiagaraStatDisplayMode_MAX = 2
    };

    enum class ENiagaraStatEvaluationType : uint8_t //Enum Niagara.ENiagaraStatEvaluationType
    {
        Average = 0,
        Maximum = 1,
        ENiagaraStatEvaluationType_MAX = 2
    };

    enum class ENiagaraAgeUpdateMode : uint8_t //Enum Niagara.ENiagaraAgeUpdateMode
    {
        TickDeltaTime = 0,
        DesiredAge = 1,
        DesiredAgeNoSeek = 2,
        ENiagaraAgeUpdateMode_MAX = 3
    };

    enum class ENiagaraSimTarget : uint8_t //Enum Niagara.ENiagaraSimTarget
    {
        CPUSim = 0,
        GPUComputeSim = 1,
        ENiagaraSimTarget_MAX = 2
    };

    enum class ENiagaraDefaultMode : uint8_t //Enum Niagara.ENiagaraDefaultMode
    {
        Value = 0,
        Binding = 1,
        Custom = 2,
        ENiagaraDefaultMode_MAX = 3
    };

    enum class ENiagaraGpuBufferFormat : uint8_t //Enum Niagara.ENiagaraGpuBufferFormat
    {
        Float = 0,
        HalfFloat = 1,
        UnsignedNormalizedByte = 2,
        Max = 3
    };

    enum class ENiagaraTickBehavior : uint8_t //Enum Niagara.ENiagaraTickBehavior
    {
        UsePrereqs = 0,
        UseComponentTickGroup = 1,
        ForceTickFirst = 2,
        ForceTickLast = 3,
        ENiagaraTickBehavior_MAX = 4
    };

    enum class ENCPoolMethod : uint8_t //Enum Niagara.ENCPoolMethod
    {
        None = 0,
        AutoRelease = 1,
        ManualRelease = 2,
        ManualRelease_OnComplete = 3,
        FreeInPool = 4,
        ENCPoolMethod_MAX = 5
    };

    enum class ENDIExport_GPUAllocationMode : uint8_t //Enum Niagara.ENDIExport_GPUAllocationMode
    {
        FixedSize = 0,
        PerParticle = 1,
        ENDIExport_MAX = 2
    };

    enum class ESetResolutionMethod : uint8_t //Enum Niagara.ESetResolutionMethod
    {
        Independent = 0,
        MaxAxis = 1,
        CellSize = 2,
        ESetResolutionMethod_MAX = 3
    };

    enum class ENDISkeletalMesh_SkinningMode : uint32_t //Enum Niagara.ENDISkeletalMesh_SkinningMode
    {
        Invalid = 255,
        None = 0,
        SkinOnTheFly = 1,
        PreSkin = 2,
        ENDISkeletalMesh_MAX = 256
    };

    enum class ENDISkeletalMesh_SourceMode : uint8_t //Enum Niagara.ENDISkeletalMesh_SourceMode
    {
        Default = 0,
        Source = 1,
        AttachParent = 2,
        ENDISkeletalMesh_MAX = 3
    };

    enum class ENDIStaticMesh_SourceMode : uint8_t //Enum Niagara.ENDIStaticMesh_SourceMode
    {
        Default = 0,
        Source = 1,
        AttachParent = 2,
        DefaultMeshOnly = 3,
        ENDIStaticMesh_MAX = 4
    };

    enum class ENiagaraScalabilityUpdateFrequency : uint8_t //Enum Niagara.ENiagaraScalabilityUpdateFrequency
    {
        SpawnOnly = 0,
        Low = 1,
        Medium = 2,
        High = 3,
        Continuous = 4,
        ENiagaraScalabilityUpdateFrequency_MAX = 5
    };

    enum class ENiagaraCullReaction : uint8_t //Enum Niagara.ENiagaraCullReaction
    {
        Deactivate = 0,
        DeactivateImmediate = 1,
        DeactivateResume = 2,
        DeactivateImmediateResume = 3,
        ENiagaraCullReaction_MAX = 4
    };

    enum class EParticleAllocationMode : uint8_t //Enum Niagara.EParticleAllocationMode
    {
        AutomaticEstimate = 0,
        ManualEstimate = 1,
        EParticleAllocationMode_MAX = 2
    };

    enum class EScriptExecutionMode : uint8_t //Enum Niagara.EScriptExecutionMode
    {
        EveryParticle = 0,
        SpawnedParticles = 1,
        SingleParticle = 2,
        EScriptExecutionMode_MAX = 3
    };

    enum class ENiagaraSortMode : uint8_t //Enum Niagara.ENiagaraSortMode
    {
        None = 0,
        ViewDepth = 1,
        ViewDistance = 2,
        CustomAscending = 3,
        CustomDecending = 4,
        ENiagaraSortMode_MAX = 5
    };

    enum class ENiagaraMeshLockedAxisSpace : uint8_t //Enum Niagara.ENiagaraMeshLockedAxisSpace
    {
        Simulation = 0,
        World = 1,
        Local = 2,
        ENiagaraMeshLockedAxisSpace_MAX = 3
    };

    enum class ENiagaraMeshPivotOffsetSpace : uint8_t //Enum Niagara.ENiagaraMeshPivotOffsetSpace
    {
        Mesh = 0,
        Simulation = 1,
        World = 2,
        Local = 3,
        ENiagaraMeshPivotOffsetSpace_MAX = 4
    };

    enum class ENiagaraMeshFacingMode : uint8_t //Enum Niagara.ENiagaraMeshFacingMode
    {
        Default = 0,
        Velocity = 1,
        CameraPosition = 2,
        CameraPlane = 3,
        ENiagaraMeshFacingMode_MAX = 4
    };

    enum class ENiagaraPlatformSetState : uint8_t //Enum Niagara.ENiagaraPlatformSetState
    {
        Disabled = 0,
        Enabled = 1,
        Active = 2,
        Unknown = 3,
        ENiagaraPlatformSetState_MAX = 4
    };

    enum class ENiagaraPlatformSelectionState : uint8_t //Enum Niagara.ENiagaraPlatformSelectionState
    {
        Default = 0,
        Enabled = 1,
        Disabled = 2,
        ENiagaraPlatformSelectionState_MAX = 3
    };

    enum class ENiagaraPreviewGridResetMode : uint8_t //Enum Niagara.ENiagaraPreviewGridResetMode
    {
        Never = 0,
        Individual = 1,
        All = 2,
        ENiagaraPreviewGridResetMode_MAX = 3
    };

    enum class ENiagaraRibbonUVDistributionMode : uint8_t //Enum Niagara.ENiagaraRibbonUVDistributionMode
    {
        ScaledUniformly = 0,
        ScaledUsingRibbonSegmentLength = 1,
        TiledOverRibbonLength = 2,
        ENiagaraRibbonUVDistributionMode_MAX = 3
    };

    enum class ENiagaraRibbonUVEdgeMode : uint8_t //Enum Niagara.ENiagaraRibbonUVEdgeMode
    {
        SmoothTransition = 0,
        Locked = 1,
        ENiagaraRibbonUVEdgeMode_MAX = 2
    };

    enum class ENiagaraRibbonTessellationMode : uint8_t //Enum Niagara.ENiagaraRibbonTessellationMode
    {
        Automatic = 0,
        Custom = 1,
        Disabled = 2,
        ENiagaraRibbonTessellationMode_MAX = 3
    };

    enum class ENiagaraRibbonDrawDirection : uint8_t //Enum Niagara.ENiagaraRibbonDrawDirection
    {
        FrontToBack = 0,
        BackToFront = 1,
        ENiagaraRibbonDrawDirection_MAX = 2
    };

    enum class ENiagaraRibbonAgeOffsetMode : uint8_t //Enum Niagara.ENiagaraRibbonAgeOffsetMode
    {
        Scale = 0,
        Clip = 1,
        ENiagaraRibbonAgeOffsetMode_MAX = 2
    };

    enum class ENiagaraRibbonFacingMode : uint8_t //Enum Niagara.ENiagaraRibbonFacingMode
    {
        Screen = 0,
        Custom = 1,
        CustomSideVector = 2,
        ENiagaraRibbonFacingMode_MAX = 3
    };

    enum class ENiagaraScriptLibraryVisibility : uint8_t //Enum Niagara.ENiagaraScriptLibraryVisibility
    {
        Invalid = 0,
        Unexposed = 1,
        Library = 2,
        Hidden = 3,
        ENiagaraScriptLibraryVisibility_MAX = 4
    };

    enum class ENiagaraModuleDependencyScriptConstraint : uint8_t //Enum Niagara.ENiagaraModuleDependencyScriptConstraint
    {
        SameScript = 0,
        AllScripts = 1,
        ENiagaraModuleDependencyScriptConstraint_MAX = 2
    };

    enum class ENiagaraModuleDependencyType : uint8_t //Enum Niagara.ENiagaraModuleDependencyType
    {
        PreDependency = 0,
        PostDependency = 1,
        ENiagaraModuleDependencyType_MAX = 2
    };

    enum class EUnusedAttributeBehaviour : uint8_t //Enum Niagara.EUnusedAttributeBehaviour
    {
        Copy = 0,
        Zero = 1,
        None = 2,
        MarkInvalid = 3,
        PassThrough = 4,
        EUnusedAttributeBehaviour_MAX = 5
    };

    enum class ENiagaraSpriteFacingMode : uint8_t //Enum Niagara.ENiagaraSpriteFacingMode
    {
        FaceCamera = 0,
        FaceCameraPlane = 1,
        CustomFacingVector = 2,
        FaceCameraPosition = 3,
        FaceCameraDistanceBlend = 4,
        ENiagaraSpriteFacingMode_MAX = 5
    };

    enum class ENiagaraSpriteAlignment : uint8_t //Enum Niagara.ENiagaraSpriteAlignment
    {
        Unaligned = 0,
        VelocityAligned = 1,
        CustomAlignment = 2,
        ENiagaraSpriteAlignment_MAX = 3
    };

    enum class ENiagaraParameterPanelCategory : uint8_t //Enum Niagara.ENiagaraParameterPanelCategory
    {
        Input = 0,
        Attributes = 1,
        Output = 2,
        Local = 3,
        User = 4,
        Engine = 5,
        Owner = 6,
        System = 7,
        Emitter = 8,
        Particles = 9,
        ScriptTransient = 10,
        StaticSwitch = 11,
        None = 12,
        Num = 13,
        ENiagaraParameterPanelCategory_MAX = 14
    };

    enum class ENiagaraScriptParameterUsage : uint8_t //Enum Niagara.ENiagaraScriptParameterUsage
    {
        Input = 0,
        Output = 1,
        Local = 2,
        InputOutput = 3,
        InitialValueInput = 4,
        None = 5,
        Num = 6,
        ENiagaraScriptParameterUsage_MAX = 7
    };

    enum class ENiagaraParameterScope : uint8_t //Enum Niagara.ENiagaraParameterScope
    {
        Input = 0,
        User = 1,
        Engine = 2,
        Owner = 3,
        System = 4,
        Emitter = 5,
        Particles = 6,
        ScriptPersistent = 7,
        ScriptTransient = 8,
        Local = 9,
        Custom = 10,
        DISPLAY_ONLY_StaticSwitch = 11,
        Output = 12,
        None = 13,
        Num = 14,
        ENiagaraParameterScope_MAX = 15
    };

    enum class ENiagaraExecutionState : uint8_t //Enum Niagara.ENiagaraExecutionState
    {
        Active = 0,
        Inactive = 1,
        InactiveClear = 2,
        Complete = 3,
        Disabled = 4,
        Num = 5,
        ENiagaraExecutionState_MAX = 6
    };

    enum class ENiagaraExecutionStateSource : uint8_t //Enum Niagara.ENiagaraExecutionStateSource
    {
        Scalability = 0,
        Internal = 1,
        Owner = 2,
        InternalCompletion = 3,
        ENiagaraExecutionStateSource_MAX = 4
    };

    enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t //Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
    {
        None = 0,
        Largest = 1,
        Smallest = 2,
        Scalar = 3,
        ENiagaraNumericOutputTypeSelectionMode_MAX = 4
    };

    enum class ENiagaraVariantMode : uint8_t //Enum Niagara.ENiagaraVariantMode
    {
        None = 0,
        Object = 1,
        DataInterface = 2,
        Bytes = 3,
        ENiagaraVariantMode_MAX = 4
    };

    enum class FNiagaraCompileEventSeverity : uint8_t //Enum NiagaraShader.FNiagaraCompileEventSeverity
    {
        Log = 0,
        Warning = 1,
        Error = 2,
        FNiagaraCompileEventSeverity_MAX = 3
    };

    enum class ESubstanceInputType : uint8_t //Enum SubstanceCore.ESubstanceInputType
    {
        SIT_Float = 0,
        SIT_Float2 = 1,
        SIT_Float3 = 2,
        SIT_Float4 = 3,
        SIT_Integer = 4,
        SIT_Image = 5,
        SIT_Unused_7 = 6,
        SIT_Unused_8 = 7,
        SIT_Integer2 = 8,
        SIT_Integer3 = 9,
        SIT_Integer4 = 10,
        SIT_MAX = 11
    };

    enum class ESubstanceGenerationMode : uint8_t //Enum SubstanceCore.ESubstanceGenerationMode
    {
        SGM_PlatformDefault = 0,
        SGM_Baked = 1,
        SGM_OnLoadSync = 2,
        SGM_OnLoadSyncAndCache = 3,
        SGM_OnLoadAsync = 4,
        SGM_OnLoadAsyncAndCache = 5,
        SGM_MAX = 6
    };

    enum class EDefaultSubstanceTextureSize : uint8_t //Enum SubstanceCore.EDefaultSubstanceTextureSize
    {
        Size_1 = 0,
        Size_17 = 4,
        Size_33 = 5,
        Size_65 = 6,
        Size_129 = 7,
        Size_257 = 8,
        Size_513 = 9,
        Size_1025 = 10,
        Size_2049 = 11,
        Size_4097 = 12,
        Size_MAX = 13
    };

    enum class ESubstanceEngineType : uint8_t //Enum SubstanceCore.ESubstanceEngineType
    {
        SET_CPU = 0,
        SET_GPU = 1,
        SET_MAX = 2
    };

    enum class ESubChannelType : uint8_t //Enum SubstanceCore.ESubChannelType
    {
        Channel_Diffuse = 0,
        Channel_Ambient = 1,
        Channel_BaseColor = 2,
        Channel_Metallic = 3,
        Channel_Roughness = 4,
        Channel_Emissive = 5,
        Channel_Normal = 6,
        Channel_Mask = 7,
        Channel_Opacity = 8,
        Channel_Refraction = 9,
        Channel_AmbientOcclusion = 10,
        Channel_Glossiness = 11,
        Channel_Height = 12,
        Channel_Displacement = 13,
        Channel_Reflection = 14,
        Channel_Invalid = 15,
        Channel_MAX = 16
    };

    enum class ESubstanceTextureSize : uint8_t //Enum SubstanceCore.ESubstanceTextureSize
    {
        ERL_17 = 0,
        ERL_33 = 1,
        ERL_65 = 2,
        ERL_129 = 3,
        ERL_257 = 4,
        ERL_513 = 5,
        ERL_1025 = 6,
        ERL_2049 = 7,
        ERL_4097 = 8,
        ERL_8193 = 9,
        ERL_MAX = 10
    };

    enum class ECalcStretchAlgorithm : uint8_t //Enum MFAnimationRuntime.ECalcStretchAlgorithm
    {
        ModifyBoneByAxisX = 0,
        ModifyBoneByTwoBoneDirection = 1,
        ECalcStretchAlgorithm_MAX = 2
    };

    enum class ERotatorAxis : uint8_t //Enum MFAnimationRuntime.ERotatorAxis
    {
        None = 0,
        Pitch = 1,
        Yaw = 2,
        Roll = 4,
        ERotatorAxis_MAX = 5
    };

    enum class EAdjustType : uint8_t //Enum MFAnimationRuntime.EAdjustType
    {
        Adjust_Scale = 0,
        Adjust_Additive = 1,
        Adjust_MAX = 2
    };

    enum class EIKFootRootLocalAxis : uint8_t //Enum MFAnimationRuntime.EIKFootRootLocalAxis
    {
        NONE = 0,
        X = 1,
        Y = 2,
        Z = 3,
        EIKFootRootLocalAxis_MAX = 4
    };

    enum class ACLCompressionLevel : uint8_t //Enum ACLPlugin.ACLCompressionLevel
    {
        ACLCL_Lowest = 0,
        ACLCL_Low = 1,
        ACLCL_Medium = 2,
        ACLCL_High = 3,
        ACLCL_Highest = 4,
        ACLCL_MAX = 5
    };

    enum class ACLVectorFormat : uint8_t //Enum ACLPlugin.ACLVectorFormat
    {
        ACLVF_Vector3_97 = 0,
        ACLVF_Vector3_Variable = 1,
        ACLVF_Vector3_MAX = 2
    };

    enum class ACLRotationFormat : uint8_t //Enum ACLPlugin.ACLRotationFormat
    {
        ACLRF_Quat_129 = 0,
        ACLRF_QuatDropW_97 = 1,
        ACLRF_QuatDropW_Variable = 2,
        ACLRF_MAX = 3
    };

    enum class ACLVisualFidelityChangeResult : uint8_t //Enum ACLPlugin.ACLVisualFidelityChangeResult
    {
        Dispatched = 0,
        Completed = 1,
        Failed = 2,
        ACLVisualFidelityChangeResult_MAX = 3
    };

    enum class ACLVisualFidelity : uint8_t //Enum ACLPlugin.ACLVisualFidelity
    {
        Highest = 0,
        Medium = 1,
        Lowest = 2,
        ACLVisualFidelity_MAX = 3
    };

    enum class EBaseCreateFromSelectedTargetType : uint8_t //Enum ModelingComponents.EBaseCreateFromSelectedTargetType
    {
        NewAsset = 0,
        FirstInputAsset = 1,
        LastInputAsset = 2,
        EBaseCreateFromSelectedTargetType_MAX = 3
    };

    enum class EDynamicMeshTangentCalcType : uint8_t //Enum ModelingComponents.EDynamicMeshTangentCalcType
    {
        NoTangents = 0,
        AutoCalculated = 1,
        ExternallyCalculated = 2,
        EDynamicMeshTangentCalcType_MAX = 3
    };

    enum class EMultiTransformerMode : uint8_t //Enum ModelingComponents.EMultiTransformerMode
    {
        DefaultGizmo = 1,
        QuickAxisTranslation = 2,
        EMultiTransformerMode_MAX = 3
    };

    enum class EHandleSourcesMethod : uint8_t //Enum ModelingComponents.EHandleSourcesMethod
    {
        DeleteSources = 0,
        HideSources = 1,
        KeepSources = 2,
        EHandleSourcesMethod_MAX = 3
    };

    enum class ESpaceCurveControlPointFalloffType : uint8_t //Enum ModelingComponents.ESpaceCurveControlPointFalloffType
    {
        Linear = 0,
        Smooth = 1,
        ESpaceCurveControlPointFalloffType_MAX = 2
    };

    enum class ESpaceCurveControlPointOriginMode : uint8_t //Enum ModelingComponents.ESpaceCurveControlPointOriginMode
    {
        Shared = 0,
        First = 1,
        Last = 2,
        ESpaceCurveControlPointOriginMode_MAX = 3
    };

    enum class ESpaceCurveControlPointTransformMode : uint8_t //Enum ModelingComponents.ESpaceCurveControlPointTransformMode
    {
        Shared = 0,
        PerVertex = 1,
        ESpaceCurveControlPointTransformMode_MAX = 2
    };

    enum class EUVLayoutPreviewSide : uint8_t //Enum ModelingComponents.EUVLayoutPreviewSide
    {
        Left = 0,
        Right = 1,
        EUVLayoutPreviewSide_MAX = 2
    };

    enum class ECSGOperation : uint8_t //Enum ModelingOperators.ECSGOperation
    {
        DifferenceAB = 0,
        DifferenceBA = 1,
        Intersect = 2,
        Union = 3,
        TrimA = 4,
        TrimB = 5,
        ECSGOperation_MAX = 6
    };

    enum class ESplitNormalMethod : uint8_t //Enum ModelingOperators.ESplitNormalMethod
    {
        UseExistingTopology = 0,
        FaceNormalThreshold = 1,
        FaceGroupID = 2,
        PerTriangle = 3,
        PerVertex = 4,
        ESplitNormalMethod_MAX = 5
    };

    enum class ENormalCalculationMethod : uint8_t //Enum ModelingOperators.ENormalCalculationMethod
    {
        AreaWeighted = 0,
        AngleWeighted = 1,
        AreaAngleWeighting = 2,
        ENormalCalculationMethod_MAX = 3
    };

    enum class EHoleFillOpFillType : uint8_t //Enum ModelingOperators.EHoleFillOpFillType
    {
        TriangleFan = 0,
        PolygonEarClipping = 1,
        Planar = 2,
        Minimal = 3,
        Smooth = 4,
        EHoleFillOpFillType_MAX = 5
    };

    enum class ERemeshSmoothingType : uint8_t //Enum ModelingOperators.ERemeshSmoothingType
    {
        Uniform = 0,
        Cotangent = 1,
        MeanValue = 2,
        ERemeshSmoothingType_MAX = 3
    };

    enum class ERemeshType : uint8_t //Enum ModelingOperators.ERemeshType
    {
        Standard = 0,
        FullPass = 1,
        NormalFlow = 2,
        ERemeshType_MAX = 3
    };

    enum class EUVProjectionMethod : uint8_t //Enum ModelingOperators.EUVProjectionMethod
    {
        Cube = 0,
        Cylinder = 1,
        Plane = 2,
        EUVProjectionMethod_MAX = 3
    };

    enum class EMorphologyOperation : uint8_t //Enum ModelingOperators.EMorphologyOperation
    {
        Dilate = 0,
        Contract = 1,
        Close = 2,
        Open = 3,
        EMorphologyOperation_MAX = 4
    };

    enum class EMakeMeshPolygroupMode : uint8_t //Enum MeshModelingTools.EMakeMeshPolygroupMode
    {
        Single = 0,
        PerFace = 1,
        PerQuad = 2,
        EMakeMeshPolygroupMode_MAX = 3
    };

    enum class EMakeMeshPivotLocation : uint8_t //Enum MeshModelingTools.EMakeMeshPivotLocation
    {
        Base = 0,
        Centered = 1,
        Top = 2,
        EMakeMeshPivotLocation_MAX = 3
    };

    enum class EMakeMeshPlacementType : uint8_t //Enum MeshModelingTools.EMakeMeshPlacementType
    {
        GroundPlane = 0,
        OnScene = 1,
        EMakeMeshPlacementType_MAX = 2
    };

    enum class EAlignObjectsBoxPoint : uint8_t //Enum MeshModelingTools.EAlignObjectsBoxPoint
    {
        Center = 0,
        Bottom = 1,
        Top = 2,
        Left = 3,
        Right = 4,
        Front = 5,
        Back = 6,
        Min = 7,
        Max = 8
    };

    enum class EAlignObjectsAlignToOptions : uint8_t //Enum MeshModelingTools.EAlignObjectsAlignToOptions
    {
        FirstSelected = 0,
        LastSelected = 1,
        Combined = 2,
        EAlignObjectsAlignToOptions_MAX = 3
    };

    enum class EAlignObjectsAlignTypes : uint8_t //Enum MeshModelingTools.EAlignObjectsAlignTypes
    {
        Pivots = 0,
        BoundingBoxes = 1,
        EAlignObjectsAlignTypes_MAX = 2
    };

    enum class EBakedCurvatureClampMode : uint8_t //Enum MeshModelingTools.EBakedCurvatureClampMode
    {
        None = 0,
        Positive = 1,
        Negative = 2,
        EBakedCurvatureClampMode_MAX = 3
    };

    enum class EBakedCurvatureColorMode : uint8_t //Enum MeshModelingTools.EBakedCurvatureColorMode
    {
        Grayscale = 0,
        RedBlue = 1,
        RedGreenBlue = 2,
        EBakedCurvatureColorMode_MAX = 3
    };

    enum class EBakedCurvatureTypeMode : uint8_t //Enum MeshModelingTools.EBakedCurvatureTypeMode
    {
        MeanAverage = 0,
        Max = 1,
        Min = 2,
        Gaussian = 3
    };

    enum class EBakeTextureResolution : uint32_t //Enum MeshModelingTools.EBakeTextureResolution
    {
        Resolution16 = 16,
        Resolution32 = 32,
        Resolution64 = 64,
        Resolution128 = 128,
        Resolution256 = 256,
        Resolution512 = 512,
        Resolution1024 = 1024,
        Resolution2048 = 2048,
        Resolution4096 = 4096,
        Resolution8192 = 8192,
        EBakeTextureResolution_MAX = 8193
    };

    enum class EBakeMapType : uint8_t //Enum MeshModelingTools.EBakeMapType
    {
        TangentSpaceNormalMap = 0,
        AmbientOcclusion = 1,
        Curvature = 2,
        Texture2DImage = 3,
        NormalImage = 4,
        FaceNormalImage = 5,
        PositionImage = 6,
        EBakeMapType_MAX = 7
    };

    enum class EBakeScaleMethod : uint8_t //Enum MeshModelingTools.EBakeScaleMethod
    {
        BakeFullScale = 0,
        BakeNonuniformScale = 1,
        DoNotBakeScale = 2,
        EBakeScaleMethod_MAX = 3
    };

    enum class ECollisionGeometryMode : uint8_t //Enum MeshModelingTools.ECollisionGeometryMode
    {
        Default = 0,
        SimpleAndComplex = 1,
        UseSimpleAsComplex = 2,
        UseComplexAsSimple = 3,
        ECollisionGeometryMode_MAX = 4
    };

    enum class ECombineTargetType : uint8_t //Enum MeshModelingTools.ECombineTargetType
    {
        NewAsset = 0,
        FirstInputAsset = 1,
        LastInputAsset = 2,
        ECombineTargetType_MAX = 3
    };

    enum class EConvertToPolygonsMode : uint8_t //Enum MeshModelingTools.EConvertToPolygonsMode
    {
        FaceNormalDeviation = 0,
        FromUVISlands = 1,
        EConvertToPolygonsMode_MAX = 2
    };

    enum class EQuickTransformerMode : uint8_t //Enum MeshModelingTools.EQuickTransformerMode
    {
        AxisTranslation = 0,
        AxisRotation = 1,
        EQuickTransformerMode_MAX = 2
    };

    enum class EWeightScheme : uint8_t //Enum MeshModelingTools.EWeightScheme
    {
        Uniform = 0,
        Umbrella = 1,
        Valence = 2,
        MeanValue = 3,
        Cotangent = 4,
        ClampedCotangent = 5,
        EWeightScheme_MAX = 6
    };

    enum class EGroupTopologyDeformationStrategy : uint8_t //Enum MeshModelingTools.EGroupTopologyDeformationStrategy
    {
        Linear = 0,
        Laplacian = 1,
        EGroupTopologyDeformationStrategy_MAX = 2
    };

    enum class EDisplaceMeshToolDisplaceType : uint8_t //Enum MeshModelingTools.EDisplaceMeshToolDisplaceType
    {
        Constant = 0,
        RandomNoise = 1,
        PerlinNoise = 2,
        DisplacementMap = 3,
        SineWave = 4,
        EDisplaceMeshToolDisplaceType_MAX = 5
    };

    enum class EDrawPolygonOutputMode : uint8_t //Enum MeshModelingTools.EDrawPolygonOutputMode
    {
        MeshedPolygon = 0,
        ExtrudedConstant = 1,
        ExtrudedInteractive = 2,
        EDrawPolygonOutputMode_MAX = 3
    };

    enum class EDrawPolygonDrawMode : uint8_t //Enum MeshModelingTools.EDrawPolygonDrawMode
    {
        Freehand = 0,
        Circle = 1,
        Square = 2,
        Rectangle = 3,
        RoundedRectangle = 4,
        HoleyCircle = 5,
        EDrawPolygonDrawMode_MAX = 6
    };

    enum class EDrawPolyPathExtrudeDirection : uint8_t //Enum MeshModelingTools.EDrawPolyPathExtrudeDirection
    {
        SelectionNormal = 0,
        WorldX = 1,
        WorldY = 2,
        WorldZ = 3,
        LocalX = 4,
        LocalY = 5,
        LocalZ = 6,
        EDrawPolyPathExtrudeDirection_MAX = 7
    };

    enum class EDrawPolyPathHeightMode : uint8_t //Enum MeshModelingTools.EDrawPolyPathHeightMode
    {
        Interactive = 0,
        Constant = 1,
        EDrawPolyPathHeightMode_MAX = 2
    };

    enum class EDrawPolyPathWidthMode : uint8_t //Enum MeshModelingTools.EDrawPolyPathWidthMode
    {
        Interactive = 0,
        Constant = 1,
        EDrawPolyPathWidthMode_MAX = 2
    };

    enum class EDrawPolyPathOutputMode : uint8_t //Enum MeshModelingTools.EDrawPolyPathOutputMode
    {
        Ribbon = 0,
        Extrusion = 1,
        Ramp = 2,
        EDrawPolyPathOutputMode_MAX = 3
    };

    enum class EDynamicMeshSculptBrushType : uint8_t //Enum MeshModelingTools.EDynamicMeshSculptBrushType
    {
        Move = 0,
        PullKelvin = 1,
        PullSharpKelvin = 2,
        Smooth = 3,
        Offset = 4,
        SculptView = 5,
        SculptMax = 6,
        Inflate = 7,
        ScaleKelvin = 8,
        Pinch = 9,
        TwistKelvin = 10,
        Flatten = 11,
        Plane = 12,
        PlaneViewAligned = 13,
        FixedPlane = 14,
        Resample = 15,
        LastValue = 16,
        EDynamicMeshSculptBrushType_MAX = 17
    };

    enum class EEdgeLoopInsertionMode : uint8_t //Enum MeshModelingTools.EEdgeLoopInsertionMode
    {
        Retriangulate = 0,
        PlaneCut = 1,
        EEdgeLoopInsertionMode_MAX = 2
    };

    enum class EEdgeLoopPositioningMode : uint8_t //Enum MeshModelingTools.EEdgeLoopPositioningMode
    {
        Even = 0,
        ProportionOffset = 1,
        DistanceOffset = 2,
        EEdgeLoopPositioningMode_MAX = 3
    };

    enum class EPolyEditCutPlaneOrientation : uint8_t //Enum MeshModelingTools.EPolyEditCutPlaneOrientation
    {
        FaceNormals = 0,
        ViewDirection = 1,
        EPolyEditCutPlaneOrientation_MAX = 2
    };

    enum class EPolyEditExtrudeDirection : uint8_t //Enum MeshModelingTools.EPolyEditExtrudeDirection
    {
        SelectionNormal = 0,
        WorldX = 1,
        WorldY = 2,
        WorldZ = 3,
        LocalX = 4,
        LocalY = 5,
        LocalZ = 6,
        EPolyEditExtrudeDirection_MAX = 7
    };

    enum class EEditMeshPolygonsToolActions : uint8_t //Enum MeshModelingTools.EEditMeshPolygonsToolActions
    {
        NoAction = 0,
        PlaneCut = 1,
        Extrude = 2,
        Offset = 3,
        Inset = 4,
        Outset = 5,
        Merge = 6,
        Delete = 7,
        CutFaces = 8,
        RecalculateNormals = 9,
        FlipNormals = 10,
        Retriangulate = 11,
        Decompose = 12,
        Disconnect = 13,
        CollapseEdge = 14,
        WeldEdges = 15,
        StraightenEdge = 16,
        FillHole = 17,
        PlanarProjectionUV = 18,
        PokeSingleFace = 19,
        SplitSingleEdge = 20,
        FlipSingleEdge = 21,
        CollapseSingleEdge = 22,
        EEditMeshPolygonsToolActions_MAX = 23
    };

    enum class ELocalFrameMode : uint8_t //Enum MeshModelingTools.ELocalFrameMode
    {
        FromObject = 0,
        FromGeometry = 1,
        ELocalFrameMode_MAX = 2
    };

    enum class EEditPivotToolActions : uint8_t //Enum MeshModelingTools.EEditPivotToolActions
    {
        NoAction = 0,
        Center = 1,
        Bottom = 2,
        Top = 3,
        Left = 4,
        Right = 5,
        Front = 6,
        Back = 7,
        EEditPivotToolActions_MAX = 8
    };

    enum class EEditPivotSnapDragRotationMode : uint8_t //Enum MeshModelingTools.EEditPivotSnapDragRotationMode
    {
        Ignore = 0,
        Align = 1,
        AlignFlipped = 2,
        LastValue = 3,
        EEditPivotSnapDragRotationMode_MAX = 4
    };

    enum class EGroupEdgeInsertionMode : uint8_t //Enum MeshModelingTools.EGroupEdgeInsertionMode
    {
        Retriangulate = 0,
        PlaneCut = 1,
        EGroupEdgeInsertionMode_MAX = 2
    };

    enum class EHoleFillToolActions : uint8_t //Enum MeshModelingTools.EHoleFillToolActions
    {
        NoAction = 0,
        SelectAll = 1,
        ClearSelection = 2,
        EHoleFillToolActions_MAX = 3
    };

    enum class EMeshAttributePaintToolActions : uint8_t //Enum MeshModelingTools.EMeshAttributePaintToolActions
    {
        NoAction = 0,
        EMeshAttributePaintToolActions_MAX = 1
    };

    enum class EPlaneBrushSideMode : uint8_t //Enum MeshModelingTools.EPlaneBrushSideMode
    {
        BothSides = 0,
        PushDown = 1,
        PullTowards = 2,
        EPlaneBrushSideMode_MAX = 3
    };

    enum class EMeshEditingMaterialModes : uint8_t //Enum MeshModelingTools.EMeshEditingMaterialModes
    {
        ExistingMaterial = 0,
        Diffuse = 1,
        Grey = 2,
        Soft = 3,
        TangentNormal = 4,
        Custom = 5,
        EMeshEditingMaterialModes_MAX = 6
    };

    enum class ESetMeshMaterialMode : uint8_t //Enum MeshModelingTools.ESetMeshMaterialMode
    {
        KeepOriginal = 0,
        Checkerboard = 1,
        Override = 2,
        ESetMeshMaterialMode_MAX = 3
    };

    enum class EMeshSculptFalloffType : uint8_t //Enum MeshModelingTools.EMeshSculptFalloffType
    {
        Smooth = 0,
        Linear = 1,
        Inverse = 2,
        Round = 3,
        BoxSmooth = 4,
        BoxLinear = 5,
        BoxInverse = 6,
        BoxRound = 7,
        LastValue = 8,
        EMeshSculptFalloffType_MAX = 9
    };

    enum class EMeshFacesColorMode : uint8_t //Enum MeshModelingTools.EMeshFacesColorMode
    {
        None = 0,
        ByGroup = 1,
        ByMaterialID = 2,
        ByUVIsland = 3,
        EMeshFacesColorMode_MAX = 4
    };

    enum class EMeshSelectionToolPrimaryMode : uint8_t //Enum MeshModelingTools.EMeshSelectionToolPrimaryMode
    {
        Brush = 0,
        VolumetricBrush = 1,
        AngleFiltered = 2,
        Visible = 3,
        AllConnected = 4,
        AllInGroup = 5,
        ByMaterial = 6,
        ByUVIsland = 7,
        AllWithinAngle = 8,
        EMeshSelectionToolPrimaryMode_MAX = 9
    };

    enum class EMeshSelectionToolActions : uint8_t //Enum MeshModelingTools.EMeshSelectionToolActions
    {
        NoAction = 0,
        SelectAll = 1,
        ClearSelection = 2,
        InvertSelection = 3,
        GrowSelection = 4,
        ShrinkSelection = 5,
        ExpandToConnected = 6,
        SelectLargestComponentByTriCount = 7,
        SelectLargestComponentByArea = 8,
        OptimizeSelection = 9,
        DeleteSelected = 10,
        DisconnectSelected = 11,
        SeparateSelected = 12,
        FlipSelected = 13,
        CreateGroup = 14,
        CycleSelectionMode = 15,
        CycleViewMode = 16,
        EMeshSelectionToolActions_MAX = 17
    };

    enum class ENonlinearOperationType : uint8_t //Enum MeshModelingTools.ENonlinearOperationType
    {
        Bend = 0,
        Flare = 1,
        Twist = 2,
        ENonlinearOperationType_MAX = 3
    };

    enum class EMeshVertexSculptBrushType : uint8_t //Enum MeshModelingTools.EMeshVertexSculptBrushType
    {
        Move = 0,
        PullKelvin = 1,
        PullSharpKelvin = 2,
        Smooth = 3,
        SmoothFill = 4,
        Offset = 5,
        SculptView = 6,
        SculptMax = 7,
        Inflate = 8,
        ScaleKelvin = 9,
        Pinch = 10,
        TwistKelvin = 11,
        Flatten = 12,
        Plane = 13,
        PlaneViewAligned = 14,
        FixedPlane = 15,
        LastValue = 16,
        EMeshVertexSculptBrushType_MAX = 17
    };

    enum class EMirrorToolAction : uint8_t //Enum MeshModelingTools.EMirrorToolAction
    {
        NoAction = 0,
        ShiftToCenter = 1,
        Left = 2,
        Right = 3,
        Up = 4,
        Down = 5,
        Forward = 6,
        Backward = 7,
        EMirrorToolAction_MAX = 8
    };

    enum class EMirrorCtrlClickBehavior : uint8_t //Enum MeshModelingTools.EMirrorCtrlClickBehavior
    {
        Reposition = 0,
        RepositionAndReorient = 1,
        EMirrorCtrlClickBehavior_MAX = 2
    };

    enum class EMirrorOperationMode : uint8_t //Enum MeshModelingTools.EMirrorOperationMode
    {
        MirrorAndAppend = 0,
        MirrorExisting = 1,
        EMirrorOperationMode_MAX = 2
    };

    enum class EMirrorSaveMode : uint8_t //Enum MeshModelingTools.EMirrorSaveMode
    {
        UpdateAssets = 0,
        CreateNewAssets = 1,
        EMirrorSaveMode_MAX = 2
    };

    enum class EOffsetMeshToolOffsetType : uint8_t //Enum MeshModelingTools.EOffsetMeshToolOffsetType
    {
        Iterative = 0,
        Implicit = 1,
        EOffsetMeshToolOffsetType_MAX = 2
    };

    enum class EMaterialBoundaryConstraint : uint8_t //Enum MeshModelingTools.EMaterialBoundaryConstraint
    {
        Fixed = 7,
        Refine = 5,
        Free = 1,
        Ignore = 0,
        EMaterialBoundaryConstraint_MAX = 8
    };

    enum class EGroupBoundaryConstraint : uint8_t //Enum MeshModelingTools.EGroupBoundaryConstraint
    {
        Fixed = 7,
        Refine = 5,
        Free = 1,
        Ignore = 0,
        EGroupBoundaryConstraint_MAX = 8
    };

    enum class EMeshBoundaryConstraint : uint8_t //Enum MeshModelingTools.EMeshBoundaryConstraint
    {
        Fixed = 7,
        Refine = 5,
        Free = 1,
        EMeshBoundaryConstraint_MAX = 8
    };

    enum class EOcclusionCalculationUIMode : uint8_t //Enum MeshModelingTools.EOcclusionCalculationUIMode
    {
        GeneralizedWindingNumber = 0,
        RaycastOcclusionSamples = 1,
        EOcclusionCalculationUIMode_MAX = 2
    };

    enum class EOcclusionTriangleSamplingUIMode : uint8_t //Enum MeshModelingTools.EOcclusionTriangleSamplingUIMode
    {
        Vertices = 0,
        VerticesAndCentroids = 1,
        EOcclusionTriangleSamplingUIMode_MAX = 2
    };

    enum class ERevolvePropertiesQuadSplit : uint8_t //Enum MeshModelingTools.ERevolvePropertiesQuadSplit
    {
        Uniform = 0,
        ShortestDiagonal = 1,
        ERevolvePropertiesQuadSplit_MAX = 2
    };

    enum class ERevolvePropertiesPolygroupMode : uint8_t //Enum MeshModelingTools.ERevolvePropertiesPolygroupMode
    {
        Single = 0,
        PerFace = 1,
        PerStep = 2,
        AccordingToProfileCurve = 3,
        ERevolvePropertiesPolygroupMode_MAX = 4
    };

    enum class ERevolvePropertiesCapFillMode : uint8_t //Enum MeshModelingTools.ERevolvePropertiesCapFillMode
    {
        None = 0,
        Delaunay = 1,
        EarClipping = 2,
        CenterFan = 3,
        ERevolvePropertiesCapFillMode_MAX = 4
    };

    enum class EProjectedHullAxis : uint8_t //Enum MeshModelingTools.EProjectedHullAxis
    {
        X = 0,
        Y = 1,
        Z = 2,
        SmallestBoxDimension = 3,
        SmallestVolume = 4,
        EProjectedHullAxis_MAX = 5
    };

    enum class ECollisionGeometryType : uint8_t //Enum MeshModelingTools.ECollisionGeometryType
    {
        KeepExisting = 0,
        AlignedBoxes = 1,
        OrientedBoxes = 2,
        MinimalSpheres = 3,
        Capsules = 4,
        ConvexHulls = 5,
        SweptHulls = 6,
        MinVolume = 10,
        None = 11,
        ECollisionGeometryType_MAX = 12
    };

    enum class ESetCollisionGeometryInputMode : uint8_t //Enum MeshModelingTools.ESetCollisionGeometryInputMode
    {
        CombineAll = 0,
        PerInputObject = 1,
        PerMeshComponent = 2,
        PerMeshGroup = 3,
        ESetCollisionGeometryInputMode_MAX = 4
    };

    enum class ESmoothMeshToolSmoothType : uint8_t //Enum MeshModelingTools.ESmoothMeshToolSmoothType
    {
        Iterative = 0,
        Implicit = 1,
        Diffusion = 2,
        ESmoothMeshToolSmoothType_MAX = 3
    };

    enum class ETransformMeshesSnapDragRotationMode : uint8_t //Enum MeshModelingTools.ETransformMeshesSnapDragRotationMode
    {
        Ignore = 0,
        Align = 1,
        AlignFlipped = 2,
        LastValue = 3,
        ETransformMeshesSnapDragRotationMode_MAX = 4
    };

    enum class ETransformMeshesSnapDragSource : uint8_t //Enum MeshModelingTools.ETransformMeshesSnapDragSource
    {
        ClickPoint = 0,
        Pivot = 1,
        LastValue = 2,
        ETransformMeshesSnapDragSource_MAX = 3
    };

    enum class ETransformMeshesTransformMode : uint8_t //Enum MeshModelingTools.ETransformMeshesTransformMode
    {
        SharedGizmo = 0,
        SharedGizmoLocal = 1,
        PerObjectGizmo = 2,
        LastValue = 3,
        ETransformMeshesTransformMode_MAX = 4
    };

    enum class EHairCardsSourceType : uint8_t //Enum HairStrandsCore.EHairCardsSourceType
    {
        Procedural = 0,
        Imported = 1,
        EHairCardsSourceType_MAX = 2
    };

    enum class EHairCardsGenerationType : uint8_t //Enum HairStrandsCore.EHairCardsGenerationType
    {
        CardsCount = 0,
        UseGuides = 1,
        EHairCardsGenerationType_MAX = 2
    };

    enum class EHairCardsClusterType : uint8_t //Enum HairStrandsCore.EHairCardsClusterType
    {
        Low = 0,
        High = 1,
        EHairCardsClusterType_MAX = 2
    };

    enum class EGroomGeometryType : uint8_t //Enum HairStrandsCore.EGroomGeometryType
    {
        Strands = 0,
        Cards = 1,
        Meshes = 2,
        EGroomGeometryType_MAX = 3
    };

    enum class EHairLODSelectionType : uint8_t //Enum HairStrandsCore.EHairLODSelectionType
    {
        Cpu = 0,
        Gpu = 1,
        EHairLODSelectionType_MAX = 2
    };

    enum class EHairInterpolationWeight : uint8_t //Enum HairStrandsCore.EHairInterpolationWeight
    {
        Parametric = 0,
        Root = 1,
        Index = 2,
        Unknown = 3,
        EHairInterpolationWeight_MAX = 4
    };

    enum class EHairInterpolationQuality : uint8_t //Enum HairStrandsCore.EHairInterpolationQuality
    {
        Low = 0,
        Medium = 1,
        High = 2,
        Unknown = 3,
        EHairInterpolationQuality_MAX = 4
    };

    enum class EGroomInterpolationType : uint8_t //Enum HairStrandsCore.EGroomInterpolationType
    {
        None = 0,
        RigidTransform = 2,
        OffsetTransform = 4,
        SmoothTransform = 8,
        EGroomInterpolationType_MAX = 9
    };

    enum class EGroomStrandsSize : uint8_t //Enum HairStrandsCore.EGroomStrandsSize
    {
        None = 0,
        Size2 = 2,
        Size4 = 4,
        Size8 = 8,
        Size16 = 16,
        Size32 = 32,
        EGroomStrandsSize_MAX = 33
    };

    enum class EGroomNiagaraSolvers : uint8_t //Enum HairStrandsCore.EGroomNiagaraSolvers
    {
        None = 0,
        CosseratRods = 2,
        AngularSprings = 4,
        CustomSolver = 8,
        EGroomNiagaraSolvers_MAX = 9
    };

    enum class EFollicleMaskChannel : uint8_t //Enum HairStrandsCore.EFollicleMaskChannel
    {
        R = 0,
        G = 1,
        B = 2,
        A = 3,
        EFollicleMaskChannel_MAX = 4
    };

    enum class EStrandsTexturesMeshType : uint8_t //Enum HairStrandsCore.EStrandsTexturesMeshType
    {
        Static = 0,
        Skeletal = 1,
        EStrandsTexturesMeshType_MAX = 2
    };

    enum class EStrandsTexturesTraceType : uint8_t //Enum HairStrandsCore.EStrandsTexturesTraceType
    {
        TraceInside = 0,
        TraceOuside = 1,
        TraceBidirectional = 2,
        EStrandsTexturesTraceType_MAX = 3
    };

    enum class EGroomInterpolationWeight : uint8_t //Enum HairStrandsCore.EGroomInterpolationWeight
    {
        Parametric = 0,
        Root = 1,
        Index = 2,
        Unknown = 3,
        EGroomInterpolationWeight_MAX = 4
    };

    enum class EGroomInterpolationQuality : uint8_t //Enum HairStrandsCore.EGroomInterpolationQuality
    {
        Low = 0,
        Medium = 1,
        High = 2,
        Unknown = 3,
        EGroomInterpolationQuality_MAX = 4
    };

    enum class EWarpPointAnimProvider : uint8_t //Enum MotionWarping.EWarpPointAnimProvider
    {
        None = 0,
        Static = 1,
        Bone = 2,
        EWarpPointAnimProvider_MAX = 3
    };

    enum class EMotionWarpRotationType : uint8_t //Enum MotionWarping.EMotionWarpRotationType
    {
        Default = 0,
        Facing = 1,
        EMotionWarpRotationType_MAX = 2
    };

    enum class ERootMotionModifierState : uint8_t //Enum MotionWarping.ERootMotionModifierState
    {
        Waiting = 0,
        Active = 1,
        MarkedForRemoval = 2,
        Disabled = 3,
        ERootMotionModifierState_MAX = 4
    };

    enum class EStrideWarpingAxisMode : uint8_t //Enum AnimationWarpingRuntime.EStrideWarpingAxisMode
    {
        IKFootRootLocalX = 0,
        IKFootRootLocalY = 1,
        IKFootRootLocalZ = 2,
        WorldSpaceVectorInput = 3,
        ComponentSpaceVectorInput = 4,
        ActorSpaceVectorInput = 5,
        EStrideWarpingAxisMode_MAX = 6
    };

    enum class EOodleEnableMode : uint8_t //Enum OodleNetworkHandlerComponent.EOodleEnableMode
    {
        AlwaysEnabled = 0,
        WhenCompressedPacketReceived = 1,
        EOodleEnableMode_MAX = 2
    };

    enum class EDLSSSettingOverride : uint8_t //Enum DLSS.EDLSSSettingOverride
    {
        Enabled = 0,
        Disabled = 1,
        UseProjectSettings = 2,
        EDLSSSettingOverride_MAX = 3
    };

    enum class UDLSSMode : uint8_t //Enum DLSSBlueprint.UDLSSMode
    {
        Off = 0,
        Auto = 1,
        UltraQuality = 2,
        Quality = 3,
        Balanced = 4,
        Performance = 5,
        UltraPerformance = 6,
        UDLSSMode_MAX = 7
    };

    enum class UDLSSSupport : uint8_t //Enum DLSSBlueprint.UDLSSSupport
    {
        Supported = 0,
        NotSupported = 1,
        NotSupportedIncompatibleHardware = 2,
        NotSupportedDriverOutOfDate = 3,
        NotSupportedOperatingSystemOutOfDate = 4,
        NotSupportedByPlatformAtBuildTime = 5,
        UDLSSSupport_MAX = 6
    };

    enum class EMFGlobalEventTriggerType : uint8_t //Enum MFGlobalEvent.EMFGlobalEventTriggerType
    {
        Owner = 0,
        Global = 1,
        EMFGlobalEventTriggerType_MAX = 2
    };

    enum class EMFGlobalEventParameterContainerMatchType : uint8_t //Enum MFGlobalEventParameterTags.EMFGlobalEventParameterContainerMatchType
    {
        Any = 0,
        All = 1,
        EMFGlobalEventParameterContainerMatchType_MAX = 2
    };

    enum class EMFGlobalEventParameterTagMatchType : uint8_t //Enum MFGlobalEventParameterTags.EMFGlobalEventParameterTagMatchType
    {
        Explicit = 0,
        IncludeParentTags = 1,
        EMFGlobalEventParameterTagMatchType_MAX = 2
    };

    enum class EMFGlobalEventParameterTagSelectionType : uint8_t //Enum MFGlobalEventParameterTags.EMFGlobalEventParameterTagSelectionType
    {
        None = 0,
        NonRestrictedOnly = 1,
        RestrictedOnly = 2,
        All = 3,
        EMFGlobalEventParameterTagSelectionType_MAX = 4
    };

    enum class EMFGlobalEventParameterTagSourceType : uint8_t //Enum MFGlobalEventParameterTags.EMFGlobalEventParameterTagSourceType
    {
        Native = 0,
        DefaultTagList = 1,
        TagList = 2,
        RestrictedTagList = 3,
        DataTable = 4,
        Invalid = 5,
        EMFGlobalEventParameterTagSourceType_MAX = 6
    };

    enum class EMFGlobalEventContainerMatchType : uint8_t //Enum MFGlobalEventTags.EMFGlobalEventContainerMatchType
    {
        Any = 0,
        All = 1,
        EMFGlobalEventContainerMatchType_MAX = 2
    };

    enum class EMFGlobalEventTagMatchType : uint8_t //Enum MFGlobalEventTags.EMFGlobalEventTagMatchType
    {
        Explicit = 0,
        IncludeParentTags = 1,
        EMFGlobalEventTagMatchType_MAX = 2
    };

    enum class EMFGlobalEventTagSelectionType : uint8_t //Enum MFGlobalEventTags.EMFGlobalEventTagSelectionType
    {
        None = 0,
        NonRestrictedOnly = 1,
        RestrictedOnly = 2,
        All = 3,
        EMFGlobalEventTagSelectionType_MAX = 4
    };

    enum class EMFGlobalEventTagSourceType : uint8_t //Enum MFGlobalEventTags.EMFGlobalEventTagSourceType
    {
        Native = 0,
        DefaultTagList = 1,
        TagList = 2,
        RestrictedTagList = 3,
        DataTable = 4,
        Invalid = 5,
        EMFGlobalEventTagSourceType_MAX = 6
    };

    enum class EMissionTimeLimitType : uint8_t //Enum MFMission.EMissionTimeLimitType
    {
        None = 0,
        EnterGame = 1,
        TimeRecord = 2,
        EMissionTimeLimitType_MAX = 3
    };

    enum class EMissionFlowConnectionType : uint8_t //Enum MFMission.EMissionFlowConnectionType
    {
        ProgressChanged = 0,
        StatusSucceed = 1,
        StatusFailed = 2,
        EMissionFlowConnectionType_MAX = 3
    };

    enum class EMFMissionFlowTextKeyOperation : uint8_t //Enum MFMission.EMFMissionFlowTextKeyOperation
    {
        Equal = 0,
        NotEqual = 1,
        Contain = 2,
        NotContain = 3,
        EMFMissionFlowTextKeyOperation_MAX = 4
    };

    enum class EMFMissionFlowArithmeticKeyOperation : uint8_t //Enum MFMission.EMFMissionFlowArithmeticKeyOperation
    {
        Equal = 0,
        NotEqual = 1,
        Less = 2,
        LessOrEqual = 3,
        Greater = 4,
        GreaterOrEqual = 5,
        EMFMissionFlowArithmeticKeyOperation_MAX = 6
    };

    enum class EMFMissionFlowBasicKeyOperation : uint8_t //Enum MFMission.EMFMissionFlowBasicKeyOperation
    {
        Set = 0,
        NotSet = 1,
        EMFMissionFlowBasicKeyOperation_MAX = 2
    };

    enum class EMissionFlowCompleteType : uint8_t //Enum MFMission.EMissionFlowCompleteType
    {
        OneBattle = 0,
        MultipleBattle = 1,
        EMissionFlowCompleteType_MAX = 2
    };

    enum class EMissionFlowType : uint8_t //Enum MFMission.EMissionFlowType
    {
        Normal = 0,
        Activity = 1,
        EMissionFlowType_MAX = 2
    };

    enum class EMissionFlowNodeStatus : uint8_t //Enum MFMission.EMissionFlowNodeStatus
    {
        Inactive = 0,
        Active = 1,
        EMissionFlowNodeStatus_MAX = 2
    };

    enum class EMissionFlowNodeType : uint8_t //Enum MFMission.EMissionFlowNodeType
    {
        BaseNode = 0,
        CheckNode = 1,
        RelationNode = 2,
        AssembleNode = 3,
        AffiliateNode = 4,
        BehaviorNode = 5,
        EMissionFlowNodeType_MAX = 6
    };

    enum class EMissionObjectiveConditionCheckType : uint8_t //Enum MFMission.EMissionObjectiveConditionCheckType
    {
        And = 0,
        Or = 1,
        EMissionObjectiveConditionCheckType_MAX = 2
    };

    enum class EMissionRelatedTeamType : uint8_t //Enum MFMission.EMissionRelatedTeamType
    {
        TargetTeammateOnly = 0,
        RandomTeam = 1,
        EMissionRelatedTeamType_MAX = 2
    };

    enum class EMissionRelatedTargetType : uint8_t //Enum MFMission.EMissionRelatedTargetType
    {
        TargetOnly = 0,
        TargetTeammateOnly = 1,
        RandomTeam = 2,
        AllPMC = 3,
        AllSCAV = 4,
        EMissionRelatedTargetType_MAX = 5
    };

    enum class EMissionCompareType : uint8_t //Enum MFMission.EMissionCompareType
    {
        CMP_None = 0,
        CMP_Equals = 1,
        CMP_NotEqual = 2,
        CMP_Greater = 3,
        CMP_Less = 4,
        CMP_GreaterEqual = 5,
        CMP_LessEqual = 6,
        CMP_Between = 7,
        CMP_MAX = 8
    };

    enum class EMissionInstigatorType : uint8_t //Enum MFMission.EMissionInstigatorType
    {
        None = 0,
        Individual = 1,
        Team = 2,
        Public = 3,
        EMissionInstigatorType_MAX = 4
    };

    enum class EMissionConditionCheckType : uint8_t //Enum MFMission.EMissionConditionCheckType
    {
        Event = 0,
        Tick = 1,
        Both = 2,
        EMissionConditionCheckType_MAX = 3
    };

    enum class EMissionConditionType : uint8_t //Enum MFMission.EMissionConditionType
    {
        Keeping = 0,
        Filter = 1,
        EMissionConditionType_MAX = 2
    };

    enum class EMissionFailedType : uint8_t //Enum MFMission.EMissionFailedType
    {
        Normal = 0,
        TimeOut = 1,
        EMissionFailedType_MAX = 2
    };

    enum class EMissionHelpType : uint8_t //Enum MFMission.EMissionHelpType
    {
        Alone = 0,
        Teammate = 1,
        Anyone = 2,
        EMissionHelpType_MAX = 3
    };

    enum class EMissionDataType : uint8_t //Enum MFMission.EMissionDataType
    {
        Person = 0,
        Team = 1,
        Faction = 2,
        World = 3,
        EMissionDataType_MAX = 4
    };

    enum class ERunMissionResult : uint8_t //Enum MFMission.ERunMissionResult
    {
        Success = 0,
        Failed = 1,
        ERunMissionResult_MAX = 2
    };

    enum class EMissionStatus : uint8_t //Enum MFMission.EMissionStatus
    {
        Inactive = 0,
        InProcess = 1,
        Success = 2,
        Failed = 3,
        EMissionStatus_MAX = 4
    };

    enum class EMFMissionDataChangeType : uint8_t //Enum MFMission.EMFMissionDataChangeType
    {
        MissionFlowStatus = 0,
        MissionStatus = 1,
        CurProgress = 2,
        RemainTime = 3,
        EMFMissionDataChangeType_MAX = 4
    };

    enum class EFSR2HistoryFormat : uint8_t //Enum FSR2TemporalUpscaling.EFSR2HistoryFormat
    {
        FloatRGBA = 0,
        FloatR11G11B10 = 1,
        EFSR2HistoryFormat_MAX = 2
    };

    enum class EFSR2QualityMode : uint8_t //Enum FSR2TemporalUpscaling.EFSR2QualityMode
    {
        Unused = 0,
        Quality = 1,
        Balanced = 2,
        Performance = 3,
        UltraPerformance = 4,
        EFSR2QualityMode_MAX = 5
    };

    enum class ERelightingMethod : uint8_t //Enum MFRelightableReflection.ERelightingMethod
    {
        None = 0,
        MiniGBuffer = 1,
        ERelightingMethod_MAX = 2
    };

    enum class EOnlyUpdateFacesMode : uint8_t //Enum MFRelightableReflection.EOnlyUpdateFacesMode
    {
        Disable = 0,
        GameOnly = 1,
        GameAndEditor = 2,
        EOnlyUpdateFacesMode_MAX = 3
    };

    enum class EMFAIRLMode : uint8_t //Enum AIServiceSDK.EMFAIRLMode
    {
        DisableRL = 0,
        Training = 1,
        Inference = 2,
        EMFAIRLMode_MAX = 3
    };

    enum class ESubRegionReductionKernel : uint8_t //Enum FalconLandscapeMixerShader.ESubRegionReductionKernel
    {
        Min = 0,
        Max = 1,
        Mean = 2
    };

    enum class EScriptUtilityBufferFormat : uint8_t //Enum FalconLandscapeMixerShader.EScriptUtilityBufferFormat
    {
        Float = 0,
        UInt = 1,
        EScriptUtilityBufferFormat_MAX = 2
    };

    enum class EFalconBicubicFunction : uint8_t //Enum FalconLandscapeMixerShader.EFalconBicubicFunction
    {
        BSpline = 0,
        Custom = 1,
        CatmullRom = 2,
        EFalconBicubicFunction_MAX = 3
    };

    enum class EReliefMapping_LinearColorChannels : uint8_t //Enum ReliefMapping.EReliefMapping_LinearColorChannels
    {
        R = 0,
        G = 1,
        B = 2,
        A = 3,
        EReliefMapping_LinearColorChannels_MAX = 4
    };

    enum class EReliefMapping_CommonSizes : uint8_t //Enum ReliefMapping.EReliefMapping_CommonSizes
    {
        RMC_Custom = 0,
        RMC_32x32 = 5,
        RMC_64x64 = 6,
        RMC_128x128 = 7,
        RMC_256x256 = 8,
        RMC_512x512 = 9,
        RMC_1024x1024 = 10,
        RMC_2048x2048 = 11,
        RMC_4096x4096 = 12,
        RMC_MAX = 13
    };

    enum class EReliefMapping_Type : uint8_t //Enum ReliefMapping.EReliefMapping_Type
    {
        RelaxedConeStepMap = 0,
        AnisotropicConeStepMap = 1,
        HeightMap = 2,
        EReliefMapping_Type_MAX = 3
    };

    enum class FINTLFunnelStep : uint8_t //Enum INTLCore.FINTLFunnelStep
    {
        kStartAppLaunch = 0,
        kAgreementShowUserAgreement = 1,
        kAgreementFinishUserAgreement = 2,
        kUpdateCheckForUpdates = 3,
        kUpdateDownloadUpdates = 4,
        kUpdateUnzipFiles = 5,
        kUpdateCompleteUpdates = 6,
        kAuthConfirmLoginChannel = 7,
        kAuthChannelAuthSuccess = 8,
        kAuthLoginAuthSuccess = 9,
        kPolicyQueryCompliance = 10,
        kPolicySelectRegionAndAge = 11,
        kPolicyAgreePrivacyPolicy = 12,
        kPolicyPrivacyAuthSucess = 13,
        kNavigateShowServerList = 14,
        kNavigateSubmitArea = 15,
        kNavigateConfirmArea = 16,
        kNavigateConnectSvrSuccess = 17,
        kEnterGameShowEnterGame = 18,
        kEnterGameClickIntoGame = 19,
        kLobbyEnterLobbySuccess = 20,
        kPayAuthentication = 21,
        kPayPullUpTheListOfGoods = 22,
        kPayPullUpPriceList = 23,
        kPayStartOrder = 24,
        kPaySuccessfulOrder = 25,
        kPayStartPayment = 26,
        kPaySuccessfulPayment = 27,
        kPayStartDelivery = 28,
        kPaySuccessfulDelivery = 29,
        kAuthRegisterSuccess = 30,
        FINTLFunnelStep_MAX = 31
    };

    enum class EPGNAModule : uint8_t //Enum INTLCore.EPGNAModule
    {
        kPGNAModuleUnknow = 0,
        kPGNAModuleDialTest = 1,
        kPGNAModuleAccelerator = 2,
        kPGNAModuleAll = 3,
        EPGNAModule_MAX = 4
    };

    enum class EINTLUpdateStep : uint8_t //Enum INTLCore.EINTLUpdateStep
    {
        kUnknown = 0,
        kFirstResourceAnalyze = 1,
        kCheckUpdate = 2,
        kDownload = 3,
        EINTLUpdateStep_MAX = 4
    };

    enum class EINTLUpdateResourceCopyType : uint8_t //Enum INTLCore.EINTLUpdateResourceCopyType
    {
        kUnknown = 0,
        kCopyAll = 1,
        kCopyOnDemand = 2,
        EINTLUpdateResourceCopyType_MAX = 3
    };

    enum class EINTLUpdateActionType : uint8_t //Enum INTLCore.EINTLUpdateActionType
    {
        kUnknown = 0,
        kAppUpdate = 1,
        kResourceUpdate = 2,
        kResourceRepair = 3,
        EINTLUpdateActionType_MAX = 4
    };

    enum class EINTLUpdateNewVersionType : uint8_t //Enum INTLCore.EINTLUpdateNewVersionType
    {
        kUnknown = 0,
        kNoNeedUpdate = 1,
        kOptionalUpdate = 2,
        kForcibleUpdate = 3,
        EINTLUpdateNewVersionType_MAX = 4
    };

    enum class EINTLCrashLevel : uint8_t //Enum INTLCore.EINTLCrashLevel
    {
        LogLevelZero = 0,
        EINTLCrashLevel_MAX = 1
    };

    enum class EINTLWebViewOrientation : uint8_t //Enum INTLCore.EINTLWebViewOrientation
    {
        kAuto = 0,
        kPortrait = 1,
        kLandscape = 2,
        EINTLWebViewOrientation_MAX = 3
    };

    enum class EINTLFriendReqType : uint8_t //Enum INTLCore.EINTLFriendReqType
    {
        kReqText = 0,
        kReqLink = 1,
        kReqImage = 2,
        kReqInvite = 3,
        kReqVideo = 4,
        EINTLFriendReqType_MAX = 5
    };

    enum class EPermissionType : uint8_t //Enum INTLCore.EPermissionType
    {
        kPermissionTypeNone = 0,
        kPermissionTypeCamera = 1,
        kPermissionTypePhoto = 2,
        kPermissionTypeMicrophone = 3,
        kPermissionTypeLocation = 4,
        kPermissionTypeBluetooth = 5,
        kPermissionTypeCalendar = 6,
        kPermissionTypeRemind = 7,
        kPermissionTypeContacts = 8,
        kPermissionTypeTrack = 99,
        kPermissionTypeCameraAndroid = 101,
        kPermissionTypeReadPhoneState = 102,
        kPermissionTypeRecordAudio = 103,
        kPermissionTypeReadExternalStorage = 104,
        kPermissionTypeWriteExternalStorage = 105,
        kPermissionTypeAccessBackgroundLocation = 106,
        kPermissionTypeAccessCoarseLocation = 107,
        kPermissionTypeAccessFineLocation = 108,
        kPermissionTypeAccessMediaLoaction = 109,
        kPermissionTypeReadCalendar = 110,
        kPermissionTypeWriteCalendar = 111,
        kPermissionTypeBluetoothAdvertise = 112,
        kPermissionTypeBluetoothConnect = 113,
        kPermissionTypeBluetoothScan = 114,
        kPermissionTypeBodySensors = 115,
        kPermissionTypeBodySensorsBackground = 116,
        kPermissionTypeCallPhone = 117,
        kPermissionTypeReadCallLog = 118,
        kPermissionTypeReadContacts = 119,
        kPermissionTypeWriteContacts = 120,
        kPermissionTypeWriteCallLog = 121,
        kPermissionTypeAddVoicemail = 122,
        kPermissionTypeAnswerPhoneCalls = 123,
        kPermissionTypeGetAccounts = 124,
        kPermissionTypeNearbyWifyDevices = 125,
        kPermissionTypePostNotifications = 126,
        kPermissionTypeProcessOutgoingCalls = 127,
        kPermissionTypeReadMediaAudio = 128,
        kPermissionTypeReadMediaImages = 129,
        kPermissionTypeReadMediaVideo = 130,
        kPermissionTypeReadPhoneNumbers = 131,
        kPermissionTypeReadSMS = 132,
        kPermissionTypeReveiveMMS = 133,
        kPermissionTypeRceiveSMS = 134,
        kPermissionTypeReceiveWapPush = 135,
        kPermissionTypeSendSMS = 136,
        kPermissionTypeUseSIP = 137,
        kPermissionTypeUWBRanging = 138,
        kPermissionTypeActivityRecognition = 139,
        kPermissionTypeAcceptHandover = 140,
        EPermissionType_MAX = 141
    };

    enum class EComplianceParentCertificateStatus : uint8_t //Enum INTLCore.EComplianceParentCertificateStatus
    {
        kDeny = 0,
        kUnknown = 1,
        kAgree = 2,
        EComplianceParentCertificateStatus_MAX = 3
    };

    enum class EComplianceAgreeStatus : uint8_t //Enum INTLCore.EComplianceAgreeStatus
    {
        kDeny = 0,
        kUnknown = 1,
        kAgree = 2,
        EComplianceAgreeStatus_MAX = 3
    };

    enum class EComplianceAgeStatus : uint8_t //Enum INTLCore.EComplianceAgeStatus
    {
        kMinor = 0,
        kUnknown = 1,
        kAdult = 2,
        kBelowGrade = 3,
        EComplianceAgeStatus_MAX = 4
    };

    enum class EINTLLoginChannel : uint8_t //Enum INTLCore.EINTLLoginChannel
    {
        kChannelDefault = 0,
        kChannelW = 1,
        kChannelQ = 2,
        kChannelGuest = 3,
        kChannelFacebook = 4,
        kChannelGameCenter = 5,
        kChannelGoogle = 6,
        kChannelIEGPassport = 7,
        kChannelFirebase = 8,
        kChannelTwitter = 9,
        kChannelGarena = 10,
        kChannelCustomAccount = 11,
        kChannelEGame = 12,
        kChannelSwitch = 13,
        kChannelLine = 14,
        kChannelApple = 15,
        kChannelVK = 19,
        kChannelXbox = 20,
        kChannelSteam = 21,
        kChannelPS4 = 22,
        kChannelEpic = 24,
        kChannelDiscord = 26,
        kChannelPS5 = 27,
        kChannelDmm = 30,
        kChannelSquareEnix = 32,
        kChannelSupercell = 33,
        kChannelAppsFlyer = 34,
        kChannelKaKao = 35,
        kChannelUbisoft = 37,
        kChannelVNG = 38,
        kChannelGooglePGS = 39,
        kChannelEA = 40,
        kChannelNintendo = 41,
        kChannelLevelInfinite = 131,
        EINTLLoginChannel_MAX = 132
    };

    enum class EVerifyCodeType : uint8_t //Enum INTLCore.EVerifyCodeType
    {
        kVerifyCodeTypeRegister = 0,
        kVerifyCodeTypeResetPassword = 1,
        kVerifyCodeTypeRegisterThenLogin = 2,
        kVerifyCodeTypeModifyAccount = 3,
        kVerifyCodeTypeUnBindLI = 4,
        kVerifyCodeTypeUnbindThirdChannel = 5,
        EVerifyCodeType_MAX = 6
    };

    enum class EINTLAccountType : uint8_t //Enum INTLCore.EINTLAccountType
    {
        kINTLAccountTypeNone = 0,
        kINTLAccountTypeEmail = 1,
        kINTLAccountTypeMobilePhone = 2,
        EINTLAccountType_MAX = 3
    };

    enum class ESlateAccessibleBehavior : uint8_t //Enum UMG.ESlateAccessibleBehavior
    {
        NotAccessible = 0,
        Auto = 1,
        Summary = 2,
        Custom = 3,
        ToolTip = 4,
        ESlateAccessibleBehavior_MAX = 5
    };

    enum class EUINavigation : uint8_t //Enum SlateCore.EUINavigation
    {
        Left = 0,
        Right = 1,
        Up = 2,
        Down = 3,
        Next = 4,
        Previous = 5,
        Num = 6,
        Invalid = 7,
        EUINavigation_MAX = 8
    };

    enum class ECheckBoxState : uint8_t //Enum SlateCore.ECheckBoxState
    {
        Unchecked = 0,
        Checked = 1,
        Undetermined = 2,
        ECheckBoxState_MAX = 3
    };

    enum class EWidgetClipping : uint8_t //Enum SlateCore.EWidgetClipping
    {
        Inherit = 0,
        ClipToBounds = 1,
        ClipToBoundsWithoutIntersecting = 2,
        ClipToBoundsAlways = 3,
        OnDemand = 4,
        EWidgetClipping_MAX = 5
    };

    enum class EMouseCursor : uint8_t //Enum CoreUObject.EMouseCursor
    {
        None = 0,
        Default = 1,
        TextEditBeam = 2,
        ResizeLeftRight = 3,
        ResizeUpDown = 4,
        ResizeSouthEast = 5,
        ResizeSouthWest = 6,
        CardinalCross = 7,
        Crosshairs = 8,
        Hand = 9,
        GrabHand = 10,
        GrabHandClosed = 11,
        SlashedCircle = 12,
        EyeDropper = 13,
        EMouseCursor_MAX = 14
    };

    enum class ESlateBrushImageType : uint8_t //Enum SlateCore.ESlateBrushImageType
    {
        NoImage = 0,
        FullColor = 1,
        Linear = 2,
        ESlateBrushImageType_MAX = 3
    };

    enum class ESlateBrushMirrorType : uint8_t //Enum SlateCore.ESlateBrushMirrorType
    {
        NoMirror = 0,
        Horizontal = 1,
        Vertical = 2,
        Both = 3,
        ESlateBrushMirrorType_MAX = 4
    };

    enum class ESlateBrushTileType : uint8_t //Enum SlateCore.ESlateBrushTileType
    {
        NoTile = 0,
        Horizontal = 1,
        Vertical = 2,
        Both = 3,
        ESlateBrushTileType_MAX = 4
    };

    enum class ESlateBrushDrawType : uint8_t //Enum SlateCore.ESlateBrushDrawType
    {
        NoDrawType = 0,
        Box = 1,
        Border = 2,
        Image = 3,
        ESlateBrushDrawType_MAX = 4
    };

    enum class ESlateColorStylingMode : uint8_t //Enum SlateCore.ESlateColorStylingMode
    {
        UseColor_Specified = 0,
        UseColor_Specified_Link = 1,
        UseColor_Foreground = 2,
        UseColor_Foreground_Subdued = 3,
        UseColor_MAX = 4
    };

    enum class ESlateVisibility : uint8_t //Enum UMG.ESlateVisibility
    {
        Visible = 0,
        Collapsed = 1,
        Hidden = 2,
        HitTestInvisible = 3,
        SelfHitTestInvisible = 4,
        ESlateVisibility_MAX = 5
    };

    enum class EUINavigationRule : uint8_t //Enum SlateCore.EUINavigationRule
    {
        Escape = 0,
        Explicit = 1,
        Wrap = 2,
        Stop = 3,
        Custom = 4,
        CustomBoundary = 5,
        Invalid = 6,
        EUINavigationRule_MAX = 7
    };

    enum class EFlowDirectionPreference : uint8_t //Enum SlateCore.EFlowDirectionPreference
    {
        Inherit = 0,
        Culture = 1,
        LeftToRight = 2,
        RightToLeft = 3,
        EFlowDirectionPreference_MAX = 4
    };

    enum class EMaskGeometryType : uint8_t //Enum SlateCore.EMaskGeometryType
    {
        None = 0,
        Rectangle = 1,
        Circle = 2,
        EMaskGeometryType_MAX = 3
    };

    enum class EColorVisionDeficiency : uint8_t //Enum SlateCore.EColorVisionDeficiency
    {
        NormalVision = 0,
        Deuteranope = 1,
        Protanope = 2,
        Tritanope = 3,
        EColorVisionDeficiency_MAX = 4
    };

    enum class EMouseLockMode : uint8_t //Enum Engine.EMouseLockMode
    {
        DoNotLock = 0,
        LockOnCapture = 1,
        LockAlways = 2,
        LockInFullscreen = 3,
        EMouseLockMode_MAX = 4
    };

    enum class EWindowTitleBarMode : uint8_t //Enum Engine.EWindowTitleBarMode
    {
        Overlay = 0,
        VerticalBox = 1,
        EWindowTitleBarMode_MAX = 2
    };

    enum class ESelectInfo : uint8_t //Enum SlateCore.ESelectInfo
    {
        OnKeyPress = 0,
        OnNavigation = 1,
        OnMouseClick = 2,
        Direct = 3,
        ESelectInfo_MAX = 4
    };

    enum class ETextCommit : uint8_t //Enum SlateCore.ETextCommit
    {
        Default = 0,
        OnEnter = 1,
        OnUserMovedFocus = 2,
        OnCleared = 3,
        ETextCommit_MAX = 4
    };

    enum class ETextJustify : uint8_t //Enum Slate.ETextJustify
    {
        Left = 0,
        Center = 1,
        Right = 2,
        ETextJustify_MAX = 3
    };

    enum class ETextFlowDirection : uint8_t //Enum Slate.ETextFlowDirection
    {
        Auto = 0,
        LeftToRight = 1,
        RightToLeft = 2,
        ETextFlowDirection_MAX = 3
    };

    enum class ETextShapingMethod : uint8_t //Enum SlateCore.ETextShapingMethod
    {
        Auto = 0,
        KerningOnly = 1,
        FullShaping = 2,
        ETextShapingMethod_MAX = 3
    };

    enum class EVirtualKeyboardDismissAction : uint8_t //Enum Slate.EVirtualKeyboardDismissAction
    {
        TextChangeOnDismiss = 0,
        TextCommitOnAccept = 1,
        TextCommitOnDismiss = 2,
        EVirtualKeyboardDismissAction_MAX = 3
    };

    enum class EVirtualKeyboardTrigger : uint8_t //Enum Slate.EVirtualKeyboardTrigger
    {
        OnFocusByPointer = 0,
        OnAllFocusEvents = 1,
        EVirtualKeyboardTrigger_MAX = 2
    };

    enum class EVirtualKeyboardType : uint8_t //Enum UMG.EVirtualKeyboardType
    {
        Default = 0,
        Number = 1,
        Web = 2,
        Email = 3,
        Password = 4,
        AlphaNumeric = 5,
        EVirtualKeyboardType_MAX = 6
    };

    enum class EMenuPlacement : uint8_t //Enum SlateCore.EMenuPlacement
    {
        MenuPlacement_BelowAnchor = 0,
        MenuPlacement_CenteredBelowAnchor = 1,
        MenuPlacement_BelowRightAnchor = 2,
        MenuPlacement_ComboBox = 3,
        MenuPlacement_ComboBoxRight = 4,
        MenuPlacement_MenuRight = 5,
        MenuPlacement_AboveAnchor = 6,
        MenuPlacement_CenteredAboveAnchor = 7,
        MenuPlacement_AboveRightAnchor = 8,
        MenuPlacement_MenuLeft = 9,
        MenuPlacement_Center = 10,
        MenuPlacement_RightLeftCenter = 11,
        MenuPlacement_MatchBottomLeft = 12,
        MenuPlacement_MAX = 13
    };

    enum class ETextWrappingPolicy : uint8_t //Enum Slate.ETextWrappingPolicy
    {
        DefaultWrapping = 0,
        AllowPerCharacterWrapping = 1,
        ETextWrappingPolicy_MAX = 2
    };

    enum class EWidgetAnimationEvent : uint8_t //Enum UMG.EWidgetAnimationEvent
    {
        Started = 0,
        Finished = 1,
        EWidgetAnimationEvent_MAX = 2
    };

    enum class EInputEvent : uint8_t //Enum Engine.EInputEvent
    {
        IE_Pressed = 0,
        IE_Released = 1,
        IE_Repeat = 2,
        IE_DoubleClick = 3,
        IE_Axis = 4,
        IE_MAX = 5
    };

    enum class EUMGSequencePlayMode : uint8_t //Enum UMG.EUMGSequencePlayMode
    {
        Forward = 0,
        Reverse = 1,
        PingPong = 2,
        EUMGSequencePlayMode_MAX = 3
    };

    enum class EWidgetTickFrequency : uint8_t //Enum UMG.EWidgetTickFrequency
    {
        Never = 0,
        Auto = 1,
        EWidgetTickFrequency_MAX = 2
    };

    enum class ELIEventType : uint8_t //Enum LevelInfinite.ELIEventType
    {
        DEFAULT = 0,
        INTL_REPEAT = 1,
        GN_DISABLED = 2,
        GN_READY = 3,
        LOGIN_PANEL_OPEN = 4,
        LOGIN_PANEL_CLOSE = 5,
        ACCOUNT_CENTER_OPEN = 6,
        ACCOUNT_CENTER_CLOSE = 7,
        SET_PROVISION = 8,
        COMPLIANCE_AGE_SUCESS = 9,
        COMPLIANCE_MINOR_SUCESS = 10,
        ELIEventType_MAX = 11
    };

    enum class EFlipbookCollisionMode : uint8_t //Enum Paper2D.EFlipbookCollisionMode
    {
        NoCollision = 0,
        FirstFrameCollision = 1,
        EachFrameCollision = 2,
        EFlipbookCollisionMode_MAX = 3
    };

    enum class EPaperSpriteAtlasPadding : uint8_t //Enum Paper2D.EPaperSpriteAtlasPadding
    {
        DilateBorder = 0,
        PadWithZero = 1,
        EPaperSpriteAtlasPadding_MAX = 2
    };

    enum class ETileMapProjectionMode : uint8_t //Enum Paper2D.ETileMapProjectionMode
    {
        Orthogonal = 0,
        IsometricDiamond = 1,
        IsometricStaggered = 2,
        HexagonalStaggered = 3,
        ETileMapProjectionMode_MAX = 4
    };

    enum class ESpritePivotMode : uint8_t //Enum Paper2D.ESpritePivotMode
    {
        Top_Left = 0,
        Top_Center = 1,
        Top_Right = 2,
        Center_Left = 3,
        Center_Center = 4,
        Center_Right = 5,
        Bottom_Left = 6,
        Bottom_Center = 7,
        Bottom_Right = 8,
        Custom = 9,
        ESpritePivotMode_MAX = 10
    };

    enum class ESpritePolygonMode : uint8_t //Enum Paper2D.ESpritePolygonMode
    {
        SourceBoundingBox = 0,
        TightBoundingBox = 1,
        ShrinkWrapped = 2,
        FullyCustom = 3,
        Diced = 4,
        ESpritePolygonMode_MAX = 5
    };

    enum class ESpriteShapeType : uint8_t //Enum Paper2D.ESpriteShapeType
    {
        Box = 0,
        Circle = 1,
        Polygon = 2,
        ESpriteShapeType_MAX = 3
    };

    enum class ESpriteCollisionMode : uint8_t //Enum Paper2D.ESpriteCollisionMode
    {
        None = 0,
        Use2DPhysics = 1,
        Use3DPhysics = 2,
        ESpriteCollisionMode_MAX = 3
    };

    enum class EDNADataLayer : uint8_t //Enum RigLogicModule.EDNADataLayer
    {
        Descriptor = 0,
        Definition = 1,
        Behavior = 2,
        Geometry = 3,
        GeometryWithoutBlendShapes = 4,
        AllWithoutBlendShapes = 5,
        All = 6,
        EDNADataLayer_MAX = 7
    };

    enum class EDirection : uint8_t //Enum RigLogicModule.EDirection
    {
        Left = 0,
        Right = 1,
        Up = 2,
        Down = 3,
        Front = 4,
        Back = 5,
        EDirection_MAX = 6
    };

    enum class ERotationUnit : uint8_t //Enum RigLogicModule.ERotationUnit
    {
        Degrees = 0,
        Radians = 1,
        ERotationUnit_MAX = 2
    };

    enum class ETranslationUnit : uint8_t //Enum RigLogicModule.ETranslationUnit
    {
        CM = 0,
        M = 1,
        ETranslationUnit_MAX = 2
    };

    enum class EGender : uint8_t //Enum RigLogicModule.EGender
    {
        Male = 0,
        Female = 1,
        Other = 2,
        EGender_MAX = 3
    };

    enum class EArchetype : uint8_t //Enum RigLogicModule.EArchetype
    {
        Asian = 0,
        Black = 1,
        Caucasian = 2,
        Hispanic = 3,
        Alien = 4,
        Other = 5,
        EArchetype_MAX = 6
    };

    enum class ERigLogicCalculationType : uint8_t //Enum RigLogicModule.ERigLogicCalculationType
    {
        Scalar = 0,
        SSE = 1,
        AVX = 2,
        ERigLogicCalculationType_MAX = 3
    };

    enum class EGLTFCameraControlMode : uint8_t //Enum GLTFExporterRuntime.EGLTFCameraControlMode
    {
        FreeLook = 0,
        Orbital = 1,
        EGLTFCameraControlMode_MAX = 2
    };

    enum class EGLTFMaterialPropertyGroup : uint8_t //Enum GLTFExporterRuntime.EGLTFMaterialPropertyGroup
    {
        None = 0,
        BaseColorOpacity = 1,
        MetallicRoughness = 2,
        EmissiveColor = 3,
        Normal = 4,
        AmbientOcclusion = 5,
        ClearCoatRoughness = 6,
        ClearCoatBottomNormal = 7,
        EGLTFMaterialPropertyGroup_MAX = 8
    };

    enum class EGLTFMaterialBakeSizePOT : uint8_t //Enum GLTFExporterRuntime.EGLTFMaterialBakeSizePOT
    {
        POT_2 = 0,
        POT_3 = 1,
        POT_5 = 2,
        POT_9 = 3,
        POT_17 = 4,
        POT_33 = 5,
        POT_65 = 6,
        POT_129 = 7,
        POT_257 = 8,
        POT_513 = 9,
        POT_1025 = 10,
        POT_2049 = 11,
        POT_4097 = 12,
        POT_8193 = 13,
        POT_MAX = 14
    };

    enum class EGLTFMaterialBakeMode : uint8_t //Enum GLTFExporterRuntime.EGLTFMaterialBakeMode
    {
        Disabled = 0,
        Simple = 1,
        UseMeshData = 2,
        EGLTFMaterialBakeMode_MAX = 3
    };

    enum class EPropertyValueCategory : uint8_t //Enum VariantManagerContent.EPropertyValueCategory
    {
        Undefined = 0,
        Generic = 1,
        RelativeLocation = 2,
        RelativeRotation = 4,
        RelativeScale3D = 8,
        Visibility = 16,
        Material = 32,
        Color = 64,
        Option = 128,
        EPropertyValueCategory_MAX = 129
    };

    enum class EMovieCaptureState : uint8_t //Enum MFAVWrapper.EMovieCaptureState
    {
        NotInit = 0,
        Initialize = 1,
        Initialized = 2,
        Capturing = 3,
        EMovieCaptureState_MAX = 4
    };

    enum class EFoliageCollectType : uint8_t //Enum MFDataVisualizer.EFoliageCollectType
    {
        E_FoliageCount = 0,
        E_FaceCount = 1,
        E_TypeCount = 2,
        E_MAX = 3
    };

    enum class ERenderObjType : uint8_t //Enum MFDataVisualizer.ERenderObjType
    {
        E_PrimitiveCount = 0,
        E_FaceCount = 1,
        E_InstrucmentCount = 2,
        E_MAX = 3
    };

    enum class EMFBoxLoginSourceType : uint8_t //Enum MFPluginWrapper.EMFBoxLoginSourceType
    {
        NONE = 0,
        QQLogin = 1,
        WeChatLogin = 2,
        Tourist = 3,
        EMFBoxLoginSourceType_MAX = 4
    };

    enum class EMFBoxClientType : uint8_t //Enum MFPluginWrapper.EMFBoxClientType
    {
        NONE = 0,
        InitBox = 1,
        EMFBoxClientType_MAX = 2
    };

    enum class EMFNewNetworkState : uint8_t //Enum MFPluginWrapper.EMFNewNetworkState
    {
        NotReachable = 0,
        WWAN = 1,
        Wifi = 2,
        Others = 3,
        EMFNewNetworkState_MAX = 4
    };

    enum class EPufferTaskState : uint8_t //Enum MFPluginWrapper.EPufferTaskState
    {
        PufferTask_None = 0,
        PufferTask_Downloading = 1,
        PufferTask_Pause = 2,
        PufferTask_Error = 3,
        PufferTask_Completed = 4,
        PufferTask_MAX = 5
    };

    enum class EUamDeviceRank : uint8_t //Enum MFPluginWrapper.EUamDeviceRank
    {
        SuperFirstGear = 7,
        FirstGear = 6,
        SecondGear = 5,
        ThirdGear = 3,
        FourthGear = 2,
        FifthGear = 1,
        SixthGear = 0,
        EUamDeviceRank_MAX = 8
    };

    enum class EUAGraphicStyleQuality : uint8_t //Enum MFPluginWrapper.EUAGraphicStyleQuality
    {
        GfxStyleQualityDefault = 0,
        GfxStyleQualityRealistic = 0,
        GfxStyleQualityWarm = 1,
        GfxStyleQualityCold = 2,
        GfxStyleQualityBright = 3,
        EUAGraphicStyleQuality_MAX = 4
    };

    enum class EUAFrameRateLevel : uint8_t //Enum MFPluginWrapper.EUAFrameRateLevel
    {
        FrameRateDefault = 0,
        FrameRateLow = 0,
        FrameRateMedium = 1,
        FrameRateHigh = 2,
        FrameRateSuper = 3,
        FrameRateMax = 4,
        FrameRate90 = 5,
        FrameRate120 = 6,
        FrameRate144 = 7,
        EUAFrameRateLevel_MAX = 8
    };

    enum class EUAGrahpicsQuality : uint8_t //Enum MFPluginWrapper.EUAGrahpicsQuality
    {
        GfxQualityDefault = 0,
        GfxQualitySuperLow = 0,
        GfxQualityLow = 1,
        GfxQualityMedium = 2,
        GfxQualityHigh = 3,
        GfxQualityHDRHigh = 4,
        GfxQualitySuperHigh = 5,
        GfxQualityNum = 6,
        EUAGrahpicsQuality_MAX = 7
    };

    enum class EMFLBSLocationAuthorizationStates : uint8_t //Enum MFPluginWrapper.EMFLBSLocationAuthorizationStates
    {
        AuthorizedWhenInUse = 0,
        AuthorizedDenied = 1,
        AuthorizedNotDetermined = 2,
        EMFLBSLocationAuthorizationStates_MAX = 3
    };

    enum class EMFTGALiveLoginSourceType : uint8_t //Enum MFPluginWrapper.EMFTGALiveLoginSourceType
    {
        NONE = 0,
        QQLogin = 1,
        WeChatLogin = 2,
        Tourist = 3,
        EMFTGALiveLoginSourceType_MAX = 4
    };

    enum class EMFTGALiveSourceType : uint8_t //Enum MFPluginWrapper.EMFTGALiveSourceType
    {
        NONE = 0,
        ClientClick = 1,
        ClientPopUps = 2,
        ClientActivity = 3,
        EMFTGALiveSourceType_MAX = 4
    };

    enum class EMFTGALiveClientType : uint8_t //Enum MFPluginWrapper.EMFTGALiveClientType
    {
        NONE = 0,
        QuitTGALive = 1,
        EnterTGALive = 2,
        InitTGALive = 3,
        EMFTGALiveClientType_MAX = 4
    };

    enum class EMFVoiceEvent : uint8_t //Enum MFPluginWrapper.EMFVoiceEvent
    {
        kEventNoDeviceConnected = 0,
        kEventHeadsetDisconnected = 10,
        kEventHeadsetConnected = 11,
        kEventBluetoothHeadsetDisconnected = 20,
        kEventBluetoothHeadsetConnected = 21,
        kEventMicStateOpenSucc = 30,
        kEventMicStateOpenErr = 31,
        kEventMicStateNoOpen = 32,
        kEventSpeakerStateOpenSucc = 40,
        kEventSpeakerStateOpenErr = 41,
        kEventSpeakerStateNoOpen = 42,
        kEventAudioInterruptBegin = 50,
        kEventAudioInterruptEnd = 51,
        kEventAudioRecoderException = 52,
        kEventAudioRenderException = 53,
        kEventPhoneCallPickUp = 54,
        kEventPhoneCallHangUp = 55,
        EMFVoiceEvent_MAX = 56
    };

    enum class EMFVoiceSpeechTranslateType : uint8_t //Enum MFPluginWrapper.EMFVoiceSpeechTranslateType
    {
        SPEECH_TRANSLATE_STST = 0,
        SPEECH_TRANSLATE_STTT = 1,
        SPEECH_TRANSLATE_STTS = 2,
        SPEECH_TRANSLATE_MAX = 3
    };

    enum class EMFVoiceSpeechLanguageType : uint8_t //Enum MFPluginWrapper.EMFVoiceSpeechLanguageType
    {
        SPEECH_LANGUAGE_ZH = 0,
        SPEECH_LANGUAGE_EN = 1,
        SPEECH_LANGUAGE_JA = 2,
        SPEECH_LANGUAGE_KO = 3,
        SPEECH_LANGUAGE_DE = 4,
        SPEECH_LANGUAGE_FR = 5,
        SPEECH_LANGUAGE_ES = 6,
        SPEECH_LANGUAGE_IT = 7,
        SPEECH_LANGUAGE_TR = 8,
        SPEECH_LANGUAGE_RU = 9,
        SPEECH_LANGUAGE_PT = 10,
        SPEECH_LANGUAGE_VI = 11,
        SPEECH_LANGUAGE_ID = 12,
        SPEECH_LANGUAGE_MS = 13,
        SPEECH_LANGUAGE_TH = 14,
        SPEECH_LANGUAGE_MAX = 15
    };

    enum class EMFVoiceMemberRole : uint8_t //Enum MFPluginWrapper.EMFVoiceMemberRole
    {
        kVoiceMemberRoleNone = 0,
        kVoiceMemberRoleAnchor = 1,
        kVoiceMemberRoleAudience = 2,
        EMFVoiceMemberRole_MAX = 3
    };

    enum class EMFVoiceLanguage : uint8_t //Enum MFPluginWrapper.EMFVoiceLanguage
    {
        kVoiceLanguageChina = 0,
        kVoiceLanguageKorean = 1,
        kVoiceLanguageEnglish = 2,
        kVoiceLanguageJapanese = 3,
        EMFVoiceLanguage_MAX = 4
    };

    enum class EGameSceneType : uint8_t //Enum MFBaseModule.EGameSceneType
    {
        GST_None = 0,
        GST_Lobby = 1,
        GST_InBattle = 2,
        GST_InBattleCity = 3,
        GST_CG = 4,
        GST_ShootingRoom = 5,
        GST_MAX = 6
    };

    enum class EMobileDeviceLevel : uint8_t //Enum MFBaseModule.EMobileDeviceLevel
    {
        MobileDeviceLevel_0_VeryVeryLow = 0,
        MobileDeviceLevel_1_VeryLow = 1,
        MobileDeviceLevel_2_Low = 2,
        MobileDeviceLevel_3_Medium = 3,
        MobileDeviceLevel_4_Medium = 4,
        MobileDeviceLevel_5_High = 5,
        MobileDeviceLevel_6_HDR = 6,
        MobileDeviceLevel_7_Ultra = 7,
        MobileDeviceLevel_Num = 8,
        MobileDeviceLevel_MAX = 9
    };

    enum class EGameletEnvironment : uint8_t //Enum Gamelet.EGameletEnvironment
    {
        Gamelet_Test = 0,
        Gamelet_Product = 1,
        Gamelet_SingaporeTest = 2,
        Gamelet_SingaporeProduct = 3,
        Gamelet_MAX = 4
    };

    enum class ECmd : uint32_t //Enum Gamelet.ECmd
    {
        ECmdGSendMessageToApp = 10001,
        ECmdS2ESDKInitialized = 40001,
        ECmdS2EOnCgiProcessComplete = 40002,
        ECmdS2EStartPuertsVM = 40003,
        ECmdS2PMin = 60000,
        ECmdS2PMax = 69999,
        ECmd_MAX = 70000
    };

    enum class EPxKeyboardTypes : uint8_t //Enum PixUI.EPxKeyboardTypes
    {
        Default = 0,
        Number = 1,
        Password = 2,
        EPxKeyboardTypes_MAX = 3
    };

    enum class EPxWidgetTransformType : uint8_t //Enum PixUI.EPxWidgetTransformType
    {
        MoveBy = 0,
        MoveTo = 1,
        ResizeBy = 2,
        ResizeTo = 3,
        ScrollBy = 4,
        ScrollTo = 5,
        Count = 6,
        EPxWidgetTransformType_MAX = 7
    };

    enum class EPxLogLevels : uint8_t //Enum PixUI.EPxLogLevels
    {
        Log = 0,
        Warning = 1,
        Error = 2,
        Debug = 3,
        Count = 4,
        EPxLogLevels_MAX = 5
    };

    enum class EPxLogGroups : uint8_t //Enum PixUI.EPxLogGroups
    {
        Core = 0,
        Plugin = 1,
        Script = 2,
        Profiler = 3,
        Count = 4,
        EPxLogGroups_MAX = 5
    };

    enum class EPxDynamicTextureUpdateMode : uint8_t //Enum PixUI.EPxDynamicTextureUpdateMode
    {
        UpdateRegion = 0,
        UpdateBulkData = 1,
        EPxDynamicTextureUpdateMode_MAX = 2
    };

    enum class EPxKeyEventType : uint8_t //Enum PixUI.EPxKeyEventType
    {
        KeyDown = 0,
        KeyUp = 1,
        EPxKeyEventType_MAX = 2
    };

    enum class EPxTouchType : uint8_t //Enum PixUI.EPxTouchType
    {
        TouchStart = 0,
        TouchMoved = 1,
        TouchEnd = 2,
        TouchCanceled = 3,
        EPxTouchType_MAX = 4
    };

    enum class EPxDebugInfo : uint8_t //Enum PixUI.EPxDebugInfo
    {
        ShowMouse = 0,
        Count = 1,
        EPxDebugInfo_MAX = 2
    };

    enum class EPxWidgetBatchType : uint8_t //Enum PixUI.EPxWidgetBatchType
    {
        Default = 0,
        Auto = 1,
        NoBatch = 2,
        EPxWidgetBatchType_MAX = 3
    };

    enum class EMFClimateCelestialOrbitType : uint8_t //Enum MFClimateRuntime.EMFClimateCelestialOrbitType
    {
        Sun = 0,
        SunCounter = 1,
        Satellite = 2,
        Distant = 3,
        Manual = 4,
        EMFClimateCelestialOrbitType_MAX = 5
    };

    enum class EMFClimateCloudNoiseGroupTier : uint8_t //Enum MFClimateRuntime.EMFClimateCloudNoiseGroupTier
    {
        Desktop = 0,
        Mobile = 1,
        EMFClimateCloudNoiseGroupTier_MAX = 2
    };

    enum class EMFClimateNoiseType : uint8_t //Enum MFClimateRuntime.EMFClimateNoiseType
    {
        PerlinWorley = 0,
        WorleyCloud = 1,
        NRCCloud = 2,
        EMFClimateNoiseType_MAX = 3
    };

    enum class EMFClimateTickBudgetAdvice : uint8_t //Enum MFClimateRuntime.EMFClimateTickBudgetAdvice
    {
        DontTick = 0,
        Tick = 1,
        FullUpdate = 2,
        EMFClimateTickBudgetAdvice_MAX = 3
    };

    enum class EAutoAutoStepMode : uint8_t //Enum MFClimateRuntime.EAutoAutoStepMode
    {
        Close = 0,
        Fixed = 1,
        Custom = 2,
        EAutoAutoStepMode_MAX = 3
    };

    enum class EWeatherLayerEvaluationMode : uint8_t //Enum MFClimateRuntime.EWeatherLayerEvaluationMode
    {
        TimeOfDay = 0,
        SunAngle = 1,
        Constant = 2,
        NUM_EVALUATION_MODE = 3,
        EWeatherLayerEvaluationMode_MAX = 4
    };

    enum class EMFClimateCloudMaskType : uint8_t //Enum MFClimateRuntime.EMFClimateCloudMaskType
    {
        Normal = 0,
        FullCover = 1,
        EMFClimateCloudMaskType_MAX = 2
    };

    enum class EMFClimateGetFeatureErrorMode : uint8_t //Enum MFClimateRuntime.EMFClimateGetFeatureErrorMode
    {
        ReturnNull = 0,
        LogAndReturnNull = 1,
        Assert = 2,
        EMFClimateGetFeatureErrorMode_MAX = 3
    };

    enum class EEnvActorType : uint8_t //Enum MFEnvironment.EEnvActorType
    {
        EnvActorType_Water = 0,
        EnvActorType_Capsule = 1,
        EnvActorType_Mud = 2,
        EnvActorType_AutoExposure = 3,
        EnvActorType_MAX = 4
    };

    enum class EMFPhysFoliageMeshTypeEnum : uint8_t //Enum MFEnvironment.EMFPhysFoliageMeshTypeEnum
    {
        SkeletalMesh = 0,
        StaticMesh = 1,
        EditableMesh = 2,
        EMFPhysFoliageMeshTypeEnum_MAX = 3
    };

    enum class EMFEnvTrailShapeEnum : uint8_t //Enum MFEnvironment.EMFEnvTrailShapeEnum
    {
        None = 0,
        Circle = 1,
        Triangle = 2,
        EMFEnvTrailShapeEnum_MAX = 3
    };

    enum class ECharacterRecordDataType : uint8_t //Enum MFInputReplayTool.ECharacterRecordDataType
    {
        InputAxis = 0,
        InputTouch = 1,
        InputKey = 2,
        Clicked = 3,
        Pressed = 4,
        Released = 5,
        Hovered = 6,
        Unhovered = 7,
        State = 8,
        Move = 9,
        Pitch = 10,
        Yaw = 11,
        Roll = 12,
        CPitch = 13,
        CYaw = 14,
        CRoll = 15,
        TouchStart = 16,
        TouchEnd = 17,
        Scroll = 18,
        Endurance = 19,
        CharacterInfo = 20,
        ExecUE4Command = 21,
        GrabUIFeature = 22,
        DoLuaString = 23,
        RemoteSendBack = 24,
        KeyUp = 25,
        KeyDown = 26,
        KeyChar = 27,
        MouseButtonDown = 28,
        MouseButtonUp = 29,
        ECharacterRecordDataType_MAX = 30
    };

    enum class EAttachPosition : uint8_t //Enum SGFramework.EAttachPosition
    {
        Attach_Default = 0,
        Attach_Primary = 1,
        Attach_Secondary = 2,
        Attach_Pistol = 3,
        Attach_Melee = 4,
        Attach_Throwable = 5,
        Attach_Helmet = 6,
        Attach_Vest = 7,
        Attach_Bag = 8,
        Attach_BagIcon = 9,
        Attach_VestBag = 10,
        Attach_VestBagIcon = 11,
        Attach_PickBag = 12,
        Attach_Magazine = 13,
        Attach_AutoNoAttach = 14,
        Attach_DelayDecide = 15,
        Attach_OwnerWeapon = 16,
        Attach_WareHouseSlot = 17,
        Attach_Headset = 18,
        Attach_FaceCover = 19,
        Attach_EyeWear = 20,
        Attach_PocketIcon = 21,
        Attach_SafeBoxIcon = 22,
        Attach_Pocket = 23,
        Attach_SafeBox = 24,
        Attach_ArmBand = 25,
        Attach_DogTag = 26,
        Attach_KeyContainerIcon = 27,
        Attach_KeyContainer = 28,
        Attach_Avatar = 29,
        Attach_MultilayerContainer = 30,
        Attach_Shortcut1 = 40,
        Attach_Shortcut2 = 41,
        Attach_Shortcut3 = 42,
        Attach_Shortcut4 = 43,
        Attach_Shortcut5 = 44,
        Attach_Shortcut6 = 45,
        Attach_Shortcut7 = 46,
        Attach_NoOwner = 98,
        Attach_Auto = 99,
        Attach_MAX = 100
    };

    enum class ESGPickupSourceType : uint8_t //Enum SGFramework.ESGPickupSourceType
    {
        Default = 0,
        Discard = 1,
        ESGPickupSourceType_MAX = 2
    };

    enum class ESGInnerWeaponEvent : uint8_t //Enum SGFramework.ESGInnerWeaponEvent
    {
        EInnerEvent_None = 0,
        EStateEvent_SwitchToIdle = 1,
        EStateEvent_BeginEquip = 2,
        EStateEvent_BeginEquipEnd = 3,
        EStateEvent_EndEquip = 4,
        EStateEvent_EndUnEquip = 5,
        EStateEvent_BeginEquipWithCharge = 6,
        EStateEvent_PreFire = 7,
        EStateEvent_BeginKeepPreFire = 8,
        EStateEvent_EndKeepPreFire = 9,
        EStateEvent_TimeoutAutoFire = 10,
        EStateEvent_CancelFire = 11,
        EStateEvent_BeginFire = 12,
        EStateEvent_EndFire = 13,
        EStateEvent_BeginJumpFire = 14,
        EStateEvent_BeginKeepFire = 15,
        EStateEvent_EndKeepFire = 16,
        EStateEvent_FinalEndFire = 17,
        EStateEvent_BeginChangeClip = 18,
        EStateEvent_OpenBlotBeforeReloading = 19,
        EStateEvent_CloseBlotBeforeReloading = 20,
        EStateEvent_ChangeClip_HoldMagazineOnHand = 21,
        EStateEvent_ChangeClip_GetNewMagazineOnHand = 22,
        EStateEvent_ChangeClip_AttachNewMagazineToWeapon = 23,
        EStateEvent_EndChangeClip = 24,
        EStateEvent_ChangeClip_OneByOne_Begin = 25,
        EStateEvent_ChangeClip_OneByOne_BeginWithAmmoIn = 26,
        EStateEvent_ChangeClip_CloseBolt = 27,
        EStateEvent_ChangeClip_OneByOne_LoopBegin = 28,
        EStateEvent_ChangeClip_OneByOne_LoopEnd = 29,
        EStateEvent_ChangeClip_OneByOne_End = 30,
        EStateEvent_AbortChangeClip = 31,
        EStateEvent_SwitchToInactive = 32,
        EStateEvent_BeginInteraction = 33,
        EStateEvent_EndInteraction = 34,
        EStateEvent_EmptyClip = 35,
        EStateEvent_InstantHit = 36,
        EStateEvent_Kill = 37,
        EStateEvent_EndPullBolt = 38,
        EStateEvent_StartPullBolt = 39,
        EStateEvent_HammerCharged = 40,
        EStateEvent_TriggerOnHangup = 41,
        EStateEvent_TriggerWithChamber = 42,
        EStateEvent_TriggerWithChamberOpenBolt = 43,
        EStateEvent_TriggerWithNoChamber = 44,
        EStateEvent_StartHolding = 45,
        EStateEvent_EndHolding = 46,
        EStateEvent_FastReload_Begin = 47,
        EStateEvent_FastReload_HoldMagzine = 48,
        EStateEvent_FastReload_DettachMagazine = 49,
        EStateEvent_FastReload_AttachMagazine = 50,
        EStateEvent_BeginTacticalReload = 51,
        EStateEvent_TacticalReload_HoldMagazineOnHand = 52,
        EStateEvent_TacticalReload_GetNewMagazineOnHand = 53,
        EStateEvent_TacticalReload_AttachNewMagazineToWeapon = 54,
        EStateEvent_EndTacticalReload = 55,
        EStateEvent_BeginCheckWeapon = 56,
        EStateEvent_EndCheckWeapon = 57,
        EStateEvent_BeginCheckBore = 58,
        EStateEvent_BeginCheckBoreWithRemoveMag = 59,
        EStateEvent_EndCheckBore = 60,
        EStateEvent_BeginCheckFireMode = 61,
        EStateEvent_EndCheckFireMode = 62,
        EStateEvent_BeginCheckMagazine = 63,
        EStateEvent_EndCheckMagazine = 64,
        EStateEvent_UnloadMagazine = 65,
        EStateEvent_LoadMagazine = 66,
        EStateEvent_BeginHoldOpen = 67,
        EStateEvent_ReleaseHoldOpen = 68,
        EStateEvent_AmmoInBeginInHoldOpen = 69,
        EStateEvent_AmmoInBegin = 70,
        EStateEvent_AmmoIn = 71,
        EStateEvent_AmmoOutBegin = 72,
        EStateEvent_AmmoOutBeginInHoldOpen = 73,
        EStateEvent_AmmoOut = 74,
        EStateEvent_SwitchFireMode0 = 75,
        EStateEvent_SwitchFireMode1 = 76,
        EStateEvent_SwitchFireMode2 = 77,
        EStateEvent_SwitchFireModeEnd = 78,
        EStateEvent_BeginSetupMod = 79,
        EStateEvent_EndSetupMod = 80,
        EStateEvent_BagOpen = 81,
        EStateEvent_BeginBagOpen = 82,
        EStateEvent_EndBagOpen = 83,
        EStateEvent_EndPreFire = 84,
        EStateEvent_FastThrowPreFire = 85,
        EStateEvent_FastThrowBeginFire = 86,
        EInnerEvent_Max = 87,
        ESGInnerWeaponEvent_MAX = 88
    };

    enum class ECharacterEnduranceType : uint8_t //Enum SGFramework.ECharacterEnduranceType
    {
        Head = 0,
        Chest = 1,
        Stomach = 2,
        LeftArm = 3,
        RightArm = 4,
        LeftLeg = 5,
        RightLeg = 6,
        Max = 7,
        Max_Space = 8
    };

    enum class ESwitchWeaponIntentRejectReason : uint8_t //Enum SGFramework.ESwitchWeaponIntentRejectReason
    {
        None = 0,
        ServerNoSwitchWeaponAbility = 1,
        DestWeaponInvalid = 2,
        ESwitchWeaponIntentRejectReason_MAX = 3
    };

    enum class ECharacterHealthConditionType : uint8_t //Enum SGFramework.ECharacterHealthConditionType
    {
        Normal = 0,
        Injured = 1,
        NearlyDying = 2,
        Dying = 3,
        ECharacterHealthConditionType_MAX = 4
    };

    enum class ESGZoomType : uint8_t //Enum SGFramework.ESGZoomType
    {
        ESGZoomType_None = 0,
        ESGZoomType_WeaponZooming = 1,
        ESGZoomType_ShoulderZooming = 2,
        ESGZoomType_MAX = 3
    };

    enum class EHeadHitSubGroupType : uint8_t //Enum SGFramework.EHeadHitSubGroupType
    {
        HeadHitSubGroupType_None = 0,
        HeadHitSubGroupType_TopHead = 1,
        HeadHitSubGroupType_Eye = 2,
        HeadHitSubGroupType_Ear = 3,
        HeadHitSubGroupType_Face = 4,
        HeadHitSubGroupType_Chin = 5,
        HeadHitSubGroupType_Neck = 6,
        HeadHitSubGroupType_BackNeck = 7,
        HeadHitSubGroupType_MAX = 8
    };

    enum class EHitGroupType : uint8_t //Enum SGFramework.EHitGroupType
    {
        HitGroupType_None = 0,
        HitGroupType_Head = 1,
        HitGroupType_Neck = 2,
        HitGroupType_LeftShoulder = 3,
        HitGroupType_RightShoulder = 4,
        HitGroupType_ChestFront = 5,
        HitGroupType_ChestBack = 6,
        HitGroupType_WaistFront = 7,
        HitGroupType_WaistBack = 8,
        HitGroupType_Hip = 9,
        HitGroupType_LeftLeg = 10,
        HitGroupType_LeftLegLower = 11,
        HitGroupType_LeftFoot = 12,
        HitGroupType_RightLeg = 13,
        HitGroupType_RightLegLower = 14,
        HitGroupType_RightFoot = 15,
        HitGroupType_LeftArm = 16,
        HitGroupType_LeftForeArm = 17,
        HitGroupType_LeftHand = 18,
        HitGroupType_RightArm = 19,
        HitGroupType_RightForeArm = 20,
        HitGroupType_RightHand = 21,
        HitGroupType_MAX = 22
    };

    enum class EDamageTypeEnum : uint8_t //Enum SGFramework.EDamageTypeEnum
    {
        EDamageType_None = 0,
        EDamageType_GunWeapon = 1,
        EDamageType_MeleeWeapon = 2,
        EDamageType_ThrowingWeapon = 3,
        EDamageType_Trap = 4,
        EDamageType_Falling = 5,
        EDamageType_BoneBreakRun = 6,
        EDamageType_SpecialForDBNO = 7,
        EDamageType_BoneBreakLanded = 8,
        EDamageType_MAX = 9
    };

    enum class ESGDamageCauserType : uint8_t //Enum SGFramework.ESGDamageCauserType
    {
        ESGDamageCauserType_None = 0,
        ESGDamageCauserType_GunWeapon = 1,
        ESGDamageCauserType_MeleeWeapon = 2,
        ESGDamageCauserType_ThrowingWeapon = 3,
        ESGDamageCauserType_ThrowingWeaponBurn = 4,
        ESGDamageCauserType_OtherWeapon = 5,
        ESGDamageCauserType_Trap = 6,
        ESGDamageCauserType_Bleed = 7,
        ESGDamageCauserType_Burn = 8,
        ESGDamageCauserType_LackInFood = 9,
        ESGDamageCauserType_LackInMoisture = 10,
        ESGDamageCauserType_BoneBreakRun = 11,
        ESGDamageCauserType_Poison = 12,
        ESGDamageCauserType_TripMine = 13,
        ESGDamageCauserType_MAX = 14
    };

    enum class EFactionType : uint8_t //Enum SGFramework.EFactionType
    {
        None = 0,
        NormalPMC = 1,
        NormalScav = 2,
        PlayerScav = 3,
        RebelFaction = 4,
        LakeFaction = 5,
        GangsterFaction = 6,
        KurtTeam = 7,
        NavyFaction = 8,
        Blackgold = 9,
        Gnesk = 10,
        EFactionType_MAX = 11
    };

    enum class EPlayerPoseType : uint8_t //Enum SGFramework.EPlayerPoseType
    {
        PoseType_None = 0,
        PoseType_Stand = 1,
        PoseType_Crouch = 2,
        PoseType_Prone = 3,
        PoseType_LeanLeft = 4,
        PoseType_LeanRight = 5,
        PoseType_DBNO = 6,
        PoseType_Max = 7
    };

    enum class EWeaponLeanAimType : uint8_t //Enum SGFramework.EWeaponLeanAimType
    {
        EWeapLeanAimType_Center = 0,
        EWeapLeanAimType_Left = 1,
        EWeapLeanAimType_Right = 2,
        EWeapLeanAimType_MAX = 3
    };

    enum class ESlotEnum : uint8_t //Enum SGFramework.ESlotEnum
    {
        SE_Inspect = 0,
        SE_Use = 1,
        SE_Discard = 2,
        SE_MAX = 3
    };

    enum class EPlayerEndGameType : uint8_t //Enum SGFramework.EPlayerEndGameType
    {
        EPlayerEndGameType_None = 0,
        EPlayerEndGameType_Escaped = 1,
        EPlayerEndGameType_Died = 2,
        EPlayerEndGameType_MIA = 3,
        EPlayerEndGameType_Quit = 4,
        EPlayerEndGameType_NoReenter = 5,
        EPlayerEndGameType_HurriedlyEscaped = 6,
        EPlayerEndGameType_MAX = 7
    };

    enum class EDoorAction : uint8_t //Enum SGFramework.EDoorAction
    {
        NONE = 0,
        WRECK = 1,
        UNLOCK = 2,
        PUSH = 3,
        PULL = 4,
        WRECK_FAIL = 5,
        UNLOCK_CARD = 6,
        EDoorAction_MAX = 7
    };

    enum class ESGRecoveryAttributeType : uint8_t //Enum SGFramework.ESGRecoveryAttributeType
    {
        Endurence = 0,
        Food = 1,
        Moisture = 2,
        ESGRecoveryAttributeType_MAX = 3
    };

    enum class EWeaponEquipPosition : uint8_t //Enum SGFramework.EWeaponEquipPosition
    {
        EWeaponEquipPosition_None = 0,
        EWeaponEquipPosition_OnBack = 1,
        EWeaponEquipPosition_InHand = 2,
        EWeaponEquipPosition_InLeftHand = 3,
        EWeaponEquipPosition_MAX = 4
    };

    enum class ECharacterGameEffectType : uint8_t //Enum SGFramework.ECharacterGameEffectType
    {
        Clear = 0,
        Regeneration = 1,
        Excited = 2,
        Fortitude = 3,
        HearingEnhance = 4,
        OutOfEndurance = 5,
        Bleed = 6,
        LackInMoisture = 7,
        LackInFoodSlight = 8,
        LackInFoodMedium = 9,
        LackInFood = 10,
        Pain = 11,
        Tinnitus = 12,
        HearingReduce = 13,
        IsCompleteOverWeight = 14,
        IsOverWeight = 15,
        ActivityMark = 16,
        ActivityBeMarked = 17,
        BoneBreak = 18,
        TunnelVision = 19,
        Tremble = 20,
        FreshWound = 21,
        PainInhibite = 22,
        Trap = 23,
        Poison = 24,
        SlightTearGas = 25,
        MediumTearGas = 26,
        InhibiteTearGas = 27,
        Max = 28
    };

    enum class ECharacterDebuffType : uint8_t //Enum SGFramework.ECharacterDebuffType
    {
        Bleed = 0,
        BoneBreak = 1,
        OutOfEndurance = 2,
        Pain = 3,
        Max = 4
    };

    enum class ENetRole : uint8_t //Enum Engine.ENetRole
    {
        ROLE_None = 0,
        ROLE_SimulatedProxy = 1,
        ROLE_AutonomousProxy = 2,
        ROLE_Authority = 3,
        ROLE_MAX = 4
    };

    enum class EInventoryLockType : uint8_t //Enum SGFramework.EInventoryLockType
    {
        Selecting_Lock = 0,
        Useing_Lock = 1,
        EInventoryLockType_MAX = 2
    };

    enum class ESGThermalImagerType : uint8_t //Enum SGFramework.ESGThermalImagerType
    {
        None = 0,
        Headwear = 1,
        Scope = 2,
        ESGThermalImagerType_MAX = 3
    };

    enum class ESGInventoryParentType : uint8_t //Enum SGFramework.ESGInventoryParentType
    {
        None = 0,
        Assemble = 1,
        Container = 2,
        ESGInventoryParentType_MAX = 3
    };

    enum class ECharacterSex : uint8_t //Enum SGFramework.ECharacterSex
    {
        CharacterSex_None = 0,
        CharacterSex_Male = 1,
        CharacterSex_Female = 2,
        CharacterSex_MAX = 3
    };

    enum class ESGThrowSubType : uint8_t //Enum SGFramework.ESGThrowSubType
    {
        EThrowSubType_None = 0,
        EThrowSubType_FragGrenade = 1,
        EThrowSubType_StunGrenade = 2,
        EThrowSubType_SmokeGrenade = 3,
        EThrowSubType_MolotovCocktail = 4,
        EThrowSubType_C4 = 5,
        EThrowSubType_Flash = 6,
        EThrowSubType_FootSounder = 7,
        EThrowSubType_TearGas = 8,
        EThrowSubType_OffensiveGrenade = 9,
        EThrowSubType_TripMine = 10,
        EThrowSubType_ClaymoreMine = 11,
        EThrowSubType_SignalDetonator = 12,
        EThrowSubType_Max = 13
    };

    enum class ESGWeaponType : uint8_t //Enum SGFramework.ESGWeaponType
    {
        None = 0,
        EWeaponType_MainWeapon = 1,
        EWeaponType_AssistWeapon = 2,
        EWeaponType_MeleeWeapon = 3,
        EWeaponType_ThrowingWeapon = 4,
        EWeaponType_SpecialWeapon = 5,
        EWeaponType_EmptyHand = 6,
        EWeaponType_Max = 7,
        ESGWeaponType_MAX = 8
    };

    enum class ESGInteractEvent : uint8_t //Enum SGFramework.ESGInteractEvent
    {
        ESGInteractEvent_PickUp = 0,
        ESGInteractEvent_Loot = 1,
        ESGInteractEvent_Door = 2,
        ESGInteractEvent_Actor = 3,
        ESGInteractEvent_Max = 4
    };

    enum class ESGWeaponHoldGrenadeEvent : uint8_t //Enum SGFramework.ESGWeaponHoldGrenadeEvent
    {
        Holding = 0,
        NotHolding = 1,
        ESGWeaponHoldGrenadeEvent_MAX = 2
    };

    enum class ESGWeaponFiringEvent : uint8_t //Enum SGFramework.ESGWeaponFiringEvent
    {
        StartFiring = 0,
        StopFiring = 1,
        CancelFiring = 2,
        ESGWeaponFiringEvent_MAX = 3
    };

    enum class ESGDoorState : uint8_t //Enum SGFramework.ESGDoorState
    {
        OpenedInner = 0,
        OpenedOuter = 1,
        OpenedSlidingOut = 2,
        Closed = 3,
        ESGDoorState_MAX = 4
    };

    enum class ESGCardReaderDoorState : uint8_t //Enum SGFramework.ESGCardReaderDoorState
    {
        Unlock = 0,
        Locked = 1,
        UnLockCoolDown = 2,
        UnLockCountDown = 3,
        ESGCardReaderDoorState_MAX = 4
    };

    enum class EGraphAStarResult : uint8_t //Enum MFNPCAI.EGraphAStarResult
    {
        WaitToSearch = 0,
        SearchFail = 1,
        SearchInProgress = 2,
        SearchAborted = 3,
        SearchDone = 4,
        SearchSuccess = 5,
        GoalUnreachable = 6,
        InfiniteLoop = 7,
        NotFound = 8,
        RequestNotFound = 9,
        EGraphAStarResult_MAX = 10
    };

    enum class ENPCAIGoDirectlyResult : uint8_t //Enum MFNPCAI.ENPCAIGoDirectlyResult
    {
        Success = 0,
        ReachBoundary = 1,
        AIPawnNotFound = 2,
        ENPCAIGoDirectlyResult_MAX = 3
    };

    enum class ENPCAIPerceptibleTile : uint8_t //Enum MFNPCAI.ENPCAIPerceptibleTile
    {
        None = 0,
        Bomb = 1,
        Stun = 2,
        Smoke = 3,
        Molotov = 4,
        C4 = 5,
        Flash = 6,
        FootSounder = 7,
        TearGas = 8,
        OffensiveGrenade = 9,
        TripMine = 10,
        ClaymoreMine = 11,
        SignalDetonator = 12,
        CustomIndex = 13,
        DefaultArea = 14,
        AvoidanceArea = 15,
        ObstacleArea = 16,
        ParadropArea = 17,
        Unknown = 18,
        Max = 19
    };

    enum class ESGPlayerCondition : uint8_t //Enum SGFramework.ESGPlayerCondition
    {
        E_None = 0,
        E_Alive = 1,
        E_Escape = 2,
        E_Died = 3,
        E_Mia = 4,
        E_MAX = 5
    };

    enum class ESGPlayerFailCondition : uint8_t //Enum SGFramework.ESGPlayerFailCondition
    {
        E_DBNO = 0,
        E_DEATH = 1,
        E_IRREGULARDBNO = 2,
        E_IRREGULARDEATH = 3,
        E_MAX = 4
    };

    enum class ECharacterType : uint8_t //Enum SGFramework.ECharacterType
    {
        ECharacterType_None = 0,
        ECharacterType_PMC = 1,
        ECharacterType_SCAV = 2,
        ECharacterType_AI_SCAV = 3,
        ECharacterType_AI_SCAV_BOSS = 4,
        ECharacterType_AI_PMC = 5,
        ECharacterType_AI_ELIT = 6,
        ECharacterType_BOSS = 7,
        ECharacterType_AI_SCAV_Follower = 8,
        ECharacterType_MAX = 9
    };

    enum class EPlayerTeamType : uint8_t //Enum SGFramework.EPlayerTeamType
    {
        EPlayerTeamType_None = 0,
        EPlayerTeamType_PMC = 1,
        EPlayerTeamType_SCAV = 2,
        EPlayerTeamType_MAX = 3
    };

    enum class EAPIReportTypes : uint8_t //Enum SGFramework.EAPIReportTypes
    {
        E_None = 0,
        E_StruckDown = 1,
        E_TakeBossToken = 2,
        E_TakeGoldenItems = 3,
        E_MAX = 4
    };

    enum class EOBSpectateState : uint8_t //Enum SGFramework.EOBSpectateState
    {
        E_None = 0,
        E_WatchBattle = 1,
        E_FreeView = 2,
        E_MAX = 3
    };

    enum class ESGBagTipsType : uint8_t //Enum SGFramework.ESGBagTipsType
    {
        BagTipsType_Default = 0,
        BagTipsType_PickFail = 1,
        BagTipsType_PickSucess = 2,
        BagTipsType_PickSucessButDropOne = 3,
        BagTipsType_SwitchSucess = 4,
        BagTipsType_SwitchSucessButDropOne = 5,
        BagTipsType_SwitchFail = 6,
        BagTipsType_Overload = 7,
        BagTipsType_NotAllowed = 8,
        BagTipsType_NewBagNotAllowed = 9,
        BagTipsType_PickFailBagHasContent = 10,
        BagTipsType_ContainerStackOverflow = 11,
        BagTipsType_NoBagNoLegalOptionContainer = 12,
        BagTipsType_EquippedBagNotEnoughSpace = 13,
        BagTipsType_WishListFulfilled = 14,
        BagTipsType_WishListSellItemAdded = 15,
        BagTipsType_MAX = 16
    };

    enum class ETouchType : uint8_t //Enum InputCore.ETouchType
    {
        Began = 0,
        Moved = 1,
        Stationary = 2,
        ForceChanged = 3,
        FirstMove = 4,
        Ended = 5,
        NumTypes = 6,
        ETouchType_MAX = 7
    };

    enum class ESoundSourceType : uint8_t //Enum SGFramework.ESoundSourceType
    {
        None = 0,
        WALK = 1,
        SPRINTING = 2,
        PRONE = 3,
        CROUCH = 4,
        QUIET_STEP = 5,
        QUIET_STEP_PRONE = 6,
        QUIET_STEP_CROUCH = 7,
        RUB_GRASS = 8,
        NPC_YELL = 9,
        MildPoisoning = 10,
        ModeratePoisoning = 11,
        INJURED_BREATH = 12,
        NEAR_DEATH_BREATH = 13,
        OwnFootStepMaker = 14,
        OtherFootStepMaker = 15,
        FIRE_SINGLE = 16,
        FIRE_DARTLE = 17,
        FarawayGunSound = 18,
        EXPLOSION = 19,
        ChangeMag = 20,
        Heal = 21,
        DoorOperate = 22,
        DropEquipment = 23,
        BehaviorSwitch = 24,
        PlayerYell = 25,
        ActivityFootStepMaker = 26,
        InventoryContainer = 27,
        Landed = 28,
        MAX = 29
    };

    enum class EPhysicalSurface : uint8_t //Enum PhysicsCore.EPhysicalSurface
    {
        SurfaceType_Default = 0,
        SurfaceType1 = 1,
        SurfaceType2 = 2,
        SurfaceType3 = 3,
        SurfaceType4 = 4,
        SurfaceType5 = 5,
        SurfaceType6 = 6,
        SurfaceType7 = 7,
        SurfaceType8 = 8,
        SurfaceType9 = 9,
        SurfaceType10 = 10,
        SurfaceType11 = 11,
        SurfaceType12 = 12,
        SurfaceType13 = 13,
        SurfaceType14 = 14,
        SurfaceType15 = 15,
        SurfaceType16 = 16,
        SurfaceType17 = 17,
        SurfaceType18 = 18,
        SurfaceType19 = 19,
        SurfaceType20 = 20,
        SurfaceType21 = 21,
        SurfaceType22 = 22,
        SurfaceType23 = 23,
        SurfaceType24 = 24,
        SurfaceType25 = 25,
        SurfaceType26 = 26,
        SurfaceType27 = 27,
        SurfaceType28 = 28,
        SurfaceType29 = 29,
        SurfaceType30 = 30,
        SurfaceType31 = 31,
        SurfaceType32 = 32,
        SurfaceType33 = 33,
        SurfaceType34 = 34,
        SurfaceType35 = 35,
        SurfaceType36 = 36,
        SurfaceType37 = 37,
        SurfaceType38 = 38,
        SurfaceType39 = 39,
        SurfaceType40 = 40,
        SurfaceType41 = 41,
        SurfaceType42 = 42,
        SurfaceType43 = 43,
        SurfaceType44 = 44,
        SurfaceType45 = 45,
        SurfaceType46 = 46,
        SurfaceType47 = 47,
        SurfaceType48 = 48,
        SurfaceType49 = 49,
        SurfaceType50 = 50,
        SurfaceType51 = 51,
        SurfaceType52 = 52,
        SurfaceType53 = 53,
        SurfaceType54 = 54,
        SurfaceType55 = 55,
        SurfaceType56 = 56,
        SurfaceType57 = 57,
        SurfaceType58 = 58,
        SurfaceType59 = 59,
        SurfaceType60 = 60,
        SurfaceType61 = 61,
        SurfaceType62 = 62,
        SurfaceType_Max = 63,
        EPhysicalSurface_MAX = 64
    };

    enum class EInteractEventType : uint8_t //Enum SGFramework.EInteractEventType
    {
        EnableInteract = 0,
        DisableInteract = 1,
        Start = 2,
        Cancel = 3,
        Complete = 4,
        DestoryInteract = 5,
        EInteractEventType_MAX = 6
    };

    enum class EUseActorFailureReason : uint8_t //Enum SGFramework.EUseActorFailureReason
    {
        None = 0,
        UseInventory_NoEnduranceLoss = 1,
        UseInventory_NeedToCureOutOfEndurance = 2,
        UseInventory_NoNeedToCureBoneBreak = 3,
        UseInventory_NoNeedToCureBleed = 4,
        UseInventory_NoNeedToCureOutOfEndurance = 5,
        UseInventory_InsufficientDurabilityToCureOutOfEndurance = 6,
        UseInventory_InsufficientDurabilityToCureBoneBreak = 7,
        UseInventory_InsufficientDurabilityToCureBleed = 8,
        UseInventory_NotOwnInventory = 9,
        UseInventory_AlreadyUsingInventory = 10,
        GiveInventory_AlreadyHasOwner = 11,
        LootInventory_OutOfRange = 12,
        UseInventory_NoNumberOfUses = 13,
        UseInventory_NotInDBNO = 14,
        Others = 15,
        EUseActorFailureReason_MAX = 16
    };

    enum class ESGActionAbilityType : uint8_t //Enum SGFramework.ESGActionAbilityType
    {
        ESGActionAbilityType_Aim = 0,
        ESGActionAbilityType_Fire = 1,
        ESGActionAbilityType_SwitchWeapon = 2,
        ESGActionAbilityType_Reload = 3,
        ESGActionAbilityType_ReloadBores = 4,
        ESGActionAbilityType_ReloadOneByOne = 5,
        ESGActionAbilityType_SwitchFireMode = 6,
        ESGActionAbilityType_CheckMagazine = 7,
        ESGActionAbilityType_PullBolt = 8,
        ESGActionAbilityType_ReleaseHoldOpen = 9,
        ESGActionAbilityType_ThrowWeapon = 10,
        ESGActionAbilityType_HoldOpen = 11,
        ESGActionAbilityType_OpenBag = 12,
        ESGActionAbilityType_InteractWithDoor = 13,
        ESGActionAbilityType_MeleeFire = 14,
        ESGActionAbilityType_PickUp = 15,
        ESGActionAbilityType_Loot = 16,
        ESGActionAbilityType_ReloadOnHang = 17,
        ESGActionAbilityType_ReloadOneByOneOnHang = 18,
        ESGActionAbilityType_Rescue = 19,
        ESGActionAbilityType_FillMagazine = 20,
        ESGActionAbilityType_UnfillMagazine = 21,
        ESGActionAbilityType_EmptyTrigger = 22,
        ESGActionAbilityType_SetupAdapter = 23,
        ESGActionAbilityType_TurnInPlace = 24,
        ESGActionAbilityType_SetBipod = 25,
        ESGActionAbilityType_ToggleHeadwear = 26,
        ESGActionAbilityType_LowReady = 27,
        ESGActionAbilityType_RollUpBag = 28,
        ESGActionAbilityType_FoldStock = 29,
        ESGActionAbilityType_CloseBolt = 30,
        ESGActionAbilityType_ReloadBoresOnHang = 31,
        ESGActionAbilityType_InteractWithActor = 32,
        ESGActionAbilityType_ViewWeapon = 33,
        ESGActionAbilityType_Gesture = 34,
        ESGActionAbilityType_GestureTwoHand = 35,
        ESGActionAbilityType_GestureFullBody = 36,
        ESGActionAbilityType_ClimbLadder = 37,
        ESGActionAbilityType_BoresPump = 38,
        ESGActionAbilityType_MoveBlockAvoidance = 39,
        ESGActionAbilityType_FoldScope = 40,
        ESGActionAbilityType_HandLUseItem = 41,
        ESGActionAbilityType_WeaponRepair = 42,
        ESGActionAbilityType_PreviewPlace = 43,
        ESGActionAbilityType_DeliverCargo = 44,
        ESGActionAbilityType_RescueSelf = 45,
        ESGActionAbilityType_Spray = 46,
        ESGActionAbilityType_TacticalPistol = 47,
        ESGActionAbilityType_HoldBreath = 48,
        ESGActionAbilityType_ToggleCrouch = 49,
        ESGActionAbilityType_ToggleProne = 50,
        ESGActionAbilityType_CheckFireMode = 51,
        ESGActionAbilityType_CheckMagazineInBag = 52,
        ESGActionAbilityType_IncreaseZeroing = 53,
        ESGActionAbilityType_DecreaseZeroing = 54,
        ESGActionAbilityType_Jump = 55,
        ESGActionAbilityType_ToggleTactical = 56,
        ESGActionAbilityType_SwitchWeaponHD = 57,
        ESGActionAbilityType_SwitchScope = 58,
        ESGActionAbilityType_SwitchScopePattern = 59,
        ESGActionAbilityType_DropBag = 60,
        ESGActionAbilityType_Max = 61
    };

    enum class EShowVoiceAction : uint8_t //Enum SGFramework.EShowVoiceAction
    {
        AbortOthers = 0,
        KeepOthers = 1,
        EShowVoiceAction_MAX = 2
    };

    enum class EChaseActivityState : uint8_t //Enum SGFramework.EChaseActivityState
    {
        None = 0,
        ActivityInvNotSpawn = 1,
        FirstActivityInvSpawned = 2,
        BossAIDied = 3,
        FirstActivityInvCollected = 4,
        AllActivityInvDestroyed = 5,
        EChaseActivityState_MAX = 6
    };

    enum class EActivityInventoryState : uint8_t //Enum SGFramework.EActivityInventoryState
    {
        None = 0,
        Teammate = 1,
        Self = 2,
        Other = 3,
        EActivityInventoryState_MAX = 4
    };

    enum class EUAUIMode : uint8_t //Enum SGFramework.EUAUIMode
    {
        None = 0,
        Character = 1,
        VehicleDriver = 2,
        VehiclePassenger = 3,
        Bag = 4,
        BigMap = 5,
        Settlement = 6,
        GameOver = 7,
        EndGame = 8,
        OperationResult = 9,
        Spectating = 10,
        GameSettings = 11,
        Drone = 12,
        EscapeLocInfo = 13,
        AssembleWeapon = 14,
        CompetitionGameSpectating = 15,
        Preparations = 16,
        MessageBox = 17,
        TipsMessage = 18,
        EUAUIMode_MAX = 19
    };

    enum class EMobileInputPhase : uint8_t //Enum SGFramework.EMobileInputPhase
    {
        MobileInputPhase_Began = 0,
        MobileInputPhase_Moved = 1,
        MobileInputPhase_Stationary = 2,
        MobileInputPhase_Ended = 3,
        MobileInputPhase_Canceled = 4,
        MobileInputPhase_MAX = 5
    };

    enum class ESGWeaponShootingMode : uint8_t //Enum SGFramework.ESGWeaponShootingMode
    {
        EShootingMode_None = 0,
        EShootingMode_Semi = 1,
        EShootingMode_Auto = 2,
        EShootingMode_Burst = 3,
        EShootingMode_MAX = 4
    };

    enum class EInteractionActorType : uint8_t //Enum SGFramework.EInteractionActorType
    {
        None = 0,
        Door = 1,
        PoisonGas = 2,
        SceneGasGate = 3,
        EInteractionActorType_MAX = 4
    };

    enum class EGetOutOfStuckResult : uint8_t //Enum SGFramework.EGetOutOfStuckResult
    {
        Success = 0,
        IsNotStuck = 1,
        CannotFindLocation = 2,
        NoChance = 3,
        OtherFailReason = 4,
        EGetOutOfStuckResult_MAX = 5
    };

    enum class EInventoryInteractionType : uint8_t //Enum SGFramework.EInventoryInteractionType
    {
        None = 0,
        Fill = 1,
        FillExtra = 2,
        UnFill = 3,
        Use = 4,
        Reload = 5,
        ReloadBores = 6,
        ReloadOneByOne = 7,
        ReloadOneByOneHang = 8,
        ReloadBoresOnHang = 9,
        SetupAdapter = 10,
        CheckMagazine = 11,
        RollUpBag = 12,
        FoldStock = 13,
        FoldScope = 14,
        RepairWeapon = 15,
        SetupArmorAdapter = 16,
        ViewWeapon = 17,
        CheckMagazineInBag = 18,
        SwitchWeapon = 19,
        PullBolt = 20,
        SwitchFireMode = 21,
        EInventoryInteractionType_MAX = 22
    };

    enum class EThunderstormStage : uint8_t //Enum SGFramework.EThunderstormStage
    {
        None = 0,
        Begin = 1,
        ReachtoPeak = 2,
        Fade = 3,
        End = 4,
        EThunderstormStage_MAX = 5
    };

    enum class EBattleLeaveReason : uint32_t //Enum SGFramework.EBattleLeaveReason
    {
        Normal = 0,
        Dead = 1,
        GameOver = 2,
        TargetLost = 3,
        Unknown = 255,
        EBattleLeaveReason_MAX = 256
    };

    enum class EContainerIteractAnimState : uint8_t //Enum SGFramework.EContainerIteractAnimState
    {
        Closed = 0,
        Opening = 1,
        Opened = 2,
        Closing = 3,
        EContainerIteractAnimState_MAX = 4
    };

    enum class ESGRescueUIType : uint8_t //Enum SGFramework.ESGRescueUIType
    {
        NONE = 0,
        SearchingRescueTarget = 1,
        StartOrEndBeingRescued = 2,
        CanRescueSelf = 3,
        ESGRescueUIType_MAX = 4
    };

    enum class ERescueFailureReason : uint8_t //Enum SGFramework.ERescueFailureReason
    {
        None = 0,
        Rescue_TeamMateIsBeingRescued = 1,
        Rescue_TeamMateIsBeingRescuedBySelf = 2,
        Others = 3,
        ERescueFailureReason_MAX = 4
    };

    enum class EDeathDropType : uint8_t //Enum SGFramework.EDeathDropType
    {
        DeathDrop_Normal = 0,
        DeathDrop_RewardBox = 1,
        DeathDrop_MAX = 2
    };

    enum class EUseInventoryPhase : uint8_t //Enum SGFramework.EUseInventoryPhase
    {
        Start = 0,
        Cancel = 1,
        Complete = 2,
        EUseInventoryPhase_MAX = 3
    };

    enum class ESGInventorySpawnSourceType : uint8_t //Enum SGFramework.ESGInventorySpawnSourceType
    {
        Default = 0,
        LootPoint = 1,
        CharaterTakeIn = 2,
        AIEquipPoolRandom = 3,
        Merge = 4,
        UnfillContainer = 5,
        DuplicationDropConvert = 6,
        InBattleGiveItem = 7,
        EditorDefaultInventory = 8,
        GMCheat = 9,
        QuestActionSpawn = 10,
        ReplaceDrop = 11,
        LootPointGuarantee = 12,
        Gashapon = 13,
        WeaponBuild = 14,
        ESGInventorySpawnSourceType_MAX = 15
    };

    enum class ESGSimulatedProgressAbilityType : uint8_t //Enum SGFramework.ESGSimulatedProgressAbilityType
    {
        None = 0,
        UsingInventory = 1,
        RescuingTeammate = 2,
        BeingRescued = 3,
        FillContainer = 4,
        UnfillContainer = 5,
        Max = 6
    };

    enum class EWatchGameState : uint8_t //Enum SGFramework.EWatchGameState
    {
        EWatchGame_None = 0,
        EWatchGame_Watching = 1,
        EWatchGame_ResultUI = 2,
        EWatchGame_MAX = 3
    };

    enum class ESGInventoryType : uint8_t //Enum SGFramework.ESGInventoryType
    {
        None = 0,
        Weapon = 1,
        WeaponAdapter = 2,
        Ammo = 3,
        Armor = 4,
        Recovery = 5,
        Mybag = 6,
        Vestbag = 7,
        CorpseContainer = 8,
        LootContainer = 9,
        Avatar = 10,
        Safe = 11,
        Pocket = 12,
        Badge = 13,
        Item = 14,
        ESGInventoryType_MAX = 15
    };

    enum class ESGUIOperationForSpectating : uint8_t //Enum SGFramework.ESGUIOperationForSpectating
    {
        OP_Loot = 0,
        OP_OpenBag = 1,
        OP_LifeState = 2,
        OP_OpenMap = 3,
        OP_LootRewardBox = 4,
        OP_LootScavBox = 5,
        OP_MAX = 6
    };

    enum class EPullBoltFailureReason : uint8_t //Enum SGFramework.EPullBoltFailureReason
    {
        EPullBoltFailureReason_None = 0,
        EPullBoltFailureReason_BoresFull = 1,
        EPullBoltFailureReason_MagEmpty = 2,
        EPullBoltFailureReason_MAX = 3
    };

    enum class EGashaponGearsType : uint8_t //Enum SGFramework.EGashaponGearsType
    {
        GashaponGears_None = 0,
        GashaponGears_One = 1,
        GashaponGears_Two = 2,
        GashaponGears_Three = 3,
        GashaponGears_Four = 4,
        GashaponGears_Five = 5,
        GashaponGears_Six = 6,
        GashaponGears_Seven = 7,
        GashaponGears_Eight = 8,
        GashaponGears_Nine = 9,
        GashaponGears_Max = 10
    };

    enum class ENetDormancy : uint8_t //Enum Engine.ENetDormancy
    {
        DORM_Never = 0,
        DORM_Awake = 1,
        DORM_DormantAll = 2,
        DORM_DormantPartial = 3,
        DORM_Initial = 4,
        DORM_MAX = 5
    };

    enum class EAutoReceiveInput : uint8_t //Enum Engine.EAutoReceiveInput
    {
        Disabled = 0,
        Player0 = 1,
        Player1 = 2,
        Player2 = 3,
        Player3 = 4,
        Player4 = 5,
        Player5 = 6,
        Player6 = 7,
        Player7 = 8,
        EAutoReceiveInput_MAX = 9
    };

    enum class ESpawnActorCollisionHandlingMethod : uint8_t //Enum Engine.ESpawnActorCollisionHandlingMethod
    {
        Undefined = 0,
        AlwaysSpawn = 1,
        AdjustIfPossibleButAlwaysSpawn = 2,
        AdjustIfPossibleButDontSpawnIfColliding = 3,
        DontSpawnIfColliding = 4,
        ESpawnActorCollisionHandlingMethod_MAX = 5
    };

    enum class ERotatorQuantization : uint8_t //Enum Engine.ERotatorQuantization
    {
        ByteComponents = 0,
        ShortComponents = 1,
        ERotatorQuantization_MAX = 2
    };

    enum class EVectorQuantization : uint8_t //Enum Engine.EVectorQuantization
    {
        RoundWholeNumber = 0,
        RoundOneDecimal = 1,
        RoundTwoDecimals = 2,
        EVectorQuantization_MAX = 3
    };

    enum class EActorUpdateOverlapsMethod : uint8_t //Enum Engine.EActorUpdateOverlapsMethod
    {
        UseConfigDefault = 0,
        AlwaysUpdate = 1,
        OnlyUpdateMovable = 2,
        NeverUpdate = 3,
        EActorUpdateOverlapsMethod_MAX = 4
    };

    enum class ECameraShakePlaySpace : uint8_t //Enum Engine.ECameraShakePlaySpace
    {
        CameraLocal = 0,
        World = 1,
        UserDefined = 2,
        ECameraShakePlaySpace_MAX = 3
    };

    enum class EViewTargetBlendFunction : uint8_t //Enum Engine.EViewTargetBlendFunction
    {
        VTBlend_Linear = 0,
        VTBlend_Cubic = 1,
        VTBlend_EaseIn = 2,
        VTBlend_EaseOut = 3,
        VTBlend_EaseInOut = 4,
        VTBlend_MAX = 5
    };

    enum class ETravelType : uint8_t //Enum Engine.ETravelType
    {
        TRAVEL_Absolute = 0,
        TRAVEL_Partial = 1,
        TRAVEL_Relative = 2,
        TRAVEL_MAX = 3
    };

    enum class ECollisionChannel : uint8_t //Enum Engine.ECollisionChannel
    {
        ECC_WorldStatic = 0,
        ECC_WorldDynamic = 1,
        ECC_Pawn = 2,
        ECC_Visibility = 3,
        ECC_Camera = 4,
        ECC_PhysicsBody = 5,
        ECC_Vehicle = 6,
        ECC_Destructible = 7,
        ECC_EngineTraceChannel1 = 8,
        ECC_EngineTraceChannel2 = 9,
        ECC_EngineTraceChannel3 = 10,
        ECC_EngineTraceChannel4 = 11,
        ECC_EngineTraceChannel5 = 12,
        ECC_EngineTraceChannel6 = 13,
        ECC_GameTraceChannel1 = 14,
        ECC_GameTraceChannel2 = 15,
        ECC_GameTraceChannel3 = 16,
        ECC_GameTraceChannel4 = 17,
        ECC_GameTraceChannel5 = 18,
        ECC_GameTraceChannel6 = 19,
        ECC_GameTraceChannel7 = 20,
        ECC_GameTraceChannel8 = 21,
        ECC_GameTraceChannel9 = 22,
        ECC_GameTraceChannel10 = 23,
        ECC_GameTraceChannel11 = 24,
        ECC_GameTraceChannel12 = 25,
        ECC_GameTraceChannel13 = 26,
        ECC_GameTraceChannel14 = 27,
        ECC_GameTraceChannel15 = 28,
        ECC_GameTraceChannel16 = 29,
        ECC_GameTraceChannel17 = 30,
        ECC_GameTraceChannel18 = 31,
        ECC_OverlapAll_Deprecated = 32,
        ECC_MAX = 33
    };

    enum class EControllerAnalogStick : uint8_t //Enum Engine.EControllerAnalogStick
    {
        CAS_LeftStick = 0,
        CAS_RightStick = 1,
        CAS_MAX = 2
    };

    enum class EDynamicForceFeedbackAction : uint8_t //Enum Engine.EDynamicForceFeedbackAction
    {
        Start = 0,
        Update = 1,
        Stop = 2,
        EDynamicForceFeedbackAction_MAX = 3
    };

    enum class EControllerHand : uint8_t //Enum InputCore.EControllerHand
    {
        Left = 0,
        Right = 1,
        AnyHand = 2,
        Pad = 3,
        ExternalCamera = 4,
        Gun = 5,
        Special_2 = 6,
        Special_3 = 7,
        Special_4 = 8,
        Special_5 = 9,
        Special_6 = 10,
        Special_7 = 11,
        Special_8 = 12,
        Special_9 = 13,
        Special_10 = 14,
        Special_11 = 15,
        Special_12 = 16,
        ControllerHand_Count = 17,
        EControllerHand_MAX = 18
    };

    enum class EPathFollowingResult : uint8_t //Enum AIModule.EPathFollowingResult
    {
        Success = 0,
        Blocked = 1,
        OffPath = 2,
        Aborted = 3,
        Skipped_DEPRECATED = 4,
        Invalid = 5,
        EPathFollowingResult_MAX = 6
    };

    enum class EEnvQueryStatus : uint8_t //Enum AIModule.EEnvQueryStatus
    {
        Processing = 0,
        Success = 1,
        Failed = 2,
        Aborted = 3,
        OwnerLost = 4,
        MissingParam = 5,
        EEnvQueryStatus_MAX = 6
    };

    enum class EPathFollowingRequestResult : uint8_t //Enum AIModule.EPathFollowingRequestResult
    {
        Failed = 0,
        AlreadyAtGoal = 1,
        RequestSuccessful = 2,
        EPathFollowingRequestResult_MAX = 3
    };

    enum class EVolumeType : uint8_t //Enum SGFramework.EVolumeType
    {
        EVolumeType_Box = 0,
        EVolumeType_Sphere = 1,
        EVolumeType_RoundBox = 2,
        EVolumeType_Max = 3
    };

    enum class EQTEType : uint8_t //Enum SGFramework.EQTEType
    {
        QTEType_TwoChatacter = 0,
        QTEType_SingleCharacter = 1,
        QTEType_WithSceneObject = 2,
        QTEType_MAX = 3
    };

    enum class EQTEStep : uint8_t //Enum SGFramework.EQTEStep
    {
        QTEStep_None = 0,
        QTEStep_PreReady = 1,
        QTEStep_Ready = 2,
        QTEStep_Action = 3,
        QTEStep_WaitInput = 4,
        QTEStep_Interrupt = 5,
        QTEStep_Finish = 6,
        QTEStep_MAX = 7
    };

    enum class EDelayReason : uint8_t //Enum SGFramework.EDelayReason
    {
        None = 0,
        TcaticalPistolTransition = 1,
        EDelayReason_MAX = 2
    };

    enum class ESGInventoryChildConfigOperation : uint8_t //Enum SGFramework.ESGInventoryChildConfigOperation
    {
        And = 0,
        Or = 1,
        ESGInventoryChildConfigOperation_MAX = 2
    };

    enum class ESGRadiusCheckType : uint8_t //Enum SGFramework.ESGRadiusCheckType
    {
        None = 0,
        Sphere = 1,
        Box = 2,
        Cylinder = 3,
        ESGRadiusCheckType_MAX = 4
    };

    enum class Enum_RotationState : uint8_t //Enum SGFramework.Enum_RotationState
    {
        None = 0,
        StartRatation = 1,
        ForWarding = 2,
        EndRatation = 3,
        BackWarding = 4,
        Enum_MAX = 5
    };

    enum class EAISpawnStep : uint8_t //Enum SGFramework.EAISpawnStep
    {
        AISpawnStep_NotReady = 0,
        AISpawnStep_Begin = 1,
        AISpawnStep_PMCAI = 2,
        AISpawnStep_Boss = 3,
        AISpawnStep_Boss_BeforeGame = 4,
        AISpawnStep_ScavAI_BeforeGame = 5,
        AISpawnStep_PlayerScavAI = 6,
        AISpawnStep_ScavAI = 7,
        AISpawnStep_WaitForGame = 8,
        AISpawnStep_End = 9,
        AISpawnStep_MAX = 10
    };

    enum class EAIRemoveReason : uint8_t //Enum SGFramework.EAIRemoveReason
    {
        ENone = 0,
        EPressureBalance = 1,
        ETooManyAIInSquad = 2,
        ETooManyAIInMap = 3,
        EWaitOutOfTime = 4,
        EAIRemoveReason_MAX = 5
    };

    enum class EAICharacterPriority : uint8_t //Enum SGFramework.EAICharacterPriority
    {
        EHigh = 0,
        ENormal = 1,
        ELow = 2,
        EPendingRemove = 3,
        EToRemove = 4,
        EInvalid = 5,
        EAICharacterPriority_MAX = 6
    };

    enum class ESpawnReason : uint8_t //Enum SGFramework.ESpawnReason
    {
        Normal = 0,
        AlarmDevice = 1,
        PlayerEnter = 2,
        ByVector = 3,
        BySpawnPoint = 4,
        ESpawnReason_MAX = 5
    };

    enum class EAIState : uint8_t //Enum SGFramework.EAIState
    {
        AIPawnState_None = 0,
        AIPawnState_Wander = 1,
        AIPawnState_ChasePlayer = 2,
        AIPawnState_MAX = 3
    };

    enum class ESGEnterLoopLeaveState : uint8_t //Enum SGFramework.ESGEnterLoopLeaveState
    {
        ELLSM_None = 0,
        ELLSM_Entering = 1,
        ELLSM_EnteringReverse = 2,
        ELLSM_Leaving = 3,
        ELLSM_LeavingReverse = 4,
        ELLSM_Entered = 5,
        ELLSM_MAX = 6
    };

    enum class EAdapterAnimationType : uint8_t //Enum SGFramework.EAdapterAnimationType
    {
        AdapterAnim_None = 0,
        AdapterAnim_BeltOut = 1,
        AdapterAnim_BeltIn = 2,
        AdapterAnim_BipodOn = 3,
        AdapterAnim_BipodOff = 4,
        AdapterAnim_CheckMag = 5,
        AdapterAnim_Fire = 6,
        AdapterAnim_ScopeSwitch = 7,
        AdapterAnim_ScopeSwitchBack = 8,
        AdapterAnim_FoldIronSight = 9,
        AdapterAnim_UnFoldIronSight = 10,
        AdapterAnim_MAX = 11
    };

    enum class ETakeCoverLeanAnimType : uint8_t //Enum SGFramework.ETakeCoverLeanAnimType
    {
        LeanRight = 0,
        LeanLeft = 1,
        ETakeCoverLeanAnimType_MAX = 2
    };

    enum class ECharacterBattleStateType : uint8_t //Enum SGFramework.ECharacterBattleStateType
    {
        ECharacterBattleStateType_JoinTeam = 0,
        ECharacterBattleStateType_Idle = 1,
        ECharacterBattleStateType_MatchStart = 2,
        ECharacterBattleStateType_LeaveTeam = 3,
        ECharacterBattleStateType_MAX = 4
    };

    enum class E1PRelaxType : uint8_t //Enum SGFramework.E1PRelaxType
    {
        E1PRelaxType_None = 0,
        E1PRelaxType_Idle = 1,
        E1PRelaxType_WeaponSway = 2,
        E1PRelaxType_CloseADS = 3,
        E1PRelaxType_MAX = 4
    };

    enum class EMovingCardinalTP : uint8_t //Enum SGFramework.EMovingCardinalTP
    {
        Forward = 0,
        Left = 1,
        Backward = 2,
        Right = 3,
        EMovingCardinalTP_MAX = 4
    };

    enum class EJumpState : uint8_t //Enum SGFramework.EJumpState
    {
        JumpState_None = 0,
        JumpState_PreJump = 1,
        JumpState_InAir = 2,
        JumpState_JumpEnd = 3,
        JumpState_MAX = 4
    };

    enum class ETacticalPistolAnimationType : uint8_t //Enum SGFramework.ETacticalPistolAnimationType
    {
        None = 0,
        IdleToTactical = 1,
        TacticalToMainWeapon = 2,
        TacticalToPistol = 3,
        TacticalToPistol_Fast = 4,
        TacticalPutDown = 5,
        ETacticalPistolAnimationType_MAX = 6
    };

    enum class EFallingAnimType : uint8_t //Enum SGFramework.EFallingAnimType
    {
        None = 0,
        Low = 1,
        Medium = 2,
        High = 3,
        EFallingAnimType_MAX = 4
    };

    enum class ERootYawOffsetMode : uint8_t //Enum SGFramework.ERootYawOffsetMode
    {
        Accumlate = 0,
        Hold = 1,
        BlendOut = 2,
        ERootYawOffsetMode_MAX = 3
    };

    enum class ETurnInPlaceState : uint8_t //Enum SGFramework.ETurnInPlaceState
    {
        Idle = 0,
        TurnInPlaceRotation = 1,
        TurnInPlaceRecovery = 2,
        ETurnInPlaceState_MAX = 3
    };

    enum class ELocomotionType : uint8_t //Enum SGFramework.ELocomotionType
    {
        Normal = 0,
        Fracture = 1,
        ELocomotionType_MAX = 2
    };

    enum class EAnimTransitionState : uint8_t //Enum SGFramework.EAnimTransitionState
    {
        None = 0,
        Stand_To_Prone = 1,
        Prone_To_Stand = 2,
        Crouch_To_Prone = 3,
        Prone_To_Crouch = 4,
        Sprint_To_Prone = 5,
        Sprint_To_Crouch = 6,
        Sprint_To_Stand = 7,
        Stand_To_Sprint = 8,
        Stand_To_Run = 9,
        Run_To_Stand = 10,
        Stand_To_Casual = 11,
        Casual_To_Stand = 12,
        Sprint_To_Crouch_Sliding = 13,
        Sprint_To_Run = 14,
        Sprint_To_Stand_ByInertance_Left = 15,
        Sprint_To_Stand_ByInertance_Right = 16,
        Stand_To_Crouch = 17,
        Crouch_To_Stand = 18,
        EAnimTransitionState_MAX = 19
    };

    enum class EAnimSpeedType : uint8_t //Enum SGFramework.EAnimSpeedType
    {
        StandWalkF = 0,
        StandWalkB = 1,
        StandRunF = 2,
        StandRunB = 3,
        StandSprint = 4,
        CrouchWalk = 5,
        CrouchRunF = 6,
        CrouchRunB = 7,
        Max = 8
    };

    enum class EAnimStance : uint8_t //Enum SGFramework.EAnimStance
    {
        Stand = 0,
        Crouch = 1,
        Prone = 2,
        DBNO = 3,
        Max = 4
    };

    enum class EMovementStance : uint8_t //Enum SGFramework.EMovementStance
    {
        Idle = 0,
        Walk = 1,
        Run = 2,
        Sprint = 3,
        EMovementStance_MAX = 4
    };

    enum class EWeaponType : uint8_t //Enum SGFramework.EWeaponType
    {
        Unarmed = 0,
        Rifle = 1,
        Pistol = 2,
        Throwable = 3,
        Melle = 4,
        EWeaponType_MAX = 5
    };

    enum class ECameraAnimatedScaler : uint8_t //Enum SGFramework.ECameraAnimatedScaler
    {
        ECameraAnimatedScaler_Large = 0,
        ECameraAnimatedScaler_Small = 1,
        ECameraAnimatedScaler_None = 2,
        ECameraAnimatedScaler_MAX = 3
    };

    enum class ECameraShakeAxis : uint8_t //Enum SGFramework.ECameraShakeAxis
    {
        ECameraShakeAxis_X = 0,
        ECameraShakeAxis_Y = 1,
        ECameraShakeAxis_Z = 2,
        ECameraShakeAxis_Pitch = 3,
        ECameraShakeAxis_Yaw = 4,
        ECameraShakeAxis_Roll = 5,
        ECameraShakeAxis_FOV = 6,
        ECameraShakeAxis_MAX = 7
    };

    enum class ELandingTypes : uint8_t //Enum SGFramework.ELandingTypes
    {
        LandingTypes_None = 0,
        LandingTypes_Light = 1,
        LandingTypes_Heavy = 2,
        LandingTypes_Death = 3,
        LandingTypes_MAX = 4
    };

    enum class ECameraViewportTypes : uint8_t //Enum SGFramework.ECameraViewportTypes
    {
        CVT_16to9_Full = 0,
        CVT_16to9_VertSplit = 1,
        CVT_16to9_HorizSplit = 2,
        CVT_4to3_Full = 3,
        CVT_4to3_HorizSplit = 4,
        CVT_4to3_VertSplit = 5,
        CVT_Max = 6
    };

    enum class EAISpecialAudioEvt : uint8_t //Enum SGFramework.EAISpecialAudioEvt
    {
        None = 0,
        HitGrunt = 1,
        DeathGrunt = 2,
        EAISpecialAudioEvt_MAX = 3
    };

    enum class EDBNOEndReason : uint8_t //Enum SGFramework.EDBNOEndReason
    {
        DBNOEndReason_None = 0,
        DBNOEndReason_BeRescuered = 1,
        DBNOEndReason_BeKilledByOthers = 2,
        DBNOEndReason_LostEndurance = 3,
        DBNOEndReason_MAX = 4
    };

    enum class ECharacterFoodStateType : uint8_t //Enum SGFramework.ECharacterFoodStateType
    {
        Normal = 0,
        SlightLackInFood = 1,
        MediumLackInFood = 2,
        HeavyLackInFood = 3,
        ECharacterFoodStateType_MAX = 4
    };

    enum class EFootEffectDir : uint8_t //Enum SGFramework.EFootEffectDir
    {
        None = 0,
        Left = 1,
        Right = 2,
        EFootEffectDir_MAX = 3
    };

    enum class ESGMaxSpeedFactor : uint32_t //Enum SGFramework.ESGMaxSpeedFactor
    {
        None = 0,
        MaxSpeedFactor_StandSprintAngleSpeedSamples = 1,
        MaxSpeedFactor_MaxCrouchSprintSpeed = 2,
        MaxSpeedFactor_MaxStandSprintSpeed = 4,
        MaxSpeedFactor_MoveRatioForWeapon = 8,
        MaxSpeedFactor_MaxCrouchSprintExhaustedSpeed = 16,
        MaxSpeedFactor_MaxStandSprintExhaustedSpeed = 32,
        MaxSpeedFactor_MaxStandSilentWalkSpeed = 64,
        MaxSpeedFactor_StandRunAngleSpeedSamples = 128,
        MaxSpeedFactor_StandSilentWalkSpeedScale = 256,
        MaxSpeedFactor_MaxProneBackwardSpeed = 512,
        MaxSpeedFactor_MaxProneStrafeSpeed = 1024,
        MaxSpeedFactor_MaxDBNOBackwardSpeed = 2048,
        MaxSpeedFactor_MaxDBNOStrafeSpeed = 4096,
        MaxSpeedFactor_MaxCrouchBackwardSpeed = 8192,
        MaxSpeedFactor_MaxCrouchStrafeSpeed = 16384,
        MaxSpeedFactor_InTrap = 32768,
        MaxSpeedFactor_MaxStandBackwardSpeed = 65536,
        MaxSpeedFactor_MaxStandStrafeSpeed = 131072,
        MaxSpeedFactor_StandLeanWalkSpeedScale = 262144,
        MaxSpeedFactor_SlopeFactor = 524288,
        MaxSpeedFactor_WeaponMovingScale = 1048576,
        MaxSpeedFactor_StunEffectMovementSpeedScale = 2097152,
        MaxSpeedFactor_OverWeightSpeedScale = 4194304,
        MaxSpeedFactor_AbilityMovementSpeedScale = 8388608,
        MaxSpeedFactor_MovementSpeedScaleWhenLegOutOfEndurance = 16777216,
        MaxSpeedFactor_MovementForbiddenScale = 33554432,
        MaxSpeedFactor_CalTakeDamageMovementScale = 67108864,
        MaxSpeedFactor_SprintMaxSpeedLowerLimit = 134217728,
        MaxSpeedFactor_Reserve28 = 268435456,
        MaxSpeedFactor_Reserve29 = 536870912,
        MaxSpeedFactor_Reserve30 = 1073741824,
        MaxSize = 1073741825,
        ESGMaxSpeedFactor_MAX = 1073741826
    };

    enum class ELadderClimbingInputType : uint8_t //Enum SGFramework.ELadderClimbingInputType
    {
        None = 0,
        Up = 1,
        Down = 2,
        Jump = 3,
        ELadderClimbingInputType_MAX = 4
    };

    enum class ELadderClimbingDirectionType : uint8_t //Enum SGFramework.ELadderClimbingDirectionType
    {
        None = 0,
        Left = 1,
        Right = 2,
        Forward = 3,
        Backward = 4,
        ELadderClimbingDirectionType_MAX = 5
    };

    enum class ELadderClimbingStateType : uint8_t //Enum SGFramework.ELadderClimbingStateType
    {
        None = 0,
        Enter = 1,
        Exit = 2,
        Loop = 3,
        Idle = 4,
        Max = 5
    };

    enum class EVaultFailReason : uint8_t //Enum SGFramework.EVaultFailReason
    {
        EVaultFailReason_None = 0,
        EVaultFailReason_NotEnoughRoomToStand = 1,
        EVaultFailReason_ExceedMaxFloorAngleToStand = 2,
        EVaultFailReason_ExceedApexPointAdjustmentMaxErrorTolerance = 3,
        EVaultFailReason_NotEnoughRoomToPass = 4,
        EVaultFailReason_ServerValidationFailedAndRollBack = 5,
        EVaultFailReason_VaultPathDistanceTooFar = 6,
        EVaultFailReason_VaultPathDistanceTooShort = 7,
        EVaultFailReason_VaultHeightLowThanThreshold = 8,
        EVaultFailReason_VaultHeightHighThanThreshold = 9,
        EVaultFailReason_NoObstacle = 10,
        EVaultFailReason_ExceedAngleTowardsObstacleTolerance = 11,
        EVaultFailReason_VaultPathBlockHit = 12,
        EVaultFailReason_Unknown = 13,
        EVaultFailReason_MAX = 14
    };

    enum class EObstacleHeightLevel : uint8_t //Enum SGFramework.EObstacleHeightLevel
    {
        EObstacleHeight_None = 0,
        EObstacleHeight_Low = 1,
        EObstacleHeight_High = 2,
        EObstacleHeight_MAX = 3
    };

    enum class EVaultChoice : uint8_t //Enum SGFramework.EVaultChoice
    {
        EChoice_None = 0,
        EChoice_Climb = 1,
        EChoice_Vault = 2,
        EChoice_MAX = 3
    };

    enum class EVaultPhase : uint8_t //Enum SGFramework.EVaultPhase
    {
        EVaultPhase_None = 0,
        EVaultPhase_Vaulting = 1,
        EVaultPhase_MAX = 2
    };

    enum class ESGRagdollStage : uint8_t //Enum SGFramework.ESGRagdollStage
    {
        None = 0,
        RagdollPrestart = 1,
        RagdollStart = 2,
        RagdollStop = 3,
        RagdollBaked_Local = 4,
        RagdollBaked_ServerOverride = 5,
        ESGRagdollStage_MAX = 6
    };

    enum class ECharacterFlashBurnStateType : uint8_t //Enum SGFramework.ECharacterFlashBurnStateType
    {
        None = 0,
        Normal = 1,
        MildFlashBurn = 2,
        ModerateFlashBurn = 3,
        SevereFlashBurn = 4,
        ECharacterFlashBurnStateType_MAX = 5
    };

    enum class ECharacterTearGasStateType : uint8_t //Enum SGFramework.ECharacterTearGasStateType
    {
        Normal = 0,
        SlightTearGas = 1,
        MediumTearGas = 2,
        ECharacterTearGasStateType_MAX = 3
    };

    enum class ESGCompSigTickDisableReason : uint8_t //Enum SGFramework.ESGCompSigTickDisableReason
    {
        NONE = 0,
        ComponentInValid = 1,
        ComponentTickClosed = 2,
        VolumeUnRelavant = 3,
        ExecLimit = 4,
        CalcSig = 5,
        ESGCompSigTickDisableReason_MAX = 6
    };

    enum class ESGCompSignificancePriority : uint8_t //Enum SGFramework.ESGCompSignificancePriority
    {
        SignificancePriority_2 = 0,
        SignificancePriority_3 = 1,
        SignificancePriority_4 = 2,
        SignificancePriority_5 = 3,
        SignificancePriority_MAX = 4
    };

    enum class ECharacterMoveDistanceType : uint8_t //Enum SGFramework.ECharacterMoveDistanceType
    {
        StandSilentWalk = 0,
        StandWalk = 1,
        StandSprint = 2,
        CrouchSilentWalk = 3,
        CrouchWalk = 4,
        CrouchSprint = 5,
        ProneSilentWalk = 6,
        DBNO = 7,
        Max = 8
    };

    enum class EAnimInstanceUseType : uint8_t //Enum SGFramework.EAnimInstanceUseType
    {
        AnimInstanceUseType_None = 0,
        AnimInstanceUseType_FacialAnim = 1,
        AnimInstanceUseType_Physics = 2,
        AnimInstanceUseType_MAX = 3
    };

    enum class EWearableEnablePolicy : uint8_t //Enum SGFramework.EWearableEnablePolicy
    {
        None = 0,
        OnlyWhenOn = 1,
        OnlyWhenOff = 2,
        EWearableEnablePolicy_MAX = 3
    };

    enum class EAvatarDisableTickReason : uint8_t //Enum SGFramework.EAvatarDisableTickReason
    {
        AvatarDisableTickReason_None = 0,
        AvatarDisableTickReason_OffScreen = 1,
        AvatarDisableTickReason_SlaveComponent = 2,
        AvatarDisableTickReason_MAX = 3
    };

    enum class EAvatarHiddenReason : uint8_t //Enum SGFramework.EAvatarHiddenReason
    {
        AvatarHiddenReason_None = 0,
        AvatarHiddenReason_FPPHidden = 1,
        AvatarHiddenReason_LayerHidden = 2,
        AvatarHiddenReason_MergeHidden = 4,
        AvatarHiddenReason_FarHidden = 8,
        AvatarHiddenReason_LoadProtect = 16,
        AvatarHiddenReason_BadgeHidden = 32,
        AvatarHiddenReason_ForceHidden = 64,
        AvatarHiddenReason_MAX = 65
    };

    enum class SpringVecComponent : uint8_t //Enum SGFramework.SpringVecComponent
    {
        X = 0,
        Y = 1,
        Z = 2,
        SpringVecComponent_MAX = 3
    };

    enum class EUAMTarget : uint8_t //Enum SGFramework.EUAMTarget
    {
        RootRotation = 0,
        HandsPosition = 1,
        HandsRotation = 2,
        EUAMTarget_MAX = 3
    };

    enum class EMorphTargetType : uint8_t //Enum SGFramework.EMorphTargetType
    {
        None = 0,
        Helmet = 1,
        Vest = 2,
        Belt = 3,
        Backpack = 4,
        Headset = 5,
        FaceCover = 6,
        EyeWear = 7,
        Watch = 8,
        Armor = 9,
        Max = 10
    };

    enum class ELadderClimbExitType : uint8_t //Enum SGFramework.ELadderClimbExitType
    {
        Top = 0,
        Bottom = 1,
        Fall = 2,
        ELadderClimbExitType_MAX = 3
    };

    enum class ELadderClimbEnterType : uint8_t //Enum SGFramework.ELadderClimbEnterType
    {
        Top = 0,
        Bottom = 1,
        ELadderClimbEnterType_MAX = 2
    };

    enum class ECharacterMeshBoneType : uint8_t //Enum SGFramework.ECharacterMeshBoneType
    {
        Head = 0,
        Pelvis = 1,
        Spine = 2,
        ECharacterMeshBoneType_MAX = 3
    };

    enum class ESearchingPrefer : uint8_t //Enum SGFramework.ESearchingPrefer
    {
        SearchingPrefer_None = 0,
        SearchingPrefer_DepthFirst = 1,
        SearchingPrefer_CurrentFirst = 2,
        SearchingPrefer_MAX = 3
    };

    enum class ECharacterMeshPolicy : uint8_t //Enum SGFramework.ECharacterMeshPolicy
    {
        None = 0,
        Game = 1,
        Lobby = 2,
        ECharacterMeshPolicy_MAX = 3
    };

    enum class EServerMoveResultType : uint8_t //Enum SGFramework.EServerMoveResultType
    {
        MoveResult_None = 0,
        MoveResult_UseClientLoc = 1,
        MoveResult_UseServerLoc = 2,
        MoveResult_MovementModeMismatch = 3,
        MoveResult_LargeLocDiff = 4,
        MoveResult_TimeDilationCheat = 5,
        MoveResult_ForcePosUpdate = 6,
        MoveResult_MAX = 7
    };

    enum class ECharacterSprintFailureReason : uint8_t //Enum SGFramework.ECharacterSprintFailureReason
    {
        SprintFailureReason_None = 0,
        SprintFailureReason_InTrap = 1,
        SprintFailureReason_NotFoundSprintComponent = 2,
        SprintFailureReason_DBNO = 3,
        SprintFailureReason_Crouch = 4,
        SprintFailureReason_Leaning = 5,
        SprintFailureReason_Dead = 6,
        SprintFailureReason_Prone = 7,
        SprintFailureReason_NoWeapon = 8,
        SprintFailureReason_IsSprintForbidden = 9,
        SprintFailureReason_WeaponCanNotSprint = 10,
        SprintFailureReason_PlayUpperBodyAnim = 11,
        SprintFailureReason_Aim = 12,
        SprintFailureReason_InStunning = 13,
        SprintFailureReason_SilentWalk = 14,
        SprintFailureReason_NotMoveForward = 15,
        SprintFailureReason_NotMovingOnGround = 16,
        SprintFailureReason_LowerEnergyEmpty = 17,
        SprintFailureReason_CompleteOverweight = 18,
        SprintFailureReason_LegBoneBreak = 19,
        SprintFailureReason_RescuingTeammate = 20,
        SprintFailureReason_TutorialLimit = 21,
        SprintFailureReason_Weapon_PlayAnim = 22,
        SprintFailureReason_Weapon_NotValid = 23,
        SprintFailureReason_Weapon_IsZooming = 24,
        SprintFailureReason_Weapon_NoSprintComponent = 25,
        SprintFailureReason_Weapon_DoingWeaponOperation = 26,
        SprintFailureReason_Weapon_IsShooting = 27,
        SprintFailureReason_Weapon_CoolDownTimeAfterFire = 28,
        SprintFailureReason_Weapon_InAbility = 29,
        SprintFailureReason_Weapon_SwitchFireMode = 30,
        SprintFailureReason_Weapon_CheckMagazine = 31,
        SprintFailureReason_Weapon_ReleaseHoldOpen = 32,
        SprintFailureReason_Weapon_KeepPreFire = 33,
        SprintFailureReason_Weapon_Firing = 34,
        SprintFailureReason_Bushes = 35,
        SprintFailureReason_UsingInventory = 36,
        SprintFailureReason_Succeed = 37,
        SprintFailureReason_MAX = 38
    };

    enum class ECharacterPose : uint8_t //Enum SGFramework.ECharacterPose
    {
        CharacterPose_Stand = 0,
        CharacterPose_Crouch = 1,
        CharacterPose_Prone = 2,
        CharacterPose_MAX = 3
    };

    enum class ELeftHandIKReason : uint8_t //Enum SGFramework.ELeftHandIKReason
    {
        LeftHandIKReason_None = 0,
        LeftHandIKReason_WeaponTraceObstacle = 1,
        LeftHandIKReason_Todo = 2,
        LeftHandIKReason_MAX = 3
    };

    enum class ESGCharacterVehicleSyncType : uint8_t //Enum SGFramework.ESGCharacterVehicleSyncType
    {
        None = 0,
        AttachCharacter = 1,
        DetachCharacter = 2,
        SwitchSeating = 3,
        ESGCharacterVehicleSyncType_MAX = 4
    };

    enum class ESGCharacterDisplayPolicy : uint8_t //Enum SGFramework.ESGCharacterDisplayPolicy
    {
        ESGCharacterDisplayPolicy_None = 0,
        ESGCharacterDisplayPolicy_1P = 1,
        ESGCharacterDisplayPolicy_LOD0 = 2,
        ESGCharacterDisplayPolicy_LOD1 = 3,
        ESGCharacterDisplayPolicy_LOD2 = 4,
        ESGCharacterDisplayPolicy_LOD3 = 5,
        ESGCharacterDisplayPolicy_LOD4 = 6,
        ESGCharacterDisplayPolicy_MAX = 7
    };

    enum class ESGHandState : uint8_t //Enum SGFramework.ESGHandState
    {
        PuttingDown = 0,
        Down = 1,
        TakingUp = 2,
        Up = 3,
        ESGHandState_MAX = 4
    };

    enum class ESwitchToInventoryStage : uint8_t //Enum SGFramework.ESwitchToInventoryStage
    {
        None = 0,
        PutDownWeapon = 1,
        TakeUpInventory = 2,
        ESwitchToInventoryStage_MAX = 3
    };

    enum class ESwitchWeaponStage : uint8_t //Enum SGFramework.ESwitchWeaponStage
    {
        None = 0,
        PutDown = 1,
        TakeUp = 2,
        ESwitchWeaponStage_MAX = 3
    };

    enum class WeaponType : uint8_t //Enum SGFramework.WeaponType
    {
        SHORT = 0,
        MID = 1,
        LONG = 2,
        WeaponType_MAX = 3
    };

    enum class CollapseState : uint8_t //Enum SGFramework.CollapseState
    {
        NONE = 0,
        PULL = 1,
        RESET = 2,
        CollapseState_MAX = 3
    };

    enum class ESGCompetitionStatusType : uint8_t //Enum SGFramework.ESGCompetitionStatusType
    {
        E_None = 0,
        E_Die = 1,
        E_EscapeSuccess = 2,
        E_Hit = 3,
        E_DBNO = 4,
        E_Escapeing = 5,
        E_MAX = 32
    };

    enum class ESGCompSignificanceVolumeRelevantType : uint8_t //Enum SGFramework.ESGCompSignificanceVolumeRelevantType
    {
        SignificanceVolumeRelevantType_Mutex = 0,
        SignificanceVolumeRelevantType_Compatible = 1,
        SignificanceVolumeRelevantType_MAX = 2
    };

    enum class EDataTableType : uint8_t //Enum SGFramework.EDataTableType
    {
        DataTable_Default = 0,
        AnimSet_AllWeapon = 1,
        AnimSet_WeaponBase = 2,
        WeaponParameter = 3,
        ModePickupLevelConfigsMappings = 4,
        UACommonItemTable = 5,
        UAWeaponDetailTable = 6,
        UAItemContextMenuTable = 7,
        UAInventoryBPItemIDTable = 8,
        UABattleMapTable = 9,
        UAVestBagGridTable = 10,
        UAErrorCodeTable = 11,
        UALanguageTextTable = 12,
        UADeviceInfoTable = 13,
        UACharacterLevelTable = 14,
        UAGlobalNumTable = 15,
        UAGachaMapTable = 16,
        UAModuleContextTable = 17,
        UAModuleTable = 18,
        UAServiceTable = 19,
        UAPanelTable = 20,
        UAStatisTable = 21,
        UABattleResultTable = 22,
        UAWeaponAssembleTable = 23,
        DataTable_MAX = 24,
        UATaskConfTable = 25,
        UATaskTargetConfTable = 26,
        UATaskActiveRewardConfTable = 27,
        UATaskKillTargetConfTable = 28,
        UATaskCommitTargetConfTable = 29,
        UABusinessmanConfTable = 30,
        UATradeItemClassifyConfTable = 31,
        UATradeConfTable = 32,
        UABodyPartsTable = 33,
        UAFunctionControlTable = 34,
        UAMailTable = 35,
        UAMallConfTable = 36,
        UAWeaponAffixTable = 37,
        UAContainerTable = 38,
        UAContainerRuleConfTable = 39,
        UAActConfigTable = 40,
        UAEquipSlotTable = 41,
        UAContextMenuLevel1Table = 42,
        UAContextMenuLevel2Table = 43,
        UAContextMenuPickUpTable = 44,
        UABuffIconConfTable = 45,
        UATaskTypeTable = 46,
        UAAmmoNumTable = 47,
        UAGameHUDTable = 48,
        UAGameModeTable = 49,
        UAGamePadMessageTable = 50,
        UALootPointInfoTable = 51,
        UABattleQuickChatTable = 52,
        UALootDropTable = 53,
        UAPlayModeTable = 54,
        UAArmorDetailConfTable = 55,
        UATaskReportConfTable = 56,
        UABulletDetailConfTable = 57,
        UARookieStepTable = 58,
        UARookieDetailTable = 59,
        UARookieTriggerTable = 60,
        UARookieTriggerIDTable = 61,
        UARookieItemPickTable = 62,
        UALootDropOperationConfTable = 63,
        UADropItemConfTable = 64,
        UALootDropPoolConfTable = 65,
        UAGlobalTable = 66,
        UAScopeScaleTable = 67,
        UALandMarkTable = 69,
        UAMeleeWeaponDetailTable = 70,
        UAAISpawnAreaInfoTable = 71,
        UAAISpawnScavSpawnControllerTable = 72,
        UAAISpawnBossSpawnControllerTable = 74,
        UAAISpawnPMCConfigTable = 75,
        UAAISpawnPMCSpawnControllerTable = 76,
        UAAISpawnElitTable = 77,
        UABattleQuickConductorTable = 78,
        UABattleQuickTeamTable = 79,
        UAEscapeTextTable = 80,
        UAEscapeInteractTextTable = 81,
        UACaptureTable = 82,
        UABossTokenConfTable = 83,
        UAHUDSubTitleVOTable = 84,
        UAHUDSubTitleTextTable = 85,
        UALootDataInfosTable = 86,
        UALootReplaceConfTable = 87,
        UABattleQuickMapSignTable = 88,
        UALoadingImageTable = 89,
        UALoadingTipsTable = 90,
        UAAchieveTaskConfTable = 91,
        UAInventorySoundDiffusionTable = 92,
        UATraceTargetTable = 93,
        UAAchievementDistributerTable = 94,
        UAAISoundDiffusionTable = 95,
        UASafeLootLimitConfTable = 96,
        UASafePoolLimitValueConfTable = 97,
        UAMissionFlowClassTable = 98,
        UAActivityTemplateMissionTable = 99,
        UAScreenEffectPaddingTable = 100,
        UABrokenImageConfTable = 101,
        UALootResourceConfTable = 102,
        AISpawnGroupDataTable = 103,
        AIPerformanceDataTable = 104,
        AIWeaponConfigDataTable = 105,
        AINameDataTable = 106,
        EventAIIDModifierDataTable = 107,
        AISceneEventDataTable = 108,
        AITrackLOGTemplateDataTable = 109,
        UAViewTable = 110,
        UAFriRecommConfTable = 111,
        UAResourceListConfTable = 112,
        SGInventoryDataAssetTable = 113,
        SGInventoryGAData = 114,
        UARankedLevelTable = 115,
        UABrilliantTimeReplayTable = 116,
        UATeamVoiceTable = 117,
        ServerKey2Text = 118,
        AIEventAvatarTable = 119,
        UAGuaranteeCheckItemConfTable = 120,
        UAGuaranteeContainerConfTable = 121,
        UAGuaranteedPoolConfTable = 122,
        UAGuaranteeGenItemConfTable = 123,
        UAGuaranteeLimitStrategyConfTable = 124,
        UAGuaranteedUseAttrConfTable = 125,
        UAConsumablesUseAwardConfTable = 126,
        UAFactionRelationTypeTable = 127,
        SGInventoryGADataAuto = 128,
        UAAIUniqueItemInfoTable = 129,
        UALoseDropTable = 130,
        UADurabilityChangeTable = 131,
        UAAdviseInvPriorityTable = 132,
        UALootProtectionConfTable = 133,
        UAProtectionTypeConfTable = 134,
        UATraceStyleTable = 135,
        UAWeaponSkinConfTable = 136,
        UAAdviseGrenadeTable = 137,
        AccountBanReasonTable = 138,
        UAParadropConfigTable = 139,
        AIFactionDataTable = 140,
        UAStandaloneWeatherTable = 141,
        UAShockConfTable = 142,
        UALootDropActivityConfTable = 143,
        UALootDropActivityPoolConfTable = 144,
        UALootDropControlConfTable = 145,
        UALootProtectionItemsConfTable = 146,
        UADeliverCargosConfTable = 147,
        SGCharacterCompSignificance = 148,
        UAEquipmentSkinConfTable = 149,
        UATutorialEventTable = 150,
        UAConsumablesDetailConfTable = 151,
        UAConsumablesBuffConfTable = 152,
        UABanThrowsConfTable = 153,
        UANationalFlagConfTable = 154,
        SGVehicleParams = 155,
        UANewTraceConfigTable = 156,
        UANewTraceStyleTable = 157,
        UANewTraceRuleTable = 158,
        UAPlayerEscapeShow = 159,
        UAAISpawnPlayerScavConfigTable = 160,
        UABattleEventTable = 161,
        UAModeThunderTable = 162,
        UAThunderDetailTable = 163,
        UAParadropWaveConfigTable = 164,
        UALootFactionItemConfTable = 165,
        UAScavAIDynamicLimitTable = 166,
        UAAvatarSetCfgTable = 167,
        UAEquipAvatarSetCfgTable = 168,
        UAWeaponAvatarSetCfgTable = 169,
        DataHDTable = 170,
        CAFrontEndStageTable = 171,
        EDataTableType_MAX = 172
    };

    enum class ESGDoorBoundaryType : uint8_t //Enum SGFramework.ESGDoorBoundaryType
    {
        CrossInteriorAndExterior = 0,
        CrossTwoInteriorVolumes = 1,
        Other = 2,
        ESGDoorBoundaryType_MAX = 3
    };

    enum class ESGDoorCategory : uint8_t //Enum SGFramework.ESGDoorCategory
    {
        Building = 0,
        Car = 1,
        CarBack = 2,
        ESGDoorCategory_MAX = 3
    };

    enum class ESGDoorUseMode : uint8_t //Enum SGFramework.ESGDoorUseMode
    {
        Default = 0,
        Unlock = 1,
        ESGDoorUseMode_MAX = 2
    };

    enum class ESGAlarmState : uint8_t //Enum SGFramework.ESGAlarmState
    {
        Unlock = 0,
        Locked = 1,
        ESGAlarmState_MAX = 2
    };

    enum class ESGCardReaderDoorType : uint8_t //Enum SGFramework.ESGCardReaderDoorType
    {
        Normal = 0,
        CanReset = 1,
        ESGCardReaderDoorType_MAX = 2
    };

    enum class ESGDoorOpenType : uint8_t //Enum SGFramework.ESGDoorOpenType
    {
        None = 0,
        Normal = 1,
        NeedWreck = 2,
        NeedUnlock = 3,
        NeedUnlock_Card = 4,
        NeedUnlock_Gate = 5,
        NeedCloseGenerator = 6,
        Disabled = 7,
        ESGDoorOpenType_MAX = 8
    };

    enum class ESGDoorUseType : uint8_t //Enum SGFramework.ESGDoorUseType
    {
        None = 0,
        Normal = 1,
        LockedContainer = 2,
        ESGDoorUseType_MAX = 3
    };

    enum class ESGDoorType : uint8_t //Enum SGFramework.ESGDoorType
    {
        OneWay_CouterClockwise = 0,
        OneWay_Clockwise = 1,
        TwoWay = 2,
        Sliding = 3,
        NoWay = 4,
        ESGDoorType_MAX = 5
    };

    enum class ESGFenceSelector : uint8_t //Enum SGFramework.ESGFenceSelector
    {
        None = 0,
        Use_2 = 1,
        Use_3 = 2,
        Use_4 = 3,
        Use_5 = 4,
        ESGFenceSelector_MAX = 5
    };

    enum class ESGFlowFinishState : uint8_t //Enum SGFramework.ESGFlowFinishState
    {
        ESGFlowState_Success = 0,
        ESGFlowState_Failed = 1,
        ESGFlowState_MAX = 2
    };

    enum class EActivityType : uint8_t //Enum SGFramework.EActivityType
    {
        EActivityType_None = 0,
        EActivityType_Chase = 1,
        EActivityType_Voiceprint = 7,
        EActivityType_HalloweenBox = 10,
        EActivityType_MAX = 11
    };

    enum class EGestureType : uint8_t //Enum SGFramework.EGestureType
    {
        OneHand = 0,
        TwoHand = 1,
        FullBody = 2,
        EGestureType_MAX = 3
    };

    enum class ESensitivityMode : uint32_t //Enum SGFramework.ESensitivityMode
    {
        Unknown = -1,
        High = 0,
        Middle = 1,
        Low = 2,
        Custom = 3,
        ESensitivityMode_MAX = 4
    };

    enum class EChaseActivityMessageType : uint8_t //Enum SGFramework.EChaseActivityMessageType
    {
        None = 0,
        TeammateGetInventory = 1,
        OtherPlayerGetInventory = 2,
        InventoryDestroy = 3,
        EChaseActivityMessageType_MAX = 4
    };

    enum class EReplayExternalDataType : uint8_t //Enum SGFramework.EReplayExternalDataType
    {
        BulletHit = 0,
        GrenadeExplode = 1,
        StartFire = 2,
        EquipInfo = 3,
        MoveStateChange = 4,
        PlayerZoneInfo = 5,
        UseDoorKey = 6,
        LootBox = 7,
        LootBoxItem = 8,
        LeanType = 9,
        RescueTeammate = 10,
        ThrowGrenade = 11,
        EReplayExternalDataType_MAX = 12
    };

    enum class EActionFeedback : uint8_t //Enum SGFramework.EActionFeedback
    {
        ActionFeedback_Success = 0,
        ActionFeedback_CheckMagazine_NoMagazine = 1,
        ActionFeedback_Undefined = 2,
        ActionFeedback_MAX = 3
    };

    enum class EActionFeedbackType : uint8_t //Enum SGFramework.EActionFeedbackType
    {
        ActionFeedbackType_CheckMagazine = 0,
        ActionFeedbackType_MAX = 1
    };

    enum class ENewTraceDisplayPlatform : uint8_t //Enum SGFramework.ENewTraceDisplayPlatform
    {
        UnKnow = 0,
        ScenePlatform = 1,
        NewMapPlatform = 2,
        DirectionalBarPlatform = 3,
        ENewTraceDisplayPlatform_MAX = 4
    };

    enum class ENewTraceSyncRule : uint8_t //Enum SGFramework.ENewTraceSyncRule
    {
        UnKnow = 0,
        PlayerController = 1,
        TeamInfo = 2,
        Faction = 3,
        GameState = 4,
        All = 5,
        ENewTraceSyncRule_MAX = 6
    };

    enum class ENewTraceableMarkType : uint8_t //Enum SGFramework.ENewTraceableMarkType
    {
        UnKnow = 0,
        PlayerTrace = 1,
        EscapeTrace = 2,
        MissionTrace = 3,
        SpecialTrace = 4,
        All = 5,
        ENewTraceableMarkType_MAX = 6
    };

    enum class EShowVoiceResult : uint8_t //Enum SGFramework.EShowVoiceResult
    {
        Completed = 0,
        Failed = 1,
        EShowVoiceResult_MAX = 2
    };

    enum class EMapSignType : uint8_t //Enum SGFramework.EMapSignType
    {
        None = 0,
        Map = 1,
        EscapePoint = 2,
        QuestTrace = 3,
        EMapSignType_MAX = 4
    };

    enum class EFactionRelationType : uint8_t //Enum SGFramework.EFactionRelationType
    {
        None = 0,
        Friendly = 1,
        Neutral = 2,
        hostile = 3,
        EFactionRelationType_MAX = 4
    };

    enum class ESGDSSwitcherFlag : uint8_t //Enum SGFramework.ESGDSSwitcherFlag
    {
        None = 0,
        SGDSSwitcherFlag_NetObjPool = 1,
        SGDSSwitcherFlag_NetJIT = 2,
        ESGDSSwitcherFlag_MAX = 3
    };

    enum class EUABagOperation : uint8_t //Enum SGFramework.EUABagOperation
    {
        Loot = 0,
        OpenBag = 1,
        EUABagOperation_MAX = 2
    };

    enum class EFollowCharacterWidgetType : uint8_t //Enum SGFramework.EFollowCharacterWidgetType
    {
        EFollowCharacterWidgetType_Simple = 0,
        EFollowCharacterWidgetType_ChaseActivity = 1,
        EFollowCharacterWidgetType_DossBoss = 2,
        EFollowCharacterWidgetType_Faction = 3,
        EFollowCharacterWidgetType_FactionAI = 4,
        EFollowCharacterWidgetType_MAX = 5
    };

    enum class EReportType : uint8_t //Enum SGFramework.EReportType
    {
        GameHUDTable = 0,
        TaskReport = 1,
        Toast = 2,
        EReportType_MAX = 3
    };

    enum class EActorFilterType : uint8_t //Enum SGFramework.EActorFilterType
    {
        None = 0,
        SpecifiedActors = 1,
        IgnoreSpecifiedActors = 2,
        EActorFilterType_MAX = 3
    };

    enum class ELeaveGameReason : uint8_t //Enum SGFramework.ELeaveGameReason
    {
        Unknow = 0,
        Dead = 1,
        Escaped = 2,
        GameOver = 3,
        Discard = 4,
        Offline = 5,
        ELeaveGameReason_MAX = 6
    };

    enum class ERelevantCheckType : uint8_t //Enum SGFramework.ERelevantCheckType
    {
        None = 0,
        ForceRelevant = 1,
        ForceRelevantIgnoreOther = 2,
        RelevantIgnoreOther = 3,
        NotRelevant = 4,
        ERelevantCheckType_MAX = 5
    };

    enum class ENumCompareType : uint8_t //Enum SGFramework.ENumCompareType
    {
        CMP_Equals = 0,
        CMP_NotEqual = 1,
        CMP_Greater = 2,
        CMP_Less = 3,
        CMP_GreaterEqual = 4,
        CMP_LessEqual = 5,
        CMP_Between = 6,
        CMP_MAX = 7
    };

    enum class EFactionMemberType : uint8_t //Enum SGFramework.EFactionMemberType
    {
        None = 0,
        Player = 1,
        AI = 2,
        AIBoss = 3,
        EFactionMemberType_MAX = 4
    };

    enum class ETeamInfoType : uint8_t //Enum SGFramework.ETeamInfoType
    {
        None = 0,
        PlayerTeam = 1,
        AITeam = 2,
        ETeamInfoType_MAX = 3
    };

    enum class EWeatherType : uint8_t //Enum SGFramework.EWeatherType
    {
        Sunny = 0,
        Rainny = 1,
        Cloudy = 2,
        EWeatherType_MAX = 3
    };

    enum class EDrawDebugType : uint32_t //Enum SGFramework.EDrawDebugType
    {
        EDrawDebugType_None = 0,
        EDrawDebugType_Weapon = 1,
        EDrawDebugType_Camera = 2,
        EDrawDebugType_PlayerState = 4,
        EDrawDebugType_SelfMovement = 8,
        EDrawDebugType_AllMovement = 15,
        EDrawDebugType_Breath = 16,
        EDrawDebugType_Location = 32,
        EDrawDebugType_AnimationCurve = 64,
        EDrawDebugType_AttributeSets_Movement = 128,
        EDrawDebugType_Damage = 240,
        EDrawDebugType_InputRotate = 256,
        EDrawDebugType_MAX = 257
    };

    enum class EInputMode : uint8_t //Enum SGFramework.EInputMode
    {
        EIM_None = 0,
        EIM_GameOnly = 1,
        EIM_GameAndUI = 2,
        EIM_UIOnly = 3,
        EIM_MAX = 4
    };

    enum class ESoundReplicationType : uint8_t //Enum SGFramework.ESoundReplicationType
    {
        SRT_All = 0,
        SRT_AllButOwner = 1,
        SRT_IfSourceNotReplicated = 2,
        SRT_None = 3,
        SRT_MAX = 4
    };

    enum class EOperationInputType : uint8_t //Enum SGFramework.EOperationInputType
    {
        None = 0,
        InBattle = 1,
        InInventory = 2,
        InBattleChat = 51,
        InBattleHandleGrenade = 52,
        EOperationInputType_MAX = 53
    };

    enum class EOperationKeyStyle : uint8_t //Enum SGFramework.EOperationKeyStyle
    {
        None = 0,
        Press = 1,
        Release = 2,
        DoubleClick = 3,
        Hold = 4,
        EOperationKeyStyle_MAX = 5
    };

    enum class EOperationKeyType : uint8_t //Enum SGFramework.EOperationKeyType
    {
        None = 0,
        ActionMap = 1,
        AxisMap = 2,
        EOperationKeyType_MAX = 3
    };

    enum class ESettingValueType : uint8_t //Enum SGFramework.ESettingValueType
    {
        String = 0,
        Float = 1,
        Int = 2,
        Bool = 3,
        ESettingValueType_MAX = 4
    };

    enum class EGlobalEventParameterTag : uint8_t //Enum SGFramework.EGlobalEventParameterTag
    {
        Instigator = 0,
        Character = 1,
        Target = 2,
        EnduranceType = 3,
        ArmorType = 4,
        DamageInfo = 5,
        UseInventoryPhase = 6,
        EscapeVolume = 7,
        Inventory = 8,
        ItemID = 9,
        AttachPosition = 10,
        EndGameType = 11,
        TeamMember = 12,
        GameEffectType = 13,
        ThrowableProjectile = 14,
        IntCount = 15,
        IntOldCount = 16,
        IntNewCount = 17,
        Bool = 18,
        Killer = 19,
        KilledPlayer = 20,
        KillerWeapon = 21,
        KillDistance = 22,
        DamageTakePlayer = 23,
        DamageCausePlayer = 24,
        DamageCauser = 25,
        InteractActor = 26,
        InteractEventType = 27,
        Trigger = 28,
        AttractAI = 29,
        VolumeID = 30,
        BagType = 31,
        BagTabType = 32,
        Container = 33,
        DetailBoardType = 34,
        TaskID = 35,
        WidgetID = 36,
        StackableItemSourceInfo = 37,
        ParadropState = 38,
        FactionType = 39,
        AISceneEvent = 40,
        SearchingPlayer = 41,
        EGlobalEventParameterTag_MAX = 42
    };

    enum class EGlobalEventTag : uint8_t //Enum SGFramework.EGlobalEventTag
    {
        Killed = 0,
        TakeDamage = 1,
        TakeInItem = 2,
        FlowStateChange = 3,
        Interact = 4,
        InventoryAdded = 5,
        InventoryRemoved = 6,
        PrePlayerFinishGame = 7,
        AttractAI = 8,
        ReadyToPlay = 9,
        LootContainer = 10,
        UseRecoveryInventory = 11,
        GameplayEffectApplied = 12,
        AttachPositionChanged = 13,
        ContainerInteractChanged = 14,
        SwitchWeaponCompleted = 15,
        GameBegin = 16,
        ThrowableProjectileSpawn = 17,
        LocationReport = 18,
        CharacterCostBullet = 19,
        ModifyInventoryTotalCount = 20,
        PushBullet = 21,
        VolumeActorChanged = 22,
        AIActived = 23,
        AIEscaped = 24,
        Pair = 25,
        PlayerBeginGame = 26,
        ClickItem = 27,
        AddMapSign = 28,
        WeaponCheck = 29,
        WeaponAssemble = 30,
        MoveInventory = 31,
        VolumeBeginOverlap = 32,
        BagStateChange = 33,
        BigMapDetailBoardShow = 34,
        BagTabClick = 35,
        InspectItemClick = 36,
        OpenPPT = 37,
        OpenItemDetail = 38,
        ParadropStateChange = 39,
        FactionScoreUpdate = 40,
        SceneEventTrigger = 41,
        SceneEventExpired = 42,
        SceneEventRemoved = 43,
        SceneEventCompleted = 44,
        FSMStateChange = 45,
        MComStartUpLoad = 46,
        MComInterruptUpLoad = 47,
        StartSearchingContainer = 48,
        CharacterDestroyActor = 49,
        OnOneShotEnd = 50,
        UnfillContainer = 51,
        StartLoot = 52,
        EGlobalEventTag_MAX = 53
    };

    enum class EHoverForceSide : uint8_t //Enum SGFramework.EHoverForceSide
    {
        EHFSide_None = 0,
        EHFSide_Left = 1,
        EHFSide_Right = 2,
        EHFSide_MAX = 3
    };

    enum class EHUDHierarchy : uint8_t //Enum SGFramework.EHUDHierarchy
    {
        ScreenEffect = 0,
        Gamepad = 1,
        FullScreenHud = 2,
        Tips = 3,
        Setting = 4,
        EHUDHierarchy_MAX = 5
    };

    enum class EHUDType : uint8_t //Enum SGFramework.EHUDType
    {
        SecondModeMatchType_Mode = 0,
        SecondModeMatchType_Map = 1,
        SecondModeMatchType_MAX = 2
    };

    enum class EHUDShakeEvents : uint8_t //Enum SGFramework.EHUDShakeEvents
    {
        EHUDShakeEvents_HeavyWalk = 0,
        EHUDShakeEvents_HeavyCrouch = 1,
        EHUDShakeEvents_HeavyProne = 2,
        EHUDShakeEvents_HeavyStandUp = 3,
        EHUDShakeEvents_Run = 4,
        EHUDShakeEvents_Jump = 5,
        EHUDShakeEvents_Landed = 6,
        EHUDShakeEvents_Lean = 7,
        EHUDShakeEvents_RotateView = 8,
        EHUDShakeEvents_DartleFire = 9,
        EHUDShakeEvents_SingleFire = 10,
        EHUDShakeEvents_Melee = 11,
        EHUDShakeEvents_UseItem = 12,
        EHUDShakeEvents_CheckMagazine = 13,
        EHUDShakeEvents_AttachMagazine = 14,
        EHUDShakeEvents_ChangeClip = 15,
        EHUDShakeEvents_TakeDamage = 16,
        EHUDShakeEvents_Explode = 17,
        EHUDShakeEvents_HeadTakeDamage = 18,
        EHUDShakeEvents_MAX = 19
    };

    enum class EHUDShakeTypes : uint8_t //Enum SGFramework.EHUDShakeTypes
    {
        EHUDShakeTypes_None = 0,
        EHUDShakeTypes_LocX_RotR = 1,
        EHUDShakeTypes_RotY_RotP = 2,
        EHUDShakeTypes_Breath_RotY_RotP = 3,
        EHUDShakeTypes_MAX = 4
    };

    enum class EHUDShakeTags : uint8_t //Enum SGFramework.EHUDShakeTags
    {
        EHUDShakeTags_A = 0,
        EHUDShakeTags_B = 1,
        EHUDShakeTags_C = 2,
        EHUDShakeTags_MAX = 3
    };

    enum class ECommonInputButtonType : uint8_t //Enum SGFramework.ECommonInputButtonType
    {
        ECommonInput_Fire = 0,
        ECommonInput_Sprint = 1,
        ECommonInput_Prone = 2,
        ECommonInput_Crouch = 3,
        ECommonInput_Lean = 4,
        ECommonInput_Ads = 5,
        ECommonInput_UseItem = 6,
        ECommonInput_Jump = 7,
        ECommonInput_MAX = 8
    };

    enum class EButtonAcceptInputType : uint8_t //Enum SGFramework.EButtonAcceptInputType
    {
        ENoneInput = 0,
        EOnlyClick = 1,
        EOutsideAcceptInput = 2,
        EAllAcceptInput = 3,
        EButtonAcceptInputType_MAX = 4
    };

    enum class EMotionRotateMode : uint8_t //Enum SGFramework.EMotionRotateMode
    {
        EMotionRotateMode_None = 0,
        EMotionRotateMode_ADS = 1,
        EMotionRotateMode_Always = 2,
        EMotionRotateMode_MAX = 3
    };

    enum class ELeanShootInputMode : uint8_t //Enum SGFramework.ELeanShootInputMode
    {
        ELeanShootInputMode_Click = 0,
        ELeanShootInputMode_Pressing = 1,
        ELeanShootInputMode_MAX = 2
    };

    enum class ELeanShootMode : uint8_t //Enum SGFramework.ELeanShootMode
    {
        ELeanShootMode_Closed = 0,
        ELeanShootMode_Always = 1,
        ELeanShootMode_WhenAim = 2,
        ELeanShootMode_MAX = 3
    };

    enum class EUseButtonIconType : uint8_t //Enum SGFramework.EUseButtonIconType
    {
        UseButtonType_None = 0,
        UseButtonType_DriveVehicle = 1,
        UseButtonType_SeatVehicle = 2,
        UseButtonType_CloseDoor = 3,
        UseButtonType_OpenDoor = 4,
        UseButtonType_RescueTeamate = 5,
        UseButtonType_HoldAirBox = 6,
        UseButtonType_MAX = 7
    };

    enum class ESGMobileMoveHandle : uint8_t //Enum SGFramework.ESGMobileMoveHandle
    {
        SGMobileMoveHandle_None = 0,
        SGMobileMoveHandle_Joystick = 1,
        SGMobileMoveHandle_Classics = 2,
        SGMobileMoveHandle_MAX = 3
    };

    enum class ERotateSensitivityMode : uint8_t //Enum SGFramework.ERotateSensitivityMode
    {
        SensitivityMode_Fixed = 0,
        SensitivityMode_DistanceAcc = 1,
        SensitivityMode_SpeedAcc = 2,
        SensitivityMode_SpeedAccTest = 3,
        SensitivityMode_MAX = 4
    };

    enum class ESGInteractCostType : uint8_t //Enum SGFramework.ESGInteractCostType
    {
        InteractCostType_Count = 0,
        InteractCostType_Durability = 1,
        InteractCostType_MAX = 2
    };

    enum class ESwitchActionType : uint8_t //Enum SGFramework.ESwitchActionType
    {
        SwitchActionType_None = 0,
        SwitchActionType_SwitchingOn = 1,
        SwitchActionType_SwitchingOff = 2,
        SwitchActionType_MAX = 3
    };

    enum class ESGMainHeadwearType : uint8_t //Enum SGFramework.ESGMainHeadwearType
    {
        None = 0,
        ThermalImager = 1,
        FaceShield = 2,
        ESGMainHeadwearType_MAX = 3
    };

    enum class ESGTakeInSourceType : uint8_t //Enum SGFramework.ESGTakeInSourceType
    {
        TakeInSourceType_None = 0,
        TakeInSourceType_Doss = 1,
        TakeInSourceType_MAX = 2
    };

    enum class ESGGiveInventoryByClassType : uint8_t //Enum SGFramework.ESGGiveInventoryByClassType
    {
        None = 0,
        InitPlayerEquipments = 1,
        NotAddToCharacter = 2,
        InBattleGiveItem = 3,
        Split = 4,
        UnfillContainer = 5,
        EditorDefaultInventory = 6,
        GMCheat = 7,
        AICreate = 8,
        WeaponBuild = 9,
        ESGGiveInventoryByClassType_MAX = 10
    };

    enum class ESGRecoveryItemRecommendationOrder : uint8_t //Enum SGFramework.ESGRecoveryItemRecommendationOrder
    {
        Default = 0,
        ByHealthCondition = 1,
        ByBodyPart = 2,
        ByDebuff = 3,
        ESGRecoveryItemRecommendationOrder_MAX = 4
    };

    enum class ESGInventoryHiddenFlag : uint8_t //Enum SGFramework.ESGInventoryHiddenFlag
    {
        InventoryHiddenFlag_None = 0,
        InventoryHiddenFlag_ServerHidden = 1,
        InventoryHiddenFlag_ClientHidden = 2,
        InventoryHiddenFlag_EquipHidden = 4,
        InventoryHiddenFlag_LayerHidden = 8,
        InventoryHiddenFlag_MAX = 9
    };

    enum class ESGInventoryDetailedSourceType : uint8_t //Enum SGFramework.ESGInventoryDetailedSourceType
    {
        UnKnown = 0,
        LootSpawn = 1,
        PMCSelfTakeIn = 2,
        PMCTeamPlayerTakeIn = 3,
        PMCOtherPlayerTakeIn = 4,
        ScavSelfTakeIn = 5,
        ScavTeamPlayerTakeIn = 6,
        ScavOtherPlayerTakeIn = 7,
        OrdinaryAISpawn = 8,
        BossRetinueAISpawn = 9,
        BossAISpawn = 10,
        PMCAISpawn = 11,
        ReplaceDropSpawn = 12,
        LootGuaranteeSpawn = 13,
        GashaponSpawn = 14,
        QuestActionSpawn = 15,
        ESGInventoryDetailedSourceType_MAX = 16
    };

    enum class EKeyAutoUseOrderInfo : uint8_t //Enum SGFramework.EKeyAutoUseOrderInfo
    {
        EKeyAutoUseOrderInfo_Mybag = 0,
        EKeyAutoUseOrderInfo_Vestbag = 1,
        EKeyAutoUseOrderInfo_Pocket = 2,
        EKeyAutoUseOrderInfo_Safe = 3,
        EKeyAutoUseOrderInfo_Max = 4
    };

    enum class EMeshTickPolicy : uint8_t //Enum SGFramework.EMeshTickPolicy
    {
        TickPolicy_NeverTick = 0,
        TickPolicy_1PClient = 1,
        TickPolicy_Client = 2,
        TickPolicy_Always = 3,
        TickPolicy_MAX = 4
    };

    enum class EInventoryInfoChangeType : uint8_t //Enum SGFramework.EInventoryInfoChangeType
    {
        Default = 0,
        StackCount = 1,
        IsNewFlag = 2,
        Assemble = 3,
        RollUp = 4,
        Search = 5,
        DogTag = 6,
        Rotate = 7,
        ContainerChild = 8,
        All = 9,
        EInventoryInfoChangeType_MAX = 10
    };

    enum class EPlayerMoveInventoryResultCode : uint8_t //Enum SGFramework.EPlayerMoveInventoryResultCode
    {
        Success = 0,
        Success_Discard = 1,
        Success_DiscardToCorpse = 2,
        Success_Pickup = 3,
        Success_PickupFromCorpse = 4,
        Success_CorpseInside = 5,
        Success_DropFromCorpse = 6,
        Success_MoveToCorpse = 7,
        Success_AttachAdapter = 8,
        Success_DetachAdapter = 9,
        Error = 10,
        Error_NullInventory = 11,
        Error_OnlySelf = 12,
        Error_FromCharacterInvalid = 13,
        Error_ToCharacterInvalid = 14,
        Error_InventoryTypeCompMissing = 15,
        Error_EquipAttachPosNotFit = 16,
        Error_WeaponCantFire = 17,
        Error_SamePos = 18,
        Error_Ocuupied = 19,
        Error_CantDetach = 20,
        Error_AttachPosNotFit = 21,
        Error_NohandleWeaponInteract = 22,
        Error_CorpseToOtherCorpse = 23,
        Error_ForbiddenByContianerRule = 24,
        Error_ToContainerNotRoughSearched = 25,
        Error_NotEmptyContainerToContainer = 26,
        Error_LockedByOtherCharacter = 27,
        Error_ChildLockedByOtherCharacter = 28,
        Error_AttachPositionBlockedByOtherInv = 29,
        Error_NotEngoughSpace = 30,
        Error_TargetContainerFolded = 31,
        Error_ContainerStackOverflow = 32,
        Error_SwapEquipNotEnoughSpace = 33,
        Error_AttachAdapterNewSizeNotFitInContainer = 34,
        Error_InContainerRolledUp = 35,
        Error_TryRollUpNoEmptyBag = 36,
        Error_TryRollUpNoSearchBag = 37,
        Error_ItemCannotMove = 38,
        Error_SetParentIllegal = 39,
        Error_BlackLootToSafeBox = 40,
        Error_FactionInvToSafeBox = 41,
        Error_AntiHackCheck = 42,
        Error_InvalidOper = 43,
        Error_RollUpCancelDrop = 44,
        Error_LootTeammateCurse = 45,
        Error_PermitTeammateLoot = 46,
        Error_ToKeyContainer = 47,
        EPlayerMoveInventoryResultCode_MAX = 48
    };

    enum class EInventoryAddToContainerResultCode : uint8_t //Enum SGFramework.EInventoryAddToContainerResultCode
    {
        Success_FullyMerged = 0,
        Success_PartialMerged = 1,
        Success = 2,
        Failed = 3,
        Failed_NotEnoughSpace = 4,
        Failed_ContainerToContainer_HasContent = 5,
        Failed_ToContainerNotRoughSearched = 6,
        Failed_ToContainerFolded = 7,
        Failed_ForbbidenByRule = 8,
        Failed_ContainerStackOverflow = 9,
        Failed_SelfPutIntoSelf = 10,
        Failed_NoBagNoLegalOptionContainer = 11,
        Failed_EquippedBagNotEnoughSpace = 12,
        Failed_ToRolledUpBag = 13,
        Failed_ToKeyContainer = 14,
        Failed_CantDetach = 15,
        Failed_LockedByOtherCharacter = 16,
        Error_BlackLootToSafeBox = 17,
        Error_FactionInvToSafeBox = 18,
        Error_InvalidOper = 19,
        EInventoryAddToContainerResultCode_MAX = 20
    };

    enum class EEquipSlotCheckRejectionResult : uint8_t //Enum SGFramework.EEquipSlotCheckRejectionResult
    {
        CanEquip = 0,
        CannotEquip = 1,
        TriedAttachPosOccupied = 2,
        TriedInvRejectOtherEquippedInv = 3,
        TriedInvRejectOtherEquippedInvAttachChild = 4,
        TriedInvAttachChildRejectOtherEquippedInv = 5,
        TriedInvAttachChildRejectOtherEquippedInvAttachChild = 6,
        OtherEquippedInvRejectTriedInv = 7,
        OtherEquippedInvRejectTriedInvAttachChild = 8,
        OtherEquippedInvAttachChildRejectTriedInv = 9,
        OtherEquippedInvAttachChildRejectTriedInvAttachChild = 10,
        EEquipSlotCheckRejectionResult_MAX = 11
    };

    enum class EPlayerMoveInvExtraOperationType : uint8_t //Enum SGFramework.EPlayerMoveInvExtraOperationType
    {
        None = 0,
        Rotate = 1,
        RollUp = 2,
        RollUp_Unfold = 3,
        RollUpAndRotate = 4,
        UnfoldAndRotate = 5,
        EPlayerMoveInvExtraOperationType_MAX = 6
    };

    enum class EInventoryAttachSocket : uint8_t //Enum SGFramework.EInventoryAttachSocket
    {
        None = 0,
        MagazineSocket = 1,
        GripSocket = 2,
        HandguardSocket = 3,
        StockSocket = 4,
        ShellSocket = 5,
        RecieverSocket = 6,
        MuzzleFlashSocket = 7,
        AimSocket = 8,
        ScopeSocket = 9,
        BarrelSocket = 10,
        CarryHandleSocket = 11,
        SlideSocket = 12,
        FrontIronSightSocket = 13,
        RearIronSightSocket = 14,
        RailSocket = 15,
        ForegripSocket = 16,
        UpperRecieverSocket = 17,
        DustCoverSocket = 18,
        ChamberSocket = 19,
        mod_magazine = 20,
        mod_pistol_grip = 21,
        mod_handguard = 22,
        mod_stock = 23,
        mod_reciever = 24,
        mod_muzzle = 25,
        mod_sight_front = 26,
        mod_sight_rear = 27,
        mod_scope = 28,
        mod_barrel = 29,
        mod_foregrip = 30,
        mod_charge = 31,
        mod_mount = 32,
        mod_tacital = 33,
        mod_gas_block = 34,
        EInventoryAttachSocket_MAX = 35
    };

    enum class EAssembleSocketState : uint8_t //Enum SGFramework.EAssembleSocketState
    {
        ESocketState_Available = 0,
        ESocketState_Occupied = 1,
        ESocketState_Covered = 2,
        ESocketState_MAX = 3
    };

    enum class ESGInventoryDurabilityCostType : uint8_t //Enum SGFramework.ESGInventoryDurabilityCostType
    {
        CostByUsageCount = 0,
        CostByGameEffect = 1,
        ESGInventoryDurabilityCostType_MAX = 2
    };

    enum class EOccypyHandleOption : uint8_t //Enum SGFramework.EOccypyHandleOption
    {
        Default = 0,
        DiscardAndReplace = 1,
        AutoFindPos = 2,
        EOccypyHandleOption_MAX = 3
    };

    enum class EArmorSlot : uint8_t //Enum SGFramework.EArmorSlot
    {
        Helmet = 0,
        Vest = 1,
        BackPack = 2,
        Headset = 3,
        FaceCover = 4,
        EyeWear = 5,
        FaceShield = 6,
        ThighArmor = 7,
        MAX = 8
    };

    enum class ESGItemType : uint8_t //Enum SGFramework.ESGItemType
    {
        None = 0,
        Key = 1,
        Hardware = 2,
        Other = 3,
        ESGItemType_MAX = 4
    };

    enum class ESGAvatarType : uint8_t //Enum SGFramework.ESGAvatarType
    {
        None = 0,
        Coat = 1,
        Gloves = 2,
        Jacket = 3,
        Pants = 4,
        Shoes = 5,
        Torso = 6,
        Legs = 7,
        Head = 8,
        Hair = 9,
        HeadMask = 10,
        Watch = 11,
        Glass = 12,
        Hat = 13,
        Hood = 14,
        Badge = 15,
        Max = 16
    };

    enum class ESGRecoveryType : uint8_t //Enum SGFramework.ESGRecoveryType
    {
        None = 0,
        Medicine = 1,
        Food = 2,
        ESGRecoveryType_MAX = 3
    };

    enum class ESGBadgeAttach : uint8_t //Enum SGFramework.ESGBadgeAttach
    {
        None = 0,
        LeftArm = 1,
        Backpack = 2,
        Vest = 3,
        VestContainer = 4,
        Helmet = 5,
        Max = 6
    };

    enum class ESGArmorType : uint8_t //Enum SGFramework.ESGArmorType
    {
        None = 0,
        Helmet = 1,
        Vest = 2,
        Belt = 3,
        Backpack = 4,
        Headset = 5,
        FaceCover = 6,
        EyeWear = 7,
        FaceShield = 8,
        ThighArmor = 9,
        ESGArmorType_MAX = 10
    };

    enum class ESGInventoryIconType : uint8_t //Enum SGFramework.ESGInventoryIconType
    {
        Normal = 0,
        Kill = 1,
        Rotate = 2,
        Small = 3,
        White = 4,
        ESGInventoryIconType_MAX = 5
    };

    enum class ESGInvItemIdType : uint8_t //Enum SGFramework.ESGInvItemIdType
    {
        None = 0,
        Weapon = 1,
        Weapon_MainWeapon = 2,
        Weapon_Pistol = 3,
        Weapon_Melee = 4,
        Weapon_Throwable = 5,
        Weapon_Tactical = 6,
        Accessory = 7,
        Accessory_Accessory = 8,
        Accessory_Accessory_Magazine = 9,
        Accessory_Ammunition = 10,
        Accessory_Accessory_Shield = 11,
        Cloth = 12,
        Cloth_Gear = 13,
        Cloth_Gear_VestBag = 14,
        Cloth_Gear_VestBag_NoArmor = 15,
        Cloth_Gear_VestBag_Armor = 16,
        Cloth_Gear_MyBag = 17,
        Cloth_Gear_Headset = 18,
        Cloth_Gear_Helmet = 19,
        Cloth_Gear_FaceShield = 20,
        Cloth_Gear_Vest = 21,
        Cloth_Gear_Armband = 22,
        Cloth_Gear_EyeWear = 23,
        Cloth_Gear_SafeBox = 24,
        Cloth_Gear_VirtualPocket = 25,
        Cloth_Gear_KeyContainer = 26,
        Cloth_Gear_GasMask = 27,
        Cloth_Gear_ThighArmor = 28,
        Other = 29,
        Other_Medicine = 30,
        Other_Medicine_Stimulator = 31,
        Other_Card = 32,
        Other_Currency = 33,
        Other_Food = 34,
        Other_Food_Drink = 35,
        Other_Food_Food = 36,
        Other_Key = 37,
        Other_Map = 38,
        Other_Chest = 39,
        Other_Other = 40,
        Other_Other_DogTag = 41,
        Other_Other_ActItem = 42,
        Other_Other_TaskItem = 43,
        VirtualUnique = 44,
        VirtualUnique_Fashion = 45,
        VirtualUnique_Fashion_Glove = 46,
        VirtualUnique_Fashion_Melee = 47,
        VirtualUnique_Ornament = 48,
        VirtualUnique_Fashion_Badge = 49,
        VirtualUnique_Fashion_Gesture = 50,
        ESGInvItemIdType_MAX = 51
    };

    enum class EEnterLadderType : uint8_t //Enum SGFramework.EEnterLadderType
    {
        None = 0,
        Bottom = 1,
        Top = 2,
        EEnterLadderType_MAX = 3
    };

    enum class ESGLinearMotionSimulationStageEndConditionType : uint8_t //Enum SGFramework.ESGLinearMotionSimulationStageEndConditionType
    {
        None = 0,
        EndSpeed = 1,
        TotalDistance = 2,
        TotalTime = 3,
        Max = 4
    };

    enum class ESGLinearMotionSimulationStageInitialSpeedType : uint8_t //Enum SGFramework.ESGLinearMotionSimulationStageInitialSpeedType
    {
        None = 0,
        CurrentStageConfig = 1,
        LastStageEndSpeed = 2,
        Max = 3
    };

    enum class ESimpleAnimationState : uint8_t //Enum SGFramework.ESimpleAnimationState
    {
        Closed = 0,
        Opening = 1,
        Opened = 2,
        Closing = 3,
        ESimpleAnimationState_MAX = 4
    };

    enum class EMissionTaskType : uint8_t //Enum SGFramework.EMissionTaskType
    {
        E_TASK_TYPE_NONE = 0,
        E_TASK_TYPE_MAIN = 1,
        E_TASK_TYPE_DAILY = 2,
        E_TASK_TYPE_ACT = 3,
        E_TASK_TYPE_WEEKLY = 4,
        E_TASK_TYPE_ERGENT = 5,
        E_TASK_TYPE_SEASON_WEEK = 6,
        E_TASK_TYPE_SEASON = 7,
        E_TASK_TYPE_MENTOR = 8,
        E_TASK_TYPE_MAX = 9
    };

    enum class ESGTakeOutReplaceType : uint8_t //Enum SGFramework.ESGTakeOutReplaceType
    {
        ESGTakeOutReplaceType_None = 0,
        ESGTakeOutReplaceType_All = 1,
        ESGTakeOutReplaceType_SameTeam = 2,
        ESGTakeOutReplaceType_NotSameTeam = 3,
        ESGTakeOutReplaceType_OrderFaction = 4,
        ESGTakeOutReplaceType_NotSameFaction = 5,
        ESGTakeOutReplaceType_MAX = 6
    };

    enum class ESecondModeMatchType : uint8_t //Enum SGFramework.ESecondModeMatchType
    {
        SecondModeMatchType_Mode = 0,
        SecondModeMatchType_Map = 1,
        SecondModeMatchType_MAX = 2
    };

    enum class EOrnamentSimulateMethod : uint8_t //Enum SGFramework.EOrnamentSimulateMethod
    {
        None = 0,
        RigidBody = 1,
        Kawaii = 2,
        SpringBone = 3,
        EOrnamentSimulateMethod_MAX = 4
    };

    enum class ESGParadropState : uint8_t //Enum SGFramework.ESGParadropState
    {
        None = 0,
        Throwing = 1,
        Falling = 2,
        Landing = 3,
        Done = 4,
        ESGParadropState_MAX = 5
    };

    enum class ETargetNotInRangeReason : uint8_t //Enum SGFramework.ETargetNotInRangeReason
    {
        None = 0,
        InsideEndRange = 1,
        OutsideStartRange = 2,
        Other = 3,
        ETargetNotInRangeReason_MAX = 4
    };

    enum class ELockOwner : uint8_t //Enum SGFramework.ELockOwner
    {
        LockOwner_None = 0,
        LockOwner_BreakWindow = 1,
        LockOwner_SearchAndKill = 2,
        LockOwner_SearchAndLoot = 3,
        LockOwner_MAX = 4
    };

    enum class ECAInputButtonWorkingStateInBattle : uint8_t //Enum SGFramework.ECAInputButtonWorkingStateInBattle
    {
        AllStateWork = 0,
        InBattleOnly = 1,
        OutOfBattleOnly = 2,
        ECAInputButtonWorkingStateInBattle_MAX = 3
    };

    enum class ECAInputButtonWorkingStatePanel : uint8_t //Enum SGFramework.ECAInputButtonWorkingStatePanel
    {
        AllPanelStateWork = 0,
        BagOpenBlock = 1,
        MapOpenBlock = 2,
        MainMenuOpenBlock = 3,
        ECAInputButtonWorkingStatePanel_MAX = 4
    };

    enum class EPCInputButton : uint8_t //Enum SGFramework.EPCInputButton
    {
        EButton_Empty = 0,
        EButton_SlientWalk = 1,
        EButton_Sprint = 2,
        EButton_Jump = 3,
        EButton_Crouch = 4,
        EButton_Prone = 5,
        EButton_Interact = 6,
        EButton_Fire = 7,
        EButton_FreeLook = 8,
        EButton_ChangeClip = 9,
        EButton_CheckMag = 10,
        EButton_SwitchWeapon = 11,
        EButton_SwitchFiremode = 12,
        EButton_Lean = 13,
        EButton_SetItem = 14,
        EButton_ToggleMap = 15,
        EButton_ToggleBag = 16,
        EButton_ToggleQuest = 17,
        EButton_ToggleSetting = 18,
        EButton_Grenade = 19,
        EButton_Aim = 20,
        EButton_ToggleTacticInv = 21,
        EButton_Loot = 22,
        EButton_QuickHeal = 23,
        EButton_NextScope = 24,
        EButton_RotateInventoryItem = 25,
        EButton_ScopeNextMagnification = 26,
        EButton_RouletteWheel = 27,
        EButton_HoldBreath = 28,
        EButton_HandleEscape = 29,
        EButton_LookAround = 30,
        EButton_HoldGrenade = 31,
        EButton_ToggleFaceMask = 32,
        EButton_MAX = 33
    };

    enum class ESGUIInputMode : uint8_t //Enum SGFramework.ESGUIInputMode
    {
        E_UnInited = 0,
        E_Mobile = 1,
        E_UIOnly = 2,
        E_GameOnly = 3,
        E_MAX = 4
    };

    enum class ESGMagType : uint8_t //Enum SGFramework.ESGMagType
    {
        MagType_NoneADS = 0,
        MagType_ADS = 1,
        MagType_1x = 2,
        MagType_2d5x = 3,
        MagType_3x = 4,
        MagType_3d5x = 5,
        MagType_4x = 6,
        MagType_6x = 7,
        MagType_6d5x = 8,
        MagType_9x = 9,
        MagType_10x = 10,
        MagType_16x = 11,
        MagType_20x = 12,
        MagType_2x = 13,
        MagType_7x = 14,
        MagType_MAX = 15
    };

    enum class EGlobalSensitivityType : uint8_t //Enum SGFramework.EGlobalSensitivityType
    {
        ESensitivityType_Low = 0,
        ESensitivityType_Normal = 1,
        ESensitivityType_High = 2,
        ESensitivityType_Custom = 3,
        ESensitivityType_MAX = 4
    };

    enum class EJoyStickMode : uint8_t //Enum SGFramework.EJoyStickMode
    {
        EJoyStickMode_None = 0,
        EJoyStickMode_CustomPanel = 1,
        EJoyStickMode_Normal = 2,
        EJoyStickMode_EnterCar = 3,
        EJoyStickMode_Driving = 4,
        EJoyStickMode_Skydiving_Plane = 5,
        EJoyStickMode_Skydiving = 6,
        EJoyStickMode_BigMap = 7,
        EJoyStickMode_VehiclePassengerInCar = 8,
        EJoyStickMode_VehiclePassengerLeanOut = 9,
        EJoyStickMode_Bag = 10,
        EJoyStickMode_Swim = 11,
        EJoyStickMode_Spectating = 12,
        EJoyStickMode_DrivingMode2 = 13,
        EJoyStickMode_FreeCamera = 14,
        EJoyStickMode_DrivingMode3 = 15,
        EJoyStickMode_MAX = 16
    };

    enum class EPointIndexType : uint8_t //Enum SGFramework.EPointIndexType
    {
        PointIndex_Movement = 0,
        PointIndex_Rotation = 1,
        PointIndex_MAX = 2
    };

    enum class ERecordMoveType : uint8_t //Enum SGFramework.ERecordMoveType
    {
        None = 0,
        Walk = 1,
        SilentWalk = 2,
        Sprint = 3,
        ERecordMoveType_MAX = 4
    };

    enum class EPlayerRecordType : uint8_t //Enum SGFramework.EPlayerRecordType
    {
        Loot = 0,
        Move = 1,
        Pose = 2,
        Fire = 3,
        ADS = 4,
        Operate = 5,
        EPlayerRecordType_MAX = 6
    };

    enum class EPlayerIdentityType : uint8_t //Enum SGFramework.EPlayerIdentityType
    {
        None = 0,
        OBPlayer = 1,
        CompetitionPlayer = 2,
        EPlayerIdentityType_MAX = 3
    };

    enum class EChaseActivityReportCondition : uint8_t //Enum SGFramework.EChaseActivityReportCondition
    {
        None = 0,
        HasAvatar = 1,
        WithoutAvatar = 2,
        EChaseActivityReportCondition_MAX = 3
    };

    enum class EPlayerLootExtDataType : uint8_t //Enum SGFramework.EPlayerLootExtDataType
    {
        None = 0,
        RecentIncome = 1,
        CharacterProperty = 2,
        TotalRechargeBullion = 3,
        RecentTenValuesChange = 4,
        EPlayerLootExtDataType_MAX = 5
    };

    enum class ENPCCourierOrderState : uint8_t //Enum SGFramework.ENPCCourierOrderState
    {
        None = 0,
        Default_NoCourier = 1,
        CourierPrepared = 2,
        OrderPreparing = 3,
        OrderDeliveried = 4,
        OrderDropped = 5,
        OrderSigned = 6,
        OrderClosed = 7,
        ENPCCourierOrderState_MAX = 8
    };

    enum class ENPCCourierCourierType : uint8_t //Enum SGFramework.ENPCCourierCourierType
    {
        None = 0,
        Scav_Normal = 1,
        PMC_Normal = 2,
        Mediate_Support1 = 3,
        Mediate_Support2 = 4,
        Mediate_Leading = 5,
        Fight_Loser = 6,
        Fight_Winner = 7,
        Group_Captain = 8,
        Group_Second = 9,
        Group_Third = 10,
        Group_Forth = 11,
        ENPCCourierCourierType_MAX = 12
    };

    enum class ETakeOutLimitType : uint8_t //Enum SGFramework.ETakeOutLimitType
    {
        TakeOutLimitType_None = 0,
        TakeOutLimitType_SelfTakeIn = 1,
        TakeOutLimitType_TeamTakeIn = 2,
        TakeOutLimitType_OrderTakeInSourceType = 3,
        TakeOutLimitType_MAX = 4
    };

    enum class EAnimOffsetType : uint8_t //Enum SGFramework.EAnimOffsetType
    {
        EAnimOffsetType_None = 0,
        EAnimOffsetType_Rot = 1,
        EAnimOffsetType_Loc = 2,
        EAnimOffsetType_SightRot = 3,
        EAnimOffsetType_MAX = 4
    };

    enum class ECharacterDeathType : uint8_t //Enum SGFramework.ECharacterDeathType
    {
        ECharacterDeathTypen_None = 0,
        ECharacterDeathType_Bullet = 1,
        ECharacterDeathType_BulletSpread = 2,
        ECharacterDeathType_MeleeWeapon = 3,
        ECharacterDeathType_MeleeWeaponSpread = 4,
        ECharacterDeathType_ThrownWeapon = 5,
        ECharacterDeathType_PetrolBomb = 6,
        ECharacterDeathType_Fall = 7,
        ECharacterDeathType_Environment = 8,
        ECharacterDeathType_Debuff = 9,
        ECharacterDeathType_Drug = 10,
        ECharacterDeathType_TripMine = 11,
        ECharacterDeathType_StealHeadWhenDBNO = 12,
        ECharacterDeathType_MAX = 13
    };

    enum class ECharacterDeathReason : uint8_t //Enum SGFramework.ECharacterDeathReason
    {
        ECharacterDeathReason_None = 0,
        ECharacterDeathReason_GunShotPenetrateArmor = 1,
        ECharacterDeathReason_GunShotNoArmor = 2,
        ECharacterDeathReason_GunShotNotPenetrateArmor = 3,
        ECharacterDeathReason_ThrownWeapon = 4,
        ECharacterDeathReason_LackInFoodOrMoisture = 5,
        ECharacterDeathReason_Debuff = 6,
        ECharacterDeathReason_Environment = 7,
        ECharacterDeathReason_GunShotPenetrateSpreadToHead = 8,
        ECharacterDeathReason_GunShotNotPenetrateSpreadToHead = 9,
        ECharacterDeathReason_GunShotUnableArmoredSpreadToHead = 10,
        ECharacterDeathReason_GunShotStomachNoArmorSpreadToHead = 11,
        ECharacterDeathReason_GunShotPenetrateSpreadToChest = 12,
        ECharacterDeathReason_GunShotNotPenetrateSpreadToChest = 13,
        ECharacterDeathReason_GunShotUnableArmoredSpreadToChest = 14,
        ECharacterDeathReason_GunShotStomachNoArmorSpreadToChest = 15,
        ECharacterDeathReason_MeleeWeapon = 16,
        ECharacterDeathReason_MeleePenetrateSpreadToHead = 17,
        ECharacterDeathReason_MeleeNotPenetrateSpreadToHead = 18,
        ECharacterDeathReason_MeleeUnableArmoredSpreadToHead = 19,
        ECharacterDeathReason_MeleeStomachNoArmorSpreadToHead = 20,
        ECharacterDeathReason_MeleePenetrateSpreadToChest = 21,
        ECharacterDeathReason_MeleeNotPenetrateSpreadToChest = 22,
        ECharacterDeathReason_MeleeUnableArmoredSpreadToChest = 23,
        ECharacterDeathReason_MeleeStomachNoArmorSpreadToChest = 24,
        ECharacterDeathReason_Poison = 25,
        ECharacterDeathReason_MAX = 26
    };

    enum class ECharacterHurtReason : uint8_t //Enum SGFramework.ECharacterHurtReason
    {
        ECharacterHurtReason_None = 0,
        ECharacterHurtReason_GunShotPenetrateArmor = 1,
        ECharacterHurtReason_GunShotNotPenetrateArmor = 2,
        ECharacterHurtReason_GunShotNoArmor = 3,
        ECharacterHurtReason_ThrownWeapon = 4,
        ECharacterHurtReason_LackInFoodOrMoisture = 5,
        ECharacterHurtReason_Debuff = 6,
        ECharacterHurtReason_Environment = 7,
        ECharacterHurtReason_MeleeWeapon = 8,
        ECharacterHurtReason_MAX = 9
    };

    enum class EDeathType : uint8_t //Enum SGFramework.EDeathType
    {
        DeathType_None = 0,
        DeathType_HeadShot = 1,
        DeathType_ChestShot = 2,
        DeathType_OtherShot = 3,
        DeathType_MAX = 4
    };

    enum class ESGCharacterCoverAimingState : uint8_t //Enum SGFramework.ESGCharacterCoverAimingState
    {
        CharacterCoverAimingState_Side = 0,
        CharacterCoverAimingState_Forward = 1,
        CharacterCoverAimingState_Top = 2,
        CharacterCoverAimingState_MAX = 3
    };

    enum class ESGCharacterCoverState : uint8_t //Enum SGFramework.ESGCharacterCoverState
    {
        CharacterCoverState_None = 0,
        CharacterCoverState_Idle = 1,
        CharacterCoverState_Moving = 2,
        CharacterCoverState_Blindfire = 3,
        CharacterCoverState_Aiming = 4,
        CharacterCoverState_LookingOut = 5,
        CharacterCoverState_MAX = 6
    };

    enum class ESGCoverHeight : uint8_t //Enum SGFramework.ESGCoverHeight
    {
        CoverHeight_Heigh = 0,
        CoverHeight_Low = 1,
        CoverHeight_MAX = 2
    };

    enum class ESGCoverType : uint8_t //Enum SGFramework.ESGCoverType
    {
        Cover_None = 0,
        Cover_Both = 1,
        Cover_Right = 2,
        Cover_Left = 3,
        Cover_MAX = 4
    };

    enum class EVaultEndMoveType : uint8_t //Enum SGFramework.EVaultEndMoveType
    {
        EVaultEndMove_Walking = 0,
        EVaultEndMove_Falling = 1,
        EVaultEndMove_MAX = 2
    };

    enum class EVaultAnimType : uint8_t //Enum SGFramework.EVaultAnimType
    {
        EVaultAnim_None = 0,
        EVA_Climb_FH_Stationary = 1,
        EVA_Climb_FH_Move = 2,
        EVA_Climb_Rifle_Stationary = 3,
        EVA_Climb_Rifle_Move = 4,
        EVA_Vault_FH_Stationary = 5,
        EVA_Vault_FH_MoveNarrow = 6,
        EVA_Vault_FH_Move = 7,
        EVA_Vault_Rifle_Stationary = 8,
        EVA_Vault_Rifle_MoveNarrow = 9,
        EVA_Vault_Rifle_Move = 10,
        EVaultAnimType_MAX = 11
    };

    enum class EObstacleHeightType : uint8_t //Enum SGFramework.EObstacleHeightType
    {
        EObstacleHeight_None = 0,
        EObstacleHeight_61 = 1,
        EObstacleHeight_91 = 2,
        EObstacleHeight_121 = 3,
        EObstacleHeight_161 = 4,
        EObstacleHeight_201 = 5,
        EObstacleHeight_Max = 6
    };

    enum class EClimbVaultChoice : uint8_t //Enum SGFramework.EClimbVaultChoice
    {
        EChoice_None = 0,
        EChoice_Climb = 1,
        EChoice_Vault = 2,
        EChoice_MAX = 3
    };

    enum class ESGCustomMovementType : uint8_t //Enum SGFramework.ESGCustomMovementType
    {
        SGCustomMovementType_None = 0,
        SGCustomMovementType_Valting = 1,
        SGCustomMovementType_Climbing = 2,
        SGCustomMovementType_LadderClimbing = 3,
        SGCustomMovementType_JumpEnterLadder = 4,
        SGCustomMovementType_MAX = 5
    };

    enum class EAssistAimMode : uint8_t //Enum SGFramework.EAssistAimMode
    {
        Closed = 0,
        Normal = 1,
        Improved = 2,
        EAssistAimMode_MAX = 3
    };

    enum class EMovementFailureReason : uint8_t //Enum SGFramework.EMovementFailureReason
    {
        MovementFailureReason_None = 0,
        MovementFailureReason_CharacterNotExist = 1,
        MovementFailureReason_AlreadyInState = 2,
        MovementFailureReason_NotSupport = 3,
        MovementFailureReason_TooFrequent = 4,
        MovementFailureReason_SimulatingPhysics = 5,
        MovementFailureReason_Swimming = 6,
        MovementFailureReason_UsingItem = 7,
        MovementFailureReason_InDBNOStatus = 8,
        MovementFailureReason_NotPassCollisionTest = 9,
        MovementFailureReason_TouchWaterVolume = 10,
        MovementFailureReason_CanNotStandNow = 11,
        MovementFailureReason_CanNotProneNow = 12,
        MovementFailureReason_Falling = 13,
        MovementFailureReason_LadderClimbing = 14,
        MovementFailureReason_MAX = 15
    };

    enum class ETurnInfo : uint8_t //Enum SGFramework.ETurnInfo
    {
        None = 0,
        Left = 1,
        Right = 2,
        ETurnInfo_MAX = 3
    };

    enum class EHitDirection : uint8_t //Enum SGFramework.EHitDirection
    {
        HitDirection_None = 0,
        HitDirection_Front = 1,
        HitDirection_Back = 2,
        HitDirection_Left = 3,
        HitDirection_Right = 4,
        HitDirection_Swim = 5,
        HitDirection_Fall = 6,
        HitDirection_MAX = 7
    };

    enum class ETrajectoryDrawPolicy : uint8_t //Enum SGFramework.ETrajectoryDrawPolicy
    {
        DrawPolicy_Spline = 0,
        DrawPolicy_BeamParticle = 1,
        DrawPolicy_InstanceStaticMesh = 2,
        DrawPolicy_ProceduralMesh_Simple = 3,
        DrawPolicy_ProceduralMesh_Complex = 4,
        DrawPolicy_MAX = 5
    };

    enum class ERangeInAreaType : uint8_t //Enum SGFramework.ERangeInAreaType
    {
        None = 0,
        Escape = 1,
        Door = 2,
        ERangeInAreaType_MAX = 3
    };

    enum class RotateType : uint8_t //Enum SGFramework.RotateType
    {
        ClockWise = 0,
        AntiClockWise = 1,
        RotateType_MAX = 2
    };

    enum class ESCSTimeType : uint8_t //Enum SGFramework.ESCSTimeType
    {
        ESCSTimeType_Max = 0,
        ESCSTimeType_Min = 1
    };

    enum class ESCSType : uint8_t //Enum SGFramework.ESCSType
    {
        ESCSType_FollowState = 0,
        ESCSType_OnlyTime = 1,
        ESCSType_FollowAndTime = 2,
        ESCSType_MAX = 3
    };

    enum class ETextureMergeID : uint8_t //Enum SGFramework.ETextureMergeID
    {
        TextureMergeID_None = 0,
        TextureMergeID_MAX = 3
    };

    enum class ETooltipShowPositionVertical : uint8_t //Enum SGFramework.ETooltipShowPositionVertical
    {
        None = 0,
        Top = 1,
        Center = 2,
        Bottom = 3,
        ETooltipShowPositionVertical_MAX = 4
    };

    enum class ETooltipShowPositionHorizontal : uint8_t //Enum SGFramework.ETooltipShowPositionHorizontal
    {
        None = 0,
        Left = 1,
        Center = 2,
        Right = 3,
        ETooltipShowPositionHorizontal_MAX = 4
    };

    enum class EVehicleSoundType : uint8_t //Enum SGFramework.EVehicleSoundType
    {
        EVehicleSound_None = 0,
        EVehicleSound_LocalEngineStartUp = 1,
        EVehicleSound_RemoteEngineStartUp = 2,
        EVehicleSound_EngineStop = 3,
        EVehicleSound_Engine = 4,
        EVehicleSound_BoostEngine = 5,
        EVehicleSound_StopBoostEngine = 6,
        EVehicleSound_Skid = 7,
        EVehicleSound_SkidEnd = 8,
        EVehicleSound_LocalHornPressed = 9,
        EVehicleSound_LocalHornReleased = 10,
        EVehicleSound_RemoteHornPressed = 11,
        EVehicleSound_RemoteHornReleased = 12,
        EVehicleSound_Explode = 13,
        EVehicleSound_TireExplode = 14,
        EVehicleSound_Burning = 15,
        EVehicleSound_StopBurning = 16,
        EVehicleSound_HitSpecialMaterial = 17,
        EVehicleSound_HitPlayer = 18,
        EVehicleSound_CommonHit = 19,
        EVehicleSound_Landing = 20,
        EVehicleSound_Brake = 21,
        EVehicleSound_DiverInToWater = 22,
        EVehicleSound_MAX = 23
    };

    enum class EVehicleSpawnType : uint8_t //Enum SGFramework.EVehicleSpawnType
    {
        AllRandom = 1,
        TotalCount = 2,
        EVehicleSpawnType_MAX = 3
    };

    enum class EPreloadAnimationMode : uint8_t //Enum SGFramework.EPreloadAnimationMode
    {
        None = 0,
        Minimal = 1,
        All = 2,
        EPreloadAnimationMode_MAX = 3
    };

    enum class ESGWeaponDisplayMode : uint8_t //Enum SGFramework.ESGWeaponDisplayMode
    {
        EWeapDisplayMode_None = 0,
        EWeapDisplayMode_Zooming = 1,
        EWeapDisplayMode_FirstPerson = 2,
        EWeapDisplayMode_ThirdPerson = 3,
        EWeapDisplayMode_ThirdPersonOther = 4,
        EWeapDisplayMode_MAX = 5
    };

    enum class ECaptureLightGroupType : uint8_t //Enum SGFramework.ECaptureLightGroupType
    {
        Weapon = 0,
        Helmet = 1,
        HelmetAdapter = 2,
        HorizontalAssembly = 3,
        ObliqueAssembly = 4,
        ThighArmor = 5,
        ECaptureLightGroupType_MAX = 6
    };

    enum class EBoltState : uint8_t //Enum SGFramework.EBoltState
    {
        BOLTSTATE_CLOSE = 0,
        BOLTSTATE_OPEN = 1,
        BOLTSTATE_TONIL = 2,
        BOLTSTATE_MAX = 3
    };

    enum class EWeapAnimRecoil : uint8_t //Enum SGFramework.EWeapAnimRecoil
    {
        EWeapAnimRecoil_None = 0,
        EWeapAnimRecoil_Override = 1,
        EWeapAnimRecoil_Additive = 2,
        EWeapAnimRecoil_Wave = 3,
        EWeapAnimRecoil_Spring = 4,
        EWeapAnimRecoil_MAX = 5
    };

    enum class ESGGrenadeDamageType : uint8_t //Enum SGFramework.ESGGrenadeDamageType
    {
        None = 0,
        EGrenadeDamageType_FragDamage = 1,
        EGrenadeDamageType_HegDamage = 2,
        EGrenadeDamageType_MolotovDamage = 3,
        EGrenadeDamageType_Max = 4,
        ESGGrenadeDamageType_MAX = 5
    };

    enum class ESGWeaponReloadKind : uint8_t //Enum SGFramework.ESGWeaponReloadKind
    {
        Unknown = 0,
        Normal = 1,
        OneByOne = 2,
        MultiBores = 3,
        ESGWeaponReloadKind_MAX = 4
    };

    enum class EAvoidValidationFlagType : uint32_t //Enum SGFramework.EAvoidValidationFlagType
    {
        E_SetAdsMoaX = 1,
        E_SetAdsMoaY = 2,
        E_ToggleBulletGravity = 4,
        E_ToggleBulletSpread = 8,
        E_ToggleBulletRecoil = 16,
        E_RecoilHorizontal = 32,
        E_RecoilVertical = 64,
        E_Gunkick = 128,
        E_SetAccuracy = 256,
        E_ADotEnableSpread = 512,
        E_ADotEnableMoa = 1024,
        E_MAX = 1025
    };

    enum class ESGWeaponValidateFailType : uint8_t //Enum SGFramework.ESGWeaponValidateFailType
    {
        FailType_CheckFireMode = 0,
        FailType_CheckDamageThroughBody = 1,
        FailType_CheckRotation = 2,
        FailType_CheckBulletFlyPath = 3,
        FailType_CheckBulletFlyPath_XY = 4,
        FailType_CheckBulletFlyPath_Z = 5,
        FailType_CheckFlyDistance = 6,
        FailType_CheckCauserLocation = 7,
        FailType_CheckStartFireXY = 8,
        FailType_CheckStartFireZ = 9,
        FailType_CheckDamageTakerLoc = 10,
        FailType_CheckBulletFlyImportantLoc = 11,
        FailType_CheckBulletFlyEffectDis = 12,
        FailType_CheckBulletFlyFirstDrop = 13,
        FailType_CheckBulletFlyMaxDropDis = 14,
        FailType_CheckBulletFlyBlock = 15,
        FailType_CheckBulletFlyDropVector = 16,
        FailType_CheckBulletFlyDropAngle = 17,
        FailType_CheckBulletFlyPathDropVector = 18,
        FailType_CheckBulletFlyOneSectionBlock = 19,
        FailType_CheckBulletFlyOneSectionBlock_Bias = 20,
        FailType_CheckDamageValue = 21,
        FailType_CheckRecoil = 22,
        FailType_CheckAmmoClass = 23,
        FailType_CheckCaliberType = 24,
        FailType_CheckFireInterval_Single = 25,
        FailType_CheckFireInterval_Auto = 26,
        FailType_CheckFireInterval_Auto_FailCount = 27,
        FailType_CheckShotGunMOAOrSpread = 28,
        FailType_CheckFireSpread = 29,
        FailType_CheckRecoilWhenHit = 30,
        FailType_CheckAutoAiming = 31,
        FailType_CheckZoom = 32,
        FailType_CheckEnergy = 33,
        FailType_CheckAmmoWhenHit = 34,
        FailType_CheckStartFireLocBlockToCharacter = 35,
        FailType_CheckBlockReverseDirection = 36,
        FailType_CheckFireInterval_Burst = 37,
        FailType_CheckFireInterval_BurstInner = 38,
        FailType_CheckFireInfoHasHandled = 39,
        FailType_CheckFireInfoHasHandled_HitLargerThanFire = 40,
        FailType_CheckFireEndLoc = 41,
        FailType_CheckNetStat_LagFail = 42,
        FailType_CheckNetStat_LossFail = 43,
        FailType_CheckNetStat_ImediatelyFail = 44,
        FailType_GunEnd = 100,
        FailType_MeleeCheckFireInterval = 101,
        FailType_MeleeCheckPhase = 102,
        FailType_MeleeCheckPhaseInterval = 103,
        FailType_MeleeCheckDamageValue = 104,
        FailType_MeleeCheckRotation = 105,
        FailType_MeleeCheckCauserLoc = 106,
        FailType_MeleeCheckCauserXY = 107,
        FailType_MeleeCheckCauserZ = 108,
        FailType_MeleeCheckTakerLoc = 109,
        FailType_MeleeCheckFireDis = 110,
        FailType_MeleeCheckBlock = 111,
        FailType_MAX = 112
    };

    enum class EWeaponMergeStatus : uint8_t //Enum SGFramework.EWeaponMergeStatus
    {
        EWeaponMergeStatus_None = 0,
        EWeaponMergeStatus_Success = 1,
        EWeaponMergeStatus_AsyncMerging = 2,
        EWeaponMergeStatus_NullMeshRetry = 3,
        EWeaponMergeStatus_WaitForLastMerge = 4,
        EWeaponMergeStatus_NotEnoughAdapters = 5,
        EWeaponMergeStatus_LoadingAdapters = 6,
        EWeaponMergeStatus_WaitForShare = 7,
        EWeaponMergeStatus_MeshObjectNull = 8,
        EWeaponMergeStatus_SameAdapters = 9,
        EWeaponMergeStatus_Abort = 10,
        EWeaponMergeStatus_WaitForStreamIn = 11,
        EWeaponMergeStatus_MAX = 12
    };

    enum class EWeaponMeshDisplayType : uint8_t //Enum SGFramework.EWeaponMeshDisplayType
    {
        WeaponMeshDisplayType_Modular = 0,
        WeaponMeshDisplayType_Simple = 1,
        WeaponMeshDisplayType_Hide = 2,
        WeaponMeshDisplayType_MAX = 3
    };

    enum class ESGFireEffectParticleType : uint8_t //Enum SGFramework.ESGFireEffectParticleType
    {
        EParticleType_Fire = 0,
        EParticleType_Fog = 1,
        EParticleType_Light = 2,
        EParticleType_Light_LDR = 3,
        EParticleType_Light3P = 4,
        EParticleType_Light3P_LDR = 5,
        EParticleType_BulletShell = 6,
        EParticleType_BulletShellSmoke = 7,
        EParticleType_Fire3P = 8,
        EParticleType_BulletTracer = 9,
        EParticleType_SmokeTrail = 10,
        EParticleType_Molotov = 11,
        EParticleType_CompositeFire = 12,
        EParticleType_CompositeFire3P = 13,
        EParticleType_MergeFire_FPHDR = 14,
        EParticleType_MergeFire_FPLDR = 15,
        EParticleType_MergeFire_TPHDR = 16,
        EParticleType_MergeFire_TPLDR = 17,
        EParticleType_BarrelSmoke = 18,
        EParticleType_Max = 19
    };

    enum class ETestAnimType : uint8_t //Enum SGFramework.ETestAnimType
    {
        TestReload = 0,
        TestFastReload = 1,
        TestTacticalReload = 2,
        TestAmmoIn = 3,
        TestAmmoOut = 4,
        TestCheckWeapon = 5,
        TestCheckMagazine = 6,
        TestCheckFireMode0 = 7,
        TestCheckFireMode1 = 8,
        TestCheckFireMode2 = 9,
        TestPullBolt = 10,
        TestEquip = 11,
        TestUnEquip = 12,
        TestCheckChamber = 13,
        TestSetupMod = 14,
        ETestAnimType_MAX = 15
    };

    enum class ESGMagazineCheckState : uint8_t //Enum SGFramework.ESGMagazineCheckState
    {
        ESGMagazineCheckState_Unknown = 0,
        ESGMagazineCheckState_RoughChecked = 1,
        ESGMagazineCheckState_FullyChecked = 2,
        ESGMagazineCheckState_FullOrEmpty = 3,
        ESGMagazineCheckState_MAX = 4
    };

    enum class ESGChangeClipState : uint8_t //Enum SGFramework.ESGChangeClipState
    {
        ESGChangeClipState_Begin = 0,
        ESGChangeClipState_Loop = 1,
        ESGChangeClipState_End = 2,
        ESGChangeClipState_PutOldMagazineInBag = 3,
        ESGChangeClipState_GetNewMagazine = 4,
        ESGChangeClipState_AttachMagazineToWeapon = 5,
        ESGChangeClipState_ReleaseMagazine = 6,
        ESGChangeClipState_OpenBoltEnd = 7,
        ESGChangeClipState_EndBoltStart = 8,
        ESGChangeClipState_ReleaseHoldOn = 9,
        ESGChangeClipState_MAX = 10
    };

    enum class ESGRecoilRecoverAlgorithm : uint8_t //Enum SGFramework.ESGRecoilRecoverAlgorithm
    {
        ESGRecoilRecoverAlgorithm_None = 0,
        ESGRecoilRecoverAlgorithm_SmoothLowerSpeed = 1,
        ESGRecoilRecoverAlgorithm_SpeedCurve = 2,
        ESGRecoilRecoverAlgorithm_MAX = 3
    };

    enum class EFillMagazineFailReason : uint8_t //Enum SGFramework.EFillMagazineFailReason
    {
        EFillMagazineFailReason_None = 0,
        EFillMagazineFailReason_Success = 1,
        EFillMagazineFailReason_InvalidMagazine = 2,
        EFillMagazineFailReason_InvalidAmmoInventory = 3,
        EFillMagazineFailReason_TypeNotMatch = 4,
        EFillMagazineFailReason_MagazineFull = 5,
        EFillMagazineFailReason_Unknown = 6,
        EFillMagazineFailReason_MAX = 7
    };

    enum class ESGWeaponRecoilState : uint8_t //Enum SGFramework.ESGWeaponRecoilState
    {
        ESGWeaponRecoilState_None = 0,
        ESGWeaponRecoilState_Recoil = 1,
        ESGWeaponRecoilState_Recover = 2,
        ESGWeaponRecoilState_MAX = 3
    };

    enum class ESGInputTriggerEvent : uint8_t //Enum SGFramework.ESGInputTriggerEvent
    {
        EWeapEvent_None = 0,
        EWeapEvent_Activate = 1,
        EWeapEvent_HoldFire = 2,
        EWeapEvent_BeginFire = 3,
        EWeapEvent_BeginZoomAndFire = 4,
        EWeapEvent_EndFire = 5,
        EWeapEvent_EndAltFire = 6,
        EWeapEvent_BeginChangeClip = 7,
        EWeapEvent_BeginMount = 8,
        EWeapEvent_Deactivate = 9,
        EWeapEvent_PutBackWeapon = 10,
        EWeapEvent_BeginZooming = 11,
        EWeapEvent_EndZooming = 12,
        EWeapEvent_Interaction = 13,
        EWeapEvent_StopShootAiming = 14,
        EWeapEvent_BeginShoulderZoom = 15,
        EWeapEvent_AbortChangeClip = 16,
        EWeapEvent_ReloadFast = 17,
        EWeapEvent_CheckMagazine = 18,
        EWeapEvent_CheckWeapon = 19,
        EWeapEvent_HoldOpen = 20,
        EWeapEvent_AmmoOut = 21,
        EWeapEvent_AmmoIn = 22,
        EWeapEvent_BeginPullBolt = 23,
        EWeapEvent_AbortPreFiring = 24,
        EWeapEvent_BeginSwitchFireMode = 25,
        EWeapEvent_BeginCheckFireMode = 26,
        EWeapEvent_BeginCheckBore = 27,
        EWeapEvent_SetupMod = 28,
        EWeapEvent_EndBagOpen = 29,
        EWeapEvent_BeginBagOpen = 30,
        EWeapEvent_KeepBagOpen = 31,
        EWeapEvent_Max = 32,
        EWeapEvent_BeginUnloadMag = 33,
        EWeapEvent_BeginLoadMag = 34
    };

    enum class ESGAdapterEvent : uint8_t //Enum SGFramework.ESGAdapterEvent
    {
        ESGAdapterEvent_None = 0,
        ESGAdapterEvent_BeginZooming = 1,
        ESGAdapterEvent_EndZooming = 2,
        ESGAdapterEvent_BeginZoomPlug = 3,
        ESGAdapterEvent_EndZoomPlug = 4,
        ESGAdapterEvent_Max = 5
    };

    enum class EHandIKType : uint8_t //Enum SGFramework.EHandIKType
    {
        HandIKType_None = 0,
        HandIKType_Primary = 1,
        HandIKType_Submachine = 2,
        HandIKType_Pistol = 3,
        HandIKType_SpecialLongWeapon = 4,
        HandIKType_Max = 5
    };

    enum class ESGWeaponFireMode : uint8_t //Enum SGFramework.ESGWeaponFireMode
    {
        EFireModeType_None = 0,
        EFireModeType_InstantFire = 1,
        EFireModeType_ProjectileFire = 2,
        EFireModeType_PhysicalBullet = 3,
        EFireModeType_MeleeFire = 4,
        EFireModeType_ProjectileLauncherFire = 5,
        EFireModeType_MAX = 6
    };

    enum class EWeaponSwitchType : uint8_t //Enum SGFramework.EWeaponSwitchType
    {
        EWeapSwitch_EmptyHand = 0,
        EWeapSwitch_FirstMainWeapon = 1,
        EWeapSwitch_SecondMainWeapon = 2,
        EWeapSwitch_AssiWeapon = 3,
        EWeapSwitch_MeleeWeapon = 4,
        EWeapSwitch_FirstThrowWeapon = 5,
        EWeapSwitch_Max = 6
    };

    enum class EMagazineType : uint8_t //Enum SGFramework.EMagazineType
    {
        MagazineType_None = 0,
        MagazineType_Rifle = 1,
        MagazineType_ShotGun = 2,
        MagazineType_Sniper = 3,
        MagazineType_Pistol = 4,
        MagazineType_MAX = 5
    };

    enum class EItemAmmo : uint8_t //Enum SGFramework.EItemAmmo
    {
        ItemAmmo_None = 0,
        ItemAmmo_5mm56 = 1,
        ItemAmmo_7mm62 = 2,
        ItemAmmo_9mm = 3,
        ItemAmmo_mm45ACP = 4,
        ItemAmmo_12Gauge = 5,
        ItemAmmo_mm300Magnum = 6,
        ItemAmmo_Bolt = 7,
        ItemAmmo_5mm8 = 8,
        ItemAmmo_155mm = 9,
        ItemAmmo_MAX = 10
    };

    enum class ESGPenetrationObjectType : uint8_t //Enum SGFramework.ESGPenetrationObjectType
    {
        None = 0,
        Water = 1,
        ESGPenetrationObjectType_MAX = 2
    };

    enum class EVehicleAnimType : uint8_t //Enum SGFramework.EVehicleAnimType
    {
        EVehicleAnimType_None = 0,
        EVehicleAnimType_LongWeapon = 1,
        EVehicleAnimType_ShortWeapon = 2,
        EVehicleAnimType_MeleeWeapon = 3,
        EVehicleAnimType_ThrowWeapon = 4,
        EVehicleAnimTypeMax = 5,
        EVehicleAnimType_MAX = 6
    };

    enum class ESGWeaponResType : uint8_t //Enum SGFramework.ESGWeaponResType
    {
        ESGWeapResType_None = 0,
        ESGWeapResType_AnimationBase = 1,
        ESGWeapResType_WeaponAnim = 2,
        ESGWeapResType_WeaponTrajectory = 3,
        ESGWeapResType_MAX = 4
    };

    enum class ETakeHitDirInfo : uint8_t //Enum SGFramework.ETakeHitDirInfo
    {
        None = 0,
        Front = 1,
        Back = 2,
        Left = 3,
        Right = 4,
        ETakeHitDirInfo_MAX = 5
    };

    enum class EAnimationPlayType : uint8_t //Enum SGFramework.EAnimationPlayType
    {
        AnimPlayType_None = 0,
        AnimPlayType_FullBody = 1,
        AnimPlayType_FullBodyNoIK = 2,
        AnimPlayType_FullBodyWithCameraRotation = 3,
        AnimPlayType_UpperBody = 4,
        AnimPlayType_UpperBodyNoIK = 5,
        AnimPlayType_LowerBody = 6,
        AnimPlayType_FPPAnimSlot = 7,
        AnimPlayType_MAX = 8
    };

    enum class ESGWeaponAddFunction : uint8_t //Enum SGFramework.ESGWeaponAddFunction
    {
        EWeapAddFunc_None = 0,
        EWeapAddFunc_Zooming = 1,
        EWeapAddFunc_Silencer = 2,
        EWeapAddFunc_FlashSuppressor = 3,
        EWeapAddFunc_ClipExtent = 4,
        EWeapAddFunc_ChangeClipFaster = 5,
        EBackWeapPos_Max = 6,
        ESGWeaponAddFunction_MAX = 7
    };

    enum class EBurstStopMode : uint8_t //Enum SGFramework.EBurstStopMode
    {
        EBurstStopMode_Clear = 0,
        EBurstStopMode_Stay = 1,
        EBurstStopMode_Fin = 2,
        EBurstStopMode_MAX = 3
    };

    enum class ESGAutoZoomWeaponType : uint8_t //Enum SGFramework.ESGAutoZoomWeaponType
    {
        EAutoZoomWeaponType_None = 0,
        EAutoZoomWeaponType_Auto = 1,
        EAutoZoomWeaponType_Pump = 2,
        EAutoZoomWeaponType_Semi = 3,
        EAutoZoomWeaponType_DP12 = 4,
        EAutoZoomWeaponType_MAX = 5
    };

    enum class ESGBackWeaponPos : uint8_t //Enum SGFramework.ESGBackWeaponPos
    {
        EBackWeapPos_None = 0,
        EBackWeapPos_Primary = 1,
        EBackWeapPos_Secondary = 2,
        EBackWeapPos_Assist = 3,
        EBackWeapPos_Melee = 4,
        EBackWeapPos_Grenade = 5,
        EBackWeapPos_Max = 6
    };

    enum class ESGBackWeaponAttachType : uint8_t //Enum SGFramework.ESGBackWeaponAttachType
    {
        EBackWeapAT_None = 0,
        EBackWeapAT_MainWeapon = 1,
        EBackWeapAT_AssistWeapon = 2,
        EBackWeapAT_MeleeWeapon = 3,
        EBackWeapAT_Grenade = 4,
        EBackWeapAT_Custom = 5,
        EBackWeapAT_MAX = 6
    };

    enum class ESGWeaponHandgripType : uint8_t //Enum SGFramework.ESGWeaponHandgripType
    {
        ESGWeaponHandgripType_Normal = 0,
        ESGWeaponHandgripType_Casual = 1,
        ESGWeaponHandgripType_MAX = 2
    };

    enum class ESGWeaponReargripType : uint8_t //Enum SGFramework.ESGWeaponReargripType
    {
        ESGWeaponReargripType_None = 0,
        ESGWeaponReargripType_PistolGrip = 1,
        ESGWeaponReargripType_StockGrip = 2,
        ESGWeaponReargripType_MAX = 3
    };

    enum class ESGWeaponForegripType : uint8_t //Enum SGFramework.ESGWeaponForegripType
    {
        ESGWeaponForegripType_None = 0,
        ESGWeaponForegripType_VerticalForegrip = 1,
        ESGWeaponForegripType_AngledForegrip = 2,
        ESGWeaponForegripType_ThumbForegrip = 3,
        ESGWeaponForegripType_DiagonalForegrip = 4,
        ESGWeaponForegripType_ShiftForegrip = 5,
        ESGWeaponForegripType_HandguardForegrip = 6,
        ESGWeaponForegripType_LeftHandGrip = 7,
        ESGWeaponForegripType_LaserAvoid = 8,
        ESGWeaponForegripType_AccessoriesGrip = 9,
        ESGWeaponForegripType_AccessoriesGrip2 = 10,
        ESGWeaponForegripType_MAX = 11
    };

    enum class ESGWeapAdapterItemType : uint8_t //Enum SGFramework.ESGWeapAdapterItemType
    {
        EWeapAASubType_None = 0,
        EWeapAASubType_Suppressor_Default = 1,
        EWeapAASubType_SuppressorForAR = 2,
        EWeapAASubType_FlashHiderAR = 3,
        EWeapAASubType_CompensatorAR = 4,
        EWeapAASubType_SuppressorSMG = 5,
        EWeapAASubType_FlashHiderSMG = 6,
        EWeapAASubType_CompensatorSMG = 7,
        EWeapAASubType_SuppressorSR = 8,
        EWeapAASubType_FlashHiderSR = 9,
        EWeapAASubType_CompensatorSR = 10,
        EWeapAASubType_SuppressorHG = 11,
        EWeapAASubType_Choke = 12,
        EWeapAASubType_Duckbill = 13,
        EWeapAASubType_SilencerAR = 14,
        EWeapAASubType_SilencerSR = 15,
        EWeapAASubType_SilencerSMG = 16,
        EWeapAASubType_SilencerPistol = 17,
        EWeapAASubType_VerticalForegrip = 18,
        EWeapAASubType_AngledForegrip = 19,
        EWeapAASubType_ThumbForegrip = 20,
        EWeapAASubType_HalfForegrip = 21,
        EWeapAASubType_LightForegrip = 22,
        EWeapAASubType_Quiver = 23,
        EWeapAASubType_RangeScope_Default = 24,
        EWeapAASubType_RedDot = 25,
        EWeapAASubType_Holographic = 26,
        EWeapAASubType_2xScope = 27,
        EWeapAASubType_3xScope = 28,
        EWeapAASubType_4xScope = 29,
        EWeapAASubType_6xScope = 30,
        EWeapAASubType_8xScope = 31,
        EWeapAASubType_VSS4xScope = 32,
        EWeapAASubType_Dot = 33,
        EWeapAASubType_ExtendedMagAR = 34,
        EWeapAASubType_QuickDrawMagAR = 35,
        EWeapAASubType_ExtendedQuickDrawMagAR = 36,
        EWeapAASubType_ExtendedMagSMG = 37,
        EWeapAASubType_QuickDrawMagSMG = 38,
        EWeapAASubType_ExtendedQuickDrawMagSMG = 39,
        EWeapAASubType_ExtendedMagSR = 40,
        EWeapAASubType_QuickDrawMagSR = 41,
        EWeapAASubType_ExtendedQuickDrawMagSR = 42,
        EWeapAASubType_ExtendedMagHG = 43,
        EWeapAASubType_QuickDrawMagHG = 44,
        EWeapAASubType_ExtendedQuickDrawMagHG = 45,
        EWeapAASubType_Stock_Default = 46,
        EWeapAASubType_TacticalStock = 47,
        EWeapAASubType_StockUZI = 48,
        EWeapAASubType_CheekPadRifle = 49,
        EWeapAASubType_CheekPadSniper = 50,
        EWeapAASubType_BulletLoops = 51,
        EWeapAASubType_BulletLoopsKar98k = 52,
        EWeapAASubType_Mag762_31 = 53,
        EWeapAASubType_Mag556_31 = 54,
        EWeapAASubType_Mag155_9 = 55,
        EWeapAASubType_Mag9_31 = 56,
        EWeapAASubType_Mag762_10_Sniper = 57,
        EWeapAASubType_Mag_Custom = 58,
        EWeapAASubType_FlashLight = 59,
        EWeapAASubType_Max = 60
    };

    enum class ETacticalPistolStatus : uint8_t //Enum SGFramework.ETacticalPistolStatus
    {
        None = 0,
        NonTacticalPistol = 1,
        TacticalPistol = 2,
        TransToTacticalPistol = 3,
        TransToNonTacticalPistol = 4,
        TacticalPistolTransTolPistol = 5,
        TacticalPistolPutDown = 6,
        ETacticalPistolStatus_MAX = 7
    };

    enum class EAdapterType : uint8_t //Enum SGFramework.EAdapterType
    {
        Sub_Adapter_Default = 0,
        Sub_Adapter_Muzzle = 1,
        Sub_Adapter_LowerRail = 2,
        Sub_Adapter_UpperRail = 3,
        Sub_Adapter_SideRail = 4,
        Sub_Adapter_Magazines = 5,
        Sub_Adapter_Stocks = 6,
        Sub_Adapter_Grip = 7,
        Sub_Adapter_Cheek = 8,
        Sub_Adapter_MAX = 9
    };

    enum class ESGWeaponHoldPose : uint8_t //Enum SGFramework.ESGWeaponHoldPose
    {
        EWeapHoldPose_None = 0,
        EWeapHoldPose_Stand = 1,
        EWeapHoldPose_StandWalk = 2,
        EWeapHoldPose_Crouch = 3,
        EWeapHoldPose_CrouchWalk = 4,
        EWeapHoldPose_Prone = 5,
        EWeapHoldPose_ProneMove = 6,
        EWeapHoldPose_Jump = 7,
        EWeapHoldPose_Sprint = 8,
        EWeapHoldPose_Max = 9
    };

    enum class ESGWeaponMode : uint8_t //Enum SGFramework.ESGWeaponMode
    {
        EWeapMode_None = 0,
        EWeapMode_OwnerFirstPerson = 1,
        EWeapMode_OwnerThirdPerson = 2,
        EWeapMode_ObserverFirstPerson = 3,
        EWeapMode_ThirdPerson = 4,
        EWeapMode_MAX = 5
    };

    enum class ESGMeleeWeaponSubType : uint8_t //Enum SGFramework.ESGMeleeWeaponSubType
    {
        EMeleeWeaponSubType_None = 0,
        EMeleeWeaponSubType_Blunt = 1,
        EMeleeWeaponSubType_Sharp = 2,
        EMeleeWeaponSubType_Max = 3
    };

    enum class ESGGunSilencerType : uint8_t //Enum SGFramework.ESGGunSilencerType
    {
        ESilencerNone = 0,
        ESilencerLow = 1,
        ESilencerMiddle = 2,
        ESilencerHigh = 3,
        ESilencerMax = 4,
        ESGGunSilencerType_MAX = 5
    };

    enum class ESGWeaponDisplayPolicy : uint8_t //Enum SGFramework.ESGWeaponDisplayPolicy
    {
        ESGWeaponDisplayPolicy_None = 0,
        ESGWeaponDisplayPolicy_1P = 1,
        ESGWeaponDisplayPolicy_LOD0 = 2,
        ESGWeaponDisplayPolicy_LOD1 = 3,
        ESGWeaponDisplayPolicy_LOD2 = 4,
        ESGWeaponDisplayPolicy_LOD3 = 5,
        ESGWeaponDisplayPolicy_NotRender = 6,
        ESGWeaponDisplayPolicy_MAX = 7
    };

    enum class ESGGunWeaponSubType : uint8_t //Enum SGFramework.ESGGunWeaponSubType
    {
        EGunWeaponSubType_None = 0,
        EGunWeaponSubType_LMG = 1,
        EGunWeaponSubType_SMG = 2,
        EGunWeaponSubType_DMR = 3,
        EGunWeaponSubType_Pistol = 4,
        EGunWeaponSubType_SniperRifle = 5,
        EGunWeaponSubType_AssualtRifle = 6,
        EGunWeaponSubType_AssualtCarbine = 7,
        EGunWeaponSubType_Shotgun = 8,
        EGunWeaponSubType_Missile = 9,
        EGunWeaponSubType_Max = 10
    };

    enum class ESGSpecialWeaponSubType : uint8_t //Enum SGFramework.ESGSpecialWeaponSubType
    {
        ESGSpecialWeaponSubType_None = 0,
        ESGSpecialWeaponSubType_Telescope = 1,
        ESGSpecialWeaponSubType_DroneRemoteControl = 2,
        ESGSpecialWeaponSubType_Max = 3
    };

    enum class EAntiHackZoomEventType : uint8_t //Enum SGFramework.EAntiHackZoomEventType
    {
        None = 0,
        StartZoom = 1,
        ReachZoomFOV = 2,
        ReachZoomTime = 3,
        CancelZoom = 4,
        EAntiHackZoomEventType_MAX = 5
    };

    enum class ESoundIndicatorReportScoreType : uint8_t //Enum SGFramework.ESoundIndicatorReportScoreType
    {
        None = 0,
        Prone = 1,
        SilenceWalk = 2,
        Crouch = 3,
        Lean = 4,
        Fire = 5,
        Sprint = 6,
        Jump = 7,
        ADS = 8,
        ThrowGrenade = 9,
        ESoundIndicatorReportScoreType_MAX = 10
    };

    enum class ESoundSourceActorType : uint8_t //Enum SGFramework.ESoundSourceActorType
    {
        None = 0,
        Active = 1,
        Passive = 2,
        ESoundSourceActorType_MAX = 3
    };

    enum class ESoundInfluenceType : uint8_t //Enum SGFramework.ESoundInfluenceType
    {
        None = 0,
        PhysicsSurface = 1,
        FacialEquipment = 2,
        Weight = 3,
        Silencer = 4,
        SpecialAI = 5,
        ESoundInfluenceType_MAX = 6
    };

    enum class EPassengerSeatType : uint8_t //Enum SGFramework.EPassengerSeatType
    {
        PassengerSeatType_FrontRight = 0,
        PassengerSeatType_BackLeft = 1,
        PassengerSeatType_BackRight = 2,
        PassengerSeatType_MAX = 3
    };

    enum class EPassengerWeapType : uint8_t //Enum SGFramework.EPassengerWeapType
    {
        PassengerWeapType_None = 0,
        PassengerWeapType_Gun = 1,
        PassengerSeatType_Pistol = 2,
        EPassengerWeapType_MAX = 3
    };

    enum class EVehicleEngineState : uint8_t //Enum SGFramework.EVehicleEngineState
    {
        EVES_Stop = 0,
        EVES_Accel = 1,
        EVES_Uniform = 2,
        EVES_MAX = 3
    };

    enum class ESGVehicleType : uint8_t //Enum SGFramework.ESGVehicleType
    {
        SpawnVechieType_None = 0,
        SpawnVechieType_Uaz_ClosedTop = 1,
        SpawnVechieType_Dacia1300 = 2,
        SpawnVechieType_Boat = 3,
        SpawnVechieType_Uaz_MetalTop = 4,
        SpawnVechieType_Uaz_OpenTop = 5,
        SpawnVechieType_Buggy = 6,
        SpawnVechieType_Reserver = 7,
        SpawnVechieType_MotoCycle = 8,
        SpawnVechieType_MotoBike = 9,
        SpawnVechieType_MAX = 10
    };

    enum class VehicleCannotLeanOutReason : uint8_t //Enum SGFramework.VehicleCannotLeanOutReason
    {
        VehicleCannotLeanOutReason_OK = 0,
        VehicleCannotLeanOutReason_VehicleSink = 1,
        VehicleCannotLeanOutReason_NotAllowWeapon = 2,
        VehicleCannotLeanOutReason_NoHandedWeapon = 3,
        VehicleCannotLeanOutReason_MAX = 4
    };

    enum class ESGCharacterInVechicleState : uint8_t //Enum SGFramework.ESGCharacterInVechicleState
    {
        ESGState_None = 0,
        ESGState_PreEnterVehicle = 1,
        ESGState_InVehicle = 2,
        ESGState_MAX = 3
    };

    enum class EAISceneEventState : uint8_t //Enum MFNPCAI.EAISceneEventState
    {
        Trigger = 0,
        Completed = 1,
        Expired = 2,
        Removed = 3,
        EAISceneEventState_MAX = 4
    };

    enum class EAIAimingType : uint8_t //Enum MFNPCAI.EAIAimingType
    {
        Normal = 0,
        Regular = 1,
        EAIAimingType_MAX = 2
    };

    enum class EAIAimStatus : uint8_t //Enum MFNPCAI.EAIAimStatus
    {
        Aiming = 0,
        NoTarget = 1,
        AimComplete = 2,
        EAIAimStatus_MAX = 3
    };

    enum class ENPCAIAsyncTaskType : uint8_t //Enum MFNPCAI.ENPCAIAsyncTaskType
    {
        None = 0,
        FindAmbushAgainstPoint = 1,
        PeekPoint = 2,
        FindPathByKeyRoute = 3,
        QueryRoundEnvironment = 4,
        ENPCAIAsyncTaskType_MAX = 5
    };

    enum class ENPCPlaceForCheckType : uint8_t //Enum MFNPCAI.ENPCPlaceForCheckType
    {
        Simple = 0,
        Danger = 1,
        Suspicious = 2,
        Fatal = 3,
        GrenadeHit_Near = 4,
        GrenadeHit_Far = 5,
        GrenadeComeing = 6,
        FarFootStep = 7,
        CloseFootStep = 8,
        FarGunFire = 9,
        CloseGunFire = 10,
        GrenadeHolding = 11,
        Fuzzy = 12,
        ENPCPlaceForCheckType_MAX = 13
    };

    enum class EAIProfileEditState : uint8_t //Enum MFNPCAI.EAIProfileEditState
    {
        None = 0,
        ChoosingProperty = 1,
        EditingProperty = 2,
        Comparing = 3,
        EAIProfileEditState_MAX = 4
    };

    enum class EAIProfileCoverType : uint8_t //Enum MFNPCAI.EAIProfileCoverType
    {
        CoverType_None = 0,
        CoverType_int32 = 1,
        CoverType_int64 = 2,
        CoverType_float = 3,
        CoverType_bool = 4,
        CoverType_Byte = 5,
        CoverType_Enum = 6,
        CoverType_Set = 7,
        CoverType_Array = 8,
        CoverType_Map = 9,
        CoverType_Vector = 10,
        CoverType_AIMindGoalEnemyAngleMultiple = 11,
        CoverType_AIBodyBulkAimingChoice = 12,
        CoverType_AISenseSightNormal = 13,
        CoverType_String = 14,
        CoverType_Object = 15,
        CoverType_SoftClassPtr = 16,
        CoverType_MAX = 17
    };

    enum class EAIGroupRequestFireTarget : uint8_t //Enum MFNPCAI.EAIGroupRequestFireTarget
    {
        Fire_Enemy = 0,
        Fire_Point = 1,
        Fire_MAX = 2
    };

    enum class EAIStateWarnPlayerRequest : uint8_t //Enum MFNPCAI.EAIStateWarnPlayerRequest
    {
        Goto = 0,
        Say = 1,
        Wait = 2,
        Shoot = 3,
        Stay = 4,
        EAIStateWarnPlayerRequest_MAX = 5
    };

    enum class ENPCAIMovementKind : uint8_t //Enum MFNPCAI.ENPCAIMovementKind
    {
        GotoPoint = 0,
        GoDirectly = 1,
        GoAccordingToWayPoints = 2,
        ENPCAIMovementKind_MAX = 3
    };

    enum class ENPCAIMoveResult : uint8_t //Enum MFNPCAI.ENPCAIMoveResult
    {
        None = 0,
        WaitPerform = 1,
        Succeeded = 2,
        Failed = 3,
        Aborted = 4,
        InProgress = 5,
        ENPCAIMoveResult_MAX = 6
    };

    enum class EGetLinkUsageCountStatus : uint8_t //Enum MFNPCAI.EGetLinkUsageCountStatus
    {
        Success = 0,
        GetNavMeshManagerFailed = 1,
        GetSourceRegionIndexFailed = 2,
        GetTargetRegionIndexFailed = 3,
        RegionIndexNotValidNodeIndex = 4,
        RegionIndexNotValidAdjacencyIndex = 5,
        Unreachable = 6,
        EGetLinkUsageCountStatus_MAX = 7
    };

    enum class ENavSkeletonPointGetterFlag : uint32_t //Enum MFNPCAI.ENavSkeletonPointGetterFlag
    {
        None = 0,
        LinkId = 1,
        NeighbourIndices = 2,
        VisibleIndices = 3,
        All = 255,
        ENavSkeletonPointGetterFlag_MAX = 256
    };

    enum class ENavSkeletonDivergenceMethod : uint8_t //Enum MFNPCAI.ENavSkeletonDivergenceMethod
    {
        Laplacian = 0,
        GradientFlux = 1,
        Neighbour = 2,
        ENavSkeletonDivergenceMethod_MAX = 3
    };

    enum class ENavSkeletonSamplePointKind : uint8_t //Enum MFNPCAI.ENavSkeletonSamplePointKind
    {
        None = 0,
        Isolate = 1,
        Endpoint = 2,
        Normal = 3,
        KeptNormal = 4,
        DoorLink = 5,
        Junction = 6,
        ENavSkeletonSamplePointKind_MAX = 7
    };

    enum class ENavSkeletonSamplePointDropReason : uint8_t //Enum MFNPCAI.ENavSkeletonSamplePointDropReason
    {
        None = 0,
        CannotBeSkeletonPoint = 1,
        FindDistanceToWallFailed = 2,
        TooCloseToWall = 3,
        InvalidWallHitNormal = 4,
        MismatchedNeighbours = 5,
        InvalidGradientSize = 6,
        InvalidDivergence = 7,
        TooLessWallCount = 8,
        Isolated = 9,
        NotMainPoint = 10,
        CloseToAnotherMainPoint = 11,
        CannotFindProperPointToConnect = 12,
        InvalidPointKind = 13,
        BeSimplified = 14,
        InPrunedEndBranch = 15,
        Count = 16,
        ENavSkeletonSamplePointDropReason_MAX = 17
    };

    enum class EPathExistenceTestMode : uint8_t //Enum MFNPCAI.EPathExistenceTestMode
    {
        Regular = 0,
        Hierarchical = 1,
        EPathExistenceTestMode_MAX = 2
    };

    enum class ENavAreaKind : uint8_t //Enum MFNPCAI.ENavAreaKind
    {
        Burning = 0,
        TearGas = 1,
        TripMine = 2,
        Claymore = 3,
        Paradrop = 4,
        ENavAreaKind_MAX = 5
    };

    enum class ENavMeshTileLabel : uint32_t //Enum MFNPCAI.ENavMeshTileLabel
    {
        AllPolysReachable = 0,
        PartialPolysReachable = 1,
        InvalidBeginIndex = 2,
        ConsiderUnreachablePolys = 252,
        AllPolysUneachable = 253,
        InvalidHeader = 254,
        Unknown = 255,
        ENavMeshTileLabel_MAX = 256
    };

    enum class EMETIS_OBJTYPE : uint8_t //Enum MFNPCAI.EMETIS_OBJTYPE
    {
        METIS_OBJTYPE_CUT = 0,
        METIS_OBJTYPE_VOL = 1,
        METIS_OBJTYPE_NODE = 2,
        METIS_OBJTYPE_MAX = 3
    };

    enum class EMETIS_RTYPE : uint8_t //Enum MFNPCAI.EMETIS_RTYPE
    {
        METIS_RTYPE_FM = 0,
        METIS_RTYPE_GREEDY = 1,
        METIS_RTYPE_SEP2SIDED = 2,
        METIS_RTYPE_SEP1SIDED = 3,
        METIS_RTYPE_MAX = 4
    };

    enum class EMETIS_IPTYPE : uint8_t //Enum MFNPCAI.EMETIS_IPTYPE
    {
        METIS_IPTYPE_GROW = 0,
        METIS_IPTYPE_RANDOM = 1,
        METIS_IPTYPE_EDGE = 2,
        METIS_IPTYPE_NODE = 3,
        METIS_IPTYPE_METISRB = 4,
        METIS_IPTYPE_MAX = 5
    };

    enum class EMETIS_CTYPE : uint8_t //Enum MFNPCAI.EMETIS_CTYPE
    {
        METIS_CTYPE_RM = 0,
        METIS_CTYPE_SHEM = 1,
        METIS_CTYPE_MAX = 2
    };

    enum class EMETIS_PTYPE : uint8_t //Enum MFNPCAI.EMETIS_PTYPE
    {
        METIS_PTYPE_RB = 0,
        METIS_PTYPE_KWAY = 1,
        METIS_PTYPE_MAX = 2
    };

    enum class EnumAIGrassType : uint8_t //Enum MFNPCAI.EnumAIGrassType
    {
        E_Foliage = 0,
        E_Landscape = 1,
        E_MAX = 2
    };

    enum class EnumAIGrassDebugBox : uint8_t //Enum MFNPCAI.EnumAIGrassDebugBox
    {
        E_NONE = 0,
        E_Foliage = 1,
        E_Landscape = 2,
        E_FoliageCylinders = 3,
        E_ALL = 4,
        E_MAX = 5
    };

    enum class EAimingType : uint8_t //Enum MFNPCAI.EAimingType
    {
        Normal = 0,
        Regular = 1,
        EAimingType_MAX = 2
    };

    enum class ENPCAISceneEventID : uint8_t //Enum MFNPCAI.ENPCAISceneEventID
    {
        None = 0,
        Armory_Alarm_EscapeG1 = 1,
        Armory_Alarm_EscapeWater = 2,
        Valley_Alarm_BossHouse = 3,
        Valley_Alarm_BossFactory = 4,
        CallHelp = 5,
        ArmoryAlarmEscapeMine = 6,
        TVStation_Escape_Elevator = 7,
        ArmoryAlarmEscapeBunker = 8,
        Call_Defender_TVStation = 9,
        ENPCAISceneEventID_MAX = 10
    };

    enum class ESteepZoneSamplePointDropReason : uint8_t //Enum MFNPCAI.ESteepZoneSamplePointDropReason
    {
        None = 0,
        InvalidTrace = 1,
        StartPenetrating = 2,
        WalkableFloor = 3,
        NotEnoughNeighbours = 4,
        Count = 5,
        ESteepZoneSamplePointDropReason_MAX = 6
    };

    enum class ESteepZoneNavMeshPolyDropReason : uint8_t //Enum MFNPCAI.ESteepZoneNavMeshPolyDropReason
    {
        None = 0,
        GetTileAndPolyByRefFailed = 1,
        NotPoly = 2,
        InvalidNormal = 3,
        ValidIncludedAngle = 4,
        AllTrianglesDropped = 5,
        Count = 6,
        ESteepZoneNavMeshPolyDropReason_MAX = 7
    };

    enum class EAIKeyRouteQueryType : uint8_t //Enum MFNPCAI.EAIKeyRouteQueryType
    {
        Safe = 0,
        Short = 1,
        EAIKeyRouteQueryType_MAX = 2
    };

    enum class ENPCSetPartType : uint8_t //Enum MFNPCAI.ENPCSetPartType
    {
        None = 0,
        Close = 1,
        Middle = 2,
        Far = 3,
        ENPCSetPartType_MAX = 4
    };

    enum class EAITrackLOGType : uint8_t //Enum MFNPCAI.EAITrackLOGType
    {
        Move = 0,
        AimingBodyPart = 1,
        AimingTime = 2,
        AimingPredestined = 3,
        Shoot = 4,
        BeHit = 5,
        Decision = 6,
        Init = 7,
        EAITrackLOGType_MAX = 8
    };

    enum class ENPCAITactic : uint8_t //Enum MFNPCAI.ENPCAITactic
    {
        None = 0,
        CloseFight = 1,
        MidFight = 2,
        LongFight = 3,
        RushFace = 4,
        FlankAttack = 5,
        BackAround = 6,
        Hide = 7,
        RunAway = 8,
        ENPCAITactic_MAX = 9
    };

    enum class EAIMainType : uint8_t //Enum MFNPCAI.EAIMainType
    {
        EAIMainType_Scav = 0,
        EAIMainType_Boss = 1,
        EAIMainType_Follower = 2,
        EAIMainType_PMCAI = 3,
        EAIMainType_TeachingAI = 4,
        EAIMainType_TestAI = 5,
        EAIMainType_Elit = 6,
        EAIMainType_Elit_PlayerScavAI = 7,
        EAIMainType_MAX = 8
    };

    enum class EAIEnemyVisibilityType : uint8_t //Enum MFNPCAI.EAIEnemyVisibilityType
    {
        NotVisible = 0,
        VisibleBySense = 1,
        Visible = 2,
        EAIEnemyVisibilityType_MAX = 3
    };

    enum class EAIEnemyPriority : uint8_t //Enum MFNPCAI.EAIEnemyPriority
    {
        EAIEnemyPriority_High = 0,
        EAIEnemyPriority_Medium = 1,
        EAIEnemyPriority_Low = 2,
        EAIEnemyPriority_MAX = 3
    };

    enum class EAIAimingBodyPartTrend : uint8_t //Enum MFNPCAI.EAIAimingBodyPartTrend
    {
        None = 0,
        Armor = 1,
        NoArmor = 2,
        Fatal = 3,
        MinDamage = 4,
        EAIAimingBodyPartTrend_MAX = 5
    };

    enum class EAIBodyBulkType : uint8_t //Enum MFNPCAI.EAIBodyBulkType
    {
        HeadGroup = 0,
        BodyGroup = 1,
        LegsGroup = 2,
        EAIBodyBulkType_MAX = 3
    };

    enum class EAIBodyPartType : uint8_t //Enum MFNPCAI.EAIBodyPartType
    {
        EAIBodyPartType_Head = 0,
        EAIBodyPartType_Chest = 1,
        EAIBodyPartType_LefyArm = 2,
        EAIBodyPartType_RightArm = 3,
        EAIBodyPartType_LeftLeg = 4,
        EAIBodyPartType_RightLeg = 5,
        EAIBodyPartType_Stomach = 6,
        EAIBodyPartType_Max = 7
    };

    enum class EAISoundType : uint8_t //Enum MFNPCAI.EAISoundType
    {
        EAISoundType_ConfirmTargetScream = 0,
        EAISoundType_MAX = 1
    };

    enum class EAIWorkResult : uint8_t //Enum MFNPCAI.EAIWorkResult
    {
        Success = 0,
        Failed = 1,
        Wait = 2,
        EAIWorkResult_MAX = 3
    };

    enum class EAISenseSightConf : uint8_t //Enum MFNPCAI.EAISenseSightConf
    {
        Normal = 0,
        Night = 1,
        Light = 2,
        EAISenseSightConf_MAX = 3
    };

    enum class ENPCAISenseChannel : uint8_t //Enum MFNPCAI.ENPCAISenseChannel
    {
        NONE = 0,
        Weapon_Channel = 15,
        AISight_Channel = 25,
        ENPCAISenseChannel_MAX = 26
    };

    enum class EAISenseType : uint8_t //Enum MFNPCAI.EAISenseType
    {
        ALL = 0,
        Sight = 1,
        Hearing = 2,
        Damage = 3,
        ComingExplosion = 4,
        EAISenseType_MAX = 5
    };

    enum class ENPCAISenseBarrier : uint8_t //Enum MFNPCAI.ENPCAISenseBarrier
    {
        None = 0,
        Normal = 1,
        Grass = 2,
        ALLY = 3,
        OtherEnemy = 4,
        Smoke = 5,
        ENPCAISenseBarrier_MAX = 6
    };

    enum class ENPCAIPriority : uint8_t //Enum MFNPCAI.ENPCAIPriority
    {
        Low = 0,
        Middle = 1,
        High = 2,
        Max = 3,
        COUNT = 4
    };

    enum class EAIGotoPointDecision : uint8_t //Enum MFNPCAI.EAIGotoPointDecision
    {
        Normal = 0,
        SafetyDoor = 1,
        Swing = 2,
        EAIGotoPointDecision_MAX = 3
    };

    enum class EAIGroupRequestPriority : uint8_t //Enum MFNPCAI.EAIGroupRequestPriority
    {
        Low = 0,
        Normal = 1,
        Top = 2,
        Fatal = 3,
        EAIGroupRequestPriority_MAX = 4
    };

    enum class EAIProfileType : uint8_t //Enum MFNPCAI.EAIProfileType
    {
        Aiming = 0,
        AIType = 1,
        Boss = 2,
        Core = 3,
        Curve = 4,
        Global = 5,
        Grenade = 6,
        Hearing = 7,
        Lay = 8,
        Look = 9,
        Mind = 10,
        Move = 11,
        Shoot = 12,
        Sound = 13,
        Weapon = 14,
        Damage = 15,
        Health = 16,
        PlayerActionReaction = 17,
        BTBlock = 18,
        Strategy = 19,
        Smart = 20,
        Tactic = 21,
        RequestRun = 22,
        MAX = 23
    };

    enum class ENPCAIDecision : uint8_t //Enum MFNPCAI.ENPCAIDecision
    {
        None = 0,
        RushFaceWhenDisable = 1,
        ShootFromCover = 2,
        ShootFromGround = 3,
        ShootPrecisely = 4,
        RushFaceWithAlly = 5,
        FindCoverToHide = 6,
        ChangeCoverAfterNotSafe = 7,
        MoveFurther = 8,
        MoveCloser = 9,
        MoveToFlank = 10,
        MoveToAttackPoint = 11,
        ChangeCover = 12,
        SearchEnemy = 13,
        HoldPosition = 14,
        BackToCover = 15,
        DogFight = 16,
        CautionInPlace = 17,
        CautionInCover = 18,
        CheckSuspiciousPoint = 19,
        SuspiciousPointClear = 20,
        GoToNextPathNode = 21,
        FollowTargetBoss = 22,
        StandAndLookAround = 23,
        PacingInPlace = 24,
        TakeMedicine = 25,
        CallHelp = 26,
        RushStrike = 27,
        RushFace = 28,
        LootNearby = 29,
        DodgeGrenade = 30,
        ThrowGrenade = 31,
        WaitInEscapeVolume = 32,
        ShootFootstepCreator = 33,
        KillDBNOEnemy = 34,
        SneakApproaching = 35,
        ReloadInGround = 36,
        ReloadInCover = 37,
        Overwatch = 38,
        ActiveAlarmDevice = 39,
        Escape = 40,
        DodgeFire = 41,
        ThrowSmoke = 42,
        ProneShoot = 43,
        FindPronePoint = 44,
        CrouchShoot = 45,
        ProneSuppress = 46,
        CrouchSuppress = 47,
        StandSuppress = 48,
        DualCharge = 49,
        DualGuard = 50,
        Retreat = 51,
        ChangeCoverAfterNotAdvantage = 52,
        QuickToHide = 53,
        ChangeCoverToCrouch = 54,
        CrouchAimingInCover = 55,
        CallForHelp = 56,
        RidiculeVoice = 57,
        StayInPlace = 58,
        PositionAdjustment = 59,
        DodgeAttackMove = 60,
        MoveToLocNeedArrive = 61,
        SmokeToAssistHide = 62,
        TacticAction_RushFace = 63,
        GrenadeToPeek = 64,
        DodgeGrenadeHold = 65,
        TeamMove = 66,
        ThrowStepCreator = 67,
        SuppressionChangeClose = 68,
        SuppressionInPlace = 69,
        SuppressionControlDistance = 70,
        SuppressionDoor = 71,
        OutBattleVolume = 72,
        SlientDefenseDoor = 73,
        SlientDefenseChangeFar = 74,
        SlientDefenseControlDistance = 75,
        HoldAreaWithWall = 76,
        HoldRoomWithWall = 77,
        FootStepCreatorMoveClose = 78,
        FootStepCreatorMoveFar = 79,
        OpenDoorRush = 80,
        OpenDoorSlient = 81,
        MoveToDoorSafePoint = 82,
        EscapeRush = 83,
        EscapeSlient = 84,
        DodgeFlashProjectile = 85,
        RandomRangeShoot = 86,
        GrassMove = 87,
        ProtectSafeBox = 88,
        PeekFromPeekMark = 89,
        PlaceTrapDevice = 90,
        CallHelpOnHit = 91,
        AroundFindEnemy = 92,
        AlwaysReload = 93,
        MeleeAttackOnReload = 94,
        TakeMedicineOnHit = 95,
        FoolShootOnHit = 96,
        BattleShow = 97,
        OutOfBattleAct = 98,
        OutOfAllyRange = 99,
        ENPCAIDecision_MAX = 100
    };

    enum class EAIPerformance : uint8_t //Enum MFNPCAI.EAIPerformance
    {
        None = 0,
        Camp1 = 1,
        Camp2 = 2,
        Camp3 = 3,
        Camp4 = 4,
        Camp5 = 5,
        Camp6 = 6,
        Camp7 = 7,
        Camp8 = 8,
        Camp9 = 9,
        Camp10 = 10,
        Camp11 = 11,
        Camp12 = 12,
        Boss1 = 13,
        Boss2 = 14,
        Boss3 = 15,
        Boss4 = 16,
        Boss5_2 = 17,
        Boss5_3 = 18,
        Boss5_4 = 19,
        Boss_7 = 20,
        EventBoss1 = 21,
        EventBoss2 = 22,
        EventFollower1 = 23,
        EventFollower2 = 24,
        Follower1 = 25,
        Follower2 = 26,
        Follower3 = 27,
        Follower4 = 28,
        Follower5 = 29,
        Follower5_4 = 30,
        Follower_6_2 = 31,
        Follower_6_3 = 32,
        Follower_6_4 = 33,
        Follower_6_5 = 34,
        Follower_6_6 = 35,
        Follower_6_7 = 36,
        PMC1 = 37,
        PlayerScav1 = 38,
        EAIPerformance_MAX = 39
    };

    enum class EAISenseSourceType : uint8_t //Enum MFNPCAI.EAISenseSourceType
    {
        EAISenseSourceType_Grenade = 0,
        EAISenseSourceType_MAX = 1
    };

    enum class EBlackboardEntryCondition : uint8_t //Enum MFNPCAI.EBlackboardEntryCondition
    {
        BlackboardEntryCondition_Equal = 0,
        BlackboardEntryCondition_Greater = 1,
        BlackboardEntryCondition_Less = 2,
        BlackboardEntryCondition_MAX = 3
    };

    enum class ENPCKnowWeather : uint8_t //Enum MFNPCAI.ENPCKnowWeather
    {
        Normal = 0,
        Fog = 1,
        ENPCKnowWeather_MAX = 2
    };

    enum class ENPCWeakenDebuffType : uint8_t //Enum MFNPCAI.ENPCWeakenDebuffType
    {
        LoseSight = 0,
        Tinnitus = 1,
        Slowdown = 2,
        ENPCWeakenDebuffType_MAX = 3
    };

    enum class ENPCPanicType : uint8_t //Enum MFNPCAI.ENPCPanicType
    {
        None = 0,
        Run = 1,
        Crouch = 2,
        Prone = 3,
        ENPCPanicType_MAX = 4
    };

    enum class EAIMoveType : uint8_t //Enum MFNPCAI.EAIMoveType
    {
        AIMoveType_Walk = 0,
        AIMoveType_Run = 1,
        AIMoveType_Sprint = 2,
        AIMoveType_MAX = 3
    };

    enum class EAILeanType : uint8_t //Enum MFNPCAI.EAILeanType
    {
        AILeanType_Center = 0,
        AILeanType_Left = 1,
        AILeanType_Right = 2,
        AILeanType_MAX = 3
    };

    enum class EAIPose : uint8_t //Enum MFNPCAI.EAIPose
    {
        AIPose_Stand = 0,
        AIPose_Crouch = 1,
        AIPose_Prone = 2,
        AIPose_Slide = 3,
        AIPose_Move = 4,
        AIPose_MAX = 5
    };

    enum class EAISpecialFireType : uint8_t //Enum MFNPCAI.EAISpecialFireType
    {
        EAISpecialFireType_Miss = 0,
        EAISpecialFireType_MAX = 1
    };

    enum class EAILookPointMode : uint8_t //Enum MFNPCAI.EAILookPointMode
    {
        ToMovingDirection = 0,
        ToCustomPoint = 1,
        NoSteering = 2,
        EAILookPointMode_MAX = 3
    };

    enum class EActionPointType : uint8_t //Enum AIActionPointGeneratorRuntime.EActionPointType
    {
        None = 0,
        CoverPoint = 1,
        TacticPoint = 2,
        KeyRoutePoint = 3,
        NavSkeletonPoint = 4,
        EActionPointType_MAX = 5
    };

    enum class ETakeCoverResult : uint8_t //Enum AIActionPointGeneratorRuntime.ETakeCoverResult
    {
        InvalidActor = 0,
        AlreadyNull = 1,
        Occupied = 2,
        OtherUsing = 3,
        SelfUsing = 4,
        Released = 5,
        COUNT = 6,
        ETakeCoverResult_MAX = 7
    };

    enum class ENavMeshEdgeDropReason : uint8_t //Enum AIActionPointGeneratorRuntime.ENavMeshEdgeDropReason
    {
        None = 0,
        LengthTooShort = 1,
        InvalidHoleSide = 2,
        InvalidMovableRange = 3,
        SetupDefenceMapFailed = 4,
        NoAnyDefenceRegionFastTest = 5,
        NoAnyDefenceRegion = 6,
        Count = 7,
        ENavMeshEdgeDropReason_MAX = 8
    };

    enum class ENavMeshTacticPointDropReason : uint8_t //Enum AIActionPointGeneratorRuntime.ENavMeshTacticPointDropReason
    {
        None = 0,
        InExclusionVolume = 1,
        AbsoluteDefenceRatioNotEnough = 2,
        WindowDefenceRatioNotEnough = 3,
        LessThanRequiredMinimumDefenceAngle = 4,
        GreaterThanLimitedMaximumDefenceAngle = 5,
        DefenceDirectionNotInHoleSide = 6,
        PointsTooClose = 7,
        Count = 8,
        ENavMeshTacticPointDropReason_MAX = 9
    };

    enum class ENPCPoseType : uint8_t //Enum AIActionPointGeneratorRuntime.ENPCPoseType
    {
        Invalid = 0,
        Prone = 1,
        Crouch = 2,
        Stand = 3,
        ENPCPoseType_MAX = 4
    };

    enum class ETacticPointType : uint8_t //Enum AIActionPointGeneratorRuntime.ETacticPointType
    {
        NONE = 0,
        FlashBag = 1,
        Smoke = 2,
        HighValue = 3,
        FatalGate = 4,
        Escape = 5,
        Trap = 6,
        OverWatch = 7,
        Prone = 8,
        Window = 9,
        Door = 10,
        Retreat = 11,
        Transfer = 12,
        DoorSafety = 13,
        ETacticPointType_MAX = 14
    };

    enum class ENavLinkType : uint8_t //Enum CoverGenerator.ENavLinkType
    {
        None = 0,
        Door = 1,
        Cabinet = 2,
        JumpingDown = 3,
        JumpingOver = 4,
        ENavLinkType_MAX = 5
    };

    enum class EMFNetworkState : uint8_t //Enum MFWeakNetwork.EMFNetworkState
    {
        NotReachable = 0,
        WWAN = 1,
        Wifi = 2,
        Others = 3,
        EMFNetworkState_MAX = 4
    };

    enum class EInAppPurchaseState : uint8_t //Enum OnlineSubsystem.EInAppPurchaseState
    {
        Unknown = 0,
        Success = 1,
        Failed = 2,
        Cancelled = 3,
        Invalid = 4,
        NotAllowed = 5,
        Restored = 6,
        AlreadyOwned = 7,
        EInAppPurchaseState_MAX = 8
    };

    enum class EInAppPurchaseStatus : uint8_t //Enum OnlineSubsystemUtils.EInAppPurchaseStatus
    {
        Invalid = 0,
        Failed = 1,
        Deferred = 2,
        Canceled = 3,
        Purchased = 4,
        Restored = 5,
        EInAppPurchaseStatus_MAX = 6
    };

    enum class EOnlineProxyStoreOfferDiscountType : uint8_t //Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
    {
        NotOnSale = 0,
        Percentage = 1,
        DiscountAmount = 2,
        PayAmount = 3,
        EOnlineProxyStoreOfferDiscountType_MAX = 4
    };

    enum class EBeaconConnectionState : uint8_t //Enum OnlineSubsystemUtils.EBeaconConnectionState
    {
        Invalid = 0,
        Closed = 1,
        Pending = 2,
        Open = 3,
        EBeaconConnectionState_MAX = 4
    };

    enum class EClientRequestType : uint8_t //Enum OnlineSubsystemUtils.EClientRequestType
    {
        NonePending = 0,
        ExistingSessionReservation = 1,
        ReservationUpdate = 2,
        EmptyServerReservation = 3,
        Reconnect = 4,
        Abandon = 5,
        ReservationRemoveMembers = 6,
        EClientRequestType_MAX = 7
    };

    enum class EPartyReservationResult : uint8_t //Enum OnlineSubsystemUtils.EPartyReservationResult
    {
        NoResult = 0,
        RequestPending = 1,
        GeneralError = 2,
        PartyLimitReached = 3,
        IncorrectPlayerCount = 4,
        RequestTimedOut = 5,
        ReservationDuplicate = 6,
        ReservationNotFound = 7,
        ReservationAccepted = 8,
        ReservationDenied = 9,
        ReservationDenied_CrossPlayRestriction = 10,
        ReservationDenied_Banned = 11,
        ReservationRequestCanceled = 12,
        ReservationInvalid = 13,
        BadSessionId = 14,
        ReservationDenied_ContainsExistingPlayers = 15,
        EPartyReservationResult_MAX = 16
    };

    enum class ESpectatorClientRequestType : uint8_t //Enum OnlineSubsystemUtils.ESpectatorClientRequestType
    {
        NonePending = 0,
        ExistingSessionReservation = 1,
        ReservationUpdate = 2,
        EmptyServerReservation = 3,
        Reconnect = 4,
        Abandon = 5,
        ESpectatorClientRequestType_MAX = 6
    };

    enum class ESpectatorReservationResult : uint8_t //Enum OnlineSubsystemUtils.ESpectatorReservationResult
    {
        NoResult = 0,
        RequestPending = 1,
        GeneralError = 2,
        SpectatorLimitReached = 3,
        IncorrectPlayerCount = 4,
        RequestTimedOut = 5,
        ReservationDuplicate = 6,
        ReservationNotFound = 7,
        ReservationAccepted = 8,
        ReservationDenied = 9,
        ReservationDenied_CrossPlayRestriction = 10,
        ReservationDenied_Banned = 11,
        ReservationRequestCanceled = 12,
        ReservationInvalid = 13,
        BadSessionId = 14,
        ReservationDenied_ContainsExistingPlayers = 15,
        ESpectatorReservationResult_MAX = 16
    };

    enum class EMPMatchOutcome : uint8_t //Enum OnlineSubsystem.EMPMatchOutcome
    {
        None = 0,
        Quit = 1,
        Won = 2,
        Lost = 3,
        Tied = 4,
        TimeExpired = 5,
        First = 6,
        Second = 7,
        Third = 8,
        Fourth = 9,
        EMPMatchOutcome_MAX = 10
    };

    enum class EQuestStatus : uint8_t //Enum MFQuestSystem.EQuestStatus
    {
        EQuestStatus_Inactive = 0,
        EQuestStatus_InProcess = 1,
        EQuestStatus_Success = 2,
        EQuestStatus_Failed = 3,
        EQuestStatus_MAX = 4
    };

    enum class EQuestNodeType : uint8_t //Enum MFQuestSystem.EQuestNodeType
    {
        BaseNode = 0,
        CheckNode = 1,
        AssembleNode = 2,
        AffiliateNode = 3,
        EQuestNodeType_MAX = 4
    };

    enum class ERecoveryAttributeChangeType : uint8_t //Enum MFQuestSystem.ERecoveryAttributeChangeType
    {
        Recover = 0,
        Lose = 1,
        ERecoveryAttributeChangeType_MAX = 2
    };

    enum class ETaskType : uint8_t //Enum MFQuestSystem.ETaskType
    {
        E_TASK_TYPE_NONE = 0,
        E_TASK_TYPE_MAIN = 1,
        E_TASK_TYPE_DAILY = 2,
        E_TASK_TYPE_ACT = 3,
        E_TASK_TYPE_WEEKLY = 4,
        E_TASK_TYPE_ERGENT = 5,
        E_TASK_TYPE_SEASON_WEEK = 6,
        E_TASK_TYPE_SEASON = 7,
        E_TASK_TYPE_MENTOR = 8,
        E_TASK_TYPE_MAX = 9
    };

    enum class EQuestType : uint8_t //Enum MFQuestSystem.EQuestType
    {
        Normal = 0,
        Distributer = 1,
        Activity = 2,
        Achievement = 3,
        EQuestType_MAX = 4
    };

    enum class EQuestObjectiveType : uint8_t //Enum MFQuestSystem.EQuestObjectiveType
    {
        Percentage = 0,
        ClearArea = 1,
        OccupiedArea = 2,
        EQuestObjectiveType_MAX = 3
    };

    enum class ERelatedTargetType : uint8_t //Enum MFQuestSystem.ERelatedTargetType
    {
        TargetOnly = 0,
        TargetTeammateOnly = 1,
        RandomTeam = 2,
        AllPMC = 3,
        AllSCAV = 4,
        ERelatedTargetType_MAX = 5
    };

    enum class ENumberCompareType : uint8_t //Enum MFQuestSystem.ENumberCompareType
    {
        CMP_Equals = 0,
        CMP_NotEqual = 1,
        CMP_Greater = 2,
        CMP_Less = 3,
        CMP_GreaterEqual = 4,
        CMP_LessEqual = 5,
        CMP_Between = 6,
        CMP_MAX = 7
    };

    enum class ERunQuestResult : uint8_t //Enum MFQuestSystem.ERunQuestResult
    {
        Success = 0,
        Failed = 1,
        ERunQuestResult_MAX = 2
    };

    enum class EQuestNodeStatus : uint8_t //Enum MFQuestSystem.EQuestNodeStatus
    {
        EQuestNodeStatus_Active = 0,
        EQuestNodeStatus_Inactive = 1,
        EQuestNodeStatus_MAX = 2
    };

    enum class EQuestNodeConnectionType : uint8_t //Enum MFQuestSystem.EQuestNodeConnectionType
    {
        EQuestNodeConnectionType_And = 0,
        EQuestNodeConnectionType_Or = 1,
        EQuestNodeConnectionType_MAX = 2
    };

    enum class EQuestInstigatorType : uint8_t //Enum MFQuestSystem.EQuestInstigatorType
    {
        EQuestInstigatorType_None = 0,
        EQuestInstigatorType_Individual = 1,
        EQuestInstigatorType_Team = 2,
        EQuestInstigatorType_Public = 3,
        EQuestInstigatorType_MAX = 4
    };

    enum class EQuestConditionCheckType : uint8_t //Enum MFQuestSystem.EQuestConditionCheckType
    {
        EQuestConditionCheckType_Event = 0,
        EQuestConditionCheckType_Tick = 1,
        EQuestConditionCheckType_Both = 2,
        EQuestConditionCheckType_MAX = 3
    };

    enum class EQuestConditionType : uint8_t //Enum MFQuestSystem.EQuestConditionType
    {
        EQuestConditionType_Keeping = 0,
        EQuestConditionType_Filter = 1,
        EQuestConditionType_MAX = 2
    };

    enum class EQuestFailedType : uint8_t //Enum MFQuestSystem.EQuestFailedType
    {
        EQuestFailed_Normal = 0,
        EQuestFailed_TimeOut = 1,
        EQuestFailed_MAX = 2
    };

    enum class EAcceptOP : uint8_t //Enum MFMobileJoystick.EAcceptOP
    {
        EAOP_Direct = 0,
        EAOP_ScaleBySpeed = 1,
        EAOP_MAX = 2
    };

    enum class EBlendOP : uint8_t //Enum MFMobileJoystick.EBlendOP
    {
        EOP_BlendFactor = 0,
        EOP_BlendFactor_Interp = 1,
        EOP_BlendFactor_Curve = 2,
        EOP_BlendFactor_MagicMin = 3,
        EOP_BlendFactor_MagicMax = 4,
        EOP_MAX = 5
    };

    enum class EMFDoorSwitchMode : uint8_t //Enum MFVoxelReflectionRuntime.EMFDoorSwitchMode
    {
        Disabled = 0,
        AlwaysOpen = 1,
        AlwaysClose = 2,
        Default = 3,
        EMFDoorSwitchMode_MAX = 4
    };

    enum class EMFReflectionState : uint8_t //Enum MFVoxelReflectionRuntime.EMFReflectionState
    {
        None = 0,
        DoorOpen = 1,
        DoorClose = 2,
        EMFReflectionState_MAX = 3
    };

    enum class EInteriorBiasFloorDecalMode : uint8_t //Enum MFVoxelReflectionRuntime.EInteriorBiasFloorDecalMode
    {
        None = 0,
        AllDirection = 1,
        VerticalOnly = 2,
        EInteriorBiasFloorDecalMode_MAX = 3
    };

    enum class EInteriorBiasMode : uint32_t //Enum MFVoxelReflectionRuntime.EInteriorBiasMode
    {
        Debug = -1,
        BiasOnly = 0,
        BlurOnly = 1,
        Hybrid = 2,
        EInteriorBiasMode_MAX = 3
    };

    enum class ESkyLightMode : uint8_t //Enum MFVoxelReflectionRuntime.ESkyLightMode
    {
        None = 0,
        LineTrace = 1,
        Embree = 2,
        ESkyLightMode_MAX = 3
    };

    enum class EInteriorMode : uint8_t //Enum MFVoxelReflectionRuntime.EInteriorMode
    {
        None = 0,
        Default = 1,
        RaycastOnly = 2,
        DawnInteriorVolumeOnly = 3,
        TaggedReflectionCaptureOnly = 4,
        EInteriorMode_MAX = 5
    };

    enum class EMFVoxelEnvFindCoverCallResult : uint8_t //Enum MFVoxelEnv.EMFVoxelEnvFindCoverCallResult
    {
        Success = 0,
        NoVolume = 1,
        NoOctree = 2,
        CoverMapNotEnabled = 3,
        CoverMapInvalid = 4,
        EMFVoxelEnvFindCoverCallResult_MAX = 5
    };

    enum class EMFVoxelEnvCoverSearchType : uint8_t //Enum MFVoxelEnv.EMFVoxelEnvCoverSearchType
    {
        Nearest = 0,
        Furthest = 1,
        Random = 2,
        EMFVoxelEnvCoverSearchType_MAX = 3
    };

    enum class EMFVoxelEnvPathPruning : uint8_t //Enum MFVoxelEnv.EMFVoxelEnvPathPruning
    {
        None = 0,
        WithClearance = 1,
        WithoutClearance = 2,
        EMFVoxelEnvPathPruning_MAX = 3
    };

    enum class EMFVoxelEnvFindLineOfSightCallResult : uint8_t //Enum MFVoxelEnv.EMFVoxelEnvFindLineOfSightCallResult
    {
        Success = 0,
        Visible = 1,
        NoVolume = 2,
        NoOctree = 3,
        NoStart = 4,
        NoTarget = 5,
        EMFVoxelEnvFindLineOfSightCallResult_MAX = 6
    };

    enum class EMFVoxelEnvPathFindingCallResult : uint8_t //Enum MFVoxelEnv.EMFVoxelEnvPathFindingCallResult
    {
        Success = 0,
        Reachable = 1,
        NoVolume = 2,
        NoOctree = 3,
        NoStart = 4,
        NoTarget = 5,
        EMFVoxelEnvPathFindingCallResult_MAX = 6
    };

    enum class EMFVoxelEnvHeuristic : uint8_t //Enum MFVoxelEnv.EMFVoxelEnvHeuristic
    {
        Manhattan = 0,
        Euclidean = 1,
        EMFVoxelEnvHeuristic_MAX = 2
    };

    enum class EUFixDownloadState : uint8_t //Enum UFix.EUFixDownloadState
    {
        EPrepared = 0,
        EDownloading = 1,
        EFinish = 2,
        EDownloadFailed = 3,
        EUFixDownloadState_MAX = 4
    };

    enum class FileListOperation : uint8_t //Enum UFix.FileListOperation
    {
        APPEND = 0,
        DELETE = 1,
        FileListOperation_MAX = 2
    };

    enum class EShadowMode : uint8_t //Enum UAGraphicsCommonRuntime.EShadowMode
    {
        SM_Normal = 0,
        SM_CustomBounds = 1,
        SM_MAX = 2
    };

    enum class EDawnInteriorVolumePlaneBiasMode : uint8_t //Enum DawnRuntimeComponents.EDawnInteriorVolumePlaneBiasMode
    {
        None = 0,
        ForceEnable = 1,
        ForceDisable = 2,
        EDawnInteriorVolumePlaneBiasMode_MAX = 3
    };

    enum class EGrassHDBuildState : uint8_t //Enum LandscapeGrassHDRuntime.EGrassHDBuildState
    {
        CullOBBs_Started_GameThread = 0,
        CullOBBs_Started_RenderThread = 1,
        CullOBBs_NeedRetry = 2,
        CullOBBs_PreparingNormalizedOBBs = 3,
        CullOBBs_WaitingForOBBsFilling = 4,
        CullOBBs_WaitingForNextFrame = 5,
        CullOBBs_WaitingForReadbackReady = 6,
        CullOBBs_WaitingForResult = 7,
        OBBsReady = 8,
        Completed = 9,
        EGrassHDBuildState_MAX = 10
    };

    enum class EMagicLeapARPinType : uint8_t //Enum MagicLeapARPin.EMagicLeapARPinType
    {
        SingleUserSingleSession = 0,
        SingleUserMultiSession = 1,
        MultiUserMultiSession = 2,
        EMagicLeapARPinType_MAX = 3
    };

    enum class EMagicLeapAutoPinType : uint8_t //Enum MagicLeapARPin.EMagicLeapAutoPinType
    {
        OnlyOnDataRestoration = 0,
        Always = 1,
        Never = 2,
        EMagicLeapAutoPinType_MAX = 3
    };

    enum class EMagicLeapPassableWorldError : uint8_t //Enum MagicLeapARPin.EMagicLeapPassableWorldError
    {
        None = 0,
        LowMapQuality = 1,
        UnableToLocalize = 2,
        Unavailable = 3,
        PrivilegeDenied = 4,
        InvalidParam = 5,
        UnspecifiedFailure = 6,
        PrivilegeRequestPending = 7,
        StartupPending = 8,
        SharedWorldNotEnabled = 9,
        NotImplemented = 10,
        PinNotFound = 11,
        EMagicLeapPassableWorldError_MAX = 12
    };

    enum class EWheelSweepType : uint8_t //Enum PhysXVehicles.EWheelSweepType
    {
        SimpleAndComplex = 0,
        Simple = 1,
        Complex = 2,
        EWheelSweepType_MAX = 3
    };

    enum class EVehicleDifferential4W : uint8_t //Enum PhysXVehicles.EVehicleDifferential4W
    {
        LimitedSlip_4W = 0,
        LimitedSlip_FrontDrive = 1,
        LimitedSlip_RearDrive = 2,
        Open_4W = 3,
        Open_FrontDrive = 4,
        Open_RearDrive = 5,
        EVehicleDifferential4W_MAX = 6
    };

    enum class EDownloadFileState : uint8_t //Enum UACommon.EDownloadFileState
    {
        DownloadFileState_None = 0,
        DownloadFileState_Failed = 1,
        DownloadFileState_Head = 2,
        DownloadFileState_Progress = 3,
        DownloadFileState_Paused = 4,
        DownloadFileState_Completed = 5,
        DownloadFileState_MAX = 6
    };

    enum class ELevelDifficult : uint8_t //Enum UACommon.ELevelDifficult
    {
        Standard = 0,
        Block = 1,
        Fertile = 2,
        ELevelDifficult_MAX = 3
    };

    enum class ERookieTipType : uint8_t //Enum UACommon.ERookieTipType
    {
        Quest = 0,
        Dialogue = 1,
        Message = 2,
        FacePaint = 3,
        ERookieTipType_MAX = 4
    };

    enum class ELoosePointType : uint8_t //Enum UACommon.ELoosePointType
    {
        Custom = 0,
        Food_Common = 1,
        Tools_Common = 2,
        Drink_Common = 3,
        Device_Common = 4,
        Wealth_Common = 5,
        Combustibles_Common = 6,
        Electronic_Common = 7,
        Ammo_Lv1 = 8,
        Ammo_Lv2 = 9,
        Ammo_Lv3 = 10,
        Ammo_Lv4 = 11,
        Ammo_Lv5 = 12,
        Ammo_Lv6 = 13,
        Throwable_Common = 14,
        Med_Common = 15,
        Key = 16,
        Money = 17,
        Attacking = 18,
        ELoosePointType_MAX = 19
    };

    enum class EUAPlayerSignEnum : uint8_t //Enum UACommon.EUAPlayerSignEnum
    {
        None = 0,
        EnemySign = 1,
        LootSign = 2,
        CommonSign = 3,
        EUAPlayerSignEnum_MAX = 4
    };

    enum class EGamePadEffectTable : uint8_t //Enum UACommon.EGamePadEffectTable
    {
        None = 0,
        GamePadView_Fire = 1,
        GamePadView_LeftFire = 2,
        GamePadView_ChangeClip = 3,
        GamePadView_Crouch = 4,
        GamePadView_Prone = 5,
        GamePadView_Jump = 6,
        F_Guide_Lefthand = 7,
        F_Guide_Righthand = 8,
        GamePadView_ADS = 9,
        GamePadView_Bag = 10,
        GamePadView_Bigmap = 11,
        GamePadView_Loot = 12,
        GamePadView_CloseBagEffect = 13,
        GamePadView_SwitchGenerade = 14,
        GamePadView_TutorialAMagazine = 15,
        GamePadView_TutorialAAmmo = 16,
        GamePadView_VestBagPageEffet = 17,
        GamePadView_BagPageEffet = 18,
        GamePadView_HealthPageEffet = 19,
        GamePadView_CorpseBagPageEffet = 20,
        GamePadView_DragAmmoEffect = 21,
        GamePadView_CorpseBagSearchEffect = 22,
        GamePadView_Drag_MedFromCorpseBag = 23,
        GamePadView_Drag_MedToLeg = 24,
        GamePadView_Drag_KeyToPocket = 25,
        GamePadView_EscaapePoint = 26,
        GamePadView_SilentMove = 27,
        GamePadView_LegEffect = 28,
        GamePadView_CloseMapEffect = 29,
        GamePadView_WeaponCheck_Effect = 30,
        GamePadView_FastRun_Effect = 31,
        GamePadView_CorpseMedItemEffect = 32,
        GamePadView_MedinBagEffect = 33,
        GamePadView_FakeMapEffect = 34,
        GamePadView_ItemSearch_Effect = 35,
        GamePadView_FakeMap_PlayerIcon_Effect = 36,
        GamePadView_FakeMap_CaptainIcon_Effect = 37,
        GamePadView_FakeMap_BlockSymble_Effect = 38,
        GamePadView_FakeMap_EscapePoints_Effect = 39,
        GamePadView_FakeMap_EscapeRoute_Effect = 40,
        GamePadView_FakeMap_CloseButton_Effect = 41,
        GamePadView_TutorialBMedItemEffect = 42,
        GamePadView_TutorialBMedItemtobagGrid1Effect = 43,
        GamePadView_TutorialKeytoPocketEffect = 44,
        GamePadView_TutorialPocketPageEffect = 45,
        GamePadView_TutorialOpenDoorEffect = 46,
        GamePadView_TutorialLootBoxGrid1Effect = 47,
        GamePadView_Setting_Effect = 48,
        GamePadView_DebuffInfo_Effect = 49,
        GamePadView_ItemQuickUse_Effect = 50,
        GamePadView_PrimaryWeapon_Effect = 51,
        GamePadView_SecondaryWeapon_Effect = 52,
        GamePadView_VestArmor_Effect = 53,
        GamePadView_Helmet_Effect = 54,
        GamePadView_VestIcon_Effect = 55,
        GamePadView_Pocket1_Effect = 56,
        GamePadView_CorpseVestArmor_Effect = 57,
        GamePadView_CorpseHelmet_Effect = 58,
        GamePadView_CorpseVestTab_Effect = 59,
        GamePadView_CorpseVestSearch_Effect = 60,
        GamePadView_CorpsePocketSearch_Effect = 61,
        GamePadView_CorpseVestIcon_Effect = 62,
        GamePadView_CorpsePocket1_Effect = 63,
        GamePadView_LifeState_Effect = 64,
        GamePadView_Tab_Safebox_Effect = 65,
        GamePadView_Safebox_Effect = 66,
        GamePadView_Loot_Bag_Icon_Effect = 67,
        GamePadView_Bag_Icon_Effect = 68,
        GamePadView_VoiceInstructions = 69,
        GamePadView_CorpseVase = 70,
        GamePadView_ChangeMagaZineAnim_Effect = 71,
        GamePadView_TutorialMag = 72,
        GamePadView_TutorialPushBullet = 73,
        GamePadView_ChangeAmmoAnim_Effect = 74,
        GamePadView_PlayerSecondaryWeaponEffect = 75,
        GamePadView_Loot_PistolEffect = 76,
        GamePadView_PistolEffect = 77,
        FirstLootInventoryEffect = 78,
        LootViewButtonEffect = 79,
        GamePadView_PickButton_Effect = 80,
        GamePadView_GoldenLoot_Effect = 81,
        GamePadView_FirstLootPick_Effect = 82,
        GamePadView_GoldenInspect_Effect = 83,
        SecondLootInventoryEffect = 84,
        FirstBagInventoryEffect = 85,
        SecondBagInventoryEffect = 86,
        FirstDeathBoxGunEffect = 87,
        SecondhudMarkMapEffect = 88,
        GamePadView_GUNLOOTDeathboxEffect = 89,
        ArmorLOOTDeathboxEffect = 90,
        ManualLOOTEffect = 91,
        Mask_ArmorClickSelfEffect = 92,
        ArmorReplaceEffect = 93,
        Overseas_ArmorLOOTDeathboxEffect = 94,
        Overseas_FirstDeathBoxGunEffect = 95,
        Overseas_GUNLOOTDeathboxEffect = 96,
        EGamePadEffectTable_MAX = 97
    };

    enum class EUAGamePadHightWidgetTable : uint8_t //Enum UACommon.EUAGamePadHightWidgetTable
    {
        None = 0,
        GuideCircle_2 = 1,
        GuideCircle_3 = 2,
        GuideCircle_4 = 3,
        EUAGamePadHightWidgetTable_MAX = 4
    };

    enum class EUAGamePadTable : uint8_t //Enum UACommon.EUAGamePadTable
    {
        None = 0,
        GamePadView_ADS = 1,
        GamePadView_Bag = 2,
        GamePadView_BigMap = 3,
        GamePadView_ChangeClip = 4,
        GamePadView_Crouch = 5,
        GamePadView_Fire = 6,
        GamePadView_Jump = 7,
        GamePadView_LeftFire = 8,
        GamePadView_Movement = 9,
        GamePadView_Prone = 10,
        GamePadView_Quietstep = 11,
        GamePadView_Sprint = 12,
        GamePadView_ItemSearch = 13,
        GamePadView_LifeState = 14,
        GamePadView_UseProgress = 15,
        GamePadView_WeaponUse = 16,
        GamePadView_DoorInteraction = 17,
        GamePadView_ThrowCancel = 18,
        GamePadView_SelectGrenade = 19,
        GamePadView_QuickUseItem = 20,
        BP_PCHUDWidget_DirectionalBar = 21,
        GamePadView_WeaponCheck = 22,
        GamePadView_CheckWeaponTxt = 23,
        BPFX_Pain = 24,
        DoorInteraction = 25,
        BP_GamePadView_LockMove = 26,
        BP_GameID = 27,
        BPFX_DropOfBlood = 28,
        BPFX_Bullet_Hit = 29,
        BP_GamePadView_EnergyProgress = 30,
        BPFX_Clear = 31,
        BPFX_Bleed = 32,
        GamePadView_Chat = 33,
        BP_GamePadView_Collimator = 34,
        BP_GamePadView_Magnitude = 35,
        GamePadView_CustomInteractContainer = 36,
        BPFX_SmokeBomb = 37,
        BPFX_ArticuloMortis = 38,
        BP_GamePadView_DBNOHealth = 39,
        BP_GamePadView_RescueInteraction = 40,
        GamePadView_LeanL = 41,
        GamePadView_LeanR = 42,
        GamePadView_GetInventory = 43,
        GamePadView_LootInventory = 44,
        DoorInteractionTips = 45,
        BPFX_Flash_Effect = 46,
        GamePadView_Voice_Intercom = 47,
        GamePadView_Voice_Reception = 48,
        BP_GamePadView_LaserSwitch = 50,
        BPFX_LackInSupplies = 51,
        SoundIndicatorV2 = 52,
        GamePadView_QuestTrackCountDown = 53,
        BP_SelfSoundIndicator = 54,
        GamePadView_ChatHint = 55,
        BPFX_FaceShield = 56,
        BP_GamePadView_ThermalSwitch = 57,
        Temp = 58,
        Temp2 = 59,
        BP_MainHud_WeaponSlotMain_First = 60,
        BP_MainHud_WeaponSlotMain_Second = 61,
        BP_MainHud_WeaponSlot_AssisMelee = 62,
        GamePadView_PullBolt = 63,
        EUAGamePadTable_MAX = 64
    };

    enum class EUAHUDPreInstallLoc : uint8_t //Enum UACommon.EUAHUDPreInstallLoc
    {
        None = 0,
        Tips_Panel_Right = 1,
        dialogBox_Bottom = 2,
        Objective_Panel = 3,
        Suggestive_Panel_Left = 4,
        WarnMessage_Panel = 5,
        LightTips_Panel = 6,
        Activity_Phase_Panel = 7,
        Quest_Panel = 8,
        RouletteTips_Panel = 9,
        EUAHUDPreInstallLoc_MAX = 10
    };

    enum class EUAArgResolveMethod : uint8_t //Enum UACommon.EUAArgResolveMethod
    {
        None = 0,
        Inventory = 1,
        Volume = 2,
        EnvDamage = 3,
        LootBox = 4,
        EUAArgResolveMethod_MAX = 5
    };

    enum class EUAStatisParamFilterType : uint8_t //Enum UACommon.EUAStatisParamFilterType
    {
        None = 0,
        Equal = 1,
        GreaterEqual = 2,
        LessEqual = 3,
        Between = 4,
        FixLenNumDivideIn = 5,
        FixLenNumDivideNotIn = 6,
        EqualArray = 7,
        EUAStatisParamFilterType_MAX = 8
    };

    enum class EUAStatisMethod : uint8_t //Enum UACommon.EUAStatisMethod
    {
        SumValue = 0,
        Max = 1,
        Min = 2,
        LastValue = 3,
        SumCount = 4
    };

    enum class ETutorialFlowBarType : uint8_t //Enum UAGame.ETutorialFlowBarType
    {
        TutorialFlowBarType_Text = 0,
        TutorialFlowBarType_DynamicImage = 1,
        TutorialFlowBarType_Teammate = 2,
        TutorialFlowBarType_Arrow = 3,
        TutorialFlowBarType_MAX = 4
    };

    enum class ETutorialBagType : uint8_t //Enum UAGame.ETutorialBagType
    {
        TutorialBagType_None = 0,
        TutorialBagType_Self = 1,
        TutorialBagType_Loot = 2,
        TutorialBagType_Corpse = 3,
        TutorialBagType_MAX = 4
    };

    enum class ETutorialBagWidgetType : uint8_t //Enum UAGame.ETutorialBagWidgetType
    {
        Undefined = 0,
        PickupsNearby = 1,
        MyBag = 2,
        MyBagIcon = 3,
        VestBag = 4,
        VestBagIcon = 5,
        PickBag = 6,
        Character = 7,
        Inventory = 8,
        Adapter = 9,
        FirstMainWeapon = 10,
        SecondMainWeapon = 11,
        AssistWeapon = 12,
        MeleeWeapon = 13,
        ThrowWeapon = 14,
        Armor_Helmet = 15,
        Armor_Vest = 16,
        Pocket = 17,
        SafeBox = 18,
        SafeBoxIcon = 19,
        Headset = 20,
        FaceCover = 21,
        EyeWear = 22,
        ArmBand = 23,
        DogTag = 24,
        SplitItemWindow = 25,
        RotateItemWindow = 26,
        MAX = 27
    };

    enum class EActionPriority : uint8_t //Enum UAGame.EActionPriority
    {
        EActionPriority_Default = 0,
        EActionPriority_High = 1,
        EActionPriority_Highest = 2,
        EActionPriority_MAX = 3
    };

    enum class EActionContext : uint8_t //Enum UAGame.EActionContext
    {
        EActionContext_Default = 0,
        EActionContext_Grenade = 1,
        EActionContext_Bag = 2,
        EActionContext_ADS = 3,
        EActionContext_QuickChat = 4,
        EActionContext_LookAround = 5,
        EActionContext_Settings = 6,
        EActionContext_BattleResult = 7,
        EActionContext_ChatBox = 8,
        EActionContext_ThrowWeaponStarted = 9,
        EActionContext_MAX = 10
    };

    enum class InventoryDestroyedEffectType : uint8_t //Enum UAGame.InventoryDestroyedEffectType
    {
        QuestFailed = 0,
        InventoryDestroyedEffectType_MAX = 1
    };

    enum class ETutorialCharacterStateCheckType : uint8_t //Enum UAGame.ETutorialCharacterStateCheckType
    {
        TutorialCharacterStateCheckType_None = 0,
        TutorialCharacterStateCheckType_OnceInState = 1,
        TutorialCharacterStateCheckType_AddProgressInState = 2,
        TutorialCharacterStateCheckType_MAX = 3
    };

    enum class EQuestConditionCharacterType : uint8_t //Enum UAGame.EQuestConditionCharacterType
    {
        ECharacterType_AI = 0,
        ECharacterType_TEAMMATE = 1,
        ECharacterType_MAX = 2
    };

    enum class EQuestConditionCharacterStatus : uint8_t //Enum UAGame.EQuestConditionCharacterStatus
    {
        ECharacterType_ALIVE_HAS = 0,
        ECharacterType_ALIVE_ALL = 1,
        ECharacterType_DIED_HAS = 2,
        ECharacterType_DIED_ALL = 3,
        ECharacterType_MAX = 4
    };

    enum class EQuestCheckCustomAttribute : uint8_t //Enum UAGame.EQuestCheckCustomAttribute
    {
        TotalEndurance = 0,
        EQuestCheckCustomAttribute_MAX = 1
    };

    enum class ECheckItemType : uint8_t //Enum UAGame.ECheckItemType
    {
        Weapon = 0,
        Helmet = 1,
        Vest = 2,
        Headset = 3,
        FaceCover = 4,
        EyeWear = 5,
        VestBag = 6,
        Bag = 7,
        ECheckItemType_MAX = 8
    };

    enum class EGameplayTagCheckType : uint8_t //Enum UAGame.EGameplayTagCheckType
    {
        AnyMatching = 0,
        AllMatching = 1,
        EGameplayTagCheckType_MAX = 2
    };

    enum class EQuestTakeLimitLogicType : uint8_t //Enum UAGame.EQuestTakeLimitLogicType
    {
        Enum_And = 0,
        Enum_Or = 1,
        Enum_MAX = 2
    };

    enum class ETeamInfoCheckType : uint8_t //Enum UAGame.ETeamInfoCheckType
    {
        MaxCount = 0,
        AliveCount = 1,
        EscapeCount = 2,
        DiedCount = 3,
        ETeamInfoCheckType_MAX = 4
    };

    enum class ETimeLimitType : uint8_t //Enum UAGame.ETimeLimitType
    {
        EnterGame = 0,
        TimeRecord = 1,
        ETimeLimitType_MAX = 2
    };

    enum class ETutorialBagState : uint8_t //Enum UAGame.ETutorialBagState
    {
        BigMapState_None = 0,
        BigMapState_Open = 1,
        BigMapState_Close = 2,
        BigMapState_MAX = 3
    };

    enum class EBigMapState : uint8_t //Enum UAGame.EBigMapState
    {
        BigMapState_None = 0,
        BigMapState_Open = 1,
        BigMapState_Close = 2,
        BigMapState_MAX = 3
    };

    enum class ETutorialDoorState : uint8_t //Enum UAGame.ETutorialDoorState
    {
        TutorialDoorState_None = 0,
        TutorialDoorState_Open = 1,
        TutorialDoorState_Close = 2,
        TutorialDoorState_MAX = 3
    };

    enum class EFacePanelState : uint8_t //Enum UAGame.EFacePanelState
    {
        FacePanelState_None = 0,
        FacePanelState_Open = 1,
        FacePanelState_Close = 2,
        FacePanelState_MAX = 3
    };

    enum class ETutorialSettingState : uint8_t //Enum UAGame.ETutorialSettingState
    {
        SettingPannalState_None = 0,
        SettingPannalState_Open = 1,
        SettingPannalState_Close = 2,
        SettingPannalState_MAX = 3
    };

    enum class ETutorialDamageType : uint8_t //Enum UAGame.ETutorialDamageType
    {
        ETutorialDamageType_None = 0,
        ETutorialDamageType_Bullet = 1,
        ETutorialDamageType_Grenade = 2,
        ETutorialDamageType_MAX = 3
    };

    enum class EQuestInteractEnableType : uint8_t //Enum UAGame.EQuestInteractEnableType
    {
        Self = 0,
        Teammate = 1,
        Anyone = 2,
        EQuestInteractEnableType_MAX = 3
    };

    enum class EQuestTraceMarkType : uint8_t //Enum UAGame.EQuestTraceMarkType
    {
        QuestInventory = 0,
        InteractItem = 1,
        Area = 2,
        EscapePoint = 3,
        EQuestTraceMarkType_MAX = 4
    };

    enum class ESoundDirType : uint8_t //Enum UAGame.ESoundDirType
    {
        None = 0,
        LEFT = 1,
        CENTER = 2,
        RIGHT = 3,
        ESoundDirType_MAX = 4
    };

    enum class EActivityDataCenterType : uint8_t //Enum UAGame.EActivityDataCenterType
    {
        E_None = 0,
        E_GameState = 1,
        E_TeamInfo = 2,
        E_PlayerState = 3,
        E_MAX = 4
    };

    enum class ELootRandomItemType : uint8_t //Enum UAGame.ELootRandomItemType
    {
        MainSetting = 0,
        NormalItem = 1,
        SubItemTable = 2,
        AssembledItem = 3,
        ELootRandomItemType_MAX = 4
    };

    enum class ESGLootRandomItemOperation : uint8_t //Enum UAGame.ESGLootRandomItemOperation
    {
        And = 0,
        Or = 1,
        ESGLootRandomItemOperation_MAX = 2
    };

    enum class EUATutorialArrowTipType : uint8_t //Enum UAGame.EUATutorialArrowTipType
    {
        Container = 0,
        FillAmmo = 1,
        EUATutorialArrowTipType_MAX = 2
    };

    enum class EUATutorialHighlightEffectType : uint8_t //Enum UAGame.EUATutorialHighlightEffectType
    {
        Search = 0,
        GamePad = 1,
        SelectMenu = 2,
        SelectMenu_NotMine = 3,
        EUATutorialHighlightEffectType_MAX = 4
    };

    enum class EUAMarkedType : uint8_t //Enum UAGame.EUAMarkedType
    {
        EUAMarkedType_None = 0,
        EUAMarkedType_TitleInfo = 1,
        EUAMarkedType_MAX = 2
    };

    enum class EEscapeInteractVolumeState : uint8_t //Enum UAGame.EEscapeInteractVolumeState
    {
        EEscapeInteractVolumeState_None = 0,
        EEscapeInteractVolumeState_Unactivate = 1,
        EEscapeInteractVolumeState_Activate = 2,
        EEscapeInteractVolumeState_Interacted = 3,
        EEscapeInteractVolumeState_MAX = 4
    };

    enum class EUAEscapeTimeType : uint8_t //Enum UAGame.EUAEscapeTimeType
    {
        Locality = 0,
        Global = 1,
        EUAEscapeTimeType_MAX = 2
    };

    enum class EUATimeType : uint8_t //Enum UAGame.EUATimeType
    {
        None = 0,
        Open = 1,
        Close = 2,
        EUATimeType_MAX = 3
    };

    enum class EEscapeState : uint8_t //Enum UAGame.EEscapeState
    {
        EEscapeState_None = 0,
        EEscapeState_CanEscape = 1,
        EEscapeState_Close = 2,
        EEscapeState_Open = 3,
        EEscapeState_NotOpen = 4,
        EEscapeState_MAX = 5
    };

    enum class EEscapeVolumeStyle : uint8_t //Enum UAGame.EEscapeVolumeStyle
    {
        Normal = 0,
        ThemeActivity = 1,
        EEscapeVolumeStyle_MAX = 2
    };

    enum class EEscapeVolumeType : uint8_t //Enum UAGame.EEscapeVolumeType
    {
        Locality = 0,
        Global = 1,
        EEscapeVolumeType_MAX = 2
    };

    enum class EChatacterVisibleState : uint8_t //Enum UAGame.EChatacterVisibleState
    {
        EChatacterVisibleState_None = 0,
        EChatacterVisibleState_Invisible = 1,
        EChatacterVisibleState_Visible = 2,
        EChatacterVisibleState_MAX = 3
    };

    enum class EUAFSMCompareType : uint8_t //Enum UAGame.EUAFSMCompareType
    {
        UAFSMCompareType_None = 0,
        UAFSMCompareType_Less = 1,
        UAFSMCompareType_LessEqual = 2,
        UAFSMCompareType_Equals = 3,
        UAFSMCompareType_GreaterEqual = 4,
        UAFSMCompareType_Greater = 5,
        UAFSMCompareType_NotEqual = 6,
        UAFSMCompareType_Between = 7,
        UAFSMCompareType_MAX = 8
    };

    enum class EUAFSMRelative : uint8_t //Enum UAGame.EUAFSMRelative
    {
        UAFSMRelative_None = 0,
        UAFSMRelative_And = 1,
        UAFSMRelative_Or = 2,
        UAFSMRelative_MAX = 3
    };

    enum class EGameMapId : uint8_t //Enum UAGame.EGameMapId
    {
        None = 0,
        Erangel = 1,
        Desert = 2,
        ErangelOrigin = 3,
        Savage = 4,
        Max = 5
    };

    enum class ESubGameModeType : uint32_t //Enum UAGame.ESubGameModeType
    {
        None = 0,
        Main = 100,
        DeathPoisonFog = 200,
        Compact = 201,
        RandomMap = 300,
        Fog = 301,
        CustomItemSniper = 400,
        CustomItemColdArms = 401,
        CustomItem3xRich = 402,
        CustomItemPistol = 403,
        CustomItemShotgun = 404,
        CustomItemDrug = 405,
        HardCore = 500,
        FPP = 501,
        BattleOfFiveArmies = 502,
        BattleOfThreeTeams = 503,
        MAX = 504
    };

    enum class EMainGameModeType : uint8_t //Enum UAGame.EMainGameModeType
    {
        None = 0,
        ClassicPVP = 1,
        LeisurePVP = 2,
        MAX = 3
    };

    enum class EGameTeamType : uint8_t //Enum UAGame.EGameTeamType
    {
        None = 0,
        OnePlayer = 1,
        TwoPlayers = 2,
        FourPlayers = 3,
        ThreeTeams = 4,
        FiveTeams = 5,
        Max = 6
    };

    enum class EGameMatchType : uint8_t //Enum UAGame.EGameMatchType
    {
        None = 0,
        Normal = 1,
        Rank = 2,
        Custom = 3,
        Max = 4
    };

    enum class EUARoleID : uint8_t //Enum UAGame.EUARoleID
    {
        Sledge = 0,
        Ash = 1,
        Bandit = 2,
        Castle = 3,
        Glaz = 4,
        Jager = 5,
        Kapkan = 6,
        Rook = 7,
        Tharcher = 8,
        Thermite = 9,
        EUARoleID_MAX = 10
    };

    enum class EUATutorialDefaultInventory : uint8_t //Enum UAGame.EUATutorialDefaultInventory
    {
        None = 0,
        TutorialAKM = 1,
        TutorialHK416 = 2,
        EUATutorialDefaultInventory_MAX = 3
    };

    enum class ETutorialBagTabType : uint8_t //Enum UAGame.ETutorialBagTabType
    {
        TutorialTabType_None = 0,
        TutorialTabType_Equipment = 1,
        TutorialTabType_VestBag = 2,
        TutorialTabType_Pockage = 3,
        TutorialTabType_Bag = 4,
        TutorialTabType_SafeBox = 5,
        TutorialTabType_Character = 100,
        TutorialTabType_Health = 101,
        TutorialTabType_Quest = 102,
        TutorialTabType_Map = 103,
        TutorialTabType_Season = 104,
        TutorialTabType_MAX = 105
    };

    enum class ETutorialCharacterState : uint8_t //Enum UAGame.ETutorialCharacterState
    {
        TutorialCharacterState_None = 0,
        TutorialCharacterState_Stand = 1,
        TutorialCharacterState_Jump = 2,
        TutorialCharacterState_Crouch = 3,
        TutorialCharacterState_Prone = 4,
        TutorialCharacterState_Zooming = 5,
        TutorialCharacterState_LoseEndurance = 6,
        TutorialCharacterState_Sprint = 7,
        TutorialCharacterState_SilentWalk = 8,
        TutorialCharacterState_HoldingBreath = 9,
        TutorialCharacterState_ChangeClip = 10,
        TutorialCharacterState_MAX = 11
    };

    enum class EBigMapTouchResponseType : uint8_t //Enum UAGame.EBigMapTouchResponseType
    {
        None = 0,
        Global = 1,
        Locality = 2,
        EBigMapTouchResponseType_MAX = 3
    };

    enum class ENewMapDisplayModel : uint8_t //Enum UAGame.ENewMapDisplayModel
    {
        Free = 0,
        FollowViewCharacter = 1,
        ENewMapDisplayModel_MAX = 2
    };

    enum class ENewMapTouchResponseType : uint8_t //Enum UAGame.ENewMapTouchResponseType
    {
        None = 0,
        Global = 1,
        Locality = 2,
        ENewMapTouchResponseType_MAX = 3
    };

    enum class EHUDWeaponSlotType : uint8_t //Enum UAGame.EHUDWeaponSlotType
    {
        FirstMainWeapon = 0,
        SecondMainWeapon = 1,
        AssistantWeapon = 2,
        MeleeWeapon = 3,
        EHUDWeaponSlotType_MAX = 4
    };

    enum class EWidgetTopParentActorType : uint8_t //Enum UAGame.EWidgetTopParentActorType
    {
        CharaterSelf = 0,
        LootBox = 1,
        CorpseBox = 2,
        BagBox = 3,
        EWidgetTopParentActorType_MAX = 4
    };

    enum class EUAHUDNewBagWidgetIdentification : uint8_t //Enum UAGame.EUAHUDNewBagWidgetIdentification
    {
        Undefined = 0,
        PickupsNearby = 1,
        MyBag = 2,
        MyBagIcon = 3,
        VestBag = 4,
        VestBagIcon = 5,
        PickBag = 6,
        Character = 7,
        Inventory = 8,
        Adapter = 9,
        FirstMainWeapon = 10,
        SecondMainWeapon = 11,
        AssistWeapon = 12,
        MeleeWeapon = 13,
        ThrowWeapon = 14,
        Armor_Helmet = 15,
        Armor_Vest = 16,
        Pocket = 17,
        SafeBox = 18,
        SafeBoxIcon = 19,
        Headset = 20,
        FaceCover = 21,
        EyeWear = 22,
        ArmBand = 23,
        DogTag = 24,
        SplitItemWindow = 25,
        RotateItemWindow = 26,
        PickBagIcon = 27,
        KeyBagIcon = 28,
        KeyBag = 29,
        ShortcutBar = 30,
        MAX = 31
    };

    enum class EUAHUDBagWidgetIdentification : uint8_t //Enum UAGame.EUAHUDBagWidgetIdentification
    {
        Undefined = 0,
        PickupsNearby = 1,
        MyBag = 2,
        Weapons = 3,
        Apparel = 4,
        Inventory = 5,
        Adapter = 6,
        FirstMainWeapon = 7,
        SecondMainWeapon = 8,
        AssistWeapon = 9,
        MeleeWeapon = 10,
        ThrowWeapon = 11,
        Helmet = 12,
        FlatJacket = 13,
        Apparel_Hat = 14,
        Apparel_Glasses = 15,
        Apparel_UpShirt = 16,
        Apparel_Pants = 17,
        Apparel_Shoes = 18,
        Apparel_Ghillie = 19,
        MAX = 20
    };

    enum class EItemAction : uint8_t //Enum UAGame.EItemAction
    {
        ActionNone = 0,
        ActionPickup = 1,
        ActionUse = 2,
        ActionAttach = 3,
        ActionReload = 4,
        ActionExchange = 5,
        ActionDetach = 6,
        ActionDiscard = 7,
        ActionPickupPart = 8,
        ActionDiscardPart = 9,
        ActionRevertSkin = 10,
        ActionPutonSkin = 11,
        EItemAction_MAX = 12
    };

    enum class EBRPlayerState : uint8_t //Enum UAGame.EBRPlayerState
    {
        PlayerState_NONE = 0,
        PlayerState_Normal = 1,
        PlayerState_Airplane = 2,
        PlayerState_Air = 3,
        PlayerState_Drive = 4,
        PlayerState_Weak = 5,
        PlayerState_OffLine = 6,
        PlayerState_Dead = 7,
        PlayerState_Spectating = 8,
        PlayerState_MAX = 9
    };

    enum class ELockLootContainerConditionType : uint8_t //Enum UAGame.ELockLootContainerConditionType
    {
        None = 0,
        CostInventory = 1,
        CheckMissionStatues = 2,
        ELockLootContainerConditionType_MAX = 3
    };

    enum class ETargetEscapeState : uint8_t //Enum UAGame.ETargetEscapeState
    {
        ETargetEscapeState_None = 0,
        ETargetEscapeState_CanEscape = 1,
        ETargetEscapeState_Close = 2,
        ETargetEscapeState_Open = 3,
        ETargetEscapeState_NotOpen = 4,
        ETargetEscapeState_MAX = 5
    };

    enum class EFPSCCheckType : uint8_t //Enum UAGame.EFPSCCheckType
    {
        EFPSCCheckType_All = 0,
        EFPSCCheckType_Farthest = 1,
        EFPSCCheckType_Nearest = 2,
        EFPSCCheckType_DistanceRange = 3,
        EFPSCCheckType_MAX = 4
    };

    enum class EAISceneEventType : uint8_t //Enum UAGame.EAISceneEventType
    {
        SceneEventTrigger = 0,
        SceneEventExpired = 1,
        SceneEventRemoved = 2,
        SceneEventCompleted = 3,
        EAISceneEventType_MAX = 4
    };

    enum class EMissionObjective_RandTimerType : uint8_t //Enum UAGame.EMissionObjective_RandTimerType
    {
        GameBegin = 0,
        ObjectiveActivated = 1,
        EMissionObjective_MAX = 2
    };

    enum class EMissionConditionTeamInfoType : uint8_t //Enum UAGame.EMissionConditionTeamInfoType
    {
        MaxCount = 0,
        AliveCount = 1,
        EscapeCount = 2,
        DiedCount = 3,
        EMissionConditionTeamInfoType_MAX = 4
    };

    enum class EMissionConditionCharacterType : uint8_t //Enum UAGame.EMissionConditionCharacterType
    {
        ECharacterType_AI = 0,
        ECharacterType_TEAMMATE = 1,
        ECharacterType_MAX = 2
    };

    enum class EMissionConditionCharacterStatus : uint8_t //Enum UAGame.EMissionConditionCharacterStatus
    {
        ECharacterType_ALIVE_HAS = 0,
        ECharacterType_ALIVE_ALL = 1,
        ECharacterType_DIED_HAS = 2,
        ECharacterType_DIED_ALL = 3,
        ECharacterType_MAX = 4
    };

    enum class EMissionConditionGameplayTagCheckType : uint8_t //Enum UAGame.EMissionConditionGameplayTagCheckType
    {
        AnyMatching = 0,
        AllMatching = 1,
        EMissionConditionGameplayTagCheckType_MAX = 2
    };

    enum class EMissionConditionItemType : uint8_t //Enum UAGame.EMissionConditionItemType
    {
        Weapon = 0,
        Helmet = 1,
        Vest = 2,
        Headset = 3,
        FaceCover = 4,
        EyeWear = 5,
        VestBag = 6,
        Bag = 7,
        EMissionConditionItemType_MAX = 8
    };

    enum class EMissionConditionCustomAttribute : uint8_t //Enum UAGame.EMissionConditionCustomAttribute
    {
        TotalEndurance = 0,
        EMissionConditionCustomAttribute_MAX = 1
    };

    enum class EMissionSubType : uint8_t //Enum UAGame.EMissionSubType
    {
        E_MISSION_SUB_TYPE_NONE = 0,
        E_MISSION_SUB_TYPE_RANDOM_TASK = 1,
        E_MISSION_SUB_TYPE_DUEL_TASK = 2,
        E_MISSION_SUB_TYPE_GLOBAL_TASK = 3,
        E_MISSION_SUB_TYPE_ACTIVITY_TASK = 4,
        E_MISSION_SUB_TYPE_RANDOM_EVENT = 5,
        E_MISSION_SUB_TYPE_RESIDENT_EVENT = 6,
        E_MISSION_SUB_TYPE_ACTIVITY_EVENT = 7,
        E_MISSION_SUB_TYPE_MAX = 8
    };

    enum class EDistributeMissionType : uint8_t //Enum UAGame.EDistributeMissionType
    {
        UrgentTask = 0,
        DynamicEvent = 1,
        ActivityEvent = 2,
        EDistributeMissionType_MAX = 3
    };

    enum class EUAParadropSupplyFrameMeshHideType : uint8_t //Enum UAGame.EUAParadropSupplyFrameMeshHideType
    {
        Never = 0,
        AfterLanding = 1,
        Always = 2,
        EUAParadropSupplyFrameMeshHideType_MAX = 3
    };

    enum class EWaitingReportCallback : uint8_t //Enum UAGame.EWaitingReportCallback
    {
        None = 0,
        OnRep_ChaseActivityAvatarInfo = 1,
        OnRep_ChaseActivityStateChangeInfo = 2,
        OnRep_ActivityInventoryStateChangeInfo = 3,
        EWaitingReportCallback_MAX = 4
    };

    enum class EEmergencyTaskType : uint8_t //Enum UAGame.EEmergencyTaskType
    {
        Normal = 0,
        Activity = 1,
        EEmergencyTaskType_MAX = 2
    };

    enum class EQuestUnLockType : uint8_t //Enum UAGame.EQuestUnLockType
    {
        QuestUnLock_None = 0,
        QuestUnLock_TimeToMeet = 1,
        QuestUnLock_ProgressChange = 2,
        QuestUnLock_MAX = 3
    };

    enum class EQuestCharacterType : uint8_t //Enum UAGame.EQuestCharacterType
    {
        QuestCharacterType_None = 0,
        QuestCharacterType_PMC = 1,
        QuestCharacterType_SCAV = 2,
        QuestCharacterType_AI_SCAV = 3,
        QuestCharacterType_MAX = 4
    };

    enum class EClassRepNodeMapping : uint8_t //Enum UAGame.EClassRepNodeMapping
    {
        NotRouted = 0,
        RelevantAllConnections = 1,
        Spatialize_Static = 2,
        Spatialize_Dynamic = 3,
        Spatialize_Dormancy = 4,
        Spatialize_Static_Dormancy = 5,
        RelevantTeam = 6,
        RelevantFollowOwner = 7,
        RelevantOwnerConnections = 8,
        RelevantConnectionsGroup = 9,
        DynamicPolicy = 10,
        RelvantAI = 11,
        RelevantFaction = 12,
        SimpleDistanceRelevancy = 13,
        EClassRepNodeMapping_MAX = 14
    };

    enum class EEscapeExploreState : uint8_t //Enum UAGame.EEscapeExploreState
    {
        EEscapeExploreState_None = 0,
        EEscapeExploreState_AlwaysOpen = 1,
        EEscapeExploreState_Open = 2,
        EEscapeExploreState_Close = 3,
        EEscapeExploreState_Unknown = 4,
        EEscapeExploreState_MAX = 5
    };

    enum class ESignType : uint8_t //Enum UAGame.ESignType
    {
        EscapeSign = 0,
        QuestSign = 1,
        PlayerSign = 2,
        None = 3,
        ESignType_MAX = 4
    };

    enum class EDetailBoardType : uint8_t //Enum UAGame.EDetailBoardType
    {
        TaskIcon = 0,
        EscapeIcon = 1,
        ChaseTargetIcon = 2,
        EDetailBoardType_MAX = 3
    };

    enum class EMoveCheckStyle : uint8_t //Enum UAGame.EMoveCheckStyle
    {
        OnlyMove = 0,
        OnlyAdd = 1,
        EMoveCheckStyle_MAX = 2
    };

    enum class EBattleIntensityExpectation : uint8_t //Enum UAGame.EBattleIntensityExpectation
    {
        None = 0,
        Low = 1,
        Normal = 2,
        High = 3,
        VeryHigh = 4,
        EBattleIntensityExpectation_MAX = 5
    };

    enum class ETraceMarkOperatorType : uint8_t //Enum UAGame.ETraceMarkOperatorType
    {
        None = 0,
        Trace = 1,
        Mark = 2,
        All = 3,
        InfomationTrace = 4,
        ETraceMarkOperatorType_MAX = 5
    };

    enum class ETraceableMarkType : uint8_t //Enum UAGame.ETraceableMarkType
    {
        None = 0,
        QuestPoint = 1,
        QuestArea = 2,
        ChaseActivity = 3,
        Inventory = 4,
        InteractItem = 5,
        Area = 6,
        EscapePoint = 7,
        Character = 8,
        AISpawnArea = 9,
        SecretQuest = 10,
        Point = 11,
        DossEscapePoint = 12,
        All = 13,
        ETraceableMarkType_MAX = 14
    };

    enum class ELifetimeCondition : uint8_t //Enum CoreUObject.ELifetimeCondition
    {
        COND_None = 0,
        COND_InitialOnly = 1,
        COND_OwnerOnly = 2,
        COND_SkipOwner = 3,
        COND_SimulatedOnly = 4,
        COND_AutonomousOnly = 5,
        COND_SimulatedOrPhysics = 6,
        COND_InitialOrOwner = 7,
        COND_Custom = 8,
        COND_ReplayOrOwner = 9,
        COND_ReplayOnly = 10,
        COND_SimulatedOnlyNoReplay = 11,
        COND_SimulatedOrPhysicsNoReplay = 12,
        COND_SkipReplay = 13,
        COND_ViewTarget = 14,
        COND_ViewTargetSkipOwner = 15,
        COND_Never = 17,
        COND_Max = 18
    };

    enum class EDataValidationResult : uint8_t //Enum CoreUObject.EDataValidationResult
    {
        Invalid = 0,
        Valid = 1,
        NotValidated = 2,
        EDataValidationResult_MAX = 3
    };

    enum class EAppMsgType : uint8_t //Enum CoreUObject.EAppMsgType
    {
        Ok = 0,
        YesNo = 1,
        OkCancel = 2,
        YesNoCancel = 3,
        CancelRetryContinue = 4,
        YesNoYesAllNoAll = 5,
        YesNoYesAllNoAllCancel = 6,
        YesNoYesAll = 7,
        EAppMsgType_MAX = 8
    };

    enum class EAppReturnType : uint8_t //Enum CoreUObject.EAppReturnType
    {
        No = 0,
        Yes = 1,
        YesAll = 2,
        NoAll = 3,
        Cancel = 4,
        Ok = 5,
        Retry = 6,
        Continue = 7,
        EAppReturnType_MAX = 8
    };

    enum class EPropertyAccessChangeNotifyMode : uint8_t //Enum CoreUObject.EPropertyAccessChangeNotifyMode
    {
        Default = 0,
        Never = 1,
        Always = 2,
        EPropertyAccessChangeNotifyMode_MAX = 3
    };

    enum class EUnit : uint8_t //Enum CoreUObject.EUnit
    {
        Micrometers = 0,
        Millimeters = 1,
        Centimeters = 2,
        Meters = 3,
        Kilometers = 4,
        Inches = 5,
        Feet = 6,
        Yards = 7,
        Miles = 8,
        Lightyears = 9,
        Degrees = 10,
        Radians = 11,
        MetersPerSecond = 12,
        KilometersPerHour = 13,
        MilesPerHour = 14,
        Celsius = 15,
        Farenheit = 16,
        Kelvin = 17,
        Micrograms = 18,
        Milligrams = 19,
        Grams = 20,
        Kilograms = 21,
        MetricTons = 22,
        Ounces = 23,
        Pounds = 24,
        Stones = 25,
        Newtons = 26,
        PoundsForce = 27,
        KilogramsForce = 28,
        Hertz = 29,
        Kilohertz = 30,
        Megahertz = 31,
        Gigahertz = 32,
        RevolutionsPerMinute = 33,
        Bytes = 34,
        Kilobytes = 35,
        Megabytes = 36,
        Gigabytes = 37,
        Terabytes = 38,
        Lumens = 39,
        Milliseconds = 43,
        Seconds = 44,
        Minutes = 45,
        Hours = 46,
        Days = 47,
        Months = 48,
        Years = 49,
        Multiplier = 52,
        Percentage = 51,
        Unspecified = 53,
        EUnit_MAX = 54
    };

    enum class EPixelFormat : uint8_t //Enum CoreUObject.EPixelFormat
    {
        PF_Unknown = 0,
        PF_A32B32G32R32F = 1,
        PF_B8G8R8A8 = 2,
        PF_G8 = 3,
        PF_G16 = 4,
        PF_DXT1 = 5,
        PF_DXT3 = 6,
        PF_DXT5 = 7,
        PF_UYVY = 8,
        PF_FloatRGB = 9,
        PF_FloatRGBA = 10,
        PF_DepthStencil = 11,
        PF_ShadowDepth = 12,
        PF_R32_FLOAT = 13,
        PF_G16R16 = 14,
        PF_G16R16F = 15,
        PF_G16R16F_FILTER = 16,
        PF_G32R32F = 17,
        PF_A2B10G10R10 = 18,
        PF_A16B16G16R16 = 19,
        PF_D24 = 20,
        PF_R16F = 21,
        PF_R16F_FILTER = 22,
        PF_BC5 = 23,
        PF_V8U8 = 24,
        PF_A1 = 25,
        PF_FloatR11G11B10 = 26,
        PF_A8 = 27,
        PF_R32_UINT = 28,
        PF_R32_SINT = 29,
        PF_PVRTC2 = 30,
        PF_PVRTC4 = 31,
        PF_R16_UINT = 32,
        PF_R16_SINT = 33,
        PF_R16G16B16A16_UINT = 34,
        PF_R16G16B16A16_SINT = 35,
        PF_R5G6B5_UNORM = 36,
        PF_R8G8B8A8 = 37,
        PF_A8R8G8B8 = 38,
        PF_BC4 = 39,
        PF_R8G8 = 40,
        PF_ATC_RGB = 41,
        PF_ATC_RGBA_E = 42,
        PF_ATC_RGBA_I = 43,
        PF_X24_G8 = 44,
        PF_ETC1 = 45,
        PF_ETC2_RGB = 46,
        PF_ETC2_RGBA = 47,
        PF_R32G32B32A32_UINT = 48,
        PF_R16G16_UINT = 49,
        PF_ASTC_4x4 = 50,
        PF_ASTC_6x6 = 51,
        PF_ASTC_8x8 = 52,
        PF_ASTC_10x10 = 53,
        PF_ASTC_12x12 = 54,
        PF_BC6H = 55,
        PF_BC7 = 56,
        PF_R8_UINT = 57,
        PF_L8 = 58,
        PF_XGXR8 = 59,
        PF_R8G8B8A8_UINT = 60,
        PF_R8G8B8A8_SNORM = 61,
        PF_R16G16B16A16_UNORM = 62,
        PF_R16G16B16A16_SNORM = 63,
        PF_PLATFORM_HDR_1 = 64,
        PF_PLATFORM_HDR_2 = 65,
        PF_PLATFORM_HDR_3 = 66,
        PF_NV12 = 67,
        PF_R32G32_UINT = 68,
        PF_ETC2_R11_EAC = 69,
        PF_ETC2_RG11_EAC = 70,
        PF_MAX = 72
    };

    enum class EAxis : uint8_t //Enum CoreUObject.EAxis
    {
        None = 0,
        X = 1,
        Y = 2,
        Z = 3,
        EAxis_MAX = 4
    };

    enum class ELogTimes : uint8_t //Enum CoreUObject.ELogTimes
    {
        None = 0,
        UTC = 1,
        SinceGStartTime = 2,
        Local = 3,
        ELogTimes_MAX = 4
    };

    enum class ESearchDir : uint8_t //Enum CoreUObject.ESearchDir
    {
        FromStart = 0,
        FromEnd = 1,
        ESearchDir_MAX = 2
    };

    enum class ESearchCase : uint8_t //Enum CoreUObject.ESearchCase
    {
        CaseSensitive = 0,
        IgnoreCase = 1,
        ESearchCase_MAX = 2
    };

    enum class EConsoleForGamepadLabels : uint8_t //Enum InputCore.EConsoleForGamepadLabels
    {
        None = 0,
        XBoxOne = 1,
        PS4 = 2,
        EConsoleForGamepadLabels_MAX = 3
    };

    enum class EFontLayoutMethod : uint8_t //Enum SlateCore.EFontLayoutMethod
    {
        Metrics = 0,
        BoundingBox = 1,
        EFontLayoutMethod_MAX = 2
    };

    enum class EFontLoadingPolicy : uint8_t //Enum SlateCore.EFontLoadingPolicy
    {
        LazyLoad = 0,
        Stream = 1,
        Inline = 2,
        EFontLoadingPolicy_MAX = 3
    };

    enum class EFontHinting : uint8_t //Enum SlateCore.EFontHinting
    {
        Default = 0,
        Auto = 1,
        AutoLight = 2,
        Monochrome = 3,
        None = 4,
        EFontHinting_MAX = 5
    };

    enum class EFocusCause : uint8_t //Enum SlateCore.EFocusCause
    {
        Mouse = 0,
        Navigation = 1,
        SetDirectly = 2,
        Cleared = 3,
        OtherWidgetLostFocus = 4,
        WindowActivate = 5,
        EFocusCause_MAX = 6
    };

    enum class ESlateDebuggingFocusEvent : uint8_t //Enum SlateCore.ESlateDebuggingFocusEvent
    {
        FocusChanging = 0,
        FocusLost = 1,
        FocusReceived = 2,
        MAX = 3
    };

    enum class ESlateDebuggingNavigationMethod : uint8_t //Enum SlateCore.ESlateDebuggingNavigationMethod
    {
        Unknown = 0,
        Explicit = 1,
        CustomDelegateBound = 2,
        CustomDelegateUnbound = 3,
        NextOrPrevious = 4,
        HitTestGrid = 5,
        ESlateDebuggingNavigationMethod_MAX = 6
    };

    enum class ESlateDebuggingStateChangeEvent : uint8_t //Enum SlateCore.ESlateDebuggingStateChangeEvent
    {
        MouseCaptureGained = 0,
        MouseCaptureLost = 1,
        ESlateDebuggingStateChangeEvent_MAX = 2
    };

    enum class ESlateDebuggingInputEvent : uint8_t //Enum SlateCore.ESlateDebuggingInputEvent
    {
        MouseMove = 0,
        MouseEnter = 1,
        MouseLeave = 2,
        PreviewMouseButtonDown = 3,
        MouseButtonDown = 4,
        MouseButtonUp = 5,
        MouseButtonDoubleClick = 6,
        MouseWheel = 7,
        TouchStart = 8,
        TouchEnd = 9,
        TouchForceChanged = 10,
        TouchFirstMove = 11,
        TouchMoved = 12,
        DragDetected = 13,
        DragEnter = 14,
        DragLeave = 15,
        DragOver = 16,
        DragDrop = 17,
        DropMessage = 18,
        PreviewKeyDown = 19,
        KeyDown = 20,
        KeyUp = 21,
        KeyChar = 22,
        AnalogInput = 23,
        TouchGesture = 24,
        MotionDetected = 25,
        MAX = 26
    };

    enum class EScrollDirection : uint8_t //Enum SlateCore.EScrollDirection
    {
        Scroll_Down = 0,
        Scroll_Up = 1,
        Scroll_MAX = 2
    };

    enum class EOrientation : uint8_t //Enum SlateCore.EOrientation
    {
        Orient_Horizontal = 0,
        Orient_Vertical = 1,
        Orient_MAX = 2
    };

    enum class EVerticalAlignment : uint8_t //Enum SlateCore.EVerticalAlignment
    {
        VAlign_Fill = 0,
        VAlign_Top = 1,
        VAlign_Center = 2,
        VAlign_Bottom = 3,
        VAlign_MAX = 4
    };

    enum class EHorizontalAlignment : uint8_t //Enum SlateCore.EHorizontalAlignment
    {
        HAlign_Fill = 0,
        HAlign_Left = 1,
        HAlign_Center = 2,
        HAlign_Right = 3,
        HAlign_MAX = 4
    };

    enum class ENavigationGenesis : uint8_t //Enum SlateCore.ENavigationGenesis
    {
        Keyboard = 0,
        Controller = 1,
        User = 2,
        ENavigationGenesis_MAX = 3
    };

    enum class ENavigationSource : uint8_t //Enum SlateCore.ENavigationSource
    {
        FocusedWidget = 0,
        WidgetUnderCursor = 1,
        ENavigationSource_MAX = 2
    };

    enum class EUINavigationAction : uint8_t //Enum SlateCore.EUINavigationAction
    {
        Accept = 0,
        Back = 1,
        Num = 2,
        Invalid = 3,
        EUINavigationAction_MAX = 4
    };

    enum class EButtonPressMethod : uint8_t //Enum SlateCore.EButtonPressMethod
    {
        DownAndUp = 0,
        ButtonPress = 1,
        ButtonRelease = 2,
        EButtonPressMethod_MAX = 3
    };

    enum class EButtonTouchMethod : uint8_t //Enum SlateCore.EButtonTouchMethod
    {
        DownAndUp = 0,
        Down = 1,
        PreciseTap = 2,
        EButtonTouchMethod_MAX = 3
    };

    enum class EButtonClickMethod : uint8_t //Enum SlateCore.EButtonClickMethod
    {
        DownAndUp = 0,
        MouseDown = 1,
        MouseUp = 2,
        PreciseClick = 3,
        EButtonClickMethod_MAX = 4
    };

    enum class ESlateCheckBoxType : uint8_t //Enum SlateCore.ESlateCheckBoxType
    {
        CheckBox = 0,
        ToggleButton = 1,
        ESlateCheckBoxType_MAX = 2
    };

    enum class ESlateParentWindowSearchMethod : uint8_t //Enum SlateCore.ESlateParentWindowSearchMethod
    {
        ActiveWindow = 0,
        MainWindow = 1,
        ESlateParentWindowSearchMethod_MAX = 2
    };

    enum class EConsumeMouseWheel : uint8_t //Enum SlateCore.EConsumeMouseWheel
    {
        WhenScrollingPossible = 0,
        Always = 1,
        Never = 2,
        EConsumeMouseWheel_MAX = 3
    };

    enum class EBitmapCSType : uint32_t //Enum ImageWrapper.EBitmapCSType
    {
        BCST_BLCS_CALIBRATED_RGB = 0,
        BCST_LCS_sRGB = 1934772034,
        BCST_LCS_WINDOWS_COLOR_SPACE = 1466527264,
        BCST_PROFILE_LINKED = 1279872587,
        BCST_PROFILE_EMBEDDED = 1296188740,
        BCST_MAX = 1934772035
    };

    enum class EBitmapHeaderVersion : uint8_t //Enum ImageWrapper.EBitmapHeaderVersion
    {
        BHV_BITMAPINFOHEADER = 0,
        BHV_BITMAPV2INFOHEADER = 1,
        BHV_BITMAPV3INFOHEADER = 2,
        BHV_BITMAPV4HEADER = 3,
        BHV_BITMAPV5HEADER = 4,
        BHV_MAX = 5
    };

    enum class ETableViewMode : uint8_t //Enum Slate.ETableViewMode
    {
        List = 0,
        Tile = 1,
        Tree = 2,
        ETableViewMode_MAX = 3
    };

    enum class ESelectionMode : uint8_t //Enum Slate.ESelectionMode
    {
        None = 0,
        Single = 1,
        SingleToggle = 2,
        Multi = 3,
        ESelectionMode_MAX = 4
    };

    enum class EMultiBlockType : uint8_t //Enum Slate.EMultiBlockType
    {
        None = 0,
        ButtonRow = 1,
        EditableText = 2,
        Heading = 3,
        MenuEntry = 4,
        Separator = 5,
        ToolBarButton = 6,
        ToolBarComboButton = 7,
        Widget = 8,
        EMultiBlockType_MAX = 9
    };

    enum class EMultiBoxType : uint8_t //Enum Slate.EMultiBoxType
    {
        MenuBar = 0,
        ToolBar = 1,
        VerticalToolBar = 2,
        UniformToolBar = 3,
        Menu = 4,
        ButtonRow = 5,
        EMultiBoxType_MAX = 6
    };

    enum class EProgressBarFillType : uint8_t //Enum Slate.EProgressBarFillType
    {
        LeftToRight = 0,
        RightToLeft = 1,
        FillFromCenter = 2,
        TopToBottom = 3,
        BottomToTop = 4,
        EProgressBarFillType_MAX = 5
    };

    enum class EStretch : uint8_t //Enum Slate.EStretch
    {
        None = 0,
        Fill = 1,
        ScaleToFit = 2,
        ScaleToFitX = 3,
        ScaleToFitY = 4,
        ScaleToFill = 5,
        ScaleBySafeZone = 6,
        UserSpecified = 7,
        EStretch_MAX = 8
    };

    enum class EStretchDirection : uint8_t //Enum Slate.EStretchDirection
    {
        Both = 0,
        DownOnly = 1,
        UpOnly = 2,
        EStretchDirection_MAX = 3
    };

    enum class EScrollWhenFocusChanges : uint8_t //Enum Slate.EScrollWhenFocusChanges
    {
        NoScroll = 0,
        InstantScroll = 1,
        AnimatedScroll = 2,
        EScrollWhenFocusChanges_MAX = 3
    };

    enum class EDescendantScrollDestination : uint8_t //Enum Slate.EDescendantScrollDestination
    {
        IntoView = 0,
        TopOrLeft = 1,
        Center = 2,
        EDescendantScrollDestination_MAX = 3
    };

    enum class EListItemAlignment : uint8_t //Enum Slate.EListItemAlignment
    {
        EvenlyDistributed = 0,
        EvenlySize = 1,
        EvenlyWide = 2,
        LeftAligned = 3,
        RightAligned = 4,
        CenterAligned = 5,
        Fill = 6,
        EListItemAlignment_MAX = 7
    };

    enum class ETextTransformPolicy : uint8_t //Enum Slate.ETextTransformPolicy
    {
        None = 0,
        ToLower = 1,
        ToUpper = 2,
        ETextTransformPolicy_MAX = 3
    };

    enum class ECustomizedToolMenuVisibility : uint8_t //Enum Slate.ECustomizedToolMenuVisibility
    {
        None = 0,
        Visible = 1,
        Hidden = 2,
        ECustomizedToolMenuVisibility_MAX = 3
    };

    enum class EMultipleKeyBindingIndex : uint8_t //Enum Slate.EMultipleKeyBindingIndex
    {
        Primary = 0,
        Secondary = 1,
        NumChords = 2,
        EMultipleKeyBindingIndex_MAX = 3
    };

    enum class EUserInterfaceActionType : uint8_t //Enum Slate.EUserInterfaceActionType
    {
        None = 0,
        Button = 1,
        ToggleButton = 2,
        RadioButton = 3,
        Check = 4,
        CollapsedButton = 5,
        EUserInterfaceActionType_MAX = 6
    };

    enum class EDesiredImageFormat : uint8_t //Enum ImageWriteQueue.EDesiredImageFormat
    {
        PNG = 0,
        JPG = 1,
        BMP = 2,
        EXR = 3,
        EDesiredImageFormat_MAX = 4
    };

    enum class EMobileShadowQuality : uint8_t //Enum MaterialShaderQualitySettings.EMobileShadowQuality
    {
        NoFiltering = 0,
        PCF_1x1 = 1,
        PCF_2x2 = 2,
        PCF_3x3 = 3,
        EMobileShadowQuality_MAX = 4
    };

    enum class EReSTIRMode : uint8_t //Enum Renderer.EReSTIRMode
    {
        InputOnly = 0,
        TemporalOnly = 1,
        TemporalAndBiasedSpatial = 2,
        TemporalAndUnbiasedSpatial = 3,
        EReSTIRMode_MAX = 4
    };

    enum class ESubLevelStripMode : uint8_t //Enum EngineSettings.ESubLevelStripMode
    {
        ExactClass = 0,
        IsChildOf = 1,
        ESubLevelStripMode_MAX = 2
    };

    enum class EFourPlayerSplitScreenType : uint8_t //Enum EngineSettings.EFourPlayerSplitScreenType
    {
        Grid = 0,
        Vertical = 1,
        Horizontal = 2,
        EFourPlayerSplitScreenType_MAX = 3
    };

    enum class EThreePlayerSplitScreenType : uint8_t //Enum EngineSettings.EThreePlayerSplitScreenType
    {
        FavorTop = 0,
        FavorBottom = 1,
        Vertical = 2,
        Horizontal = 3,
        EThreePlayerSplitScreenType_MAX = 4
    };

    enum class ETwoPlayerSplitScreenType : uint8_t //Enum EngineSettings.ETwoPlayerSplitScreenType
    {
        Horizontal = 0,
        Vertical = 1,
        ETwoPlayerSplitScreenType_MAX = 2
    };

    enum class EClusterUnionMethod : uint8_t //Enum Chaos.EClusterUnionMethod
    {
        PointImplicit = 0,
        DelaunayTriangulation = 1,
        MinimalSpanningSubsetDelaunayTriangulation = 2,
        PointImplicitAugmentedWithMinimalDelaunay = 3,
        None = 4,
        EClusterUnionMethod_MAX = 5
    };

    enum class EFieldPhysicsDefaultFields : uint8_t //Enum Chaos.EFieldPhysicsDefaultFields
    {
        Field_RadialIntMask = 0,
        Field_RadialFalloff = 1,
        Field_UniformVector = 2,
        Field_RadialVector = 3,
        Field_RadialVectorFalloff = 4,
        Field_EFieldPhysicsDefaultFields_Max = 5,
        Field_MAX = 6
    };

    enum class EFieldPhysicsType : uint8_t //Enum Chaos.EFieldPhysicsType
    {
        Field_None = 0,
        Field_DynamicState = 1,
        Field_LinearForce = 2,
        Field_ExternalClusterStrain = 3,
        Field_Kill = 4,
        Field_LinearVelocity = 5,
        Field_AngularVelociy = 6,
        Field_AngularTorque = 7,
        Field_InternalClusterStrain = 8,
        Field_DisableThreshold = 9,
        Field_SleepingThreshold = 10,
        Field_PositionStatic = 11,
        Field_PositionAnimated = 12,
        Field_PositionTarget = 13,
        Field_DynamicConstraint = 14,
        Field_CollisionGroup = 15,
        Field_ActivateDisabled = 16,
        Field_PhysicsType_Max = 17
    };

    enum class EFieldFalloffType : uint8_t //Enum Chaos.EFieldFalloffType
    {
        Field_FallOff_None = 0,
        Field_Falloff_Linear = 1,
        Field_Falloff_Inverse = 2,
        Field_Falloff_Squared = 3,
        Field_Falloff_Logarithmic = 4,
        Field_Falloff_Max = 5
    };

    enum class EFieldResolutionType : uint8_t //Enum Chaos.EFieldResolutionType
    {
        Field_Resolution_Minimal = 0,
        Field_Resolution_DisabledParents = 1,
        Field_Resolution_Maximum = 2,
        Field_Resolution_Max = 3
    };

    enum class EFieldCullingOperationType : uint8_t //Enum Chaos.EFieldCullingOperationType
    {
        Field_Culling_Inside = 0,
        Field_Culling_Outside = 1,
        Field_Culling_Operation_Max = 2,
        Field_Culling_MAX = 3
    };

    enum class EFieldOperationType : uint8_t //Enum Chaos.EFieldOperationType
    {
        Field_Multiply = 0,
        Field_Divide = 1,
        Field_Add = 2,
        Field_Substract = 3,
        Field_Operation_Max = 4
    };

    enum class ESetMaskConditionType : uint8_t //Enum Chaos.ESetMaskConditionType
    {
        Field_Set_Always = 0,
        Field_Set_IFF_NOT_Interior = 1,
        Field_Set_IFF_NOT_Exterior = 2,
        Field_MaskCondition_Max = 3
    };

    enum class EEmissionPatternTypeEnum : uint8_t //Enum Chaos.EEmissionPatternTypeEnum
    {
        Chaos_Emission_Pattern_First_Frame = 0,
        Chaos_Emission_Pattern_On_Demand = 1,
        Chaos_Max = 2
    };

    enum class EInitialVelocityTypeEnum : uint8_t //Enum Chaos.EInitialVelocityTypeEnum
    {
        Chaos_Initial_Velocity_User_Defined = 0,
        Chaos_Initial_Velocity_None = 1,
        Chaos_Max = 2
    };

    enum class EGeometryCollectionPhysicsTypeEnum : uint8_t //Enum Chaos.EGeometryCollectionPhysicsTypeEnum
    {
        Chaos_AngularVelocity = 0,
        Chaos_DynamicState = 1,
        Chaos_LinearVelocity = 2,
        Chaos_InitialAngularVelocity = 3,
        Chaos_InitialLinearVelocity = 4,
        Chaos_CollisionGroup = 5,
        Chaos_LinearForce = 6,
        Chaos_AngularTorque = 7,
        Chaos_Max = 8
    };

    enum class EObjectStateTypeEnum : uint8_t //Enum Chaos.EObjectStateTypeEnum
    {
        Chaos_NONE = 0,
        Chaos_Object_Sleeping = 1,
        Chaos_Object_Kinematic = 2,
        Chaos_Object_Static = 3,
        Chaos_Object_Dynamic = 4,
        Chaos_Object_UserDefined = 100,
        Chaos_Max = 101
    };

    enum class EImplicitTypeEnum : uint8_t //Enum Chaos.EImplicitTypeEnum
    {
        Chaos_Implicit_Box = 0,
        Chaos_Implicit_Sphere = 1,
        Chaos_Implicit_Capsule = 2,
        Chaos_Implicit_LevelSet = 3,
        Chaos_Implicit_None = 4,
        Chaos_Max = 5
    };

    enum class ECollisionTypeEnum : uint8_t //Enum Chaos.ECollisionTypeEnum
    {
        Chaos_Volumetric = 0,
        Chaos_Surface_Volumetric = 1,
        Chaos_Max = 2
    };

    enum class EChaosBufferMode : uint8_t //Enum Chaos.EChaosBufferMode
    {
        Double = 0,
        Triple = 1,
        Num = 2,
        Invalid = 3,
        EChaosBufferMode_MAX = 4
    };

    enum class EChaosThreadingMode : uint8_t //Enum Chaos.EChaosThreadingMode
    {
        DedicatedThread = 0,
        TaskGraph = 1,
        SingleThread = 2,
        Num = 3,
        Invalid = 4,
        EChaosThreadingMode_MAX = 5
    };

    enum class EChaosSolverTickMode : uint8_t //Enum Chaos.EChaosSolverTickMode
    {
        Fixed = 0,
        Variable = 1,
        VariableCapped = 2,
        VariableCappedWithTarget = 3,
        EChaosSolverTickMode_MAX = 4
    };

    enum class EGeometryCollectionCacheType : uint8_t //Enum Chaos.EGeometryCollectionCacheType
    {
        None = 0,
        Record = 1,
        Play = 2,
        RecordAndPlay = 3,
        EGeometryCollectionCacheType_MAX = 4
    };

    enum class EBodyCollisionResponse : uint8_t //Enum PhysicsCore.EBodyCollisionResponse
    {
        BodyCollision_Enabled = 0,
        BodyCollision_Disabled = 1,
        BodyCollision_MAX = 2
    };

    enum class EPhysicsType : uint8_t //Enum PhysicsCore.EPhysicsType
    {
        PhysType_Default = 0,
        PhysType_Kinematic = 1,
        PhysType_Simulated = 2,
        PhysType_MAX = 3
    };

    enum class ECollisionTraceFlag : uint8_t //Enum PhysicsCore.ECollisionTraceFlag
    {
        CTF_UseDefault = 0,
        CTF_UseSimpleAndComplex = 1,
        CTF_UseSimpleAsComplex = 2,
        CTF_UseComplexAsSimple = 3,
        CTF_MAX = 4
    };

    enum class ELinearConstraintMotion : uint8_t //Enum PhysicsCore.ELinearConstraintMotion
    {
        LCM_Free = 0,
        LCM_Limited = 1,
        LCM_Locked = 2,
        LCM_MAX = 3
    };

    enum class EConstraintFrame : uint8_t //Enum PhysicsCore.EConstraintFrame
    {
        Frame1 = 0,
        Frame2 = 1,
        EConstraintFrame_MAX = 2
    };

    enum class EAngularConstraintMotion : uint8_t //Enum PhysicsCore.EAngularConstraintMotion
    {
        ACM_Free = 0,
        ACM_Limited = 1,
        ACM_Locked = 2,
        ACM_MAX = 3
    };

    enum class ESleepFamily : uint8_t //Enum PhysicsCore.ESleepFamily
    {
        Normal = 0,
        Sensitive = 1,
        Custom = 2,
        ESleepFamily_MAX = 3
    };

    enum class ERadialImpulseFalloff : uint8_t //Enum PhysicsCore.ERadialImpulseFalloff
    {
        RIF_Constant = 0,
        RIF_Linear = 1,
        RIF_MAX = 2
    };

    enum class EFrictionCombineMode : uint8_t //Enum PhysicsCore.EFrictionCombineMode
    {
        Average = 0,
        Min = 1,
        Multiply = 2,
        Max = 3
    };

    enum class EMeshTrackerVertexColorMode : uint8_t //Enum MRMesh.EMeshTrackerVertexColorMode
    {
        None = 0,
        Confidence = 1,
        Block = 2,
        EMeshTrackerVertexColorMode_MAX = 3
    };

    enum class EARTrackingState : uint8_t //Enum AugmentedReality.EARTrackingState
    {
        Unknown = 0,
        Tracking = 1,
        NotTracking = 2,
        StoppedTracking = 3,
        EARTrackingState_MAX = 4
    };

    enum class EGeoAnchorComponentDebugMode : uint8_t //Enum AugmentedReality.EGeoAnchorComponentDebugMode
    {
        None = 0,
        ShowGeoData = 1,
        EGeoAnchorComponentDebugMode_MAX = 2
    };

    enum class EPoseComponentDebugMode : uint8_t //Enum AugmentedReality.EPoseComponentDebugMode
    {
        None = 0,
        ShowSkeleton = 1,
        EPoseComponentDebugMode_MAX = 2
    };

    enum class EQRCodeComponentDebugMode : uint8_t //Enum AugmentedReality.EQRCodeComponentDebugMode
    {
        None = 0,
        ShowQRCode = 1,
        EQRCodeComponentDebugMode_MAX = 2
    };

    enum class EImageComponentDebugMode : uint8_t //Enum AugmentedReality.EImageComponentDebugMode
    {
        None = 0,
        ShowDetectedImage = 1,
        EImageComponentDebugMode_MAX = 2
    };

    enum class EARFaceTransformMixing : uint8_t //Enum AugmentedReality.EARFaceTransformMixing
    {
        ComponentOnly = 0,
        ComponentLocationTrackedRotation = 1,
        ComponentWithTracked = 2,
        TrackingOnly = 3,
        EARFaceTransformMixing_MAX = 4
    };

    enum class EFaceComponentDebugMode : uint8_t //Enum AugmentedReality.EFaceComponentDebugMode
    {
        None = 0,
        ShowEyeVectors = 1,
        ShowFaceMesh = 2,
        EFaceComponentDebugMode_MAX = 3
    };

    enum class EPlaneComponentDebugMode : uint8_t //Enum AugmentedReality.EPlaneComponentDebugMode
    {
        None = 0,
        ShowNetworkRole = 1,
        ShowClassification = 2,
        EPlaneComponentDebugMode_MAX = 3
    };

    enum class EARSessionConfigFlags : uint8_t //Enum AugmentedReality.EARSessionConfigFlags
    {
        None = 0,
        GenerateMeshData = 1,
        RenderMeshDataInWireframe = 2,
        GenerateCollisionForMeshData = 4,
        GenerateNavMeshForMeshData = 8,
        UseMeshDataForOcclusion = 16,
        EARSessionConfigFlags_MAX = 17
    };

    enum class EARServicePermissionRequestResult : uint8_t //Enum AugmentedReality.EARServicePermissionRequestResult
    {
        Granted = 0,
        Denied = 1,
        EARServicePermissionRequestResult_MAX = 2
    };

    enum class EARServiceInstallRequestResult : uint8_t //Enum AugmentedReality.EARServiceInstallRequestResult
    {
        Installed = 0,
        DeviceNotCompatible = 1,
        UserDeclinedInstallation = 2,
        FatalError = 3,
        EARServiceInstallRequestResult_MAX = 4
    };

    enum class EARServiceAvailability : uint8_t //Enum AugmentedReality.EARServiceAvailability
    {
        UnknownError = 0,
        UnknownChecking = 1,
        UnknownTimedOut = 2,
        UnsupportedDeviceNotCapable = 3,
        SupportedNotInstalled = 4,
        SupportedVersionTooOld = 5,
        SupportedInstalled = 6,
        EARServiceAvailability_MAX = 7
    };

    enum class EARGeoTrackingAccuracy : uint8_t //Enum AugmentedReality.EARGeoTrackingAccuracy
    {
        Undetermined = 0,
        Low = 1,
        Medium = 2,
        High = 3,
        EARGeoTrackingAccuracy_MAX = 4
    };

    enum class EARGeoTrackingStateReason : uint8_t //Enum AugmentedReality.EARGeoTrackingStateReason
    {
        None = 0,
        NotAvailableAtLocation = 1,
        NeedLocationPermissions = 2,
        DevicePointedTooLow = 3,
        WorldTrackingUnstable = 4,
        WaitingForLocation = 5,
        GeoDataNotLoaded = 6,
        VisualLocalizationFailed = 7,
        WaitingForAvailabilityCheck = 8,
        EARGeoTrackingStateReason_MAX = 9
    };

    enum class EARGeoTrackingState : uint8_t //Enum AugmentedReality.EARGeoTrackingState
    {
        Initializing = 0,
        Localized = 1,
        Localizing = 2,
        NotAvailable = 3,
        EARGeoTrackingState_MAX = 4
    };

    enum class EARSceneReconstruction : uint8_t //Enum AugmentedReality.EARSceneReconstruction
    {
        None = 0,
        MeshOnly = 1,
        MeshWithClassification = 2,
        EARSceneReconstruction_MAX = 3
    };

    enum class EARSessionTrackingFeature : uint8_t //Enum AugmentedReality.EARSessionTrackingFeature
    {
        None = 0,
        PoseDetection2D = 1,
        PersonSegmentation = 2,
        PersonSegmentationWithDepth = 3,
        SceneDepth = 4,
        SmoothedSceneDepth = 5,
        EARSessionTrackingFeature_MAX = 6
    };

    enum class EARFaceTrackingUpdate : uint8_t //Enum AugmentedReality.EARFaceTrackingUpdate
    {
        CurvesAndGeo = 0,
        CurvesOnly = 1,
        EARFaceTrackingUpdate_MAX = 2
    };

    enum class EAREnvironmentCaptureProbeType : uint8_t //Enum AugmentedReality.EAREnvironmentCaptureProbeType
    {
        None = 0,
        Manual = 1,
        Automatic = 2,
        EAREnvironmentCaptureProbeType_MAX = 3
    };

    enum class EARFrameSyncMode : uint8_t //Enum AugmentedReality.EARFrameSyncMode
    {
        SyncTickWithCameraImage = 0,
        SyncTickWithoutCameraImage = 1,
        EARFrameSyncMode_MAX = 2
    };

    enum class EARLightEstimationMode : uint8_t //Enum AugmentedReality.EARLightEstimationMode
    {
        None = 0,
        AmbientLightEstimate = 1,
        DirectionalLightEstimate = 2,
        EARLightEstimationMode_MAX = 3
    };

    enum class EARPlaneDetectionMode : uint8_t //Enum AugmentedReality.EARPlaneDetectionMode
    {
        None = 0,
        HorizontalPlaneDetection = 1,
        VerticalPlaneDetection = 2,
        EARPlaneDetectionMode_MAX = 3
    };

    enum class EARSessionType : uint8_t //Enum AugmentedReality.EARSessionType
    {
        None = 0,
        Orientation = 1,
        World = 2,
        Face = 3,
        Image = 4,
        ObjectScanning = 5,
        PoseTracking = 6,
        GeoTracking = 7,
        EARSessionType_MAX = 8
    };

    enum class EARWorldAlignment : uint8_t //Enum AugmentedReality.EARWorldAlignment
    {
        Gravity = 0,
        GravityAndHeading = 1,
        Camera = 2,
        EARWorldAlignment_MAX = 3
    };

    enum class EARDepthAccuracy : uint8_t //Enum AugmentedReality.EARDepthAccuracy
    {
        Unkown = 0,
        Approximate = 1,
        Accurate = 2,
        EARDepthAccuracy_MAX = 3
    };

    enum class EARDepthQuality : uint8_t //Enum AugmentedReality.EARDepthQuality
    {
        Unkown = 0,
        Low = 1,
        High = 2,
        EARDepthQuality_MAX = 3
    };

    enum class EARTextureType : uint8_t //Enum AugmentedReality.EARTextureType
    {
        Unknown = 0,
        CameraImage = 1,
        CameraDepth = 2,
        EnvironmentCapture = 3,
        PersonSegmentationImage = 4,
        PersonSegmentationDepth = 5,
        SceneDepthMap = 6,
        SceneDepthConfidenceMap = 7,
        EARTextureType_MAX = 8
    };

    enum class EAREye : uint8_t //Enum AugmentedReality.EAREye
    {
        LeftEye = 0,
        RightEye = 1,
        EAREye_MAX = 2
    };

    enum class EARFaceBlendShape : uint8_t //Enum AugmentedReality.EARFaceBlendShape
    {
        EyeBlinkLeft = 0,
        EyeLookDownLeft = 1,
        EyeLookInLeft = 2,
        EyeLookOutLeft = 3,
        EyeLookUpLeft = 4,
        EyeSquintLeft = 5,
        EyeWideLeft = 6,
        EyeBlinkRight = 7,
        EyeLookDownRight = 8,
        EyeLookInRight = 9,
        EyeLookOutRight = 10,
        EyeLookUpRight = 11,
        EyeSquintRight = 12,
        EyeWideRight = 13,
        JawForward = 14,
        JawLeft = 15,
        JawRight = 16,
        JawOpen = 17,
        MouthClose = 18,
        MouthFunnel = 19,
        MouthPucker = 20,
        MouthLeft = 21,
        MouthRight = 22,
        MouthSmileLeft = 23,
        MouthSmileRight = 24,
        MouthFrownLeft = 25,
        MouthFrownRight = 26,
        MouthDimpleLeft = 27,
        MouthDimpleRight = 28,
        MouthStretchLeft = 29,
        MouthStretchRight = 30,
        MouthRollLower = 31,
        MouthRollUpper = 32,
        MouthShrugLower = 33,
        MouthShrugUpper = 34,
        MouthPressLeft = 35,
        MouthPressRight = 36,
        MouthLowerDownLeft = 37,
        MouthLowerDownRight = 38,
        MouthUpperUpLeft = 39,
        MouthUpperUpRight = 40,
        BrowDownLeft = 41,
        BrowDownRight = 42,
        BrowInnerUp = 43,
        BrowOuterUpLeft = 44,
        BrowOuterUpRight = 45,
        CheekPuff = 46,
        CheekSquintLeft = 47,
        CheekSquintRight = 48,
        NoseSneerLeft = 49,
        NoseSneerRight = 50,
        TongueOut = 51,
        HeadYaw = 52,
        HeadPitch = 53,
        HeadRoll = 54,
        LeftEyeYaw = 55,
        LeftEyePitch = 56,
        LeftEyeRoll = 57,
        RightEyeYaw = 58,
        RightEyePitch = 59,
        RightEyeRoll = 60,
        MAX = 61
    };

    enum class EARFaceTrackingDirection : uint8_t //Enum AugmentedReality.EARFaceTrackingDirection
    {
        FaceRelative = 0,
        FaceMirrored = 1,
        EARFaceTrackingDirection_MAX = 2
    };

    enum class EARCandidateImageOrientation : uint8_t //Enum AugmentedReality.EARCandidateImageOrientation
    {
        Landscape = 0,
        Portrait = 1,
        EARCandidateImageOrientation_MAX = 2
    };

    enum class EARAltitudeSource : uint8_t //Enum AugmentedReality.EARAltitudeSource
    {
        Precise = 0,
        Coarse = 1,
        UserDefined = 2,
        Unknown = 3,
        EARAltitudeSource_MAX = 4
    };

    enum class EARJointTransformSpace : uint8_t //Enum AugmentedReality.EARJointTransformSpace
    {
        Model = 0,
        ParentJoint = 1,
        EARJointTransformSpace_MAX = 2
    };

    enum class EARObjectClassification : uint8_t //Enum AugmentedReality.EARObjectClassification
    {
        NotApplicable = 0,
        Unknown = 1,
        Wall = 2,
        Ceiling = 3,
        Floor = 4,
        Table = 5,
        Seat = 6,
        Face = 7,
        Image = 8,
        World = 9,
        SceneObject = 10,
        HandMesh = 11,
        Door = 12,
        Window = 13,
        EARObjectClassification_MAX = 14
    };

    enum class EARPlaneOrientation : uint8_t //Enum AugmentedReality.EARPlaneOrientation
    {
        Horizontal = 0,
        Vertical = 1,
        Diagonal = 2,
        EARPlaneOrientation_MAX = 3
    };

    enum class EARWorldMappingState : uint8_t //Enum AugmentedReality.EARWorldMappingState
    {
        NotAvailable = 0,
        StillMappingNotRelocalizable = 1,
        StillMappingRelocalizable = 2,
        Mapped = 3,
        EARWorldMappingState_MAX = 4
    };

    enum class EARSessionStatus : uint8_t //Enum AugmentedReality.EARSessionStatus
    {
        NotStarted = 0,
        Running = 1,
        NotSupported = 2,
        FatalError = 3,
        PermissionNotGranted = 4,
        UnsupportedConfiguration = 5,
        Other = 6,
        EARSessionStatus_MAX = 7
    };

    enum class EARTrackingQualityReason : uint8_t //Enum AugmentedReality.EARTrackingQualityReason
    {
        None = 0,
        Initializing = 1,
        Relocalizing = 2,
        ExcessiveMotion = 3,
        InsufficientFeatures = 4,
        InsufficientLight = 5,
        BadState = 6,
        EARTrackingQualityReason_MAX = 7
    };

    enum class EARTrackingQuality : uint8_t //Enum AugmentedReality.EARTrackingQuality
    {
        NotTracking = 0,
        OrientationOnly = 1,
        OrientationAndPosition = 2,
        EARTrackingQuality_MAX = 3
    };

    enum class EARLineTraceChannels : uint8_t //Enum AugmentedReality.EARLineTraceChannels
    {
        None = 0,
        FeaturePoint = 1,
        GroundPlane = 2,
        PlaneUsingExtent = 4,
        PlaneUsingBoundaryPolygon = 8,
        EARLineTraceChannels_MAX = 9
    };

    enum class EARCaptureType : uint8_t //Enum AugmentedReality.EARCaptureType
    {
        Camera = 0,
        QRCode = 1,
        SpatialMapping = 2,
        SceneUnderstanding = 3,
        EARCaptureType_MAX = 4
    };

    enum class EXRVisualType : uint8_t //Enum HeadMountedDisplay.EXRVisualType
    {
        Controller = 0,
        Hand = 1,
        EXRVisualType_MAX = 2
    };

    enum class EHandKeypoint : uint8_t //Enum HeadMountedDisplay.EHandKeypoint
    {
        Palm = 0,
        Wrist = 1,
        ThumbMetacarpal = 2,
        ThumbProximal = 3,
        ThumbDistal = 4,
        ThumbTip = 5,
        IndexMetacarpal = 6,
        IndexProximal = 7,
        IndexIntermediate = 8,
        IndexDistal = 9,
        IndexTip = 10,
        MiddleMetacarpal = 11,
        MiddleProximal = 12,
        MiddleIntermediate = 13,
        MiddleDistal = 14,
        MiddleTip = 15,
        RingMetacarpal = 16,
        RingProximal = 17,
        RingIntermediate = 18,
        RingDistal = 19,
        RingTip = 20,
        LittleMetacarpal = 21,
        LittleProximal = 22,
        LittleIntermediate = 23,
        LittleDistal = 24,
        LittleTip = 25,
        EHandKeypoint_MAX = 26
    };

    enum class EXRTrackedDeviceType : uint32_t //Enum HeadMountedDisplay.EXRTrackedDeviceType
    {
        HeadMountedDisplay = 0,
        Controller = 1,
        TrackingReference = 2,
        Other = 3,
        Invalid = 254,
        Any = 255,
        EXRTrackedDeviceType_MAX = 256
    };

    enum class ESpectatorScreenMode : uint8_t //Enum HeadMountedDisplay.ESpectatorScreenMode
    {
        Disabled = 0,
        SingleEyeLetterboxed = 1,
        Undistorted = 2,
        Distorted = 3,
        SingleEye = 4,
        SingleEyeCroppedToFill = 5,
        Texture = 6,
        TexturePlusEye = 7,
        ESpectatorScreenMode_MAX = 8
    };

    enum class EXRSystemFlags : uint8_t //Enum HeadMountedDisplay.EXRSystemFlags
    {
        NoFlags = 0,
        IsAR = 1,
        IsTablet = 2,
        IsHeadMounted = 4,
        SupportsHandTracking = 8,
        EXRSystemFlags_MAX = 9
    };

    enum class EXRDeviceConnectionResult : uint8_t //Enum HeadMountedDisplay.EXRDeviceConnectionResult
    {
        NoTrackingSystem = 0,
        FeatureNotSupported = 1,
        NoValidViewport = 2,
        MiscFailure = 3,
        Success = 4,
        EXRDeviceConnectionResult_MAX = 5
    };

    enum class EHMDWornState : uint8_t //Enum HeadMountedDisplay.EHMDWornState
    {
        Unknown = 0,
        Worn = 1,
        NotWorn = 2,
        EHMDWornState_MAX = 3
    };

    enum class EHMDTrackingOrigin : uint8_t //Enum HeadMountedDisplay.EHMDTrackingOrigin
    {
        Floor = 0,
        Eye = 1,
        Stage = 2,
        Unbounded = 3,
        EHMDTrackingOrigin_MAX = 4
    };

    enum class EOrientPositionSelector : uint8_t //Enum HeadMountedDisplay.EOrientPositionSelector
    {
        Orientation = 0,
        Position = 1,
        OrientationAndPosition = 2,
        EOrientPositionSelector_MAX = 3
    };

    enum class ETrackingStatus : uint8_t //Enum HeadMountedDisplay.ETrackingStatus
    {
        NotTracked = 0,
        InertialOnly = 1,
        Tracked = 2,
        ETrackingStatus_MAX = 3
    };

    enum class ESpatialInputGestureAxis : uint8_t //Enum HeadMountedDisplay.ESpatialInputGestureAxis
    {
        None = 0,
        Manipulation = 1,
        Navigation = 2,
        NavigationRails = 3,
        ESpatialInputGestureAxis_MAX = 4
    };

    enum class EFoliageScaling : uint8_t //Enum Foliage.EFoliageScaling
    {
        Uniform = 0,
        Free = 1,
        LockXY = 2,
        LockXZ = 3,
        LockYZ = 4,
        EFoliageScaling_MAX = 5
    };

    enum class EVertexColorMaskChannel : uint8_t //Enum Foliage.EVertexColorMaskChannel
    {
        Red = 0,
        Green = 1,
        Blue = 2,
        Alpha = 3,
        MAX_None = 4,
        EVertexColorMaskChannel_MAX = 5
    };

    enum class FoliageVertexColorMask : uint8_t //Enum Foliage.FoliageVertexColorMask
    {
        FOLIAGEVERTEXCOLORMASK_Disabled = 0,
        FOLIAGEVERTEXCOLORMASK_Red = 1,
        FOLIAGEVERTEXCOLORMASK_Green = 2,
        FOLIAGEVERTEXCOLORMASK_Blue = 3,
        FOLIAGEVERTEXCOLORMASK_Alpha = 4,
        FOLIAGEVERTEXCOLORMASK_MAX = 5
    };

    enum class ESimulationQuery : uint8_t //Enum Foliage.ESimulationQuery
    {
        None = 0,
        CollisionOverlap = 1,
        ShadeOverlap = 2,
        AnyOverlap = 3,
        ESimulationQuery_MAX = 4
    };

    enum class ESimulationOverlap : uint8_t //Enum Foliage.ESimulationOverlap
    {
        CollisionOverlap = 0,
        ShadeOverlap = 1,
        None = 2,
        ESimulationOverlap_MAX = 3
    };

    enum class ELandscapeBlendMode : uint8_t //Enum Landscape.ELandscapeBlendMode
    {
        LSBM_AdditiveBlend = 0,
        LSBM_AlphaBlend = 1,
        LSBM_MAX = 2
    };

    enum class ELandscapeSetupErrors : uint8_t //Enum Landscape.ELandscapeSetupErrors
    {
        LSE_None = 0,
        LSE_NoLandscapeInfo = 1,
        LSE_CollsionXY = 2,
        LSE_NoLayerInfo = 3,
        LSE_MAX = 4
    };

    enum class ELandscapeClearMode : uint8_t //Enum Landscape.ELandscapeClearMode
    {
        Clear_Weightmap = 1,
        Clear_Heightmap = 2,
        Clear_All = 3,
        Clear_MAX = 4
    };

    enum class ELandscapeGizmoType : uint8_t //Enum Landscape.ELandscapeGizmoType
    {
        LGT_None = 0,
        LGT_Height = 1,
        LGT_Weight = 2,
        LGT_MAX = 3
    };

    enum class EGrassPreservePriority : uint8_t //Enum Landscape.EGrassPreservePriority
    {
        High = 0,
        Middle = 1,
        Low = 2,
        EGrassPreservePriority_MAX = 3
    };

    enum class EGrassScaling : uint8_t //Enum Landscape.EGrassScaling
    {
        Uniform = 0,
        Free = 1,
        LockXY = 2,
        EGrassScaling_MAX = 3
    };

    enum class ESplineModulationColorMask : uint8_t //Enum Landscape.ESplineModulationColorMask
    {
        Red = 0,
        Green = 1,
        Blue = 2,
        Alpha = 3,
        ESplineModulationColorMask_MAX = 4
    };

    enum class ELandscapeLODFalloff : uint8_t //Enum Landscape.ELandscapeLODFalloff
    {
        Linear = 0,
        SquareRoot = 1,
        ELandscapeLODFalloff_MAX = 2
    };

    enum class ELandscapeLayerDisplayMode : uint8_t //Enum Landscape.ELandscapeLayerDisplayMode
    {
        Default = 0,
        Alphabetical = 1,
        UserSpecific = 2,
        ELandscapeLayerDisplayMode_MAX = 3
    };

    enum class ELandscapeLayerPaintingRestriction : uint8_t //Enum Landscape.ELandscapeLayerPaintingRestriction
    {
        None = 0,
        UseMaxLayers = 1,
        ExistingOnly = 2,
        UseComponentWhitelist = 3,
        ELandscapeLayerPaintingRestriction_MAX = 4
    };

    enum class ELandscapeImportAlphamapType : uint8_t //Enum Landscape.ELandscapeImportAlphamapType
    {
        Additive = 0,
        Layered = 1,
        ELandscapeImportAlphamapType_MAX = 2
    };

    enum class LandscapeSplineMeshOrientation : uint8_t //Enum Landscape.LandscapeSplineMeshOrientation
    {
        LSMO_XUp = 0,
        LSMO_YUp = 1,
        LSMO_MAX = 2
    };

    enum class ELandscapeLayerBlendType : uint8_t //Enum Landscape.ELandscapeLayerBlendType
    {
        LB_WeightBlend = 0,
        LB_AlphaBlend = 1,
        LB_HeightBlend = 2,
        LB_MAX = 3
    };

    enum class ELandscapeCustomizedCoordType : uint8_t //Enum Landscape.ELandscapeCustomizedCoordType
    {
        LCCT_None = 0,
        LCCT_CustomUV0 = 1,
        LCCT_CustomUV1 = 2,
        LCCT_CustomUV2 = 3,
        LCCT_WeightMapUV = 4,
        LCCT_MAX = 5
    };

    enum class ETerrainCoordMappingType : uint8_t //Enum Landscape.ETerrainCoordMappingType
    {
        TCMT_Auto = 0,
        TCMT_XY = 1,
        TCMT_XZ = 2,
        TCMT_YZ = 3,
        TCMT_MAX = 4
    };

    enum class EFrameNumberDisplayFormats : uint8_t //Enum TimeManagement.EFrameNumberDisplayFormats
    {
        NonDropFrameTimecode = 0,
        DropFrameTimecode = 1,
        Seconds = 2,
        Frames = 3,
        MAX_Count = 4,
        EFrameNumberDisplayFormats_MAX = 5
    };

    enum class ETimedDataInputState : uint8_t //Enum TimeManagement.ETimedDataInputState
    {
        Connected = 0,
        Unresponsive = 1,
        Disconnected = 2,
        ETimedDataInputState_MAX = 3
    };

    enum class ETimedDataInputEvaluationType : uint8_t //Enum TimeManagement.ETimedDataInputEvaluationType
    {
        None = 0,
        Timecode = 1,
        PlatformTime = 2,
        ETimedDataInputEvaluationType_MAX = 3
    };

    enum class EMovieSceneKeyInterpolation : uint8_t //Enum MovieScene.EMovieSceneKeyInterpolation
    {
        Auto = 0,
        User = 1,
        Break = 2,
        Linear = 3,
        Constant = 4,
        EMovieSceneKeyInterpolation_MAX = 5
    };

    enum class EMovieSceneBlendType : uint8_t //Enum MovieScene.EMovieSceneBlendType
    {
        Invalid = 0,
        Absolute = 1,
        Additive = 2,
        Relative = 4,
        AdditiveFromBase = 8,
        EMovieSceneBlendType_MAX = 9
    };

    enum class EMovieSceneCompletionMode : uint8_t //Enum MovieScene.EMovieSceneCompletionMode
    {
        KeepState = 0,
        RestoreState = 1,
        ProjectDefault = 2,
        EMovieSceneCompletionMode_MAX = 3
    };

    enum class EMovieSceneBuiltInEasing : uint8_t //Enum MovieScene.EMovieSceneBuiltInEasing
    {
        Linear = 0,
        SinIn = 1,
        SinOut = 2,
        SinInOut = 3,
        QuadIn = 4,
        QuadOut = 5,
        QuadInOut = 6,
        CubicIn = 7,
        CubicOut = 8,
        CubicInOut = 9,
        QuartIn = 10,
        QuartOut = 11,
        QuartInOut = 12,
        QuintIn = 13,
        QuintOut = 14,
        QuintInOut = 15,
        ExpoIn = 16,
        ExpoOut = 17,
        ExpoInOut = 18,
        CircIn = 19,
        CircOut = 20,
        CircInOut = 21,
        EMovieSceneBuiltInEasing_MAX = 22
    };

    enum class EEvaluationMethod : uint8_t //Enum MovieScene.EEvaluationMethod
    {
        Static = 0,
        Swept = 1,
        EEvaluationMethod_MAX = 2
    };

    enum class EMovieSceneSequenceFlags : uint8_t //Enum MovieScene.EMovieSceneSequenceFlags
    {
        None = 0,
        Volatile = 1,
        BlockingEvaluation = 2,
        InheritedFlags = 1,
        EMovieSceneSequenceFlags_MAX = 3
    };

    enum class EUpdateClockSource : uint8_t //Enum MovieScene.EUpdateClockSource
    {
        Tick = 0,
        Platform = 1,
        Audio = 2,
        RelativeTimecode = 3,
        Timecode = 4,
        Custom = 5,
        EUpdateClockSource_MAX = 6
    };

    enum class EMovieSceneEvaluationType : uint8_t //Enum MovieScene.EMovieSceneEvaluationType
    {
        FrameLocked = 0,
        WithSubFrames = 1,
        EMovieSceneEvaluationType_MAX = 2
    };

    enum class EMovieScenePlayerStatus : uint8_t //Enum MovieScene.EMovieScenePlayerStatus
    {
        Stopped = 0,
        Playing = 1,
        Recording = 2,
        Scrubbing = 3,
        Jumping = 4,
        Stepping = 5,
        Paused = 6,
        MAX = 7
    };

    enum class EMovieSceneObjectBindingSpace : uint8_t //Enum MovieScene.EMovieSceneObjectBindingSpace
    {
        Local = 0,
        Root = 1,
        EMovieSceneObjectBindingSpace_MAX = 2
    };

    enum class ESectionEvaluationFlags : uint8_t //Enum MovieScene.ESectionEvaluationFlags
    {
        None = 0,
        PreRoll = 1,
        PostRoll = 2,
        ESectionEvaluationFlags_MAX = 3
    };

    enum class EMovieScenePositionType : uint8_t //Enum MovieScene.EMovieScenePositionType
    {
        Frame = 0,
        Time = 1,
        MarkedFrame = 2,
        EMovieScenePositionType_MAX = 3
    };

    enum class EUpdatePositionMethod : uint8_t //Enum MovieScene.EUpdatePositionMethod
    {
        Play = 0,
        Jump = 1,
        Scrub = 2,
        EUpdatePositionMethod_MAX = 3
    };

    enum class ESpawnOwnership : uint8_t //Enum MovieScene.ESpawnOwnership
    {
        InnerSequence = 0,
        MasterSequence = 1,
        External = 2,
        ESpawnOwnership_MAX = 3
    };

    enum class ETransformConstraintType : uint8_t //Enum AnimationCore.ETransformConstraintType
    {
        Translation = 0,
        Rotation = 1,
        Scale = 2,
        Parent = 3,
        ETransformConstraintType_MAX = 4
    };

    enum class EConstraintType : uint8_t //Enum AnimationCore.EConstraintType
    {
        Transform = 0,
        Aim = 1,
        MAX = 2
    };

    enum class ESphericalLimitType : uint8_t //Enum AnimGraphRuntime.ESphericalLimitType
    {
        Inner = 0,
        Outer = 1,
        ESphericalLimitType_MAX = 2
    };

    enum class AnimPhysSimSpaceType : uint8_t //Enum AnimGraphRuntime.AnimPhysSimSpaceType
    {
        Component = 0,
        Actor = 1,
        World = 2,
        RootRelative = 3,
        BoneRelative = 4,
        AnimPhysSimSpaceType_MAX = 5
    };

    enum class AnimPhysLinearConstraintType : uint8_t //Enum AnimGraphRuntime.AnimPhysLinearConstraintType
    {
        Free = 0,
        Limited = 1,
        AnimPhysLinearConstraintType_MAX = 2
    };

    enum class AnimPhysAngularConstraintType : uint8_t //Enum AnimGraphRuntime.AnimPhysAngularConstraintType
    {
        Angular = 0,
        Cone = 1,
        AnimPhysAngularConstraintType_MAX = 2
    };

    enum class EBlendListTransitionType : uint8_t //Enum AnimGraphRuntime.EBlendListTransitionType
    {
        StandardBlend = 0,
        Inertialization = 1,
        EBlendListTransitionType_MAX = 2
    };

    enum class EDrivenDestinationMode : uint8_t //Enum AnimGraphRuntime.EDrivenDestinationMode
    {
        Bone = 0,
        MorphTarget = 1,
        MaterialParameter = 2,
        EDrivenDestinationMode_MAX = 3
    };

    enum class EDrivenBoneModificationMode : uint8_t //Enum AnimGraphRuntime.EDrivenBoneModificationMode
    {
        AddToInput = 0,
        ReplaceComponent = 1,
        AddToRefPose = 2,
        EDrivenBoneModificationMode_MAX = 3
    };

    enum class EConstraintOffsetOption : uint8_t //Enum AnimGraphRuntime.EConstraintOffsetOption
    {
        None = 0,
        Offset_RefPose = 1,
        EConstraintOffsetOption_MAX = 2
    };

    enum class CopyBoneDeltaMode : uint8_t //Enum AnimGraphRuntime.CopyBoneDeltaMode
    {
        Accumulate = 0,
        Copy = 1,
        CopyBoneDeltaMode_MAX = 2
    };

    enum class EInterpolationBlend : uint8_t //Enum AnimGraphRuntime.EInterpolationBlend
    {
        Linear = 0,
        Cubic = 1,
        Sinusoidal = 2,
        EaseInOutExponent2 = 3,
        EaseInOutExponent3 = 4,
        EaseInOutExponent4 = 5,
        EaseInOutExponent5 = 6,
        MAX = 7
    };

    enum class EBoneModificationMode : uint8_t //Enum AnimGraphRuntime.EBoneModificationMode
    {
        BMM_Ignore = 0,
        BMM_Replace = 1,
        BMM_Additive = 2,
        BMM_MAX = 3
    };

    enum class EModifyCurveApplyMode : uint8_t //Enum AnimGraphRuntime.EModifyCurveApplyMode
    {
        Add = 0,
        Scale = 1,
        Blend = 2,
        WeightedMovingAverage = 3,
        RemapCurve = 4,
        EModifyCurveApplyMode_MAX = 5
    };

    enum class EPoseDriverOutput : uint8_t //Enum AnimGraphRuntime.EPoseDriverOutput
    {
        DrivePoses = 0,
        DriveCurves = 1,
        EPoseDriverOutput_MAX = 2
    };

    enum class EPoseDriverSource : uint8_t //Enum AnimGraphRuntime.EPoseDriverSource
    {
        Rotation = 0,
        Translation = 1,
        EPoseDriverSource_MAX = 2
    };

    enum class EPoseDriverType : uint8_t //Enum AnimGraphRuntime.EPoseDriverType
    {
        SwingAndTwist = 0,
        SwingOnly = 1,
        Translation = 2,
        EPoseDriverType_MAX = 3
    };

    enum class ESnapshotSourceMode : uint8_t //Enum AnimGraphRuntime.ESnapshotSourceMode
    {
        NamedSnapshot = 0,
        SnapshotPin = 1,
        ESnapshotSourceMode_MAX = 2
    };

    enum class ERefPoseType : uint8_t //Enum AnimGraphRuntime.ERefPoseType
    {
        EIT_LocalSpace = 0,
        EIT_Additive = 1,
        EIT_MAX = 2
    };

    enum class ESimulationSpace : uint8_t //Enum AnimGraphRuntime.ESimulationSpace
    {
        ComponentSpace = 0,
        WorldSpace = 1,
        BaseBoneSpace = 2,
        ESimulationSpace_MAX = 3
    };

    enum class EScaleChainInitialLength : uint8_t //Enum AnimGraphRuntime.EScaleChainInitialLength
    {
        FixedDefaultLengthValue = 0,
        Distance = 1,
        ChainLength = 2,
        EScaleChainInitialLength_MAX = 3
    };

    enum class ESequenceEvalReinit : uint8_t //Enum AnimGraphRuntime.ESequenceEvalReinit
    {
        NoReset = 0,
        StartPosition = 1,
        ExplicitTime = 2,
        ESequenceEvalReinit_MAX = 3
    };

    enum class ESplineBoneAxis : uint8_t //Enum AnimGraphRuntime.ESplineBoneAxis
    {
        None = 0,
        X = 1,
        Y = 2,
        Z = 3,
        ESplineBoneAxis_MAX = 4
    };

    enum class ERotationComponent : uint8_t //Enum AnimGraphRuntime.ERotationComponent
    {
        EulerX = 0,
        EulerY = 1,
        EulerZ = 2,
        QuaternionAngle = 3,
        SwingAngle = 4,
        TwistAngle = 5,
        ERotationComponent_MAX = 6
    };

    enum class EEasingFuncType : uint8_t //Enum AnimGraphRuntime.EEasingFuncType
    {
        Linear = 0,
        Sinusoidal = 1,
        Cubic = 2,
        QuadraticInOut = 3,
        CubicInOut = 4,
        HermiteCubic = 5,
        QuarticInOut = 6,
        QuinticInOut = 7,
        CircularIn = 8,
        CircularOut = 9,
        CircularInOut = 10,
        ExpIn = 11,
        ExpOut = 12,
        ExpInOut = 13,
        CustomCurve = 14,
        EEasingFuncType_MAX = 15
    };

    enum class ERBFNormalizeMethod : uint8_t //Enum AnimGraphRuntime.ERBFNormalizeMethod
    {
        OnlyNormalizeAboveOne = 0,
        AlwaysNormalize = 1,
        NormalizeWithinMedian = 2,
        NoNormalization = 3,
        ERBFNormalizeMethod_MAX = 4
    };

    enum class ERBFDistanceMethod : uint8_t //Enum AnimGraphRuntime.ERBFDistanceMethod
    {
        Euclidean = 0,
        Quaternion = 1,
        SwingAngle = 2,
        TwistAngle = 3,
        DefaultMethod = 4,
        ERBFDistanceMethod_MAX = 5
    };

    enum class ERBFFunctionType : uint8_t //Enum AnimGraphRuntime.ERBFFunctionType
    {
        Gaussian = 0,
        Exponential = 1,
        Linear = 2,
        Cubic = 3,
        Quintic = 4,
        DefaultFunction = 5,
        ERBFFunctionType_MAX = 6
    };

    enum class ERBFSolverType : uint8_t //Enum AnimGraphRuntime.ERBFSolverType
    {
        Additive = 0,
        Interpolative = 1,
        ERBFSolverType_MAX = 2
    };

    enum class MovieScene3DPathSection_Axis : uint8_t //Enum MovieSceneTracks.MovieScene3DPathSection_Axis
    {
        X = 0,
        Y = 1,
        Z = 2,
        NEG_X = 3,
        NEG_Y = 4,
        NEG_Z = 5,
        MovieScene3DPathSection_MAX = 6
    };

    enum class EFireEventsAtPosition : uint8_t //Enum MovieSceneTracks.EFireEventsAtPosition
    {
        AtStartOfEvaluation = 0,
        AtEndOfEvaluation = 1,
        AfterSpawn = 2,
        EFireEventsAtPosition_MAX = 3
    };

    enum class ELevelVisibility : uint8_t //Enum MovieSceneTracks.ELevelVisibility
    {
        Visible = 0,
        Hidden = 1,
        ELevelVisibility_MAX = 2
    };

    enum class EParticleKey : uint8_t //Enum MovieSceneTracks.EParticleKey
    {
        Activate = 0,
        Deactivate = 1,
        Trigger = 2,
        EParticleKey_MAX = 3
    };

    enum class EDragPivot : uint8_t //Enum UMG.EDragPivot
    {
        MouseDown = 0,
        TopLeft = 1,
        TopCenter = 2,
        TopRight = 3,
        CenterLeft = 4,
        CenterCenter = 5,
        CenterRight = 6,
        BottomLeft = 7,
        BottomCenter = 8,
        BottomRight = 9,
        EDragPivot_MAX = 10
    };

    enum class EDynamicBoxType : uint8_t //Enum UMG.EDynamicBoxType
    {
        Horizontal = 0,
        Vertical = 1,
        Wrap = 2,
        VerticalWrap = 3,
        Radial = 4,
        Overlay = 5,
        EDynamicBoxType_MAX = 6
    };

    enum class ESlateSizeRule : uint8_t //Enum UMG.ESlateSizeRule
    {
        Automatic = 0,
        Fill = 1,
        ESlateSizeRule_MAX = 2
    };

    enum class ELocalizationFeature : uint8_t //Enum UMG.ELocalizationFeature
    {
        None = 0,
        AllOversea = 1,
        English = 2,
        ELocalizationFeature_MAX = 3
    };

    enum class EWidgetDesignFlags : uint8_t //Enum UMG.EWidgetDesignFlags
    {
        None = 0,
        Designing = 1,
        ShowOutline = 2,
        ExecutePreConstruct = 4,
        EWidgetDesignFlags_MAX = 5
    };

    enum class EBindingKind : uint8_t //Enum UMG.EBindingKind
    {
        Function = 0,
        Property = 1,
        EBindingKind_MAX = 2
    };

    enum class ETickMode : uint8_t //Enum UMG.ETickMode
    {
        Disabled = 0,
        Enabled = 1,
        Automatic = 2,
        ETickMode_MAX = 3
    };

    enum class EWindowVisibility : uint8_t //Enum UMG.EWindowVisibility
    {
        Visible = 0,
        SelfHitTestInvisible = 1,
        EWindowVisibility_MAX = 2
    };

    enum class EWidgetGeometryMode : uint8_t //Enum UMG.EWidgetGeometryMode
    {
        Plane = 0,
        Cylinder = 1,
        EWidgetGeometryMode_MAX = 2
    };

    enum class EWidgetBlendMode : uint8_t //Enum UMG.EWidgetBlendMode
    {
        Opaque = 0,
        Masked = 1,
        Transparent = 2,
        EWidgetBlendMode_MAX = 3
    };

    enum class EWidgetTimingPolicy : uint8_t //Enum UMG.EWidgetTimingPolicy
    {
        RealTime = 0,
        GameTime = 1,
        EWidgetTimingPolicy_MAX = 2
    };

    enum class EWidgetSpace : uint8_t //Enum UMG.EWidgetSpace
    {
        World = 0,
        Screen = 1,
        EWidgetSpace_MAX = 2
    };

    enum class EWidgetInteractionSource : uint8_t //Enum UMG.EWidgetInteractionSource
    {
        World = 0,
        Mouse = 1,
        CenterScreen = 2,
        Custom = 3,
        EWidgetInteractionSource_MAX = 4
    };

    enum class ECameraFocusMethod : uint8_t //Enum CinematicCamera.ECameraFocusMethod
    {
        DoNotOverride = 0,
        Manual = 1,
        Tracking = 2,
        Disable = 3,
        MAX = 4
    };

    enum class ESoundwaveSampleRateSettings : uint8_t //Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
    {
        Max = 0,
        High = 1,
        Medium = 2,
        Low = 3,
        Min = 4,
        MatchDevice = 5
    };

    enum class EMusicalNoteName : uint8_t //Enum AudioMixer.EMusicalNoteName
    {
        C = 0,
        Db = 1,
        D = 2,
        Eb = 3,
        E = 4,
        F = 5,
        Gb = 6,
        G = 7,
        Ab = 8,
        A = 9,
        Bb = 10,
        B = 11,
        EMusicalNoteName_MAX = 12
    };

    enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t //Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
    {
        Disabled = 0,
        Average = 1,
        Peak = 2,
        Count = 3,
        ESubmixEffectDynamicsChannelLinkMode_MAX = 4
    };

    enum class ESubmixEffectDynamicsPeakMode : uint8_t //Enum AudioMixer.ESubmixEffectDynamicsPeakMode
    {
        MeanSquared = 0,
        RootMeanSquared = 1,
        Peak = 2,
        Count = 3,
        ESubmixEffectDynamicsPeakMode_MAX = 4
    };

    enum class ESubmixEffectDynamicsProcessorType : uint8_t //Enum AudioMixer.ESubmixEffectDynamicsProcessorType
    {
        Compressor = 0,
        Limiter = 1,
        Expander = 2,
        Gate = 3,
        Count = 4,
        ESubmixEffectDynamicsProcessorType_MAX = 5
    };

    enum class EGameplayTagQueryExprType : uint8_t //Enum GameplayTags.EGameplayTagQueryExprType
    {
        Undefined = 0,
        AnyTagsMatch = 1,
        AllTagsMatch = 2,
        NoTagsMatch = 3,
        AnyExprMatch = 4,
        AllExprMatch = 5,
        NoExprMatch = 6,
        EGameplayTagQueryExprType_MAX = 7
    };

    enum class EGameplayContainerMatchType : uint8_t //Enum GameplayTags.EGameplayContainerMatchType
    {
        Any = 0,
        All = 1,
        EGameplayContainerMatchType_MAX = 2
    };

    enum class EGameplayTagMatchType : uint8_t //Enum GameplayTags.EGameplayTagMatchType
    {
        Explicit = 0,
        IncludeParentTags = 1,
        EGameplayTagMatchType_MAX = 2
    };

    enum class EGameplayTagSelectionType : uint8_t //Enum GameplayTags.EGameplayTagSelectionType
    {
        None = 0,
        NonRestrictedOnly = 1,
        RestrictedOnly = 2,
        All = 3,
        EGameplayTagSelectionType_MAX = 4
    };

    enum class EGameplayTagSourceType : uint8_t //Enum GameplayTags.EGameplayTagSourceType
    {
        Native = 0,
        DefaultTagList = 1,
        TagList = 2,
        RestrictedTagList = 3,
        DataTable = 4,
        Invalid = 5,
        EGameplayTagSourceType_MAX = 6
    };

    enum class EComputeNTBsOptions : uint8_t //Enum MeshDescription.EComputeNTBsOptions
    {
        None = 0,
        Normals = 1,
        Tangents = 2,
        WeightedNTBs = 4,
        EComputeNTBsOptions_MAX = 5
    };

    enum class EPropertyAccessCopyBatch : uint8_t //Enum PropertyAccess.EPropertyAccessCopyBatch
    {
        InternalUnbatched = 0,
        ExternalUnbatched = 1,
        InternalBatched = 2,
        ExternalBatched = 3,
        Count = 4,
        EPropertyAccessCopyBatch_MAX = 5
    };

    enum class EPropertyAccessCopyType : uint8_t //Enum PropertyAccess.EPropertyAccessCopyType
    {
        None = 0,
        Plain = 1,
        Complex = 2,
        Bool = 3,
        Struct = 4,
        Object = 5,
        Name = 6,
        Array = 7,
        PromoteBoolToByte = 8,
        PromoteBoolToInt32 = 9,
        PromoteBoolToInt64 = 10,
        PromoteBoolToFloat = 11,
        PromoteByteToInt32 = 12,
        PromoteByteToInt64 = 13,
        PromoteByteToFloat = 14,
        PromoteInt32ToInt64 = 15,
        PromoteInt32ToFloat = 16,
        EPropertyAccessCopyType_MAX = 17
    };

    enum class EPropertyAccessObjectType : uint8_t //Enum PropertyAccess.EPropertyAccessObjectType
    {
        None = 0,
        Object = 1,
        WeakObject = 2,
        SoftObject = 3,
        EPropertyAccessObjectType_MAX = 4
    };

    enum class EPropertyAccessIndirectionType : uint8_t //Enum PropertyAccess.EPropertyAccessIndirectionType
    {
        Offset = 0,
        Object = 1,
        Array = 2,
        ScriptFunction = 3,
        NativeFunction = 4,
        EPropertyAccessIndirectionType_MAX = 5
    };

    enum class EEntitlementCacheLevelRetrieved : uint8_t //Enum PortalServices.EEntitlementCacheLevelRetrieved
    {
        None = 0,
        Memory = 1,
        Disk = 2,
        EEntitlementCacheLevelRetrieved_MAX = 3
    };

    enum class EEntitlementCacheLevelRequest : uint8_t //Enum PortalServices.EEntitlementCacheLevelRequest
    {
        Memory = 1,
        Disk = 2,
        EEntitlementCacheLevelRequest_MAX = 3
    };

    enum class EEyeTrackerStatus : uint8_t //Enum EyeTracker.EEyeTrackerStatus
    {
        NotConnected = 0,
        NotTracking = 1,
        Tracking = 2,
        EEyeTrackerStatus_MAX = 3
    };

    enum class EMediaPlayerOptionBooleanOverride : uint8_t //Enum MediaUtils.EMediaPlayerOptionBooleanOverride
    {
        UseMediaPlayerSetting = 0,
        Enabled = 1,
        Disabled = 2,
        EMediaPlayerOptionBooleanOverride_MAX = 3
    };

    enum class EMediaWebcamCaptureDeviceFilter : uint8_t //Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
    {
        None = 0,
        DepthSensor = 1,
        Front = 2,
        Rear = 4,
        Unknown = 8,
        EMediaWebcamCaptureDeviceFilter_MAX = 9
    };

    enum class EMediaVideoCaptureDeviceFilter : uint8_t //Enum MediaAssets.EMediaVideoCaptureDeviceFilter
    {
        None = 0,
        Card = 1,
        Software = 2,
        Unknown = 4,
        Webcam = 8,
        EMediaVideoCaptureDeviceFilter_MAX = 9
    };

    enum class EMediaAudioCaptureDeviceFilter : uint8_t //Enum MediaAssets.EMediaAudioCaptureDeviceFilter
    {
        None = 0,
        Card = 1,
        Microphone = 2,
        Software = 4,
        Unknown = 8,
        EMediaAudioCaptureDeviceFilter_MAX = 9
    };

    enum class EPauseAtStartState : uint8_t //Enum MediaAssets.EPauseAtStartState
    {
        None = 0,
        WaitSeekComplete = 1,
        WaitSampleChange = 2,
        EPauseAtStartState_MAX = 3
    };

    enum class EMediaPlayerTrack : uint8_t //Enum MediaAssets.EMediaPlayerTrack
    {
        Audio = 0,
        Caption = 1,
        Metadata = 2,
        Script = 3,
        Subtitle = 4,
        Text = 5,
        Video = 6,
        EMediaPlayerTrack_MAX = 7
    };

    enum class EMediaSoundComponentFFTSize : uint8_t //Enum MediaAssets.EMediaSoundComponentFFTSize
    {
        Min_65 = 0,
        Small_257 = 1,
        Medium_513 = 2,
        Large_1025 = 3,
        EMediaSoundComponentFFTSize_MAX = 4
    };

    enum class EMediaSoundChannels : uint8_t //Enum MediaAssets.EMediaSoundChannels
    {
        Mono = 0,
        Stereo = 1,
        Surround = 2,
        EMediaSoundChannels_MAX = 3
    };

    enum class MediaTextureOrientation : uint8_t //Enum MediaAssets.MediaTextureOrientation
    {
        MTORI_Original = 0,
        MTORI_CW90 = 1,
        MTORI_CW180 = 2,
        MTORI_CW270 = 3,
        MTORI_MAX = 4
    };

    enum class MediaTextureOutputFormat : uint8_t //Enum MediaAssets.MediaTextureOutputFormat
    {
        MTOF_Default = 0,
        MTOF_SRGB_LINOUT = 1,
        MTOF_MAX = 2
    };

    enum class EHDRCaptureGamut : uint8_t //Enum MovieSceneCapture.EHDRCaptureGamut
    {
        HCGM_Rec709 = 0,
        HCGM_P3DCI = 1,
        HCGM_Rec2020 = 2,
        HCGM_ACES = 3,
        HCGM_ACEScg = 4,
        HCGM_Linear = 5,
        HCGM_MAX = 6
    };

    enum class EMovieSceneCaptureProtocolState : uint8_t //Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
    {
        Idle = 0,
        Initialized = 1,
        Capturing = 2,
        Finalizing = 3,
        EMovieSceneCaptureProtocolState_MAX = 4
    };

    enum class EMoviePlaybackType : uint8_t //Enum MoviePlayer.EMoviePlaybackType
    {
        MT_Normal = 0,
        MT_Looped = 1,
        MT_LoadingLoop = 2,
        MT_MAX = 3
    };

    enum class ETickExecuteScriptOnActorStatus : uint8_t //Enum Engine.ETickExecuteScriptOnActorStatus
    {
        PreSpawning = 0,
        DuringSpawning = 1,
        PostSpawning = 2,
        FinishSpawning = 3,
        ETickExecuteScriptOnActorStatus_MAX = 4
    };

    enum class ETickFinishSpawningStatus : uint8_t //Enum Engine.ETickFinishSpawningStatus
    {
        PreSpawning = 0,
        DuringSpawning = 1,
        PostSpawning = 2,
        FinishSpawning = 3,
        ETickFinishSpawningStatus_MAX = 4
    };

    enum class EAlphaBlendOption : uint8_t //Enum Engine.EAlphaBlendOption
    {
        Linear = 0,
        Cubic = 1,
        HermiteCubic = 2,
        Sinusoidal = 3,
        QuadraticInOut = 4,
        CubicInOut = 5,
        QuarticInOut = 6,
        QuinticInOut = 7,
        CircularIn = 8,
        CircularOut = 9,
        CircularInOut = 10,
        ExpIn = 11,
        ExpOut = 12,
        ExpInOut = 13,
        Custom = 14,
        EAlphaBlendOption_MAX = 15
    };

    enum class EAnimSyncGroupScope : uint8_t //Enum Engine.EAnimSyncGroupScope
    {
        Local = 0,
        Component = 1,
        EAnimSyncGroupScope_MAX = 2
    };

    enum class EAnimGroupRole : uint8_t //Enum Engine.EAnimGroupRole
    {
        CanBeLeader = 0,
        AlwaysFollower = 1,
        AlwaysLeader = 2,
        TransitionLeader = 3,
        TransitionFollower = 4,
        EAnimGroupRole_MAX = 5
    };

    enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t //Enum Engine.EPreviewAnimationBlueprintApplicationMethod
    {
        LinkedLayers = 0,
        LinkedAnimGraph = 1,
        EPreviewAnimationBlueprintApplicationMethod_MAX = 2
    };

    enum class AnimationKeyFormat : uint8_t //Enum Engine.AnimationKeyFormat
    {
        AKF_ConstantKeyLerp = 0,
        AKF_VariableKeyLerp = 1,
        AKF_PerTrackCompression = 2,
        AKF_MAX = 3
    };

    enum class ERawCurveTrackTypes : uint8_t //Enum Engine.ERawCurveTrackTypes
    {
        RCT_Float = 0,
        RCT_Vector = 1,
        RCT_Transform = 2,
        RCT_MAX = 3
    };

    enum class EAnimAssetCurveFlags : uint8_t //Enum Engine.EAnimAssetCurveFlags
    {
        AACF_NONE = 0,
        AACF_DriveMorphTarget_DEPRECATED = 1,
        AACF_DriveAttribute_DEPRECATED = 2,
        AACF_Editable = 4,
        AACF_DriveMaterial_DEPRECATED = 8,
        AACF_Metadata = 16,
        AACF_DriveTrack = 32,
        AACF_Disabled = 64,
        AACF_MAX = 65
    };

    enum class AnimationCompressionFormat : uint8_t //Enum Engine.AnimationCompressionFormat
    {
        ACF_None = 0,
        ACF_Float96NoW = 1,
        ACF_Fixed48NoW = 2,
        ACF_IntervalFixed32NoW = 3,
        ACF_Fixed32NoW = 4,
        ACF_Float32NoW = 5,
        ACF_Identity = 6,
        ACF_MAX = 7
    };

    enum class EAdditiveBasePoseType : uint8_t //Enum Engine.EAdditiveBasePoseType
    {
        ABPT_None = 0,
        ABPT_RefPose = 1,
        ABPT_AnimScaled = 2,
        ABPT_AnimFrame = 3,
        ABPT_MAX = 4
    };

    enum class ERootMotionMode : uint8_t //Enum Engine.ERootMotionMode
    {
        NoRootMotionExtraction = 0,
        IgnoreRootMotion = 1,
        RootMotionFromEverything = 2,
        RootMotionFromMontagesOnly = 3,
        ERootMotionMode_MAX = 4
    };

    enum class ERootMotionRootLock : uint8_t //Enum Engine.ERootMotionRootLock
    {
        RefPose = 0,
        AnimFirstFrame = 1,
        Zero = 2,
        ERootMotionRootLock_MAX = 3
    };

    enum class EMontagePlayReturnType : uint8_t //Enum Engine.EMontagePlayReturnType
    {
        MontageLength = 0,
        Duration = 1,
        EMontagePlayReturnType_MAX = 2
    };

    enum class EDrawDebugItemType : uint8_t //Enum Engine.EDrawDebugItemType
    {
        DirectionalArrow = 0,
        Sphere = 1,
        Line = 2,
        OnScreenMessage = 3,
        CoordinateSystem = 4,
        EDrawDebugItemType_MAX = 5
    };

    enum class EAnimLinkMethod : uint8_t //Enum Engine.EAnimLinkMethod
    {
        Absolute = 0,
        Relative = 1,
        Proportional = 2,
        EAnimLinkMethod_MAX = 3
    };

    enum class EMontageSubStepResult : uint8_t //Enum Engine.EMontageSubStepResult
    {
        Moved = 0,
        NotMoved = 1,
        InvalidSection = 2,
        InvalidMontage = 3,
        EMontageSubStepResult_MAX = 4
    };

    enum class EAnimNotifyEventType : uint8_t //Enum Engine.EAnimNotifyEventType
    {
        Begin = 0,
        End = 1,
        EAnimNotifyEventType_MAX = 2
    };

    enum class EInertializationSpace : uint8_t //Enum Engine.EInertializationSpace
    {
        Default = 0,
        WorldSpace = 1,
        WorldRotation = 2,
        EInertializationSpace_MAX = 3
    };

    enum class EInertializationBoneState : uint8_t //Enum Engine.EInertializationBoneState
    {
        Invalid = 0,
        Valid = 1,
        Excluded = 2,
        EInertializationBoneState_MAX = 3
    };

    enum class EInertializationState : uint8_t //Enum Engine.EInertializationState
    {
        Inactive = 0,
        Pending = 1,
        Active = 2,
        EInertializationState_MAX = 3
    };

    enum class EEvaluatorMode : uint8_t //Enum Engine.EEvaluatorMode
    {
        EM_Standard = 0,
        EM_Freeze = 1,
        EM_DelayedFreeze = 2,
        EM_MAX = 3
    };

    enum class EEvaluatorDataSource : uint8_t //Enum Engine.EEvaluatorDataSource
    {
        EDS_SourcePose = 0,
        EDS_DestinationPose = 1,
        EDS_MAX = 2
    };

    enum class EPostCopyOperation : uint8_t //Enum Engine.EPostCopyOperation
    {
        None = 0,
        LogicalNegateBool = 1,
        EPostCopyOperation_MAX = 2
    };

    enum class EPinHidingMode : uint8_t //Enum Engine.EPinHidingMode
    {
        NeverAsPin = 0,
        PinHiddenByDefault = 1,
        PinShownByDefault = 2,
        AlwaysAsPin = 3,
        EPinHidingMode_MAX = 4
    };

    enum class AnimPhysCollisionType : uint8_t //Enum Engine.AnimPhysCollisionType
    {
        CoM = 0,
        CustomSphere = 1,
        InnerSphere = 2,
        OuterSphere = 3,
        AnimPhysCollisionType_MAX = 4
    };

    enum class AnimPhysTwistAxis : uint8_t //Enum Engine.AnimPhysTwistAxis
    {
        AxisX = 0,
        AxisY = 1,
        AxisZ = 2,
        AnimPhysTwistAxis_MAX = 3
    };

    enum class ETypeAdvanceAnim : uint8_t //Enum Engine.ETypeAdvanceAnim
    {
        ETAA_Default = 0,
        ETAA_Finished = 1,
        ETAA_Looped = 2,
        ETAA_MAX = 3
    };

    enum class ETransitionLogicType : uint8_t //Enum Engine.ETransitionLogicType
    {
        TLT_StandardBlend = 0,
        TLT_Inertialization = 1,
        TLT_Custom = 2,
        TLT_MAX = 3
    };

    enum class ETransitionBlendMode : uint8_t //Enum Engine.ETransitionBlendMode
    {
        TBM_Linear = 0,
        TBM_Cubic = 1,
        TBM_MAX = 2
    };

    enum class EComponentType : uint8_t //Enum Engine.EComponentType
    {
        None = 0,
        TranslationX = 1,
        TranslationY = 2,
        TranslationZ = 3,
        RotationX = 4,
        RotationY = 5,
        RotationZ = 6,
        Scale = 7,
        ScaleX = 8,
        ScaleY = 9,
        ScaleZ = 10,
        EComponentType_MAX = 11
    };

    enum class EAxisOption : uint8_t //Enum Engine.EAxisOption
    {
        X = 0,
        Y = 1,
        Z = 2,
        X_Neg = 3,
        Y_Neg = 4,
        Z_Neg = 5,
        Custom = 6,
        EAxisOption_MAX = 7
    };

    enum class EAnimInterpolationType : uint8_t //Enum Engine.EAnimInterpolationType
    {
        Linear = 0,
        Step = 1,
        EAnimInterpolationType_MAX = 2
    };

    enum class ECurveBlendOption : uint8_t //Enum Engine.ECurveBlendOption
    {
        Override = 0,
        DoNotOverride = 1,
        NormalizeByWeight = 2,
        BlendByWeight = 3,
        UseBasePose = 4,
        UseMaxValue = 5,
        UseMinValue = 6,
        UseCustomPoseIndex = 7,
        ECurveBlendOption_MAX = 8
    };

    enum class EAdditiveAnimationType : uint8_t //Enum Engine.EAdditiveAnimationType
    {
        AAT_None = 0,
        AAT_LocalSpaceBase = 1,
        AAT_RotationOffsetMeshSpace = 2,
        AAT_MAX = 3
    };

    enum class ENotifyFilterType : uint8_t //Enum Engine.ENotifyFilterType
    {
        NoFiltering = 0,
        LOD = 1,
        ENotifyFilterType_MAX = 2
    };

    enum class EMontageNotifyTickType : uint8_t //Enum Engine.EMontageNotifyTickType
    {
        Queued = 0,
        BranchingPoint = 1,
        EMontageNotifyTickType_MAX = 2
    };

    enum class EBoneRotationSource : uint8_t //Enum Engine.EBoneRotationSource
    {
        BRS_KeepComponentSpaceRotation = 0,
        BRS_KeepLocalSpaceRotation = 1,
        BRS_CopyFromTarget = 2,
        BRS_MAX = 3
    };

    enum class EBoneControlSpace : uint8_t //Enum Engine.EBoneControlSpace
    {
        BCS_WorldSpace = 0,
        BCS_ComponentSpace = 1,
        BCS_ParentBoneSpace = 2,
        BCS_BoneSpace = 3,
        BCS_MAX = 4
    };

    enum class EBoneAxis : uint8_t //Enum Engine.EBoneAxis
    {
        BA_X = 0,
        BA_Y = 1,
        BA_Z = 2,
        BA_MAX = 3
    };

    enum class EPrimaryAssetCookRule : uint8_t //Enum Engine.EPrimaryAssetCookRule
    {
        Unknown = 0,
        NeverCook = 1,
        DevelopmentCook = 2,
        DevelopmentAlwaysCook = 3,
        AlwaysCook = 4,
        EPrimaryAssetCookRule_MAX = 5
    };

    enum class ENaturalSoundFalloffMode : uint8_t //Enum Engine.ENaturalSoundFalloffMode
    {
        Continues = 0,
        Silent = 1,
        Hold = 2,
        ENaturalSoundFalloffMode_MAX = 3
    };

    enum class EAttenuationShape : uint8_t //Enum Engine.EAttenuationShape
    {
        Sphere = 0,
        Capsule = 1,
        Box = 2,
        Cone = 3,
        EAttenuationShape_MAX = 4
    };

    enum class EAttenuationDistanceModel : uint8_t //Enum Engine.EAttenuationDistanceModel
    {
        Linear = 0,
        Logarithmic = 1,
        Inverse = 2,
        LogReverse = 3,
        NaturalSound = 4,
        Custom = 5,
        EAttenuationDistanceModel_MAX = 6
    };

    enum class EAudioBusChannels : uint8_t //Enum Engine.EAudioBusChannels
    {
        Mono = 0,
        Stereo = 1,
        EAudioBusChannels_MAX = 2
    };

    enum class EAudioFaderCurve : uint8_t //Enum Engine.EAudioFaderCurve
    {
        Linear = 0,
        Logarithmic = 1,
        SCurve = 2,
        Sin = 3,
        Count = 4,
        EAudioFaderCurve_MAX = 5
    };

    enum class EAudioOutputTarget : uint8_t //Enum Engine.EAudioOutputTarget
    {
        Speaker = 0,
        Controller = 1,
        ControllerFallbackToSpeaker = 2,
        EAudioOutputTarget_MAX = 3
    };

    enum class EMonoChannelUpmixMethod : uint8_t //Enum Engine.EMonoChannelUpmixMethod
    {
        Linear = 0,
        EqualPower = 1,
        FullVolume = 2,
        EMonoChannelUpmixMethod_MAX = 3
    };

    enum class EPanningMethod : uint8_t //Enum Engine.EPanningMethod
    {
        Linear = 0,
        EqualPower = 1,
        EPanningMethod_MAX = 2
    };

    enum class EVoiceSampleRate : uint32_t //Enum Engine.EVoiceSampleRate
    {
        Low16000Hz = 16000,
        Normal24000Hz = 24000,
        EVoiceSampleRate_MAX = 24001
    };

    enum class EAudioVolumeLocationState : uint8_t //Enum Engine.EAudioVolumeLocationState
    {
        InsideTheVolume = 0,
        OutsideTheVolume = 1,
        EAudioVolumeLocationState_MAX = 2
    };

    enum class EACGParameters : uint8_t //Enum Engine.EACGParameters
    {
        EACG_Parameter_AutoExposureBias = 0,
        EACG_Parameter_AutoExposureLowPercent = 1,
        EACG_Parameter_AutoExposureHighPercent = 2,
        EACG_Parameter_AutoExposureMinBrightness = 3,
        EACG_Parameter_AutoExposureMaxBrightness = 4,
        EACG_Parameter_HistogramLogMin = 5,
        EACG_Parameter_HistogramLogMax = 6,
        EACG_Parameter_AutoExposureSpeedUp = 7,
        EACG_Parameter_AutoExposureSpeedDown = 8,
        EACG_Parameter_FilmSlope = 9,
        EACG_Parameter_FilmToe = 10,
        EACG_Parameter_FilmShoulder = 11,
        EACG_Parameter_FilmBlackClip = 12,
        EACG_Parameter_FilmWhiteClip = 13,
        EACG_Parameter_WhiteTemp = 14,
        EACG_Parameter_WhiteTint = 15,
        EACG_Parameter_ToneCurveAmount = 16,
        EACG_Parameter_GlobalSaturation = 17,
        EACG_Parameter_GlobalContrast = 18,
        EACG_Parameter_GlobalGamma = 19,
        EACG_Parameter_GlobalGain = 20,
        EACG_Parameter_GlobalOffset = 21,
        EACG_Parameter_ShadowsSaturation = 22,
        EACG_Parameter_ShadowsContrast = 23,
        EACG_Parameter_ShadowsGamma = 24,
        EACG_Parameter_ShadowsGain = 25,
        EACG_Parameter_ShadowsOffset = 26,
        EACG_Parameter_ShadowsMax = 27,
        EACG_Parameter_MidtonesSaturation = 28,
        EACG_Parameter_MidtonesContrast = 29,
        EACG_Parameter_MidtonesGamma = 30,
        EACG_Parameter_MidtonesGain = 31,
        EACG_Parameter_MidtonesOffset = 32,
        EACG_Parameter_HighlightsSaturation = 33,
        EACG_Parameter_HighlightsContrast = 34,
        EACG_Parameter_HighlightsGamma = 35,
        EACG_Parameter_HighlightsGain = 36,
        EACG_Parameter_HighlightsOffset = 37,
        EACG_Parameter_HighlightsMin = 38,
        EACG_Parameter_VignetteIntensity = 39,
        EACG_Parameter_BloomIntensity = 40,
        EACG_Parameter_BloomThreshold = 41,
        EACG_Parameter_GrainJitter = 42,
        EACG_Parameter_GrainIntensity = 43,
        EACG_Parameter_ChromAberStartOffset = 44,
        EACG_Parameter_FringeIntensity = 45,
        EACG_Parameter_RayleighExpDistribution = 46,
        EACG_Parameter_RayleighScatteringScale = 47,
        EACG_Parameter_MainLightIntensity = 48,
        EACG_Parameter_MainLightIndirectIntensity = 49,
        EACG_Parameter_ShadowAmount = 50,
        EACG_Parameter_AmbientCubemapIntensity = 51,
        EACG_Parameter_IndirectLightingIntensity = 52,
        EACG_Parameter_AOIntensity = 53,
        EACG_Parameter_AORadius = 54,
        EACG_Parameter_SkyLightIntensityMultiplier = 55,
        EACG_Parameter_SkyVisibilityScale = 56,
        EACG_Parameter_MeterMaskWeightNormal = 57,
        EACG_Parameter_MeterMaskWeightADS = 58,
        EACG_Parameter_ColorVibrance = 59,
        EACG_Parameter_FirstPersonMinLumin = 60,
        EACG_Parameter_FirstPersonMultiply = 61,
        EACG_Parameter_ExposureCurveRate = 62,
        EACG_Parameter_ExposureCurveValue = 63,
        EACG_Parameter_RedSaturation = 64,
        EACG_Parameter_GreenSaturation = 65,
        EACG_Parameter_BlueSaturation = 66,
        EACG_Parameter_SkyLuminanceFactor = 67,
        EACG_Parameter_SceneLightTransmittanceMultiplier = 68,
        EACG_Parameter_LocalExposureHighlightContrastScale = 69,
        EACG_Parameter_LocalExposureShadowContrastScale = 70,
        EACG_Parameter_LocalExposureDetailStrength = 71,
        EACG_Parameter_LocalExposureBlurredLuminanceBlend = 72,
        EACG_Parameter_LensFlareIntensity = 73,
        EACG_Parameter_LensFlareBokehSize = 74,
        EACG_Parameter_SkyLightColorR = 75,
        EACG_Parameter_SkyLightColorG = 76,
        EACG_Parameter_SkyLightColorB = 77,
        EACG_Parameter_RayleighScatteringColorR = 78,
        EACG_Parameter_RayleighScatteringColorG = 79,
        EACG_Parameter_RayleighScatteringColorB = 80,
        EACG_Parameter_HeightFogContribution = 81,
        EACG_Parameter_MieAbsorptionScale = 82,
        EACG_Parameter_MieAnisotropy = 83,
        EACG_Parameter_MieScatteringScale = 84,
        EACG_Parameter_GroundAlbedoMultiplier = 85,
        EACG_Parameter_SkyLuminanceColorR = 86,
        EACG_Parameter_SkyLuminanceColorG = 87,
        EACG_Parameter_SkyLuminanceColorB = 88,
        EACG_Parameter_Max = 89
    };

    enum class EACGLayerSpec : uint8_t //Enum Engine.EACGLayerSpec
    {
        EACG_LayerSpec_Style = 0,
        EACG_LayerSpec_Weather_1 = 1,
        EACG_LayerSpec_Weather_2 = 2,
        EACG_LayerSpec_Weather_3 = 3,
        EACG_LayerSpec_Weather_4 = 4,
        EACG_LayerSpec_Weather_5 = 5,
        EACG_LayerSpec_Weather_6 = 6,
        EACG_LayerSpec_TimeOfDay = 7,
        EACG_LayerSpec_MAX = 8
    };

    enum class EBlendableLocation : uint8_t //Enum Engine.EBlendableLocation
    {
        BL_AfterTonemapping = 0,
        BL_BeforeTonemapping = 1,
        BL_BeforeTranslucency = 2,
        BL_ReplacingTonemapper = 3,
        BL_SSRInput = 4,
        BL_AfterAA = 5,
        BL_MAX = 6
    };

    enum class ENotifyTriggerMode : uint8_t //Enum Engine.ENotifyTriggerMode
    {
        AllAnimations = 0,
        HighestWeightedAnimation = 1,
        None = 2,
        ENotifyTriggerMode_MAX = 3
    };

    enum class EBlendSpaceAxis : uint8_t //Enum Engine.EBlendSpaceAxis
    {
        BSA_None = 0,
        BSA_X = 1,
        BSA_Y = 2,
        BSA_Max = 3
    };

    enum class EBlueprintNativizationFlag : uint8_t //Enum Engine.EBlueprintNativizationFlag
    {
        Disabled = 0,
        Dependency = 1,
        ExplicitlyEnabled = 2,
        EBlueprintNativizationFlag_MAX = 3
    };

    enum class EBlueprintCompileMode : uint8_t //Enum Engine.EBlueprintCompileMode
    {
        Default = 0,
        Development = 1,
        FinalRelease = 2,
        EBlueprintCompileMode_MAX = 3
    };

    enum class EBlueprintType : uint8_t //Enum Engine.EBlueprintType
    {
        BPTYPE_Normal = 0,
        BPTYPE_Const = 1,
        BPTYPE_MacroLibrary = 2,
        BPTYPE_Interface = 3,
        BPTYPE_LevelScript = 4,
        BPTYPE_FunctionLibrary = 5,
        BPTYPE_MAX = 6
    };

    enum class EBlueprintStatus : uint8_t //Enum Engine.EBlueprintStatus
    {
        BS_Unknown = 0,
        BS_Dirty = 1,
        BS_Error = 2,
        BS_UpToDate = 3,
        BS_BeingCreated = 4,
        BS_UpToDateWithWarnings = 5,
        BS_MAX = 6
    };

    enum class EDOFMode : uint8_t //Enum Engine.EDOFMode
    {
        Default = 0,
        SixDOF = 1,
        YZPlane = 2,
        XZPlane = 3,
        XYPlane = 4,
        CustomPlane = 5,
        None = 6,
        EDOFMode_MAX = 7
    };

    enum class EBrushType : uint8_t //Enum Engine.EBrushType
    {
        Brush_Default = 0,
        Brush_Add = 1,
        Brush_Subtract = 2,
        Brush_MAX = 3
    };

    enum class ECsgOper : uint8_t //Enum Engine.ECsgOper
    {
        CSG_Active = 0,
        CSG_Add = 1,
        CSG_Subtract = 2,
        CSG_Intersect = 3,
        CSG_Deintersect = 4,
        CSG_None = 5,
        CSG_MAX = 6
    };

    enum class EInitialOscillatorOffset : uint8_t //Enum Engine.EInitialOscillatorOffset
    {
        EOO_OffsetRandom = 0,
        EOO_OffsetZero = 1,
        EOO_MAX = 2
    };

    enum class EOscillatorWaveform : uint8_t //Enum Engine.EOscillatorWaveform
    {
        SineWave = 0,
        PerlinNoise = 1,
        EOscillatorWaveform_MAX = 2
    };

    enum class ECameraShakeDurationType : uint8_t //Enum Engine.ECameraShakeDurationType
    {
        Fixed = 0,
        Infinite = 1,
        Custom = 2,
        ECameraShakeDurationType_MAX = 3
    };

    enum class ECameraShakeUpdateResultFlags : uint8_t //Enum Engine.ECameraShakeUpdateResultFlags
    {
        ApplyAsAbsolute = 1,
        SkipAutoScale = 2,
        SkipAutoPlaySpace = 4,
        Default = 0,
        ECameraShakeUpdateResultFlags_MAX = 5
    };

    enum class ECameraShakeAttenuation : uint8_t //Enum Engine.ECameraShakeAttenuation
    {
        Linear = 0,
        Quadratic = 1,
        ECameraShakeAttenuation_MAX = 2
    };

    enum class ECameraAlphaBlendMode : uint8_t //Enum Engine.ECameraAlphaBlendMode
    {
        CABM_Linear = 0,
        CABM_Cubic = 1,
        CABM_MAX = 2
    };

    enum class ECameraFOVMode : uint8_t //Enum Engine.ECameraFOVMode
    {
        HorizontalFOV = 0,
        VerticalFOV = 1,
        FixedAspectVerticalFOV = 2,
        ECameraFOVMode_MAX = 3
    };

    enum class ECameraProjectionMode : uint8_t //Enum Engine.ECameraProjectionMode
    {
        Perspective = 0,
        Orthographic = 1,
        ECameraProjectionMode_MAX = 2
    };

    enum class ECloudStorageDelegate : uint8_t //Enum Engine.ECloudStorageDelegate
    {
        CSD_KeyValueReadComplete = 0,
        CSD_KeyValueWriteComplete = 1,
        CSD_ValueChanged = 2,
        CSD_DocumentQueryComplete = 3,
        CSD_DocumentReadComplete = 4,
        CSD_DocumentWriteComplete = 5,
        CSD_DocumentConflictDetected = 6,
        CSD_MAX = 7
    };

    enum class EAngularDriveMode : uint8_t //Enum Engine.EAngularDriveMode
    {
        SLERP = 0,
        TwistAndSwing = 1,
        EAngularDriveMode_MAX = 2
    };

    enum class ECurveTableMode : uint8_t //Enum Engine.ECurveTableMode
    {
        Empty = 0,
        SimpleCurves = 1,
        RichCurves = 2,
        ECurveTableMode_MAX = 3
    };

    enum class ECustomAttributeBlendType : uint8_t //Enum Engine.ECustomAttributeBlendType
    {
        Override = 0,
        Blend = 1,
        ECustomAttributeBlendType_MAX = 2
    };

    enum class EEvaluateCurveTableResult : uint8_t //Enum Engine.EEvaluateCurveTableResult
    {
        RowFound = 0,
        RowNotFound = 1,
        EEvaluateCurveTableResult_MAX = 2
    };

    enum class EGrammaticalNumber : uint8_t //Enum Engine.EGrammaticalNumber
    {
        Singular = 0,
        Plural = 1,
        EGrammaticalNumber_MAX = 2
    };

    enum class EGrammaticalGender : uint8_t //Enum Engine.EGrammaticalGender
    {
        Neuter = 0,
        Masculine = 1,
        Feminine = 2,
        Mixed = 3,
        EGrammaticalGender_MAX = 4
    };

    enum class DistributionParamMode : uint8_t //Enum Engine.DistributionParamMode
    {
        DPM_Normal = 0,
        DPM_Abs = 1,
        DPM_Direct = 2,
        DPM_MAX = 3
    };

    enum class EDistributionVectorMirrorFlags : uint8_t //Enum Engine.EDistributionVectorMirrorFlags
    {
        EDVMF_Same = 0,
        EDVMF_Different = 1,
        EDVMF_Mirror = 2,
        EDVMF_MAX = 3
    };

    enum class EDistributionVectorLockFlags : uint8_t //Enum Engine.EDistributionVectorLockFlags
    {
        EDVLF_None = 0,
        EDVLF_XY = 1,
        EDVLF_XZ = 2,
        EDVLF_YZ = 3,
        EDVLF_XYZ = 4,
        EDVLF_MAX = 5
    };

    enum class ENodeEnabledState : uint8_t //Enum Engine.ENodeEnabledState
    {
        Enabled = 0,
        Disabled = 1,
        DevelopmentOnly = 2,
        ENodeEnabledState_MAX = 3
    };

    enum class ENodeAdvancedPins : uint8_t //Enum Engine.ENodeAdvancedPins
    {
        NoPins = 0,
        Shown = 1,
        Hidden = 2,
        ENodeAdvancedPins_MAX = 3
    };

    enum class ENodeTitleType : uint8_t //Enum Engine.ENodeTitleType
    {
        FullTitle = 0,
        ListView = 1,
        EditableTitle = 2,
        MenuTitle = 3,
        MAX_TitleTypes = 4,
        ENodeTitleType_MAX = 5
    };

    enum class EPinContainerType : uint8_t //Enum Engine.EPinContainerType
    {
        None = 0,
        Array = 1,
        Set = 2,
        Map = 3,
        EPinContainerType_MAX = 4
    };

    enum class EEdGraphPinDirection : uint8_t //Enum Engine.EEdGraphPinDirection
    {
        EGPD_Input = 0,
        EGPD_Output = 1,
        EGPD_MAX = 2
    };

    enum class EBlueprintPinStyleType : uint8_t //Enum Engine.EBlueprintPinStyleType
    {
        BPST_Original = 0,
        BPST_VariantA = 1,
        BPST_MAX = 2
    };

    enum class ECanCreateConnectionResponse : uint8_t //Enum Engine.ECanCreateConnectionResponse
    {
        CONNECT_RESPONSE_MAKE = 0,
        CONNECT_RESPONSE_DISALLOW = 1,
        CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
        CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
        CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
        CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
        CONNECT_RESPONSE_MAX = 6
    };

    enum class EGraphType : uint8_t //Enum Engine.EGraphType
    {
        GT_Function = 0,
        GT_Ubergraph = 1,
        GT_Macro = 2,
        GT_Animation = 3,
        GT_StateMachine = 4,
        GT_MAX = 5
    };

    enum class ETransitionType : uint8_t //Enum Engine.ETransitionType
    {
        None = 0,
        Paused = 1,
        Loading = 2,
        Saving = 3,
        Connecting = 4,
        Precaching = 5,
        WaitingToConnect = 6,
        MAX = 7
    };

    enum class EFullyLoadPackageType : uint8_t //Enum Engine.EFullyLoadPackageType
    {
        FULLYLOAD_Map = 0,
        FULLYLOAD_Game_PreLoadClass = 1,
        FULLYLOAD_Game_PostLoadClass = 2,
        FULLYLOAD_Always = 3,
        FULLYLOAD_Mutator = 4,
        FULLYLOAD_MAX = 5
    };

    enum class EViewModeIndex : uint8_t //Enum Engine.EViewModeIndex
    {
        VMI_BrushWireframe = 0,
        VMI_Wireframe = 1,
        VMI_Unlit = 2,
        VMI_Lit = 3,
        VMI_Lit_DetailLighting = 4,
        VMI_LightingOnly = 5,
        VMI_LightComplexity = 6,
        VMI_ShaderComplexity = 8,
        VMI_LightmapDensity = 9,
        VMI_LitLightmapDensity = 10,
        VMI_ReflectionOverride = 11,
        VMI_VisualizeBuffer = 12,
        VMI_StationaryLightOverlap = 14,
        VMI_CollisionPawn = 15,
        VMI_CollisionVisibility = 16,
        VMI_LODColoration = 18,
        VMI_QuadOverdraw = 19,
        VMI_PrimitiveDistanceAccuracy = 20,
        VMI_MeshUVDensityAccuracy = 21,
        VMI_ShaderComplexityWithQuadOverdraw = 22,
        VMI_HLODColoration = 23,
        VMI_GroupLODColoration = 24,
        VMI_MaterialTextureScaleAccuracy = 25,
        VMI_RequiredTextureResolution = 26,
        VMI_PathTracing = 27,
        VMI_RayTracingDebug = 28,
        VMI_GroupCustom = 29,
        VMI_SkyIrradiance = 30,
        VMI_PRTIndirectLighting = 31,
        VMI_LocalTonemapSkyAverageLuminance = 32,
        VMI_LocalTonemapFactor = 33,
        VMI_LocalTonemapEVDiff = 34,
        VMI_LOD1AndLOD0 = 35,
        VMI_LOD2AndLOD0 = 36,
        VMI_TexelDensity = 37,
        VMI_TexelDensityDetailed = 38,
        VMI_InteriorVolumeMask = 39,
        VMI_ToneMappingMetricTMQI = 40,
        VMI_ToneMappingMetricCDMI = 41,
        VMI_Max = 42,
        VMI_Unknown = 255
    };

    enum class EDemoPlayFailure : uint8_t //Enum Engine.EDemoPlayFailure
    {
        Generic = 0,
        DemoNotFound = 1,
        Corrupt = 2,
        InvalidVersion = 3,
        InitBase = 4,
        GameSpecificHeader = 5,
        ReplayStreamerInternal = 6,
        LoadMap = 7,
        Serialization = 8,
        EDemoPlayFailure_MAX = 9
    };

    enum class ENetworkLagState : uint8_t //Enum Engine.ENetworkLagState
    {
        NotLagging = 0,
        Lagging = 1,
        ENetworkLagState_MAX = 2
    };

    enum class EMouseCaptureMode : uint8_t //Enum Engine.EMouseCaptureMode
    {
        NoCapture = 0,
        CapturePermanently = 1,
        CapturePermanently_IncludingInitialMouseDown = 2,
        CaptureDuringMouseDown = 3,
        CaptureDuringRightMouseDown = 4,
        CaptureDuringThumbMouseDown = 5,
        EMouseCaptureMode_MAX = 6
    };

    enum class ECustomTimeStepSynchronizationState : uint8_t //Enum Engine.ECustomTimeStepSynchronizationState
    {
        Closed = 0,
        Error = 1,
        Synchronized = 2,
        Synchronizing = 3,
        ECustomTimeStepSynchronizationState_MAX = 4
    };

    enum class EMeshBufferAccess : uint8_t //Enum Engine.EMeshBufferAccess
    {
        Default = 0,
        ForceCPUAndGPU = 1,
        EMeshBufferAccess_MAX = 2
    };

    enum class EComponentSocketType : uint8_t //Enum Engine.EComponentSocketType
    {
        Invalid = 0,
        Bone = 1,
        Socket = 2,
        EComponentSocketType_MAX = 3
    };

    enum class EPhysicalMaterialMaskColor : uint8_t //Enum Engine.EPhysicalMaterialMaskColor
    {
        Red = 0,
        Green = 1,
        Blue = 2,
        Cyan = 3,
        Magenta = 4,
        Yellow = 5,
        White = 6,
        Black = 7,
        MAX = 8
    };

    enum class EWalkableSlopeBehavior : uint8_t //Enum Engine.EWalkableSlopeBehavior
    {
        WalkableSlope_Default = 0,
        WalkableSlope_Increase = 1,
        WalkableSlope_Decrease = 2,
        WalkableSlope_Unwalkable = 3,
        WalkableSlope_Max = 4
    };

    enum class EAutoPossessAI : uint8_t //Enum Engine.EAutoPossessAI
    {
        Disabled = 0,
        PlacedInWorld = 1,
        Spawned = 2,
        PlacedInWorldOrSpawned = 3,
        EAutoPossessAI_MAX = 4
    };

    enum class EUpdateRateShiftBucket : uint8_t //Enum Engine.EUpdateRateShiftBucket
    {
        ShiftBucket0 = 0,
        ShiftBucket1 = 1,
        ShiftBucket2 = 2,
        ShiftBucket3 = 3,
        ShiftBucket4 = 4,
        ShiftBucket5 = 5,
        ShiftBucketMax = 6,
        EUpdateRateShiftBucket_MAX = 7
    };

    enum class EShadowMapFlags : uint8_t //Enum Engine.EShadowMapFlags
    {
        SMF_None = 0,
        SMF_Streamed = 1,
        SMF_MAX = 2
    };

    enum class ELightMapPaddingType : uint8_t //Enum Engine.ELightMapPaddingType
    {
        LMPT_NormalPadding = 0,
        LMPT_PrePadding = 1,
        LMPT_NoPadding = 2,
        LMPT_MAX = 3
    };

    enum class ECollisionEnabled : uint8_t //Enum Engine.ECollisionEnabled
    {
        NoCollision = 0,
        QueryOnly = 1,
        PhysicsOnly = 2,
        QueryAndPhysics = 3,
        ECollisionEnabled_MAX = 4
    };

    enum class ETimelineSigType : uint8_t //Enum Engine.ETimelineSigType
    {
        ETS_EventSignature = 0,
        ETS_FloatSignature = 1,
        ETS_VectorSignature = 2,
        ETS_LinearColorSignature = 3,
        ETS_InvalidSignature = 4,
        ETS_MAX = 5
    };

    enum class EFilterInterpolationType : uint8_t //Enum Engine.EFilterInterpolationType
    {
        BSIT_Average = 0,
        BSIT_Linear = 1,
        BSIT_Cubic = 2,
        BSIT_MAX = 3
    };

    enum class ECollisionResponse : uint8_t //Enum Engine.ECollisionResponse
    {
        ECR_Ignore = 0,
        ECR_Overlap = 1,
        ECR_Block = 2,
        ECR_MAX = 3
    };

    enum class EOverlapFilterOption : uint8_t //Enum Engine.EOverlapFilterOption
    {
        OverlapFilter_All = 0,
        OverlapFilter_DynamicOnly = 1,
        OverlapFilter_StaticOnly = 2,
        OverlapFilter_MAX = 3
    };

    enum class ENetworkSmoothingMode : uint8_t //Enum Engine.ENetworkSmoothingMode
    {
        Disabled = 0,
        Linear = 1,
        Exponential = 2,
        Replay = 3,
        ENetworkSmoothingMode_MAX = 4
    };

    enum class ELightingBuildQuality : uint8_t //Enum Engine.ELightingBuildQuality
    {
        Quality_Preview = 0,
        Quality_Medium = 1,
        Quality_High = 2,
        Quality_Production = 3,
        Quality_MAX = 4
    };

    enum class EMaterialShadingRate : uint8_t //Enum Engine.EMaterialShadingRate
    {
        MSR_1x1 = 0,
        MSR_2x1 = 1,
        MSR_1x2 = 2,
        MSR_2x2 = 3,
        MSR_4x2 = 4,
        MSR_2x4 = 5,
        MSR_4x4 = 6,
        MSR_Count = 7,
        MSR_MAX = 8
    };

    enum class EMaterialStencilCompare : uint8_t //Enum Engine.EMaterialStencilCompare
    {
        MSC_Less = 0,
        MSC_LessEqual = 1,
        MSC_Greater = 2,
        MSC_GreaterEqual = 3,
        MSC_Equal = 4,
        MSC_NotEqual = 5,
        MSC_Never = 6,
        MSC_Always = 7,
        MSC_Count = 8,
        MSC_MAX = 9
    };

    enum class EMaterialSamplerType : uint8_t //Enum Engine.EMaterialSamplerType
    {
        SAMPLERTYPE_Color = 0,
        SAMPLERTYPE_Grayscale = 1,
        SAMPLERTYPE_Alpha = 2,
        SAMPLERTYPE_Normal = 3,
        SAMPLERTYPE_Masks = 4,
        SAMPLERTYPE_DistanceFieldFont = 5,
        SAMPLERTYPE_LinearColor = 6,
        SAMPLERTYPE_LinearGrayscale = 7,
        SAMPLERTYPE_Data = 8,
        SAMPLERTYPE_External = 9,
        SAMPLERTYPE_VirtualColor = 10,
        SAMPLERTYPE_VirtualGrayscale = 11,
        SAMPLERTYPE_VirtualAlpha = 12,
        SAMPLERTYPE_VirtualNormal = 13,
        SAMPLERTYPE_VirtualMasks = 14,
        SAMPLERTYPE_VirtualLinearColor = 15,
        SAMPLERTYPE_VirtualLinearGrayscale = 16,
        SAMPLERTYPE_MAX = 17
    };

    enum class EMaterialTessellationMode : uint8_t //Enum Engine.EMaterialTessellationMode
    {
        MTM_NoTessellation = 0,
        MTM_FlatTessellation = 1,
        MTM_PNTriangles = 2,
        MTM_MAX = 3
    };

    enum class EMaterialShadingModel : uint8_t //Enum Engine.EMaterialShadingModel
    {
        MSM_Unlit = 0,
        MSM_DefaultLit = 1,
        MSM_Subsurface = 2,
        MSM_PreintegratedSkin = 3,
        MSM_ClearCoat = 4,
        MSM_SubsurfaceProfile = 5,
        MSM_TwoSidedFoliage = 6,
        MSM_Hair = 7,
        MSM_Cloth = 8,
        MSM_Eye = 9,
        MSM_SingleLayerWater = 10,
        MSM_MobilePreintegratedSkin = 11,
        MSM_ThinTranslucent = 12,
        MSM_UAMobileFoliage = 13,
        MSM_UAMobileFoliageBillBoard = 14,
        MSM_UAMobileHair = 15,
        MSM_NUM = 16,
        MSM_FromMaterialExpression = 17,
        MSM_MAX = 18
    };

    enum class EParticleCollisionMode : uint8_t //Enum Engine.EParticleCollisionMode
    {
        SceneDepth = 0,
        DistanceField = 1,
        EParticleCollisionMode_MAX = 2
    };

    enum class ETrailWidthMode : uint8_t //Enum Engine.ETrailWidthMode
    {
        ETrailWidthMode_FromCentre = 0,
        ETrailWidthMode_FromFirst = 1,
        ETrailWidthMode_FromSecond = 2,
        ETrailWidthMode_MAX = 3
    };

    enum class EGBufferFormat : uint8_t //Enum Engine.EGBufferFormat
    {
        Force8BitsPerChannel = 0,
        Default = 1,
        HighPrecisionNormals = 3,
        Force16BitsPerChannel = 5,
        EGBufferFormat_MAX = 6
    };

    enum class ESceneCaptureCompositeMode : uint8_t //Enum Engine.ESceneCaptureCompositeMode
    {
        SCCM_Overwrite = 0,
        SCCM_Additive = 1,
        SCCM_Composite = 2,
        SCCM_MAX = 3
    };

    enum class ESceneCaptureSource : uint8_t //Enum Engine.ESceneCaptureSource
    {
        SCS_SceneColorHDR = 0,
        SCS_SceneColorHDRNoAlpha = 1,
        SCS_FinalColorLDR = 2,
        SCS_SceneColorSceneDepth = 3,
        SCS_SceneDepth = 4,
        SCS_DeviceDepth = 5,
        SCS_Normal = 6,
        SCS_BaseColor = 7,
        SCS_FinalColorHDR = 8,
        SCS_FinalToneCurveHDR = 9,
        SCS_FinalToneCurveLDR = 10,
        SCS_FinalToneCurveLDRAlpha = 11,
        SCS_MAX = 12
    };

    enum class ETranslucentSortPolicy : uint8_t //Enum Engine.ETranslucentSortPolicy
    {
        SortByDistance = 0,
        SortByProjectedZ = 1,
        SortAlongAxis = 2,
        ETranslucentSortPolicy_MAX = 3
    };

    enum class ERefractionMode : uint8_t //Enum Engine.ERefractionMode
    {
        RM_IndexOfRefraction = 0,
        RM_PixelNormalOffset = 1,
        RM_MAX = 2
    };

    enum class EDirLightShadowBiasOverride : uint8_t //Enum Engine.EDirLightShadowBiasOverride
    {
        DLSBO_NONE = 0,
        DLSBO_CASTER_BIAS = 1,
        DLSBO_RECEIVER_BIAS = 2,
        DLSBO_MAX = 3
    };

    enum class ETranslucencyLightingMode : uint8_t //Enum Engine.ETranslucencyLightingMode
    {
        TLM_VolumetricNonDirectional = 0,
        TLM_VolumetricDirectional = 1,
        TLM_VolumetricPerVertexNonDirectional = 2,
        TLM_VolumetricPerVertexDirectional = 3,
        TLM_Surface = 4,
        TLM_SurfacePerPixelLighting = 5,
        TLM_MAX = 6
    };

    enum class ESamplerSourceMode : uint8_t //Enum Engine.ESamplerSourceMode
    {
        SSM_FromTextureAsset = 0,
        SSM_Wrap_WorldGroupSettings = 1,
        SSM_Clamp_WorldGroupSettings = 2,
        SSM_MAX = 3
    };

    enum class EMaterialFloatPrecisionModeVulkanOverride : uint8_t //Enum Engine.EMaterialFloatPrecisionModeVulkanOverride
    {
        MFPMV_NoOverride = 0,
        MFPMV_Half = 1,
        MFPMV_Full_MaterialExpressionOnly = 2,
        MFPMV_Full = 3,
        MFPMV_Max = 4
    };

    enum class EMaterialFloatPrecisionMode : uint8_t //Enum Engine.EMaterialFloatPrecisionMode
    {
        MFPM_Half = 0,
        MFPM_Full_MaterialExpressionOnly = 1,
        MFPM_Full = 2,
        MFPM_MAX = 3
    };

    enum class EBlendMode : uint8_t //Enum Engine.EBlendMode
    {
        BLEND_Opaque = 0,
        BLEND_Masked = 1,
        BLEND_Translucent = 2,
        BLEND_Additive = 3,
        BLEND_Modulate = 4,
        BLEND_AlphaComposite = 5,
        BLEND_AlphaHoldout = 6,
        BLEND_MAX = 7
    };

    enum class EOcclusionCombineMode : uint8_t //Enum Engine.EOcclusionCombineMode
    {
        OCM_Minimum = 0,
        OCM_Multiply = 1,
        OCM_MAX = 2
    };

    enum class EVolumetricOcclusionMode : uint8_t //Enum Engine.EVolumetricOcclusionMode
    {
        OcclusionNone = 0,
        AmbientOcclusionOnly = 1,
        SkyOcclusionOnly = 2,
        AmbientAndSkyOcclusion = 3,
        EVolumetricOcclusionMode_MAX = 4
    };

    enum class EVolumetricLightmapSampleType : uint8_t //Enum Engine.EVolumetricLightmapSampleType
    {
        Default = 0,
        ForceInteriorVolume = 1,
        ForceVisibleMask = 2,
        EVolumetricLightmapSampleType_MAX = 3
    };

    enum class EViewSignificantState : uint8_t //Enum Engine.EViewSignificantState
    {
        None = 0,
        ViewTarget = 1,
        NotViewTarget = 2,
        EViewSignificantState_MAX = 3
    };

    enum class EMpeMoveableType : uint8_t //Enum Engine.EMpeMoveableType
    {
        Unmoveable = 0,
        Moveable_1P = 1,
        Movaeble_3P = 2,
        EMpeMoveableType_MAX = 3
    };

    enum class ELightmapType : uint8_t //Enum Engine.ELightmapType
    {
        Default = 0,
        ForceSurface = 1,
        ForceVolumetric = 2,
        ELightmapType_MAX = 3
    };

    enum class EIndirectLightingCacheQuality : uint8_t //Enum Engine.EIndirectLightingCacheQuality
    {
        ILCQ_Off = 0,
        ILCQ_Point = 1,
        ILCQ_Volume = 2,
        ILCQ_MAX = 3
    };

    enum class ESceneDepthPriorityGroup : uint8_t //Enum Engine.ESceneDepthPriorityGroup
    {
        SDPG_World = 0,
        SDPG_Foreground = 1,
        SDPG_MAX = 2
    };

    enum class EAspectRatioAxisConstraint : uint8_t //Enum Engine.EAspectRatioAxisConstraint
    {
        AspectRatio_MaintainYFOV = 0,
        AspectRatio_MaintainXFOV = 1,
        AspectRatio_MajorAxisFOV = 2,
        AspectRatio_MAX = 3
    };

    enum class EFontCacheType : uint8_t //Enum Engine.EFontCacheType
    {
        Offline = 0,
        Runtime = 1,
        EFontCacheType_MAX = 2
    };

    enum class EFontImportCharacterSet : uint8_t //Enum Engine.EFontImportCharacterSet
    {
        FontICS_Default = 0,
        FontICS_Ansi = 1,
        FontICS_Symbol = 2,
        FontICS_MAX = 3
    };

    enum class EStandbyType : uint8_t //Enum Engine.EStandbyType
    {
        STDBY_Rx = 0,
        STDBY_Tx = 1,
        STDBY_BadPing = 2,
        STDBY_MAX = 3
    };

    enum class ESuggestProjVelocityTraceOption : uint8_t //Enum Engine.ESuggestProjVelocityTraceOption
    {
        DoNotTrace = 0,
        TraceFullPath = 1,
        OnlyTraceWhileAscending = 2,
        ESuggestProjVelocityTraceOption_MAX = 3
    };

    enum class EWindowMode : uint8_t //Enum Engine.EWindowMode
    {
        Fullscreen = 0,
        WindowedFullscreen = 1,
        Windowed = 2,
        EWindowMode_MAX = 3
    };

    enum class EIndirectLightVolumeType : uint8_t //Enum Engine.EIndirectLightVolumeType
    {
        DawnInterior_Default = 0,
        DawnInterior_Exterior = 1,
        DawnInterior_Interior1 = 2,
        DawnInterior_Interior2 = 3,
        DawnInterior_Interior3 = 4,
        DawnInterior_Interior4 = 5,
        DawnInterior_MAX = 6
    };

    enum class EHitProxyPriority : uint8_t //Enum Engine.EHitProxyPriority
    {
        HPP_World = 0,
        HPP_Wireframe = 1,
        HPP_Foreground = 2,
        HPP_UI = 3,
        HPP_MAX = 4
    };

    enum class ECubemapEncodeType : uint8_t //Enum Engine.ECubemapEncodeType
    {
        CET_None = 0,
        CET_RGBM = 1,
        CET_Max = 2
    };

    enum class EImportanceWeight : uint8_t //Enum Engine.EImportanceWeight
    {
        Luminance = 0,
        Red = 1,
        Green = 2,
        Blue = 3,
        Alpha = 4,
        EImportanceWeight_MAX = 5
    };

    enum class EAdManagerDelegate : uint8_t //Enum Engine.EAdManagerDelegate
    {
        AMD_ClickedBanner = 0,
        AMD_UserClosedAd = 1,
        AMD_MAX = 2
    };

    enum class EAnimAlphaInputType : uint8_t //Enum Engine.EAnimAlphaInputType
    {
        Float = 0,
        Bool = 1,
        Curve = 2,
        EAnimAlphaInputType_MAX = 3
    };

    enum class ETrackActiveCondition : uint8_t //Enum Engine.ETrackActiveCondition
    {
        ETAC_Always = 0,
        ETAC_GoreEnabled = 1,
        ETAC_GoreDisabled = 2,
        ETAC_MAX = 3
    };

    enum class EInterpTrackMoveRotMode : uint8_t //Enum Engine.EInterpTrackMoveRotMode
    {
        IMR_Keyframed = 0,
        IMR_LookAtGroup = 1,
        IMR_Ignore = 2,
        IMR_MAX = 3
    };

    enum class EInterpMoveAxis : uint8_t //Enum Engine.EInterpMoveAxis
    {
        AXIS_TranslationX = 0,
        AXIS_TranslationY = 1,
        AXIS_TranslationZ = 2,
        AXIS_RotationX = 3,
        AXIS_RotationY = 4,
        AXIS_RotationZ = 5,
        AXIS_MAX = 6
    };

    enum class ETrackToggleAction : uint8_t //Enum Engine.ETrackToggleAction
    {
        ETTA_Off = 0,
        ETTA_On = 1,
        ETTA_Toggle = 2,
        ETTA_Trigger = 3,
        ETTA_MAX = 4
    };

    enum class EVisibilityTrackCondition : uint8_t //Enum Engine.EVisibilityTrackCondition
    {
        EVTC_Always = 0,
        EVTC_GoreEnabled = 1,
        EVTC_GoreDisabled = 2,
        EVTC_MAX = 3
    };

    enum class EVisibilityTrackAction : uint8_t //Enum Engine.EVisibilityTrackAction
    {
        EVTA_Hide = 0,
        EVTA_Show = 1,
        EVTA_Toggle = 2,
        EVTA_MAX = 3
    };

    enum class ESlateGesture : uint8_t //Enum Engine.ESlateGesture
    {
        None = 0,
        Scroll = 1,
        Magnify = 2,
        Swipe = 3,
        Rotate = 4,
        LongPress = 5,
        ESlateGesture_MAX = 6
    };

    enum class EMIDCreationFlags : uint8_t //Enum Engine.EMIDCreationFlags
    {
        None = 0,
        Transient = 1,
        EMIDCreationFlags_MAX = 2
    };

    enum class EMatrixColumns : uint8_t //Enum Engine.EMatrixColumns
    {
        First = 0,
        Second = 1,
        Third = 2,
        Fourth = 3,
        EMatrixColumns_MAX = 4
    };

    enum class ELerpInterpolationMode : uint8_t //Enum Engine.ELerpInterpolationMode
    {
        QuatInterp = 0,
        EulerInterp = 1,
        DualQuatInterp = 2,
        ELerpInterpolationMode_MAX = 3
    };

    enum class EEasingFunc : uint8_t //Enum Engine.EEasingFunc
    {
        Linear = 0,
        Step = 1,
        SinusoidalIn = 2,
        SinusoidalOut = 3,
        SinusoidalInOut = 4,
        EaseIn = 5,
        EaseOut = 6,
        EaseInOut = 7,
        ExpoIn = 8,
        ExpoOut = 9,
        ExpoInOut = 10,
        CircularIn = 11,
        CircularOut = 12,
        CircularInOut = 13,
        EEasingFunc_MAX = 14
    };

    enum class ERoundingMode : uint8_t //Enum Engine.ERoundingMode
    {
        HalfToEven = 0,
        HalfFromZero = 1,
        HalfToZero = 2,
        FromZero = 3,
        ToZero = 4,
        ToNegativeInfinity = 5,
        ToPositiveInfinity = 6,
        ERoundingMode_MAX = 7
    };

    enum class EStreamingVolumeUsage : uint8_t //Enum Engine.EStreamingVolumeUsage
    {
        SVB_Loading = 0,
        SVB_LoadingAndVisibility = 1,
        SVB_VisibilityBlockingOnLoad = 2,
        SVB_BlockingOnLoad = 3,
        SVB_LoadingNotVisible = 4,
        SVB_MAX = 5
    };

    enum class ESyncOption : uint8_t //Enum Engine.ESyncOption
    {
        Drive = 0,
        Passive = 1,
        Disabled = 2,
        ESyncOption_MAX = 3
    };

    enum class EMaterialDecalResponse : uint8_t //Enum Engine.EMaterialDecalResponse
    {
        MDR_None = 0,
        MDR_ColorNormalRoughness = 1,
        MDR_Color = 2,
        MDR_ColorNormal = 3,
        MDR_ColorRoughness = 4,
        MDR_Normal = 5,
        MDR_NormalRoughness = 6,
        MDR_Roughness = 7,
        MDR_MAX = 8
    };

    enum class EDecalBlendMode : uint8_t //Enum Engine.EDecalBlendMode
    {
        DBM_Translucent = 0,
        DBM_Stain = 1,
        DBM_Normal = 2,
        DBM_Emissive = 3,
        DBM_DBuffer_ColorNormalRoughness = 4,
        DBM_DBuffer_Color = 5,
        DBM_DBuffer_ColorNormal = 6,
        DBM_DBuffer_ColorRoughness = 7,
        DBM_DBuffer_Normal = 8,
        DBM_DBuffer_NormalRoughness = 9,
        DBM_DBuffer_Roughness = 10,
        DBM_DBuffer_Emissive = 11,
        DBM_DBuffer_AlphaComposite = 12,
        DBM_DBuffer_EmissiveAlphaComposite = 13,
        DBM_Volumetric_DistanceFunction = 14,
        DBM_AlphaComposite = 15,
        DBM_AmbientOcclusion = 16,
        DBM_WetnessBuffer = 17,
        DBM_MAX = 18
    };

    enum class ETextureColorChannel : uint8_t //Enum Engine.ETextureColorChannel
    {
        TCC_Red = 0,
        TCC_Green = 1,
        TCC_Blue = 2,
        TCC_Alpha = 3,
        TCC_MAX = 4
    };

    enum class EMaterialAttributeBlend : uint8_t //Enum Engine.EMaterialAttributeBlend
    {
        Blend = 0,
        UseA = 1,
        UseB = 2,
        EMaterialAttributeBlend_MAX = 3
    };

    enum class EChannelMaskParameterColor : uint8_t //Enum Engine.EChannelMaskParameterColor
    {
        Red = 0,
        Green = 1,
        Blue = 2,
        Alpha = 3,
        EChannelMaskParameterColor_MAX = 4
    };

    enum class EClampMode : uint8_t //Enum Engine.EClampMode
    {
        CMODE_Clamp = 0,
        CMODE_ClampMin = 1,
        CMODE_ClampMax = 2,
        CMODE_MAX = 3
    };

    enum class ECustomMaterialOutputType : uint8_t //Enum Engine.ECustomMaterialOutputType
    {
        CMOT_Float1 = 0,
        CMOT_Float2 = 1,
        CMOT_Float3 = 2,
        CMOT_Float4 = 3,
        CMOT_MaterialAttributes = 4,
        CMOT_MAX = 5
    };

    enum class EDepthOfFieldFunctionValue : uint8_t //Enum Engine.EDepthOfFieldFunctionValue
    {
        TDOF_NearAndFarMask = 0,
        TDOF_NearMask = 1,
        TDOF_FarMask = 2,
        TDOF_CircleOfConfusionRadius = 3,
        TDOF_MAX = 4
    };

    enum class EFunctionInputType : uint8_t //Enum Engine.EFunctionInputType
    {
        FunctionInput_Scalar = 0,
        FunctionInput_Vector2 = 1,
        FunctionInput_Vector3 = 2,
        FunctionInput_Vector4 = 3,
        FunctionInput_Texture2D = 4,
        FunctionInput_TextureCube = 5,
        FunctionInput_Texture2DArray = 6,
        FunctionInput_VolumeTexture = 7,
        FunctionInput_StaticBool = 8,
        FunctionInput_MaterialAttributes = 9,
        FunctionInput_TextureExternal = 10,
        FunctionInput_MAX = 11
    };

    enum class ENoiseFunction : uint8_t //Enum Engine.ENoiseFunction
    {
        NOISEFUNCTION_SimplexTex = 0,
        NOISEFUNCTION_GradientTex = 1,
        NOISEFUNCTION_GradientTex3D = 2,
        NOISEFUNCTION_GradientALU = 3,
        NOISEFUNCTION_ValueALU = 4,
        NOISEFUNCTION_VoronoiALU = 5,
        NOISEFUNCTION_MAX = 6
    };

    enum class EDynamicRVTMode : uint8_t //Enum Engine.EDynamicRVTMode
    {
        WorldHeightDelta = 0,
        MipLevelError = 1,
        Distance = 2,
        Custom = 3,
        EDynamicRVTMode_MAX = 4
    };

    enum class ERuntimeVirtualTextureTextureAddressMode : uint8_t //Enum Engine.ERuntimeVirtualTextureTextureAddressMode
    {
        RVTTA_Clamp = 0,
        RVTTA_Wrap = 1,
        RVTTA_MAX = 2
    };

    enum class ERuntimeVirtualTextureMipValueMode : uint8_t //Enum Engine.ERuntimeVirtualTextureMipValueMode
    {
        RVTMVM_None = 0,
        RVTMVM_MipLevel = 1,
        RVTMVM_MipBias = 2,
        RVTMVM_MAX = 3
    };

    enum class EMaterialSceneAttributeInputMode : uint8_t //Enum Engine.EMaterialSceneAttributeInputMode
    {
        Coordinates = 0,
        OffsetFraction = 1,
        EMaterialSceneAttributeInputMode_MAX = 2
    };

    enum class ESpeedTreeLODType : uint8_t //Enum Engine.ESpeedTreeLODType
    {
        STLOD_Pop = 0,
        STLOD_Smooth = 1,
        STLOD_MAX = 2
    };

    enum class ESpeedTreeWindType : uint8_t //Enum Engine.ESpeedTreeWindType
    {
        STW_None = 0,
        STW_Fastest = 1,
        STW_Fast = 2,
        STW_Better = 3,
        STW_Best = 4,
        STW_Palm = 5,
        STW_BestPlus = 6,
        STW_MAX = 7
    };

    enum class ESpeedTreeGeometryType : uint8_t //Enum Engine.ESpeedTreeGeometryType
    {
        STG_Branch = 0,
        STG_Frond = 1,
        STG_Leaf = 2,
        STG_FacingLeaf = 3,
        STG_Billboard = 4,
        STG_MAX = 5
    };

    enum class EMaterialExposedTextureProperty : uint8_t //Enum Engine.EMaterialExposedTextureProperty
    {
        TMTM_TextureSize = 0,
        TMTM_TexelSize = 1,
        TMTM_MAX = 2
    };

    enum class ETextureMipValueMode : uint8_t //Enum Engine.ETextureMipValueMode
    {
        TMVM_None = 0,
        TMVM_MipLevel = 1,
        TMVM_MipBias = 2,
        TMVM_Derivative = 3,
        TMVM_MAX = 4
    };

    enum class EMaterialVectorCoordTransform : uint8_t //Enum Engine.EMaterialVectorCoordTransform
    {
        TRANSFORM_Tangent = 0,
        TRANSFORM_Local = 1,
        TRANSFORM_World = 2,
        TRANSFORM_View = 3,
        TRANSFORM_Camera = 4,
        TRANSFORM_ParticleWorld = 5,
        TRANSFORM_MAX = 6
    };

    enum class EMaterialVectorCoordTransformSource : uint8_t //Enum Engine.EMaterialVectorCoordTransformSource
    {
        TRANSFORMSOURCE_Tangent = 0,
        TRANSFORMSOURCE_Local = 1,
        TRANSFORMSOURCE_World = 2,
        TRANSFORMSOURCE_View = 3,
        TRANSFORMSOURCE_Camera = 4,
        TRANSFORMSOURCE_ParticleWorld = 5,
        TRANSFORMSOURCE_MAX = 6
    };

    enum class EMaterialPositionTransformSource : uint8_t //Enum Engine.EMaterialPositionTransformSource
    {
        TRANSFORMPOSSOURCE_Local = 0,
        TRANSFORMPOSSOURCE_World = 1,
        TRANSFORMPOSSOURCE_TranslatedWorld = 2,
        TRANSFORMPOSSOURCE_View = 3,
        TRANSFORMPOSSOURCE_Camera = 4,
        TRANSFORMPOSSOURCE_Particle = 5,
        TRANSFORMPOSSOURCE_MAX = 6
    };

    enum class EVectorNoiseFunction : uint8_t //Enum Engine.EVectorNoiseFunction
    {
        VNF_CellnoiseALU = 0,
        VNF_VectorALU = 1,
        VNF_GradientALU = 2,
        VNF_CurlALU = 3,
        VNF_VoronoiALU = 4,
        VNF_MAX = 5
    };

    enum class EMaterialExposedViewProperty : uint8_t //Enum Engine.EMaterialExposedViewProperty
    {
        MEVP_BufferSize = 0,
        MEVP_FieldOfView = 1,
        MEVP_TanHalfFieldOfView = 2,
        MEVP_ViewSize = 3,
        MEVP_WorldSpaceViewPosition = 4,
        MEVP_WorldSpaceCameraPosition = 5,
        MEVP_ViewportOffset = 6,
        MEVP_TemporalSampleCount = 7,
        MEVP_TemporalSampleIndex = 8,
        MEVP_TemporalSampleOffset = 9,
        MEVP_RuntimeVirtualTextureOutputLevel = 10,
        MEVP_RuntimeVirtualTextureOutputDerivative = 11,
        MEVP_PreExposure = 12,
        MEVP_RuntimeVirtualTextureMaxLevel = 13,
        MEVP_MAX = 14
    };

    enum class EWorldPositionIncludedOffsets : uint8_t //Enum Engine.EWorldPositionIncludedOffsets
    {
        WPT_Default = 0,
        WPT_ExcludeAllShaderOffsets = 1,
        WPT_CameraRelative = 2,
        WPT_CameraRelativeNoOffsets = 3,
        WPT_MAX = 4
    };

    enum class EMaterialFunctionUsage : uint8_t //Enum Engine.EMaterialFunctionUsage
    {
        Default = 0,
        MaterialLayer = 1,
        MaterialLayerBlend = 2,
        EMaterialFunctionUsage_MAX = 3
    };

    enum class EDawnSpecialMaterial : uint8_t //Enum Engine.EDawnSpecialMaterial
    {
        SM_None = 0,
        SM_BlendNormal = 1
    };

    enum class EMaterialUsage : uint8_t //Enum Engine.EMaterialUsage
    {
        MATUSAGE_SkeletalMesh = 0,
        MATUSAGE_ParticleSprites = 1,
        MATUSAGE_BeamTrails = 2,
        MATUSAGE_MeshParticles = 3,
        MATUSAGE_StaticLighting = 4,
        MATUSAGE_MorphTargets = 5,
        MATUSAGE_SplineMesh = 6,
        MATUSAGE_InstancedStaticMeshes = 7,
        MATUSAGE_MergedInstancedStaticMeshes = 8,
        MATUSAGE_GeometryCollections = 9,
        MATUSAGE_Clothing = 10,
        MATUSAGE_NiagaraSprites = 11,
        MATUSAGE_NiagaraRibbons = 12,
        MATUSAGE_NiagaraMeshParticles = 13,
        MATUSAGE_GeometryCache = 14,
        MATUSAGE_Water = 15,
        MATUSAGE_HairStrands = 16,
        MATUSAGE_LidarPointCloud = 17,
        MATUSAGE_VirtualHeightfieldMesh = 18,
        MATUSAGE_MAX = 19
    };

    enum class EMaterialLayerLinkState : uint8_t //Enum Engine.EMaterialLayerLinkState
    {
        Uninitialized = 0,
        LinkedToParent = 1,
        UnlinkedFromParent = 2,
        NotFromParent = 3,
        EMaterialLayerLinkState_MAX = 4
    };

    enum class EMaterialParameterAssociation : uint8_t //Enum Engine.EMaterialParameterAssociation
    {
        LayerParameter = 0,
        BlendParameter = 1,
        GlobalParameter = 2,
        EMaterialParameterAssociation_MAX = 3
    };

    enum class EMaterialMergeType : uint8_t //Enum Engine.EMaterialMergeType
    {
        MaterialMergeType_Default = 0,
        MaterialMergeType_Simplygon = 1,
        MaterialMergeType_MAX = 2
    };

    enum class ETextureSizingType : uint8_t //Enum Engine.ETextureSizingType
    {
        TextureSizingType_UseSingleTextureSize = 0,
        TextureSizingType_UseAutomaticBiasedSizes = 1,
        TextureSizingType_UseManualOverrideTextureSize = 2,
        TextureSizingType_UseSimplygonAutomaticSizing = 3,
        TextureSizingType_MAX = 4
    };

    enum class ESceneTextureId : uint8_t //Enum Engine.ESceneTextureId
    {
        PPI_SceneColor = 0,
        PPI_SceneDepth = 1,
        PPI_DiffuseColor = 2,
        PPI_SpecularColor = 3,
        PPI_SubsurfaceColor = 4,
        PPI_BaseColor = 5,
        PPI_Specular = 6,
        PPI_Metallic = 7,
        PPI_WorldNormal = 8,
        PPI_SeparateTranslucency = 9,
        PPI_Opacity = 10,
        PPI_Roughness = 11,
        PPI_MaterialAO = 12,
        PPI_CustomDepth = 13,
        PPI_PostProcessInput0 = 14,
        PPI_PostProcessInput1 = 15,
        PPI_PostProcessInput2 = 16,
        PPI_PostProcessInput3 = 17,
        PPI_PostProcessInput4 = 18,
        PPI_PostProcessInput5 = 19,
        PPI_PostProcessInput6 = 20,
        PPI_DecalMask = 21,
        PPI_ShadingModelColor = 22,
        PPI_ShadingModelID = 23,
        PPI_AmbientOcclusion = 24,
        PPI_CustomStencil = 25,
        PPI_StoredBaseColor = 26,
        PPI_StoredSpecular = 27,
        PPI_Velocity = 28,
        PPI_WorldTangent = 29,
        PPI_Anisotropy = 30,
        PPI_PersistentSceneColor = 31,
        PPI_MAX = 32
    };

    enum class EMaterialDomain : uint8_t //Enum Engine.EMaterialDomain
    {
        MD_Surface = 0,
        MD_DeferredDecal = 1,
        MD_LightFunction = 2,
        MD_Volume = 3,
        MD_PostProcess = 4,
        MD_UI = 5,
        MD_RuntimeVirtualTexture = 6,
        MD_MAX = 7
    };

    enum class EMeshInstancingReplacementMethod : uint8_t //Enum Engine.EMeshInstancingReplacementMethod
    {
        RemoveOriginalActors = 0,
        KeepOriginalActorsAsEditorOnly = 1,
        EMeshInstancingReplacementMethod_MAX = 2
    };

    enum class EUVOutput : uint8_t //Enum Engine.EUVOutput
    {
        DoNotOutputChannel = 0,
        OutputChannel = 1,
        EUVOutput_MAX = 2
    };

    enum class EMeshMergeType : uint8_t //Enum Engine.EMeshMergeType
    {
        MeshMergeType_Default = 0,
        MeshMergeType_MergeActor = 1,
        MeshMergeType_MAX = 2
    };

    enum class EMeshLODSelectionType : uint8_t //Enum Engine.EMeshLODSelectionType
    {
        AllLODs = 0,
        SpecificLOD = 1,
        CalculateLOD = 2,
        LowestDetailLOD = 3,
        EMeshLODSelectionType_MAX = 4
    };

    enum class EProxyNormalComputationMethod : uint8_t //Enum Engine.EProxyNormalComputationMethod
    {
        AngleWeighted = 0,
        AreaWeighted = 1,
        EqualWeighted = 2,
        EProxyNormalComputationMethod_MAX = 3
    };

    enum class ELandscapeCullingPrecision : uint8_t //Enum Engine.ELandscapeCullingPrecision
    {
        High = 0,
        Medium = 1,
        Low = 2,
        ELandscapeCullingPrecision_MAX = 3
    };

    enum class EStaticMeshReductionTerimationCriterion : uint8_t //Enum Engine.EStaticMeshReductionTerimationCriterion
    {
        Triangles = 0,
        Vertices = 1,
        Any = 2,
        EStaticMeshReductionTerimationCriterion_MAX = 3
    };

    enum class EMeshFeatureImportance : uint8_t //Enum Engine.EMeshFeatureImportance
    {
        Off = 0,
        Lowest = 1,
        Low = 2,
        Normal = 3,
        High = 4,
        Highest = 5,
        EMeshFeatureImportance_MAX = 6
    };

    enum class EVertexPaintAxis : uint8_t //Enum Engine.EVertexPaintAxis
    {
        X = 0,
        Y = 1,
        Z = 2,
        EVertexPaintAxis_MAX = 3
    };

    enum class EMicroTransactionResult : uint8_t //Enum Engine.EMicroTransactionResult
    {
        MTR_Succeeded = 0,
        MTR_Failed = 1,
        MTR_Canceled = 2,
        MTR_RestoredFromServer = 3,
        MTR_MAX = 4
    };

    enum class EMicroTransactionDelegate : uint8_t //Enum Engine.EMicroTransactionDelegate
    {
        MTD_PurchaseQueryComplete = 0,
        MTD_PurchaseComplete = 1,
        MTD_MAX = 2
    };

    enum class FNavigationSystemRunMode : uint8_t //Enum Engine.FNavigationSystemRunMode
    {
        InvalidMode = 0,
        GameMode = 1,
        EditorMode = 2,
        SimulationMode = 3,
        PIEMode = 4,
        InferFromWorldMode = 5,
        FNavigationSystemRunMode_MAX = 6
    };

    enum class ENavigationQueryResult : uint8_t //Enum Engine.ENavigationQueryResult
    {
        Invalid = 0,
        Error = 1,
        Fail = 2,
        Success = 3,
        ENavigationQueryResult_MAX = 4
    };

    enum class ENavPathEvent : uint8_t //Enum Engine.ENavPathEvent
    {
        Cleared = 0,
        NewPath = 1,
        UpdatedDueToGoalMoved = 2,
        UpdatedDueToNavigationChanged = 3,
        Invalidated = 4,
        RePathFailed = 5,
        MetaPathUpdate = 6,
        Custom = 7,
        ENavPathEvent_MAX = 8
    };

    enum class ENavDataGatheringModeConfig : uint8_t //Enum Engine.ENavDataGatheringModeConfig
    {
        Invalid = 0,
        Instant = 1,
        Lazy = 2,
        ENavDataGatheringModeConfig_MAX = 3
    };

    enum class ENavDataGatheringMode : uint8_t //Enum Engine.ENavDataGatheringMode
    {
        Default = 0,
        Instant = 1,
        Lazy = 2,
        ENavDataGatheringMode_MAX = 3
    };

    enum class ENavigationOptionFlag : uint8_t //Enum Engine.ENavigationOptionFlag
    {
        Default = 0,
        Enable = 1,
        Disable = 2,
        MAX = 3
    };

    enum class ENavLinkDirection : uint8_t //Enum Engine.ENavLinkDirection
    {
        BothWays = 0,
        LeftToRight = 1,
        RightToLeft = 2,
        ENavLinkDirection_MAX = 3
    };

    enum class EEmitterRenderMode : uint8_t //Enum Engine.EEmitterRenderMode
    {
        ERM_Normal = 0,
        ERM_Point = 1,
        ERM_Cross = 2,
        ERM_LightsOnly = 3,
        ERM_None = 4,
        ERM_MAX = 5
    };

    enum class EParticleSubUVInterpMethod : uint8_t //Enum Engine.EParticleSubUVInterpMethod
    {
        PSUVIM_None = 0,
        PSUVIM_Linear = 1,
        PSUVIM_Linear_Blend = 2,
        PSUVIM_Random = 3,
        PSUVIM_Random_Blend = 4,
        PSUVIM_MAX = 5
    };

    enum class EParticleBurstMethod : uint8_t //Enum Engine.EParticleBurstMethod
    {
        EPBM_Instant = 0,
        EPBM_Interpolated = 1,
        EPBM_MAX = 2
    };

    enum class EParticleSystemInsignificanceReaction : uint8_t //Enum Engine.EParticleSystemInsignificanceReaction
    {
        Auto = 0,
        Complete = 1,
        DisableTick = 2,
        DisableTickAndKill = 3,
        Num = 4,
        EParticleSystemInsignificanceReaction_MAX = 5
    };

    enum class EParticleSignificanceLevel : uint8_t //Enum Engine.EParticleSignificanceLevel
    {
        Low = 0,
        Medium = 1,
        High = 2,
        Critical = 3,
        Num = 4,
        EParticleSignificanceLevel_MAX = 5
    };

    enum class EParticleDetailMode : uint8_t //Enum Engine.EParticleDetailMode
    {
        PDM_Low = 0,
        PDM_Medium = 1,
        PDM_High = 2,
        PDM_MAX = 3
    };

    enum class EParticleSourceSelectionMethod : uint8_t //Enum Engine.EParticleSourceSelectionMethod
    {
        EPSSM_Random = 0,
        EPSSM_Sequential = 1,
        EPSSM_MAX = 2
    };

    enum class EModuleType : uint8_t //Enum Engine.EModuleType
    {
        EPMT_General = 0,
        EPMT_TypeData = 1,
        EPMT_Beam = 2,
        EPMT_Trail = 3,
        EPMT_Spawn = 4,
        EPMT_Required = 5,
        EPMT_Event = 6,
        EPMT_Light = 7,
        EPMT_SubUV = 8,
        EPMT_MAX = 9
    };

    enum class EAttractorParticleSelectionMethod : uint8_t //Enum Engine.EAttractorParticleSelectionMethod
    {
        EAPSM_Random = 0,
        EAPSM_Sequential = 1,
        EAPSM_MAX = 2
    };

    enum class Beam2SourceTargetTangentMethod : uint8_t //Enum Engine.Beam2SourceTargetTangentMethod
    {
        PEB2STTM_Direct = 0,
        PEB2STTM_UserSet = 1,
        PEB2STTM_Distribution = 2,
        PEB2STTM_Emitter = 3,
        PEB2STTM_MAX = 4
    };

    enum class Beam2SourceTargetMethod : uint8_t //Enum Engine.Beam2SourceTargetMethod
    {
        PEB2STM_Default = 0,
        PEB2STM_UserSet = 1,
        PEB2STM_Emitter = 2,
        PEB2STM_Particle = 3,
        PEB2STM_Actor = 4,
        PEB2STM_MAX = 5
    };

    enum class BeamModifierType : uint8_t //Enum Engine.BeamModifierType
    {
        PEB2MT_Source = 0,
        PEB2MT_Target = 1,
        PEB2MT_MAX = 2
    };

    enum class EParticleCameraOffsetUpdateMethod : uint8_t //Enum Engine.EParticleCameraOffsetUpdateMethod
    {
        EPCOUM_DirectSet = 0,
        EPCOUM_Additive = 1,
        EPCOUM_Scalar = 2,
        EPCOUM_MAX = 3
    };

    enum class EParticleCollisionComplete : uint8_t //Enum Engine.EParticleCollisionComplete
    {
        EPCC_Kill = 0,
        EPCC_Freeze = 1,
        EPCC_HaltCollisions = 2,
        EPCC_FreezeTranslation = 3,
        EPCC_FreezeRotation = 4,
        EPCC_FreezeMovement = 5,
        EPCC_MAX = 6
    };

    enum class EParticleCollisionResponse : uint8_t //Enum Engine.EParticleCollisionResponse
    {
        Bounce = 0,
        Stop = 1,
        Kill = 2,
        EParticleCollisionResponse_MAX = 3
    };

    enum class ELocationBoneSocketSelectionMethod : uint8_t //Enum Engine.ELocationBoneSocketSelectionMethod
    {
        BONESOCKETSEL_Sequential = 0,
        BONESOCKETSEL_Random = 1,
        BONESOCKETSEL_MAX = 2
    };

    enum class ELocationBoneSocketSource : uint8_t //Enum Engine.ELocationBoneSocketSource
    {
        BONESOCKETSOURCE_Bones = 0,
        BONESOCKETSOURCE_Sockets = 1,
        BONESOCKETSOURCE_MAX = 2
    };

    enum class ELocationEmitterSelectionMethod : uint8_t //Enum Engine.ELocationEmitterSelectionMethod
    {
        ELESM_Random = 0,
        ELESM_Sequential = 1,
        ELESM_MAX = 2
    };

    enum class CylinderHeightAxis : uint8_t //Enum Engine.CylinderHeightAxis
    {
        PMLPC_HEIGHTAXIS_X = 0,
        PMLPC_HEIGHTAXIS_Y = 1,
        PMLPC_HEIGHTAXIS_Z = 2,
        PMLPC_HEIGHTAXIS_MAX = 3
    };

    enum class ELocationSkelVertSurfaceSource : uint8_t //Enum Engine.ELocationSkelVertSurfaceSource
    {
        VERTSURFACESOURCE_Vert = 0,
        VERTSURFACESOURCE_Surface = 1,
        VERTSURFACESOURCE_MAX = 2
    };

    enum class EOrbitChainMode : uint8_t //Enum Engine.EOrbitChainMode
    {
        EOChainMode_Add = 0,
        EOChainMode_Scale = 1,
        EOChainMode_Link = 2,
        EOChainMode_MAX = 3
    };

    enum class EParticleAxisLock : uint8_t //Enum Engine.EParticleAxisLock
    {
        EPAL_NONE = 0,
        EPAL_X = 1,
        EPAL_Y = 2,
        EPAL_Z = 3,
        EPAL_NEGATIVE_X = 4,
        EPAL_NEGATIVE_Y = 5,
        EPAL_NEGATIVE_Z = 6,
        EPAL_ROTATE_X = 7,
        EPAL_ROTATE_Y = 8,
        EPAL_ROTATE_Z = 9,
        EPAL_MAX = 10
    };

    enum class EEmitterDynamicParameterValue : uint8_t //Enum Engine.EEmitterDynamicParameterValue
    {
        EDPV_UserSet = 0,
        EDPV_AutoSet = 1,
        EDPV_VelocityX = 2,
        EDPV_VelocityY = 3,
        EDPV_VelocityZ = 4,
        EDPV_VelocityMag = 5,
        EDPV_MAX = 6
    };

    enum class EEmitterNormalsMode : uint8_t //Enum Engine.EEmitterNormalsMode
    {
        ENM_CameraFacing = 0,
        ENM_Spherical = 1,
        ENM_Cylindrical = 2,
        ENM_MAX = 3
    };

    enum class EParticleSortMode : uint8_t //Enum Engine.EParticleSortMode
    {
        PSORTMODE_None = 0,
        PSORTMODE_ViewProjDepth = 1,
        PSORTMODE_DistanceToView = 2,
        PSORTMODE_Age_OldestFirst = 3,
        PSORTMODE_Age_NewestFirst = 4,
        PSORTMODE_MAX = 5
    };

    enum class EParticleUVFlipMode : uint8_t //Enum Engine.EParticleUVFlipMode
    {
        None = 0,
        FlipUV = 1,
        FlipUOnly = 2,
        FlipVOnly = 3,
        RandomFlipUV = 4,
        RandomFlipUOnly = 5,
        RandomFlipVOnly = 6,
        RandomFlipUVIndependent = 7,
        EParticleUVFlipMode_MAX = 8
    };

    enum class ETrail2SourceMethod : uint8_t //Enum Engine.ETrail2SourceMethod
    {
        PET2SRCM_Default = 0,
        PET2SRCM_Particle = 1,
        PET2SRCM_Actor = 2,
        PET2SRCM_MAX = 3
    };

    enum class EBeamTaperMethod : uint8_t //Enum Engine.EBeamTaperMethod
    {
        PEBTM_None = 0,
        PEBTM_Full = 1,
        PEBTM_Partial = 2,
        PEBTM_MAX = 3
    };

    enum class EBeam2Method : uint8_t //Enum Engine.EBeam2Method
    {
        PEB2M_Distance = 0,
        PEB2M_Target = 1,
        PEB2M_Branch = 2,
        PEB2M_MAX = 3
    };

    enum class EMeshCameraFacingOptions : uint8_t //Enum Engine.EMeshCameraFacingOptions
    {
        XAxisFacing_NoUp = 0,
        XAxisFacing_ZUp = 1,
        XAxisFacing_NegativeZUp = 2,
        XAxisFacing_YUp = 3,
        XAxisFacing_NegativeYUp = 4,
        LockedAxis_ZAxisFacing = 5,
        LockedAxis_NegativeZAxisFacing = 6,
        LockedAxis_YAxisFacing = 7,
        LockedAxis_NegativeYAxisFacing = 8,
        VelocityAligned_ZAxisFacing = 9,
        VelocityAligned_NegativeZAxisFacing = 10,
        VelocityAligned_YAxisFacing = 11,
        VelocityAligned_NegativeYAxisFacing = 12,
        EMeshCameraFacingOptions_MAX = 13
    };

    enum class EMeshCameraFacingUpAxis : uint8_t //Enum Engine.EMeshCameraFacingUpAxis
    {
        CameraFacing_NoneUP = 0,
        CameraFacing_ZUp = 1,
        CameraFacing_NegativeZUp = 2,
        CameraFacing_YUp = 3,
        CameraFacing_NegativeYUp = 4,
        CameraFacing_MAX = 5
    };

    enum class EMeshScreenAlignment : uint8_t //Enum Engine.EMeshScreenAlignment
    {
        PSMA_MeshFaceCameraWithRoll = 0,
        PSMA_MeshFaceCameraWithSpin = 1,
        PSMA_MeshFaceCameraWithLockedAxis = 2,
        PSMA_MAX = 3
    };

    enum class ETrailsRenderAxisOption : uint8_t //Enum Engine.ETrailsRenderAxisOption
    {
        Trails_CameraUp = 0,
        Trails_SourceUp = 1,
        Trails_WorldUp = 2,
        Trails_MAX = 3
    };

    enum class EParticleScreenAlignment : uint8_t //Enum Engine.EParticleScreenAlignment
    {
        PSA_FacingCameraPosition = 0,
        PSA_Square = 1,
        PSA_Rectangle = 2,
        PSA_Velocity = 3,
        PSA_AwayFromCenter = 4,
        PSA_TypeSpecific = 5,
        PSA_FacingCameraDistanceBlend = 6,
        PSA_MAX = 7
    };

    enum class EParticleSystemOcclusionBoundsMethod : uint8_t //Enum Engine.EParticleSystemOcclusionBoundsMethod
    {
        EPSOBM_None = 0,
        EPSOBM_ParticleBounds = 1,
        EPSOBM_CustomBounds = 2,
        EPSOBM_MAX = 3
    };

    enum class ParticleSystemLODMethod : uint8_t //Enum Engine.ParticleSystemLODMethod
    {
        PARTICLESYSTEMLODMETHOD_Automatic = 0,
        PARTICLESYSTEMLODMETHOD_DirectSet = 1,
        PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
        PARTICLESYSTEMLODMETHOD_MAX = 3
    };

    enum class EParticleSystemUpdateMode : uint8_t //Enum Engine.EParticleSystemUpdateMode
    {
        EPSUM_RealTime = 0,
        EPSUM_FixedTime = 1,
        EPSUM_MAX = 2
    };

    enum class EParticleEventType : uint8_t //Enum Engine.EParticleEventType
    {
        EPET_Any = 0,
        EPET_Spawn = 1,
        EPET_Death = 2,
        EPET_Collision = 3,
        EPET_Burst = 4,
        EPET_Blueprint = 5,
        EPET_MAX = 6
    };

    enum class ParticleReplayState : uint8_t //Enum Engine.ParticleReplayState
    {
        PRS_Disabled = 0,
        PRS_Capturing = 1,
        PRS_Replaying = 2,
        PRS_MAX = 3
    };

    enum class EParticleSysParamType : uint8_t //Enum Engine.EParticleSysParamType
    {
        PSPT_None = 0,
        PSPT_Scalar = 1,
        PSPT_ScalarRand = 2,
        PSPT_Vector = 3,
        PSPT_VectorRand = 4,
        PSPT_Color = 5,
        PSPT_Actor = 6,
        PSPT_Material = 7,
        PSPT_VectorUnitRand = 8,
        PSPT_MAX = 9
    };

    enum class ESettingsLockedAxis : uint8_t //Enum Engine.ESettingsLockedAxis
    {
        None = 0,
        X = 1,
        Y = 2,
        Z = 3,
        Invalid = 4,
        ESettingsLockedAxis_MAX = 5
    };

    enum class ESettingsDOF : uint8_t //Enum Engine.ESettingsDOF
    {
        Full3D = 0,
        YZPlane = 1,
        XZPlane = 2,
        XYPlane = 3,
        ESettingsDOF_MAX = 4
    };

    enum class ERendererStencilMask : uint8_t //Enum Engine.ERendererStencilMask
    {
        ERSM_Default = 0,
        ERSM_256 = 1,
        ERSM_2 = 2,
        ERSM_3 = 3,
        ERSM_5 = 4,
        ERSM_9 = 5,
        ERSM_17 = 6,
        ERSM_33 = 7,
        ERSM_65 = 8,
        ERSM_129 = 9,
        ERSM_MAX = 10
    };

    enum class EHasCustomNavigableGeometry : uint8_t //Enum Engine.EHasCustomNavigableGeometry
    {
        No = 0,
        Yes = 1,
        EvenIfNotCollidable = 2,
        DontExport = 3,
        EHasCustomNavigableGeometry_MAX = 4
    };

    enum class ECanBeCharacterBase : uint8_t //Enum Engine.ECanBeCharacterBase
    {
        ECB_No = 0,
        ECB_Yes = 1,
        ECB_Owner = 2,
        ECB_MAX = 3
    };

    enum class EInteriorPortalShapeType : uint8_t //Enum Engine.EInteriorPortalShapeType
    {
        Cube = 0,
        Door = 1,
        EInteriorPortalShapeType_MAX = 2
    };

    enum class EInteriorPortalType : uint8_t //Enum Engine.EInteriorPortalType
    {
        None = 0,
        CrossTwoInteriorVolumes = 1,
        CrossInteriorAndExterior = 2,
        ApplyPositionBias = 3,
        ApplyTwoSiedPositionBias = 4,
        EInteriorPortalType_MAX = 5
    };

    enum class EQuarztQuantizationReference : uint8_t //Enum Engine.EQuarztQuantizationReference
    {
        BarRelative = 0,
        TransportRelative = 1,
        CurrentTimeRelative = 2,
        Count = 3,
        EQuarztQuantizationReference_MAX = 4
    };

    enum class EQuartzDelegateType : uint8_t //Enum Engine.EQuartzDelegateType
    {
        MetronomeTick = 0,
        CommandEvent = 1,
        Count = 2,
        EQuartzDelegateType_MAX = 3
    };

    enum class EQuartzTimeSignatureQuantization : uint8_t //Enum Engine.EQuartzTimeSignatureQuantization
    {
        HalfNote = 0,
        QuarterNote = 1,
        EighthNote = 2,
        SixteenthNote = 3,
        ThirtySecondNote = 4,
        Count = 5,
        EQuartzTimeSignatureQuantization_MAX = 6
    };

    enum class ERichCurveExtrapolation : uint8_t //Enum Engine.ERichCurveExtrapolation
    {
        RCCE_Cycle = 0,
        RCCE_CycleWithOffset = 1,
        RCCE_Oscillate = 2,
        RCCE_Linear = 3,
        RCCE_Constant = 4,
        RCCE_None = 5,
        RCCE_MAX = 6
    };

    enum class ERichCurveInterpMode : uint8_t //Enum Engine.ERichCurveInterpMode
    {
        RCIM_Linear = 0,
        RCIM_Constant = 1,
        RCIM_Cubic = 2,
        RCIM_None = 3,
        RCIM_MAX = 4
    };

    enum class EMobileReflectionCompression : uint8_t //Enum Engine.EMobileReflectionCompression
    {
        Default = 0,
        On = 1,
        Off = 2,
        EMobileReflectionCompression_MAX = 3
    };

    enum class EReflectionSourceType : uint8_t //Enum Engine.EReflectionSourceType
    {
        CapturedScene = 0,
        SpecifiedCubemap = 1,
        ComputeData = 2,
        EReflectionSourceType_MAX = 3
    };

    enum class ESkyNormalizationMethod : uint8_t //Enum Engine.ESkyNormalizationMethod
    {
        SNM_Default = 0,
        SNM_BaseOnDiffuseSH = 1,
        SNM_Condition = 2,
        SNM_GOW = 3,
        SNM_MAX = 4
    };

    enum class EDirLightShadowBiasMethod : uint8_t //Enum Engine.EDirLightShadowBiasMethod
    {
        DLSBM_Default = 0,
        DLSBM_Receiver = 1,
        DLSBM_MAX = 2
    };

    enum class EDefaultBackBufferPixelFormat : uint8_t //Enum Engine.EDefaultBackBufferPixelFormat
    {
        DBBPF_B8G8R8A8 = 0,
        DBBPF_A16B16G16R16_DEPRECATED = 1,
        DBBPF_FloatRGB_DEPRECATED = 2,
        DBBPF_FloatRGBA = 3,
        DBBPF_A2B10G10R10 = 4,
        DBBPF_MAX = 5
    };

    enum class EAutoExposureMethodUI : uint8_t //Enum Engine.EAutoExposureMethodUI
    {
        AEM_Histogram = 0,
        AEM_Basic = 1,
        AEM_Manual = 2,
        AEM_MAX = 3
    };

    enum class EAlphaChannelMode : uint8_t //Enum Engine.EAlphaChannelMode
    {
        Disabled = 0,
        LinearColorSpaceOnly = 1,
        AllowThroughTonemapper = 2,
        EAlphaChannelMode_MAX = 3
    };

    enum class EEarlyZPass : uint8_t //Enum Engine.EEarlyZPass
    {
        None = 0,
        OpaqueOnly = 1,
        OpaqueAndMasked = 2,
        Auto = 3,
        EEarlyZPass_MAX = 4
    };

    enum class ECustomDepthStencil : uint8_t //Enum Engine.ECustomDepthStencil
    {
        Disabled = 0,
        Enabled = 1,
        EnabledOnDemand = 2,
        EnabledWithStencil = 3,
        ECustomDepthStencil_MAX = 4
    };

    enum class EMobileMSAASampleCount : uint8_t //Enum Engine.EMobileMSAASampleCount
    {
        One = 1,
        Two = 2,
        Four = 4,
        Eight = 8,
        EMobileMSAASampleCount_MAX = 9
    };

    enum class ECompositingSampleCount : uint8_t //Enum Engine.ECompositingSampleCount
    {
        One = 1,
        Two = 2,
        Four = 4,
        Eight = 8,
        ECompositingSampleCount_MAX = 9
    };

    enum class EClearSceneOptions : uint8_t //Enum Engine.EClearSceneOptions
    {
        NoClear = 0,
        HardwareClear = 1,
        QuadAtMaxZ = 2,
        EClearSceneOptions_MAX = 3
    };

    enum class EReporterLineStyle : uint8_t //Enum Engine.EReporterLineStyle
    {
        Line = 0,
        Dash = 1,
        EReporterLineStyle_MAX = 2
    };

    enum class ELegendPosition : uint8_t //Enum Engine.ELegendPosition
    {
        Outside = 0,
        Inside = 1,
        ELegendPosition_MAX = 2
    };

    enum class EGraphDataStyle : uint8_t //Enum Engine.EGraphDataStyle
    {
        Lines = 0,
        Filled = 1,
        EGraphDataStyle_MAX = 2
    };

    enum class EGraphAxisStyle : uint8_t //Enum Engine.EGraphAxisStyle
    {
        Lines = 0,
        Notches = 1,
        Grid = 2,
        EGraphAxisStyle_MAX = 3
    };

    enum class ReverbPreset : uint8_t //Enum Engine.ReverbPreset
    {
        REVERB_Default = 0,
        REVERB_Bathroom = 1,
        REVERB_StoneRoom = 2,
        REVERB_Auditorium = 3,
        REVERB_ConcertHall = 4,
        REVERB_Cave = 5,
        REVERB_Hallway = 6,
        REVERB_StoneCorridor = 7,
        REVERB_Alley = 8,
        REVERB_Forest = 9,
        REVERB_City = 10,
        REVERB_Mountains = 11,
        REVERB_Quarry = 12,
        REVERB_Plain = 13,
        REVERB_ParkingLot = 14,
        REVERB_SewerPipe = 15,
        REVERB_Underwater = 16,
        REVERB_SmallRoom = 17,
        REVERB_MediumRoom = 18,
        REVERB_LargeRoom = 19,
        REVERB_MediumHall = 20,
        REVERB_LargeHall = 21,
        REVERB_Plate = 22,
        REVERB_MAX = 23
    };

    enum class ERichCurveKeyTimeCompressionFormat : uint8_t //Enum Engine.ERichCurveKeyTimeCompressionFormat
    {
        RCKTCF_uint16 = 0,
        RCKTCF_float32 = 1,
        RCKTCF_MAX = 2
    };

    enum class ERichCurveCompressionFormat : uint8_t //Enum Engine.ERichCurveCompressionFormat
    {
        RCCF_Empty = 0,
        RCCF_Constant = 1,
        RCCF_Linear = 2,
        RCCF_Cubic = 3,
        RCCF_Mixed = 4,
        RCCF_Weighted = 5,
        RCCF_MAX = 6
    };

    enum class ERichCurveTangentWeightMode : uint8_t //Enum Engine.ERichCurveTangentWeightMode
    {
        RCTWM_WeightedNone = 0,
        RCTWM_WeightedArrive = 1,
        RCTWM_WeightedLeave = 2,
        RCTWM_WeightedBoth = 3,
        RCTWM_MAX = 4
    };

    enum class ERichCurveTangentMode : uint8_t //Enum Engine.ERichCurveTangentMode
    {
        RCTM_Auto = 0,
        RCTM_User = 1,
        RCTM_Break = 2,
        RCTM_None = 3,
        RCTM_MAX = 4
    };

    enum class EConstraintTransform : uint8_t //Enum Engine.EConstraintTransform
    {
        Absolute = 0,
        Relative = 1,
        EConstraintTransform_MAX = 2
    };

    enum class EControlConstraint : uint8_t //Enum Engine.EControlConstraint
    {
        Orientation = 0,
        Translation = 1,
        MAX = 2
    };

    enum class ERootMotionFinishVelocityMode : uint8_t //Enum Engine.ERootMotionFinishVelocityMode
    {
        MaintainLastRootMotionVelocity = 0,
        SetVelocity = 1,
        ClampVelocity = 2,
        ERootMotionFinishVelocityMode_MAX = 3
    };

    enum class ERootMotionSourceSettingsFlags : uint8_t //Enum Engine.ERootMotionSourceSettingsFlags
    {
        UseSensitiveLiftoffCheck = 1,
        DisablePartialEndTick = 2,
        IgnoreZAccumulate = 4,
        ERootMotionSourceSettingsFlags_MAX = 5
    };

    enum class ERootMotionSourceStatusFlags : uint8_t //Enum Engine.ERootMotionSourceStatusFlags
    {
        Prepared = 1,
        Finished = 2,
        MarkedForRemoval = 4,
        ERootMotionSourceStatusFlags_MAX = 5
    };

    enum class ERootMotionAccumulateMode : uint8_t //Enum Engine.ERootMotionAccumulateMode
    {
        Override = 0,
        Additive = 1,
        ERootMotionAccumulateMode_MAX = 2
    };

    enum class ERuntimeVirtualTextureMainPassType : uint8_t //Enum Engine.ERuntimeVirtualTextureMainPassType
    {
        Never = 0,
        Exclusive = 1,
        Always = 2,
        ERuntimeVirtualTextureMainPassType_MAX = 3
    };

    enum class ERuntimeVirtualTextureMaterialType : uint8_t //Enum Engine.ERuntimeVirtualTextureMaterialType
    {
        BaseColor = 0,
        BaseColor_Normal_DEPRECATED = 1,
        BaseColor_Normal_Specular = 2,
        BaseColor_Normal_Specular_YCoCg = 3,
        BaseColor_Normal_Specular_Mask_YCoCg = 4,
        WorldHeight = 5,
        BaseColor_Normal_Specular_WorldHeight = 6,
        Count = 7,
        ERuntimeVirtualTextureMaterialType_MAX = 8
    };

    enum class EMobilePlanarReflectionUsage : uint8_t //Enum Engine.EMobilePlanarReflectionUsage
    {
        Both = 0,
        PixelProjectedReflectionOnly = 1,
        EMobilePlanarReflectionUsage_MAX = 2
    };

    enum class EMobilePixelProjectedReflectionQuality : uint8_t //Enum Engine.EMobilePixelProjectedReflectionQuality
    {
        Disabled = 0,
        BestPerformance = 1,
        BetterQuality = 2,
        BestQuality = 3,
        EMobilePixelProjectedReflectionQuality_MAX = 4
    };

    enum class EMobilePlanarReflectionMode : uint8_t //Enum Engine.EMobilePlanarReflectionMode
    {
        Usual = 0,
        MobilePPRExclusive = 1,
        MobilePPR = 2,
        EMobilePlanarReflectionMode_MAX = 3
    };

    enum class EReflectedAndRefractedRayTracedShadows : uint8_t //Enum Engine.EReflectedAndRefractedRayTracedShadows
    {
        Disabled = 0,
        Hard_shadows = 1,
        Area_shadows = 2,
        EReflectedAndRefractedRayTracedShadows_MAX = 3
    };

    enum class ERayTracingGlobalIlluminationType : uint8_t //Enum Engine.ERayTracingGlobalIlluminationType
    {
        Disabled = 0,
        BruteForce = 1,
        FinalGather = 2,
        ERayTracingGlobalIlluminationType_MAX = 3
    };

    enum class ETranslucencyType : uint8_t //Enum Engine.ETranslucencyType
    {
        Raster = 0,
        RayTracing = 1,
        ETranslucencyType_MAX = 2
    };

    enum class EReflectionsType : uint8_t //Enum Engine.EReflectionsType
    {
        ScreenSpace = 0,
        RayTracing = 1,
        EReflectionsType_MAX = 2
    };

    enum class ELightUnits : uint8_t //Enum Engine.ELightUnits
    {
        Unitless = 0,
        Candelas = 1,
        Lumens = 2,
        ELightUnits_MAX = 3
    };

    enum class EBloomMethod : uint8_t //Enum Engine.EBloomMethod
    {
        BM_SOG = 0,
        BM_FFT = 1,
        BM_MAX = 2
    };

    enum class EAutoExposureMethod : uint8_t //Enum Engine.EAutoExposureMethod
    {
        AEM_Histogram = 0,
        AEM_Basic = 1,
        AEM_Manual = 2,
        AEM_MAX = 3
    };

    enum class EAntiAliasingMethod : uint8_t //Enum Engine.EAntiAliasingMethod
    {
        AAM_None = 0,
        AAM_FXAA = 1,
        AAM_TemporalAA = 2,
        AAM_MSAA = 3,
        AAM_SMAA = 4,
        AAM_MAX = 5
    };

    enum class EDepthOfFieldMethod : uint8_t //Enum Engine.EDepthOfFieldMethod
    {
        DOFM_BokehDOF = 0,
        DOFM_Gaussian = 1,
        DOFM_CircleDOF = 2,
        DOFM_MAX = 3
    };

    enum class ESceneCapturePrimitiveRenderMode : uint8_t //Enum Engine.ESceneCapturePrimitiveRenderMode
    {
        PRM_LegacySceneCapture = 0,
        PRM_RenderScenePrimitives = 1,
        PRM_UseShowOnlyList = 2,
        PRM_MAX = 3
    };

    enum class EMaterialProperty : uint8_t //Enum Engine.EMaterialProperty
    {
        MP_EmissiveColor = 0,
        MP_Opacity = 1,
        MP_OpacityMask = 2,
        MP_DiffuseColor = 3,
        MP_SpecularColor = 4,
        MP_BaseColor = 5,
        MP_Metallic = 6,
        MP_Specular = 7,
        MP_Roughness = 8,
        MP_Anisotropy = 9,
        MP_Normal = 10,
        MP_Tangent = 11,
        MP_WorldPositionOffset = 12,
        MP_WorldDisplacement = 13,
        MP_TessellationMultiplier = 14,
        MP_SubsurfaceColor = 15,
        MP_CustomData0 = 16,
        MP_CustomData1 = 17,
        MP_AmbientOcclusion = 18,
        MP_Refraction = 19,
        MP_CustomizedUVs0 = 20,
        MP_CustomizedUVs1 = 21,
        MP_CustomizedUVs2 = 22,
        MP_CustomizedUVs3 = 23,
        MP_CustomizedUVs4 = 24,
        MP_CustomizedUVs5 = 25,
        MP_CustomizedUVs6 = 26,
        MP_CustomizedUVs7 = 27,
        MP_PixelDepthOffset = 28,
        MP_ShadingModel = 29,
        MP_CustomDataVector0 = 30,
        MP_CustomDataVector1 = 31,
        MP_CustomDataVector2 = 32,
        MP_CustomDataVector3 = 33,
        MP_CustomDataVector4 = 34,
        MP_CustomDataVector5 = 35,
        MP_CustomDataVector6 = 36,
        MP_CustomDataVector7 = 37,
        MP_MaterialAttributes = 38,
        MP_CustomOutput = 39,
        MP_MAX = 40
    };

    enum class EMaterialDynamicMode : uint8_t //Enum Engine.EMaterialDynamicMode
    {
        EMDM_Default = 0,
        EMDM_FirstPerson = 1,
        EMDM_SimpleLandscape = 2,
        EMDM_Count = 3,
        EMDM_MAX = 4
    };

    enum class EShadowCaptureLayer : uint8_t //Enum Engine.EShadowCaptureLayer
    {
        Default = 0,
        Character = 1,
        Foliage = 2,
        Grass = 3,
        ShadowCaptureCustomLayer0 = 4,
        ShadowCaptureCustomLayer1 = 5,
        ShadowCaptureCustomLayer2 = 6,
        ShadowCaptureCustomLayer3 = 7,
        ShadowCaptureCustomLayer4 = 8,
        ShadowCaptureCustomLayer5 = 9,
        ShadowCaptureCustomLayer6 = 10,
        ShadowCaptureCustomLayer7 = 11,
        ShadowCaptureCustomLayer8 = 12,
        ShadowCaptureCustomLayer9 = 13,
        ShadowCaptureCustomLayer10 = 14,
        ShadowCaptureCustomLayer11 = 15,
        ShadowCaptureCustomLayer12 = 16,
        ShadowCaptureCustomLayer13 = 17,
        ShadowCaptureCustomLayer14 = 18,
        ShadowCaptureCustomLayer15 = 19,
        ShadowCaptureCustomLayer16 = 20,
        ShadowCaptureCustomLayer17 = 21,
        ShadowCaptureCustomLayer18 = 22,
        ShadowCaptureCustomLayer19 = 23,
        ShadowCaptureCustomLayer20 = 24,
        ShadowCaptureCustomLayer21 = 25,
        ShadowCaptureCustomLayer22 = 26,
        ShadowCaptureCustomLayer23 = 27,
        ShadowCaptureCustomLayer24 = 28,
        ShadowCaptureCustomLayer25 = 29,
        ShadowCaptureLayer_MAX = 30,
        EShadowCaptureLayer_MAX = 31
    };

    enum class ESkinCacheDefaultBehavior : uint8_t //Enum Engine.ESkinCacheDefaultBehavior
    {
        Exclusive = 0,
        Inclusive = 1,
        ESkinCacheDefaultBehavior_MAX = 2
    };

    enum class ESkinCacheUsage : uint32_t //Enum Engine.ESkinCacheUsage
    {
        Auto = 0,
        Disabled = 255,
        Enabled = 1,
        ESkinCacheUsage_MAX = 256
    };

    enum class EPhysicsTransformUpdateMode : uint8_t //Enum Engine.EPhysicsTransformUpdateMode
    {
        SimulationUpatesComponentTransform = 0,
        ComponentTransformIsKinematic = 1,
        EPhysicsTransformUpdateMode_MAX = 2
    };

    enum class EAnimationMode : uint8_t //Enum Engine.EAnimationMode
    {
        AnimationBlueprint = 0,
        AnimationSingleNode = 1,
        AnimationCustomMode = 2,
        EAnimationMode_MAX = 3
    };

    enum class EKinematicBonesUpdateToPhysics : uint8_t //Enum Engine.EKinematicBonesUpdateToPhysics
    {
        SkipSimulatingBones = 0,
        SkipAllBones = 1,
        EKinematicBonesUpdateToPhysics_MAX = 2
    };

    enum class ECustomBoneAttributeLookup : uint8_t //Enum Engine.ECustomBoneAttributeLookup
    {
        BoneOnly = 0,
        ImmediateParent = 1,
        ParentHierarchy = 2,
        ECustomBoneAttributeLookup_MAX = 3
    };

    enum class EClothMassMode : uint8_t //Enum Engine.EClothMassMode
    {
        UniformMass = 0,
        TotalMass = 1,
        Density = 2,
        MaxClothMassMode = 3,
        EClothMassMode_MAX = 4
    };

    enum class EAnimCurveType : uint8_t //Enum Engine.EAnimCurveType
    {
        AttributeCurve = 0,
        MaterialCurve = 1,
        MorphTargetCurve = 2,
        MaxAnimCurveType = 3,
        EAnimCurveType_MAX = 4
    };

    enum class ESkeletalMeshSkinningImportVersions : uint8_t //Enum Engine.ESkeletalMeshSkinningImportVersions
    {
        Before_Versionning = 0,
        SkeletalMeshBuildRefactor = 1,
        VersionPlusOne = 2,
        LatestVersion = 1,
        ESkeletalMeshSkinningImportVersions_MAX = 3
    };

    enum class ESkeletalMeshGeoImportVersions : uint8_t //Enum Engine.ESkeletalMeshGeoImportVersions
    {
        Before_Versionning = 0,
        SkeletalMeshBuildRefactor = 1,
        VersionPlusOne = 2,
        LatestVersion = 1,
        ESkeletalMeshGeoImportVersions_MAX = 3
    };

    enum class EBoneFilterActionOption : uint8_t //Enum Engine.EBoneFilterActionOption
    {
        Remove = 0,
        Keep = 1,
        Invalid = 2,
        EBoneFilterActionOption_MAX = 3
    };

    enum class SkeletalMeshOptimizationImportance : uint8_t //Enum Engine.SkeletalMeshOptimizationImportance
    {
        SMOI_Off = 0,
        SMOI_Lowest = 1,
        SMOI_Low = 2,
        SMOI_Normal = 3,
        SMOI_High = 4,
        SMOI_Highest = 5,
        SMOI_MAX = 6
    };

    enum class SkeletalMeshOptimizationType : uint8_t //Enum Engine.SkeletalMeshOptimizationType
    {
        SMOT_NumOfTriangles = 0,
        SMOT_MaxDeviation = 1,
        SMOT_TriangleOrDeviation = 2,
        SMOT_MAX = 3
    };

    enum class SkeletalMeshTerminationCriterion : uint8_t //Enum Engine.SkeletalMeshTerminationCriterion
    {
        SMTC_NumOfTriangles = 0,
        SMTC_NumOfVerts = 1,
        SMTC_TriangleOrVert = 2,
        SMTC_AbsNumOfTriangles = 3,
        SMTC_AbsNumOfVerts = 4,
        SMTC_AbsTriangleOrVert = 5,
        SMTC_MAX = 6
    };

    enum class EBoneTranslationRetargetingMode : uint8_t //Enum Engine.EBoneTranslationRetargetingMode
    {
        Animation = 0,
        Skeleton = 1,
        AnimationScaled = 2,
        AnimationRelative = 3,
        OrientAndScale = 4,
        EBoneTranslationRetargetingMode_MAX = 5
    };

    enum class EVertexOffsetUsageType : uint8_t //Enum Engine.EVertexOffsetUsageType
    {
        None = 0,
        PreSkinningOffset = 1,
        PostSkinningOffset = 2,
        EVertexOffsetUsageType_MAX = 3
    };

    enum class EBoneSpaces : uint8_t //Enum Engine.EBoneSpaces
    {
        WorldSpace = 0,
        ComponentSpace = 1,
        EBoneSpaces_MAX = 2
    };

    enum class EVisibilityBasedAnimTickOption : uint8_t //Enum Engine.EVisibilityBasedAnimTickOption
    {
        AlwaysTickPoseAndRefreshBones = 0,
        AlwaysTickPose = 1,
        OnlyTickMontagesWhenNotRendered = 2,
        OnlyTickPoseWhenRendered = 3,
        EVisibilityBasedAnimTickOption_MAX = 4
    };

    enum class EPhysBodyOp : uint8_t //Enum Engine.EPhysBodyOp
    {
        PBO_None = 0,
        PBO_Term = 1,
        PBO_MAX = 2
    };

    enum class EBoneVisibilityStatus : uint8_t //Enum Engine.EBoneVisibilityStatus
    {
        BVS_HiddenByParent = 0,
        BVS_Visible = 1,
        BVS_ExplicitlyHidden = 2,
        BVS_MAX = 3
    };

    enum class ESkyAtmosphereTransformMode : uint8_t //Enum Engine.ESkyAtmosphereTransformMode
    {
        PlanetTopAtAbsoluteWorldOrigin = 0,
        PlanetTopAtComponentTransform = 1,
        PlanetCenterAtComponentTransform = 2,
        ESkyAtmosphereTransformMode_MAX = 3
    };

    enum class ESkyLightSourceType : uint8_t //Enum Engine.ESkyLightSourceType
    {
        SLS_CapturedScene = 0,
        SLS_SpecifiedCubemap = 1,
        SLS_ComputedData = 2,
        SLS_MAX = 3
    };

    enum class EPriorityAttenuationMethod : uint8_t //Enum Engine.EPriorityAttenuationMethod
    {
        Linear = 0,
        CustomCurve = 1,
        Manual = 2,
        EPriorityAttenuationMethod_MAX = 3
    };

    enum class ESubmixSendMethod : uint8_t //Enum Engine.ESubmixSendMethod
    {
        Linear = 0,
        CustomCurve = 1,
        Manual = 2,
        ESubmixSendMethod_MAX = 3
    };

    enum class EReverbSendMethod : uint8_t //Enum Engine.EReverbSendMethod
    {
        Linear = 0,
        CustomCurve = 1,
        Manual = 2,
        EReverbSendMethod_MAX = 3
    };

    enum class EAirAbsorptionMethod : uint8_t //Enum Engine.EAirAbsorptionMethod
    {
        Linear = 0,
        CustomCurve = 1,
        EAirAbsorptionMethod_MAX = 2
    };

    enum class ESoundSpatializationAlgorithm : uint8_t //Enum Engine.ESoundSpatializationAlgorithm
    {
        SPATIALIZATION_Default = 0,
        SPATIALIZATION_HRTF = 1,
        SPATIALIZATION_MAX = 2
    };

    enum class ESoundDistanceCalc : uint8_t //Enum Engine.ESoundDistanceCalc
    {
        SOUNDDISTANCE_Normal = 0,
        SOUNDDISTANCE_InfiniteXYPlane = 1,
        SOUNDDISTANCE_InfiniteXZPlane = 2,
        SOUNDDISTANCE_InfiniteYZPlane = 3,
        SOUNDDISTANCE_MAX = 4
    };

    enum class EVirtualizationMode : uint8_t //Enum Engine.EVirtualizationMode
    {
        Disabled = 0,
        PlayWhenSilent = 1,
        Restart = 2,
        EVirtualizationMode_MAX = 3
    };

    enum class EConcurrencyVolumeScaleMode : uint8_t //Enum Engine.EConcurrencyVolumeScaleMode
    {
        Default = 0,
        Distance = 1,
        Priority = 2,
        EConcurrencyVolumeScaleMode_MAX = 3
    };

    enum class EMaxConcurrentResolutionRule : uint8_t //Enum Engine.EMaxConcurrentResolutionRule
    {
        PreventNew = 0,
        StopOldest = 1,
        StopFarthestThenPreventNew = 2,
        StopFarthestThenOldest = 3,
        StopLowestPriority = 4,
        StopQuietest = 5,
        StopLowestPriorityThenPreventNew = 6,
        Count = 7,
        EMaxConcurrentResolutionRule_MAX = 8
    };

    enum class ESoundGroup : uint8_t //Enum Engine.ESoundGroup
    {
        SOUNDGROUP_Default = 0,
        SOUNDGROUP_Effects = 1,
        SOUNDGROUP_UI = 2,
        SOUNDGROUP_Music = 3,
        SOUNDGROUP_Voice = 4,
        SOUNDGROUP_GameSoundGroup1 = 5,
        SOUNDGROUP_GameSoundGroup2 = 6,
        SOUNDGROUP_GameSoundGroup3 = 7,
        SOUNDGROUP_GameSoundGroup4 = 8,
        SOUNDGROUP_GameSoundGroup5 = 9,
        SOUNDGROUP_GameSoundGroup6 = 10,
        SOUNDGROUP_GameSoundGroup7 = 11,
        SOUNDGROUP_GameSoundGroup8 = 12,
        SOUNDGROUP_GameSoundGroup9 = 13,
        SOUNDGROUP_GameSoundGroup10 = 14,
        SOUNDGROUP_GameSoundGroup11 = 15,
        SOUNDGROUP_GameSoundGroup12 = 16,
        SOUNDGROUP_GameSoundGroup13 = 17,
        SOUNDGROUP_GameSoundGroup14 = 18,
        SOUNDGROUP_GameSoundGroup15 = 19,
        SOUNDGROUP_GameSoundGroup16 = 20,
        SOUNDGROUP_GameSoundGroup17 = 21,
        SOUNDGROUP_GameSoundGroup18 = 22,
        SOUNDGROUP_GameSoundGroup19 = 23,
        SOUNDGROUP_GameSoundGroup20 = 24,
        SOUNDGROUP_MAX = 25
    };

    enum class EModulationRouting : uint8_t //Enum Engine.EModulationRouting
    {
        Disable = 0,
        Inherit = 1,
        Override = 2,
        EModulationRouting_MAX = 3
    };

    enum class ModulationParamMode : uint8_t //Enum Engine.ModulationParamMode
    {
        MPM_Normal = 0,
        MPM_Abs = 1,
        MPM_Direct = 2,
        MPM_MAX = 3
    };

    enum class ESourceBusChannels : uint8_t //Enum Engine.ESourceBusChannels
    {
        Mono = 0,
        Stereo = 1,
        ESourceBusChannels_MAX = 2
    };

    enum class ESourceBusSendLevelControlMethod : uint8_t //Enum Engine.ESourceBusSendLevelControlMethod
    {
        Linear = 0,
        CustomCurve = 1,
        Manual = 2,
        ESourceBusSendLevelControlMethod_MAX = 3
    };

    enum class EGainParamMode : uint8_t //Enum Engine.EGainParamMode
    {
        Linear = 0,
        Decibels = 1,
        EGainParamMode_MAX = 2
    };

    enum class EAudioSpectrumType : uint8_t //Enum Engine.EAudioSpectrumType
    {
        MagnitudeSpectrum = 0,
        PowerSpectrum = 1,
        Decibel = 2,
        EAudioSpectrumType_MAX = 3
    };

    enum class EFFTWindowType : uint8_t //Enum Engine.EFFTWindowType
    {
        None = 0,
        Hamming = 1,
        Hann = 2,
        Blackman = 3,
        EFFTWindowType_MAX = 4
    };

    enum class EFFTPeakInterpolationMethod : uint8_t //Enum Engine.EFFTPeakInterpolationMethod
    {
        NearestNeighbor = 0,
        Linear = 1,
        Quadratic = 2,
        ConstantQ = 3,
        EFFTPeakInterpolationMethod_MAX = 4
    };

    enum class EFFTSize : uint8_t //Enum Engine.EFFTSize
    {
        DefaultSize = 0,
        Min = 1,
        Small = 2,
        Medium = 3,
        Large = 4,
        VeryLarge = 5,
        Max = 6
    };

    enum class ESubmixSendStage : uint8_t //Enum Engine.ESubmixSendStage
    {
        PostDistanceAttenuation = 0,
        PreDistanceAttenuation = 1,
        ESubmixSendStage_MAX = 2
    };

    enum class ESendLevelControlMethod : uint8_t //Enum Engine.ESendLevelControlMethod
    {
        Linear = 0,
        CustomCurve = 1,
        Manual = 2,
        ESendLevelControlMethod_MAX = 3
    };

    enum class EAudioRecordingExportType : uint8_t //Enum Engine.EAudioRecordingExportType
    {
        SoundWave = 0,
        WavFile = 1,
        EAudioRecordingExportType_MAX = 2
    };

    enum class EAudioSpectrumBandPresetType : uint8_t //Enum Engine.EAudioSpectrumBandPresetType
    {
        KickDrum = 0,
        SnareDrum = 1,
        Voice = 2,
        Cymbals = 3,
        EAudioSpectrumBandPresetType_MAX = 4
    };

    enum class ESoundWaveFFTSize : uint8_t //Enum Engine.ESoundWaveFFTSize
    {
        VerySmall_65 = 0,
        Small_257 = 1,
        Medium_513 = 2,
        Large_1025 = 3,
        VeryLarge_2049 = 4,
        ESoundWaveFFTSize_MAX = 5
    };

    enum class EDecompressionType : uint8_t //Enum Engine.EDecompressionType
    {
        DTYPE_Setup = 0,
        DTYPE_Invalid = 1,
        DTYPE_Preview = 2,
        DTYPE_Native = 3,
        DTYPE_RealTime = 4,
        DTYPE_Procedural = 5,
        DTYPE_Xenon = 6,
        DTYPE_Streaming = 7,
        DTYPE_MAX = 8
    };

    enum class ESoundWaveLoadingBehavior : uint32_t //Enum Engine.ESoundWaveLoadingBehavior
    {
        Inherited = 0,
        RetainOnLoad = 1,
        PrimeOnLoad = 2,
        LoadOnDemand = 3,
        ForceInline = 4,
        Uninitialized = 255,
        ESoundWaveLoadingBehavior_MAX = 256
    };

    enum class ESplineCoordinateSpace : uint8_t //Enum Engine.ESplineCoordinateSpace
    {
        Local = 0,
        World = 1,
        ESplineCoordinateSpace_MAX = 2
    };

    enum class ESplinePointType : uint8_t //Enum Engine.ESplinePointType
    {
        Linear = 0,
        Curve = 1,
        Constant = 2,
        CurveClamped = 3,
        CurveCustomTangent = 4,
        ESplinePointType_MAX = 5
    };

    enum class ESplineMeshAxis : uint8_t //Enum Engine.ESplineMeshAxis
    {
        X = 0,
        Y = 1,
        Z = 2,
        ESplineMeshAxis_MAX = 3
    };

    enum class EMFGpuDrivenMeshType : uint8_t //Enum Engine.EMFGpuDrivenMeshType
    {
        Default = 0,
        Disable = 1,
        Compatible = 2,
        Enable = 3,
        EMFGpuDrivenMeshType_MAX = 4
    };

    enum class EOptimizationType : uint8_t //Enum Engine.EOptimizationType
    {
        OT_NumOfTriangles = 0,
        OT_MaxDeviation = 1,
        OT_MAX = 2
    };

    enum class EImportanceLevel : uint8_t //Enum Engine.EImportanceLevel
    {
        IL_Off = 0,
        IL_Lowest = 1,
        IL_Low = 2,
        IL_Normal = 3,
        IL_High = 4,
        IL_Highest = 5,
        TEMP_BROKEN2 = 6,
        EImportanceLevel_MAX = 7
    };

    enum class ENormalMode : uint8_t //Enum Engine.ENormalMode
    {
        NM_PreserveSmoothingGroups = 0,
        NM_RecalculateNormals = 1,
        NM_RecalculateNormalsSmooth = 2,
        NM_RecalculateNormalsHard = 3,
        TEMP_BROKEN = 4,
        ENormalMode_MAX = 5
    };

    enum class EStereoLayerShape : uint8_t //Enum Engine.EStereoLayerShape
    {
        SLSH_QuadLayer = 0,
        SLSH_CylinderLayer = 1,
        SLSH_CubemapLayer = 2,
        SLSH_EquirectLayer = 3,
        SLSH_MAX = 4
    };

    enum class EStereoLayerType : uint8_t //Enum Engine.EStereoLayerType
    {
        SLT_WorldLocked = 0,
        SLT_TrackerLocked = 1,
        SLT_FaceLocked = 2,
        SLT_MAX = 3
    };

    enum class EStreamingAssetUseScene : uint8_t //Enum Engine.EStreamingAssetUseScene
    {
        SAUS_None = 0,
        SAUS_FrontEnd = 1,
        SAUS_InBattle = 2,
        SAUS_MAX = 3
    };

    enum class EOpacitySourceMode : uint8_t //Enum Engine.EOpacitySourceMode
    {
        OSM_Alpha = 0,
        OSM_ColorBrightness = 1,
        OSM_RedChannel = 2,
        OSM_GreenChannel = 3,
        OSM_BlueChannel = 4,
        OSM_MAX = 5
    };

    enum class ESubUVBoundingVertexCount : uint8_t //Enum Engine.ESubUVBoundingVertexCount
    {
        BVC_FourVertices = 0,
        BVC_EightVertices = 1,
        BVC_MAX = 2
    };

    enum class EVerticalTextAligment : uint8_t //Enum Engine.EVerticalTextAligment
    {
        EVRTA_TextTop = 0,
        EVRTA_TextCenter = 1,
        EVRTA_TextBottom = 2,
        EVRTA_QuadTop = 3,
        EVRTA_MAX = 4
    };

    enum class EHorizTextAligment : uint8_t //Enum Engine.EHorizTextAligment
    {
        EHTA_Left = 0,
        EHTA_Center = 1,
        EHTA_Right = 2,
        EHTA_MAX = 3
    };

    enum class ETextureLossyCompressionAmount : uint8_t //Enum Engine.ETextureLossyCompressionAmount
    {
        TLCA_Default = 0,
        TLCA_None = 1,
        TLCA_Lowest = 2,
        TLCA_Low = 3,
        TLCA_Medium = 4,
        TLCA_High = 5,
        TLCA_Highest = 6,
        TLCA_MAX = 7
    };

    enum class ETextureCompressionQuality : uint8_t //Enum Engine.ETextureCompressionQuality
    {
        TCQ_Default = 0,
        TCQ_Lowest = 1,
        TCQ_Low = 2,
        TCQ_Medium = 3,
        TCQ_High = 4,
        TCQ_Highest = 5,
        TCQ_MAX = 6
    };

    enum class ETextureSourceFormat : uint8_t //Enum Engine.ETextureSourceFormat
    {
        TSF_Invalid = 0,
        TSF_G8 = 1,
        TSF_BGRA8 = 2,
        TSF_BGRE8 = 3,
        TSF_RGBA16 = 4,
        TSF_RGBA16F = 5,
        TSF_RGBA8 = 6,
        TSF_RGBE8 = 7,
        TSF_G16 = 8,
        TSF_MAX = 9
    };

    enum class ETextureSourceArtType : uint8_t //Enum Engine.ETextureSourceArtType
    {
        TSAT_Uncompressed = 0,
        TSAT_PNGCompressed = 1,
        TSAT_DDSFile = 2,
        TSAT_MAX = 3
    };

    enum class ETextureMipCount : uint8_t //Enum Engine.ETextureMipCount
    {
        TMC_ResidentMips = 0,
        TMC_AllMips = 1,
        TMC_AllMipsBiased = 2,
        TMC_MAX = 3
    };

    enum class ECompositeTextureMode : uint8_t //Enum Engine.ECompositeTextureMode
    {
        CTM_Disabled = 0,
        CTM_NormalRoughnessToRed = 1,
        CTM_NormalRoughnessToGreen = 2,
        CTM_NormalRoughnessToBlue = 3,
        CTM_NormalRoughnessToAlpha = 4,
        CTM_MAX = 5
    };

    enum class TextureAddress : uint8_t //Enum Engine.TextureAddress
    {
        TA_Wrap = 0,
        TA_Clamp = 1,
        TA_Mirror = 2,
        TA_MAX = 3
    };

    enum class TextureFilter : uint8_t //Enum Engine.TextureFilter
    {
        TF_Nearest = 0,
        TF_Bilinear = 1,
        TF_Trilinear = 2,
        TF_Default = 3,
        TF_MAX = 4
    };

    enum class NormalXYChannels : uint8_t //Enum Engine.NormalXYChannels
    {
        NXYC_RG = 0,
        NXYC_GB = 1,
        NXYC_BA = 2,
        NXYC_MAX = 3
    };

    enum class TextureCompressionSettings : uint8_t //Enum Engine.TextureCompressionSettings
    {
        TC_Default = 0,
        TC_Normalmap = 1,
        TC_Masks = 2,
        TC_Grayscale = 3,
        TC_Displacementmap = 4,
        TC_VectorDisplacementmap = 5,
        TC_HDR = 6,
        TC_EditorIcon = 7,
        TC_Alpha = 8,
        TC_DistanceFieldFont = 9,
        TC_HDR_Compressed = 10,
        TC_BC7 = 11,
        TC_HalfFloat = 12,
        TC_ReflectionCapture = 13,
        TC_NormalXYWithOthers = 14,
        TC_MAX = 15
    };

    enum class ETextureDownscaleOptions : uint8_t //Enum Engine.ETextureDownscaleOptions
    {
        Default = 0,
        Unfiltered = 1,
        SimpleAverage = 2,
        Sharpen0 = 3,
        Sharpen1 = 4,
        Sharpen2 = 5,
        Sharpen3 = 6,
        Sharpen4 = 7,
        Sharpen5 = 8,
        Sharpen6 = 9,
        Sharpen7 = 10,
        Sharpen8 = 11,
        Sharpen9 = 12,
        Sharpen10 = 13,
        ETextureDownscaleOptions_MAX = 14
    };

    enum class ETextureGroupLODBiasLevel : uint8_t //Enum Engine.ETextureGroupLODBiasLevel
    {
        TGL_Default = 0,
        TGL_None = 1,
        TGL_FrontEnd = 2,
        TGL_InBattle_1P = 3,
        TGL_InBattle_3P = 4,
        TGL_MAX = 5
    };

    enum class ETextureMipLoadOptions : uint8_t //Enum Engine.ETextureMipLoadOptions
    {
        Default = 0,
        AllMips = 1,
        OnlyFirstMip = 2,
        ETextureMipLoadOptions_MAX = 3
    };

    enum class ETextureSamplerFilter : uint8_t //Enum Engine.ETextureSamplerFilter
    {
        Point = 0,
        Bilinear = 1,
        Trilinear = 2,
        AnisotropicPoint = 3,
        AnisotropicLinear = 4,
        ETextureSamplerFilter_MAX = 5
    };

    enum class ETexturePowerOfTwoSetting : uint8_t //Enum Engine.ETexturePowerOfTwoSetting
    {
        None = 0,
        PadToPowerOfTwo = 1,
        PadToSquarePowerOfTwo = 2,
        ETexturePowerOfTwoSetting_MAX = 3
    };

    enum class TextureMipGenSettings : uint8_t //Enum Engine.TextureMipGenSettings
    {
        TMGS_FromTextureGroup = 0,
        TMGS_SimpleAverage = 1,
        TMGS_Sharpen0 = 2,
        TMGS_Sharpen1 = 3,
        TMGS_Sharpen2 = 4,
        TMGS_Sharpen3 = 5,
        TMGS_Sharpen4 = 6,
        TMGS_Sharpen5 = 7,
        TMGS_Sharpen6 = 8,
        TMGS_Sharpen7 = 9,
        TMGS_Sharpen8 = 10,
        TMGS_Sharpen9 = 11,
        TMGS_Sharpen10 = 12,
        TMGS_NoMipmaps = 13,
        TMGS_LeaveExistingMips = 14,
        TMGS_Blur1 = 15,
        TMGS_Blur2 = 16,
        TMGS_Blur3 = 17,
        TMGS_Blur4 = 18,
        TMGS_Blur5 = 19,
        TMGS_Unfiltered = 20,
        TMGS_MAX = 21
    };

    enum class TextureGroup : uint8_t //Enum Engine.TextureGroup
    {
        TEXTUREGROUP_World = 0,
        TEXTUREGROUP_WorldNormalMap = 1,
        TEXTUREGROUP_WorldSpecular = 2,
        TEXTUREGROUP_Character = 3,
        TEXTUREGROUP_CharacterNormalMap = 4,
        TEXTUREGROUP_CharacterSpecular = 5,
        TEXTUREGROUP_Weapon = 6,
        TEXTUREGROUP_WeaponNormalMap = 7,
        TEXTUREGROUP_WeaponSpecular = 8,
        TEXTUREGROUP_Vehicle = 9,
        TEXTUREGROUP_VehicleNormalMap = 10,
        TEXTUREGROUP_VehicleSpecular = 11,
        TEXTUREGROUP_Cinematic = 12,
        TEXTUREGROUP_Effects = 13,
        TEXTUREGROUP_EffectsNotFiltered = 14,
        TEXTUREGROUP_Skybox = 15,
        TEXTUREGROUP_UI = 16,
        TEXTUREGROUP_Lightmap = 17,
        TEXTUREGROUP_RenderTarget = 18,
        TEXTUREGROUP_MobileFlattened = 19,
        TEXTUREGROUP_ProcBuilding_Face = 20,
        TEXTUREGROUP_ProcBuilding_LightMap = 21,
        TEXTUREGROUP_Shadowmap = 22,
        TEXTUREGROUP_ColorLookupTable = 23,
        TEXTUREGROUP_Terrain_Heightmap = 24,
        TEXTUREGROUP_Terrain_Weightmap = 25,
        TEXTUREGROUP_Bokeh = 26,
        TEXTUREGROUP_IESLightProfile = 27,
        TEXTUREGROUP_Pixels2D = 28,
        TEXTUREGROUP_HierarchicalLOD = 29,
        TEXTUREGROUP_Impostor = 30,
        TEXTUREGROUP_ImpostorNormalDepth = 31,
        TEXTUREGROUP_8BitData = 32,
        TEXTUREGROUP_16BitData = 33,
        TEXTUREGROUP_None = 34,
        TEXTUREGROUP_WorldDiffuseAndEmissiveOrOpacity = 35,
        TEXTUREGROUP_WorldNormalAndRoughness = 36,
        TEXTUREGROUP_WorldMetallicAndAO = 37,
        TEXTUREGROUP_CharacterDiffuse = 38,
        TEXTUREGROUP_CharacterNormalAndRoughness = 39,
        TEXTUREGROUP_CharacterMetallicAndAO = 40,
        TEXTUREGROUP_CharacterHightlightShiftRoot = 41,
        TEXTUREGROUP_WeaponDiffuse = 42,
        TEXTUREGROUP_WeaponNormalAndRoughness = 43,
        TEXTUREGROUP_WeaponMetallicAndAO = 44,
        TEXTUREGROUP_UIHigh = 45,
        TEXTUREGROUP_CubeMap = 46,
        TEXTUREGROUP_PCGMask = 47,
        TEXTUREGROUP_PCGFlowMap = 48,
        TEXTUREGROUP_PCGDiffuseAndEmissiveOrOpacity = 49,
        TEXTUREGROUP_PCGNormalAndRoughness = 50,
        TEXTUREGROUP_PCGMetallicAndAO = 51,
        TEXTUREGROUP_WorldMask = 52,
        TEXTUREGROUP_WorldAOAndRoughnessAndMetallicAndHeight = 53,
        TEXTUREGROUP_WeaponMetallicAndAOAndRoughness = 54,
        TEXTUREGROUP_CharacterMetallicAndAOAndRoughness = 55,
        TEXTUREGROUP_WorldDiffuse = 56,
        TEXTUREGROUP_WorldDiffuseAndMetallic = 57,
        TEXTUREGROUP_WorldAOAndRoughnessAndNormal = 58,
        TEXTUREGROUP_WorldHeight = 59,
        TEXTUREGROUP_WorldOpacityAndHeightAndEmission = 60,
        TEXTUREGROUP_CharacterDiffuseAndMetallic = 61,
        TEXTUREGROUP_CharacterAOAndRoughnessAndNormal = 62,
        TEXTUREGROUP_CharacterHeight = 63,
        TEXTUREGROUP_CharacterOpacityAndHeightAndEmission = 64,
        TEXTUREGROUP_WeaponDiffuseAndMetallic = 65,
        TEXTUREGROUP_WeaponAOAndRoughnessAndNormal = 66,
        TEXTUREGROUP_WeaponHeight = 67,
        TEXTUREGROUP_WeaponOpacityAndHeightAndEmission = 68,
        TEXTUREGROUP_WorldIBA = 69,
        TEXTUREGROUP_WorldIND = 70,
        TEXTUREGROUP_WorldDiffuseAndRandom = 71,
        TEXTUREGROUP_WorldAlphaAndTranslucency = 72,
        TEXTUREGROUP_UINoDownscale = 73,
        TEXTUREGROUP_Effects_Important = 74,
        TEXTUREGROUP_Project11 = 75,
        TEXTUREGROUP_Project12 = 76,
        TEXTUREGROUP_Project13 = 77,
        TEXTUREGROUP_Project14 = 78,
        TEXTUREGROUP_Project15 = 79,
        TEXTUREGROUP_MAX = 80
    };

    enum class ETextureRenderTargetFormat : uint8_t //Enum Engine.ETextureRenderTargetFormat
    {
        RTF_R8 = 0,
        RTF_RG8 = 1,
        RTF_RGBA8 = 2,
        RTF_RGBA8_SRGB = 3,
        RTF_R16f = 4,
        RTF_RG16f = 5,
        RTF_RGBA16f = 6,
        RTF_R32f = 7,
        RTF_RG32f = 8,
        RTF_RGBA32f = 9,
        RTF_RGB10A2 = 10,
        RTF_MAX = 11
    };

    enum class ETimecodeProviderSynchronizationState : uint8_t //Enum Engine.ETimecodeProviderSynchronizationState
    {
        Closed = 0,
        Error = 1,
        Synchronized = 2,
        Synchronizing = 3,
        ETimecodeProviderSynchronizationState_MAX = 4
    };

    enum class ETimelineDirection : uint8_t //Enum Engine.ETimelineDirection
    {
        Forward = 0,
        Backward = 1,
        ETimelineDirection_MAX = 2
    };

    enum class ETimelineLengthMode : uint8_t //Enum Engine.ETimelineLengthMode
    {
        TL_TimelineLength = 0,
        TL_LastKeyFrame = 1,
        TL_MAX = 2
    };

    enum class ETimeStretchCurveMapping : uint8_t //Enum Engine.ETimeStretchCurveMapping
    {
        T_Original = 0,
        T_TargetMin = 1,
        T_TargetMax = 2,
        MAX = 3
    };

    enum class ETwitterIntegrationDelegate : uint8_t //Enum Engine.ETwitterIntegrationDelegate
    {
        TID_AuthorizeComplete = 0,
        TID_TweetUIComplete = 1,
        TID_RequestComplete = 2,
        TID_MAX = 3
    };

    enum class ETwitterRequestMethod : uint8_t //Enum Engine.ETwitterRequestMethod
    {
        TRM_Get = 0,
        TRM_Post = 1,
        TRM_Delete = 2,
        TRM_MAX = 3
    };

    enum class EUserDefinedStructureStatus : uint8_t //Enum Engine.EUserDefinedStructureStatus
    {
        UDSS_UpToDate = 0,
        UDSS_Dirty = 1,
        UDSS_Error = 2,
        UDSS_Duplicate = 3,
        UDSS_MAX = 4
    };

    enum class EUIScalingRule : uint8_t //Enum Engine.EUIScalingRule
    {
        ShortestSide = 0,
        LongestSide = 1,
        Horizontal = 2,
        Vertical = 3,
        ScaleToFit = 4,
        Custom = 5,
        EUIScalingRule_MAX = 6
    };

    enum class ERenderFocusRule : uint8_t //Enum Engine.ERenderFocusRule
    {
        Always = 0,
        NonPointer = 1,
        NavigationOnly = 2,
        Never = 3,
        ERenderFocusRule_MAX = 4
    };

    enum class EVectorFieldConstructionOp : uint8_t //Enum Engine.EVectorFieldConstructionOp
    {
        VFCO_Extrude = 0,
        VFCO_Revolve = 1,
        VFCO_MAX = 2
    };

    enum class EWindSourceType : uint8_t //Enum Engine.EWindSourceType
    {
        Directional = 0,
        Point = 1,
        EWindSourceType_MAX = 2
    };

    enum class EWeaponRangeType : uint8_t //Enum Engine.EWeaponRangeType
    {
        WeaponRangeType_MainWeapon = 0,
        WeaponRangeType_MeleeWeapon = 1,
        WeaponRangeType_ThrowWeapon = 2,
        WeaponRangeType_MAX = 3
    };

    enum class EPSCPoolMethod : uint8_t //Enum Engine.EPSCPoolMethod
    {
        None = 0,
        AutoRelease = 1,
        ManualRelease = 2,
        ManualRelease_OnComplete = 3,
        FreeInPool = 4,
        EPSCPoolMethod_MAX = 5
    };

    enum class EVolumeLightingMethod : uint8_t //Enum Engine.EVolumeLightingMethod
    {
        VLM_VolumetricLightmap = 0,
        VLM_SparseVolumeLightingSamples = 1,
        VLM_None = 2,
        VLM_MAX = 3
    };

    enum class EVisibilityAggressiveness : uint8_t //Enum Engine.EVisibilityAggressiveness
    {
        VIS_LeastAggressive = 0,
        VIS_ModeratelyAggressive = 1,
        VIS_MostAggressive = 2,
        VIS_Max = 3
    };

    enum class EClothingWindMethod_Legacy : uint8_t //Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
    {
        Legacy = 0,
        Accurate = 1,
        EClothingWindMethod_MAX = 2
    };

    enum class EWeightMapTargetCommon : uint8_t //Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
    {
        None = 0,
        MaxDistance = 1,
        BackstopDistance = 2,
        BackstopRadius = 3,
        AnimDriveMultiplier = 4,
        EWeightMapTargetCommon_MAX = 5
    };

    enum class EClothingWindMethodNv : uint8_t //Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
    {
        Legacy = 0,
        Accurate = 1,
        EClothingWindMethodNv_MAX = 2
    };

    enum class EInputCaptureState : uint8_t //Enum InteractiveToolsFramework.EInputCaptureState
    {
        Begin = 1,
        Continue = 2,
        End = 3,
        Ignore = 4,
        EInputCaptureState_MAX = 5
    };

    enum class EInputCaptureRequestType : uint8_t //Enum InteractiveToolsFramework.EInputCaptureRequestType
    {
        Begin = 1,
        Ignore = 2,
        EInputCaptureRequestType_MAX = 3
    };

    enum class EInputCaptureSide : uint8_t //Enum InteractiveToolsFramework.EInputCaptureSide
    {
        None = 0,
        Left = 1,
        Right = 2,
        Both = 3,
        Any = 99,
        EInputCaptureSide_MAX = 100
    };

    enum class EInputDevices : uint32_t //Enum InteractiveToolsFramework.EInputDevices
    {
        None = 0,
        Keyboard = 1,
        Mouse = 2,
        Gamepad = 4,
        OculusTouch = 8,
        HTCViveWands = 16,
        AnySpatialDevice = 24,
        TabletFingers = 1024,
        EInputDevices_MAX = 1025
    };

    enum class ETransformGizmoSubElements : uint32_t //Enum InteractiveToolsFramework.ETransformGizmoSubElements
    {
        None = 0,
        TranslateAxisX = 2,
        TranslateAxisY = 4,
        TranslateAxisZ = 8,
        TranslateAllAxes = 14,
        TranslatePlaneXY = 16,
        TranslatePlaneXZ = 32,
        TranslatePlaneYZ = 64,
        TranslateAllPlanes = 112,
        RotateAxisX = 128,
        RotateAxisY = 256,
        RotateAxisZ = 512,
        RotateAllAxes = 896,
        ScaleAxisX = 1024,
        ScaleAxisY = 2048,
        ScaleAxisZ = 4096,
        ScaleAllAxes = 7168,
        ScalePlaneYZ = 8192,
        ScalePlaneXZ = 16384,
        ScalePlaneXY = 32768,
        ScaleAllPlanes = 57344,
        ScaleUniform = 65536,
        StandardTranslateRotate = 1022,
        TranslateRotateUniformScale = 66558,
        FullTranslateRotateScale = 131070,
        ETransformGizmoSubElements_MAX = 131071
    };

    enum class EToolChangeTrackingMode : uint8_t //Enum InteractiveToolsFramework.EToolChangeTrackingMode
    {
        NoChangeTracking = 1,
        UndoToExit = 2,
        FullUndoRedo = 3,
        EToolChangeTrackingMode_MAX = 4
    };

    enum class EToolSide : uint8_t //Enum InteractiveToolsFramework.EToolSide
    {
        Left = 1,
        Mouse = 1,
        Right = 2,
        EToolSide_MAX = 3
    };

    enum class EViewInteractionState : uint8_t //Enum InteractiveToolsFramework.EViewInteractionState
    {
        None = 0,
        Hovered = 1,
        Focused = 2,
        EViewInteractionState_MAX = 3
    };

    enum class ESelectedObjectsModificationType : uint8_t //Enum InteractiveToolsFramework.ESelectedObjectsModificationType
    {
        Replace = 0,
        Add = 1,
        Remove = 2,
        Clear = 3,
        ESelectedObjectsModificationType_MAX = 4
    };

    enum class EToolMessageLevel : uint8_t //Enum InteractiveToolsFramework.EToolMessageLevel
    {
        Internal = 0,
        UserMessage = 1,
        UserNotification = 2,
        UserWarning = 3,
        UserError = 4,
        EToolMessageLevel_MAX = 5
    };

    enum class EToolContextCoordinateSystem : uint8_t //Enum InteractiveToolsFramework.EToolContextCoordinateSystem
    {
        World = 0,
        Local = 1,
        EToolContextCoordinateSystem_MAX = 2
    };

    enum class EStandardToolContextMaterials : uint8_t //Enum InteractiveToolsFramework.EStandardToolContextMaterials
    {
        VertexColorMaterial = 1,
        EStandardToolContextMaterials_MAX = 2
    };

    enum class ESceneSnapQueryTargetType : uint8_t //Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
    {
        None = 0,
        MeshVertex = 1,
        MeshEdge = 2,
        Grid = 4,
        All = 7,
        ESceneSnapQueryTargetType_MAX = 8
    };

    enum class ESceneSnapQueryType : uint8_t //Enum InteractiveToolsFramework.ESceneSnapQueryType
    {
        Position = 1,
        Rotation = 2,
        ESceneSnapQueryType_MAX = 3
    };

    enum class ERuntimeGenerationType : uint8_t //Enum NavigationSystem.ERuntimeGenerationType
    {
        Static = 0,
        DynamicModifiersOnly = 1,
        Dynamic = 2,
        LegacyGeneration = 3,
        ERuntimeGenerationType_MAX = 4
    };

    enum class ENavCostDisplay : uint8_t //Enum NavigationSystem.ENavCostDisplay
    {
        TotalCost = 0,
        HeuristicOnly = 1,
        RealCostOnly = 2,
        ENavCostDisplay_MAX = 3
    };

    enum class ENavSystemOverridePolicy : uint8_t //Enum NavigationSystem.ENavSystemOverridePolicy
    {
        Override = 0,
        Append = 1,
        Skip = 2,
        ENavSystemOverridePolicy_MAX = 3
    };

    enum class ERecastPartitioning : uint8_t //Enum NavigationSystem.ERecastPartitioning
    {
        Monotone = 0,
        Watershed = 1,
        ChunkyMonotone = 2,
        ERecastPartitioning_MAX = 3
    };

    enum class EINTLPropertyClass : uint8_t //Enum LISlua425.EINTLPropertyClass
    {
        Byte = 0,
        Int8 = 1,
        Int16 = 2,
        Int = 3,
        Int64 = 4,
        UInt16 = 5,
        UInt32 = 6,
        UInt64 = 7,
        UnsizedInt = 8,
        UnsizedUInt = 9,
        Float = 10,
        Double = 11,
        Bool = 12,
        SoftClass = 13,
        WeakObject = 14,
        LazyObject = 15,
        SoftObject = 16,
        Class = 17,
        Object = 18,
        Interface = 19,
        Name = 20,
        Str = 21,
        Array = 22,
        Map = 23,
        Set = 24,
        Struct = 25,
        Delegate = 26,
        MulticastDelegate = 27,
        Text = 28,
        Enum = 29,
        EINTLPropertyClass_MAX = 30
    };

    enum class EGameplayTaskState : uint8_t //Enum GameplayTasks.EGameplayTaskState
    {
        Uninitialized = 0,
        AwaitingActivation = 1,
        Paused = 2,
        Active = 3,
        Finished = 4,
        EGameplayTaskState_MAX = 5
    };

    enum class EClusterConnectionTypeEnum : uint8_t //Enum ChaosSolverEngine.EClusterConnectionTypeEnum
    {
        Chaos_PointImplicit = 0,
        Chaos_DelaunayTriangulation = 1,
        Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
        Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
        Chaos_None = 4,
        Chaos_EClsuterCreationParameters_Max = 5,
        Chaos_MAX = 6
    };

    enum class EChaosBreakingSortMethod : uint8_t //Enum GeometryCollectionEngine.EChaosBreakingSortMethod
    {
        SortNone = 0,
        SortByHighestMass = 1,
        SortByHighestSpeed = 2,
        SortByNearestFirst = 3,
        Count = 4,
        EChaosBreakingSortMethod_MAX = 5
    };

    enum class EChaosCollisionSortMethod : uint8_t //Enum GeometryCollectionEngine.EChaosCollisionSortMethod
    {
        SortNone = 0,
        SortByHighestMass = 1,
        SortByHighestSpeed = 2,
        SortByHighestImpulse = 3,
        SortByNearestFirst = 4,
        Count = 5,
        EChaosCollisionSortMethod_MAX = 6
    };

    enum class EChaosTrailingSortMethod : uint8_t //Enum GeometryCollectionEngine.EChaosTrailingSortMethod
    {
        SortNone = 0,
        SortByHighestMass = 1,
        SortByHighestSpeed = 2,
        SortByNearestFirst = 3,
        Count = 4,
        EChaosTrailingSortMethod_MAX = 5
    };

    enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t //Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
    {
        HideNone = 0,
        HideWithCollision = 1,
        HideSelected = 2,
        HideWholeCollection = 3,
        HideAll = 4,
        EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
    };

    enum class ECollectionGroupEnum : uint8_t //Enum GeometryCollectionEngine.ECollectionGroupEnum
    {
        Chaos_Traansform = 0,
        Chaos_Max = 1
    };

    enum class ECollectionAttributeEnum : uint8_t //Enum GeometryCollectionEngine.ECollectionAttributeEnum
    {
        Chaos_Active = 0,
        Chaos_DynamicState = 1,
        Chaos_CollisionGroup = 2,
        Chaos_Max = 3
    };

    enum class ERigVMParameterType : uint8_t //Enum RigVM.ERigVMParameterType
    {
        Input = 0,
        Output = 1,
        Invalid = 2,
        ERigVMParameterType_MAX = 3
    };

    enum class ERigVMOpCode : uint8_t //Enum RigVM.ERigVMOpCode
    {
        Execute_0_Operands = 0,
        Execute_1_Operands = 1,
        Execute_2_Operands = 2,
        Execute_3_Operands = 3,
        Execute_4_Operands = 4,
        Execute_5_Operands = 5,
        Execute_6_Operands = 6,
        Execute_7_Operands = 7,
        Execute_8_Operands = 8,
        Execute_9_Operands = 9,
        Execute_10_Operands = 10,
        Execute_11_Operands = 11,
        Execute_12_Operands = 12,
        Execute_13_Operands = 13,
        Execute_14_Operands = 14,
        Execute_15_Operands = 15,
        Execute_16_Operands = 16,
        Execute_17_Operands = 17,
        Execute_18_Operands = 18,
        Execute_19_Operands = 19,
        Execute_20_Operands = 20,
        Execute_21_Operands = 21,
        Execute_22_Operands = 22,
        Execute_23_Operands = 23,
        Execute_24_Operands = 24,
        Execute_25_Operands = 25,
        Execute_26_Operands = 26,
        Execute_27_Operands = 27,
        Execute_28_Operands = 28,
        Execute_29_Operands = 29,
        Execute_30_Operands = 30,
        Execute_31_Operands = 31,
        Execute_32_Operands = 32,
        Execute_33_Operands = 33,
        Execute_34_Operands = 34,
        Execute_35_Operands = 35,
        Execute_36_Operands = 36,
        Execute_37_Operands = 37,
        Execute_38_Operands = 38,
        Execute_39_Operands = 39,
        Execute_40_Operands = 40,
        Execute_41_Operands = 41,
        Execute_42_Operands = 42,
        Execute_43_Operands = 43,
        Execute_44_Operands = 44,
        Execute_45_Operands = 45,
        Execute_46_Operands = 46,
        Execute_47_Operands = 47,
        Execute_48_Operands = 48,
        Execute_49_Operands = 49,
        Execute_50_Operands = 50,
        Execute_51_Operands = 51,
        Execute_52_Operands = 52,
        Execute_53_Operands = 53,
        Execute_54_Operands = 54,
        Execute_55_Operands = 55,
        Execute_56_Operands = 56,
        Execute_57_Operands = 57,
        Execute_58_Operands = 58,
        Execute_59_Operands = 59,
        Execute_60_Operands = 60,
        Execute_61_Operands = 61,
        Execute_62_Operands = 62,
        Execute_63_Operands = 63,
        Execute_64_Operands = 64,
        Zero = 65,
        BoolFalse = 66,
        BoolTrue = 67,
        Copy = 68,
        Increment = 69,
        Decrement = 70,
        Equals = 71,
        NotEquals = 72,
        JumpAbsolute = 73,
        JumpForward = 74,
        JumpBackward = 75,
        JumpAbsoluteIf = 76,
        JumpForwardIf = 77,
        JumpBackwardIf = 78,
        ChangeType = 79,
        Exit = 80,
        BeginBlock = 81,
        EndBlock = 82,
        Invalid = 83,
        ERigVMOpCode_MAX = 84
    };

    enum class ERigVMPinDirection : uint8_t //Enum RigVM.ERigVMPinDirection
    {
        Input = 0,
        Output = 1,
        IO = 2,
        Visible = 3,
        Hidden = 4,
        Invalid = 5,
        ERigVMPinDirection_MAX = 6
    };

    enum class ERigVMRegisterType : uint8_t //Enum RigVM.ERigVMRegisterType
    {
        Plain = 0,
        String = 1,
        Name = 2,
        Struct = 3,
        Invalid = 4,
        ERigVMRegisterType_MAX = 5
    };

    enum class ERigVMMemoryType : uint8_t //Enum RigVM.ERigVMMemoryType
    {
        Work = 0,
        Literal = 1,
        External = 2,
        Invalid = 3,
        ERigVMMemoryType_MAX = 4
    };

    enum class EVectorVMOp : uint8_t //Enum VectorVM.EVectorVMOp
    {
        done = 0,
        add = 1,
        sub = 2,
        mul = 3,
        div = 4,
        mad = 5,
        lerp = 6,
        rcp = 7,
        rsq = 8,
        sqrt = 9,
        neg = 10,
        abs = 11,
        exp = 12,
        exp2 = 13,
        log = 14,
        log2 = 15,
        sin = 16,
        cos = 17,
        tan = 18,
        asin = 19,
        acos = 20,
        atan = 21,
        atan2 = 22,
        ceil = 23,
        floor = 24,
        fmod = 25,
        frac = 26,
        trunc = 27,
        clamp = 28,
        min = 29,
        max = 30,
        pow = 31,
        round = 32,
        sign = 33,
        step = 34,
        random = 35,
        noise = 36,
        cmplt = 37,
        cmple = 38,
        cmpgt = 39,
        cmpge = 40,
        cmpeq = 41,
        cmpneq = 42,
        select = 43,
        addi = 44,
        subi = 45,
        muli = 46,
        divi = 47,
        clampi = 48,
        mini = 49,
        maxi = 50,
        absi = 51,
        negi = 52,
        signi = 53,
        randomi = 54,
        cmplti = 55,
        cmplei = 56,
        cmpgti = 57,
        cmpgei = 58,
        cmpeqi = 59,
        cmpneqi = 60,
        bit_and = 61,
        bit_or = 62,
        bit_xor = 63,
        bit_not = 64,
        bit_lshift = 65,
        bit_rshift = 66,
        logic_and = 67,
        logic_or = 68,
        logic_xor = 69,
        logic_not = 70,
        f2i = 71,
        i2f = 72,
        f2b = 73,
        b2f = 74,
        i2b = 75,
        b2i = 76,
        inputdata_float = 77,
        inputdata_int32 = 78,
        inputdata_half = 79,
        inputdata_noadvance_float = 80,
        inputdata_noadvance_int32 = 81,
        inputdata_noadvance_half = 82,
        outputdata_float = 83,
        outputdata_int32 = 84,
        outputdata_half = 85,
        acquireindex = 86,
        external_func_call = 87,
        exec_index = 88,
        noise2D = 89,
        noise3D = 90,
        enter_stat_scope = 91,
        exit_stat_scope = 92,
        update_id = 93,
        acquire_id = 94,
        NumOpcodes = 95
    };

    enum class EVectorVMOperandLocation : uint8_t //Enum VectorVM.EVectorVMOperandLocation
    {
        Register = 0,
        Constant = 1,
        Num = 2,
        EVectorVMOperandLocation_MAX = 3
    };

    enum class EVectorVMBaseTypes : uint8_t //Enum VectorVM.EVectorVMBaseTypes
    {
        Float = 0,
        Int = 1,
        Bool = 2,
        Num = 3,
        EVectorVMBaseTypes_MAX = 4
    };

    enum class EAISenseNotifyType : uint8_t //Enum AIModule.EAISenseNotifyType
    {
        OnEveryPerception = 0,
        OnPerceptionChange = 1,
        EAISenseNotifyType_MAX = 2
    };

    enum class EAITaskPriority : uint8_t //Enum AIModule.EAITaskPriority
    {
        Lowest = 0,
        Low = 64,
        AutonomousAI = 127,
        High = 192,
        Ultimate = 254,
        EAITaskPriority_MAX = 255
    };

    enum class EGenericAICheck : uint8_t //Enum AIModule.EGenericAICheck
    {
        Less = 0,
        LessOrEqual = 1,
        Equal = 2,
        NotEqual = 3,
        GreaterOrEqual = 4,
        Greater = 5,
        IsTrue = 6,
        MAX = 7
    };

    enum class EAILockSource : uint8_t //Enum AIModule.EAILockSource
    {
        Animation = 0,
        Logic = 1,
        Script = 2,
        Gameplay = 3,
        MAX = 4
    };

    enum class EAIRequestPriority : uint8_t //Enum AIModule.EAIRequestPriority
    {
        SoftScript = 0,
        Logic = 1,
        HardScript = 2,
        Reaction = 3,
        Ultimate = 4,
        MAX = 5
    };

    enum class EPawnActionEventType : uint8_t //Enum AIModule.EPawnActionEventType
    {
        Invalid = 0,
        FailedToStart = 1,
        InstantAbort = 2,
        FinishedAborting = 3,
        FinishedExecution = 4,
        Push = 5,
        EPawnActionEventType_MAX = 6
    };

    enum class EPawnActionResult : uint8_t //Enum AIModule.EPawnActionResult
    {
        NotStarted = 0,
        InProgress = 1,
        Success = 2,
        Failed = 3,
        Aborted = 4,
        EPawnActionResult_MAX = 5
    };

    enum class EPawnActionAbortState : uint8_t //Enum AIModule.EPawnActionAbortState
    {
        NeverStarted = 0,
        NotBeingAborted = 1,
        MarkPendingAbort = 2,
        LatentAbortInProgress = 3,
        AbortDone = 4,
        MAX = 5
    };

    enum class FAIDistanceType : uint8_t //Enum AIModule.FAIDistanceType
    {
        Distance3D = 0,
        Distance2D = 1,
        DistanceZ = 2,
        MAX = 3
    };

    enum class EAIOptionFlag : uint8_t //Enum AIModule.EAIOptionFlag
    {
        Default = 0,
        Enable = 1,
        Disable = 2,
        MAX = 3
    };

    enum class EBTFlowAbortMode : uint8_t //Enum AIModule.EBTFlowAbortMode
    {
        None = 0,
        LowerPriority = 1,
        Self = 2,
        Both = 3,
        EBTFlowAbortMode_MAX = 4
    };

    enum class EBTNodeResult : uint8_t //Enum AIModule.EBTNodeResult
    {
        Succeeded = 0,
        Failed = 1,
        Aborted = 2,
        InProgress = 3,
        EBTNodeResult_MAX = 4
    };

    enum class ETextKeyOperation : uint8_t //Enum AIModule.ETextKeyOperation
    {
        Equal = 0,
        NotEqual = 1,
        Contain = 2,
        NotContain = 3,
        ETextKeyOperation_MAX = 4
    };

    enum class EArithmeticKeyOperation : uint8_t //Enum AIModule.EArithmeticKeyOperation
    {
        Equal = 0,
        NotEqual = 1,
        Less = 2,
        LessOrEqual = 3,
        Greater = 4,
        GreaterOrEqual = 5,
        EArithmeticKeyOperation_MAX = 6
    };

    enum class EBasicKeyOperation : uint8_t //Enum AIModule.EBasicKeyOperation
    {
        Set = 0,
        NotSet = 1,
        EBasicKeyOperation_MAX = 2
    };

    enum class EBTParallelMode : uint8_t //Enum AIModule.EBTParallelMode
    {
        AbortBackground = 0,
        WaitForBackground = 1,
        EBTParallelMode_MAX = 2
    };

    enum class EBTDecoratorLogic : uint8_t //Enum AIModule.EBTDecoratorLogic
    {
        Invalid = 0,
        Test = 1,
        And = 2,
        Or = 3,
        Not = 4,
        EBTDecoratorLogic_MAX = 5
    };

    enum class EBTChildIndex : uint8_t //Enum AIModule.EBTChildIndex
    {
        FirstNode = 0,
        TaskNode = 1,
        EBTChildIndex_MAX = 2
    };

    enum class EBTBlackboardRestart : uint8_t //Enum AIModule.EBTBlackboardRestart
    {
        ValueChange = 0,
        ResultChange = 1,
        EBTBlackboardRestart_MAX = 2
    };

    enum class EBlackBoardEntryComparison : uint8_t //Enum AIModule.EBlackBoardEntryComparison
    {
        Equal = 0,
        NotEqual = 1,
        EBlackBoardEntryComparison_MAX = 2
    };

    enum class EPathExistanceQueryType : uint8_t //Enum AIModule.EPathExistanceQueryType
    {
        NavmeshRaycast2D = 0,
        HierarchicalQuery = 1,
        RegularPathFinding = 2,
        EPathExistanceQueryType_MAX = 3
    };

    enum class EPointOnCircleSpacingMethod : uint8_t //Enum AIModule.EPointOnCircleSpacingMethod
    {
        BySpaceBetween = 0,
        ByNumberOfPoints = 1,
        EPointOnCircleSpacingMethod_MAX = 2
    };

    enum class EEQSNormalizationType : uint8_t //Enum AIModule.EEQSNormalizationType
    {
        Absolute = 0,
        RelativeToScores = 1,
        EEQSNormalizationType_MAX = 2
    };

    enum class EEnvTestDistance : uint8_t //Enum AIModule.EEnvTestDistance
    {
        Distance3D = 0,
        Distance2D = 1,
        DistanceZ = 2,
        DistanceAbsoluteZ = 3,
        EEnvTestDistance_MAX = 4
    };

    enum class EEnvTestDot : uint8_t //Enum AIModule.EEnvTestDot
    {
        Dot3D = 0,
        Dot2D = 1,
        EEnvTestDot_MAX = 2
    };

    enum class EEnvTestPathfinding : uint8_t //Enum AIModule.EEnvTestPathfinding
    {
        PathExist = 0,
        PathCost = 1,
        PathLength = 2,
        EEnvTestPathfinding_MAX = 3
    };

    enum class EEnvQueryTestClamping : uint8_t //Enum AIModule.EEnvQueryTestClamping
    {
        None = 0,
        SpecifiedValue = 1,
        FilterThreshold = 2,
        EEnvQueryTestClamping_MAX = 3
    };

    enum class EEnvDirection : uint8_t //Enum AIModule.EEnvDirection
    {
        TwoPoints = 0,
        Rotation = 1,
        EEnvDirection_MAX = 2
    };

    enum class EEnvOverlapShape : uint8_t //Enum AIModule.EEnvOverlapShape
    {
        Box = 0,
        Sphere = 1,
        Capsule = 2,
        EEnvOverlapShape_MAX = 3
    };

    enum class EEnvTraceShape : uint8_t //Enum AIModule.EEnvTraceShape
    {
        Line = 0,
        Box = 1,
        Sphere = 2,
        Capsule = 3,
        EEnvTraceShape_MAX = 4
    };

    enum class EEnvQueryTrace : uint8_t //Enum AIModule.EEnvQueryTrace
    {
        None = 0,
        Navigation = 1,
        Geometry = 2,
        NavigationOverLedges = 3,
        EEnvQueryTrace_MAX = 4
    };

    enum class EAIParamType : uint8_t //Enum AIModule.EAIParamType
    {
        Float = 0,
        Int = 1,
        Bool = 2,
        MAX = 3
    };

    enum class EEnvQueryParam : uint8_t //Enum AIModule.EEnvQueryParam
    {
        Float = 0,
        Int = 1,
        Bool = 2,
        EEnvQueryParam_MAX = 3
    };

    enum class EEnvQueryRunMode : uint8_t //Enum AIModule.EEnvQueryRunMode
    {
        SingleResult = 0,
        RandomBest5Pct = 1,
        RandomBest25Pct = 2,
        AllMatching = 3,
        EEnvQueryRunMode_MAX = 4
    };

    enum class EEnvTestScoreOperator : uint8_t //Enum AIModule.EEnvTestScoreOperator
    {
        AverageScore = 0,
        MinScore = 1,
        MaxScore = 2,
        Multiply = 3,
        EEnvTestScoreOperator_MAX = 4
    };

    enum class EEnvTestFilterOperator : uint8_t //Enum AIModule.EEnvTestFilterOperator
    {
        AllPass = 0,
        AnyPass = 1,
        EEnvTestFilterOperator_MAX = 2
    };

    enum class EEnvQueryPriority : uint8_t //Enum AIModule.EEnvQueryPriority
    {
        Normal = 0,
        High = 1,
        EEnvQueryPriority_MAX = 2
    };

    enum class EEnvTestCost : uint8_t //Enum AIModule.EEnvTestCost
    {
        Low = 0,
        Medium = 1,
        High = 2,
        EEnvTestCost_MAX = 3
    };

    enum class EEnvTestWeight : uint8_t //Enum AIModule.EEnvTestWeight
    {
        None = 0,
        Square = 1,
        Inverse = 2,
        Unused = 3,
        Constant = 4,
        Skip = 5,
        EEnvTestWeight_MAX = 6
    };

    enum class EEnvTestScoreEquation : uint8_t //Enum AIModule.EEnvTestScoreEquation
    {
        Linear = 0,
        Square = 1,
        InverseLinear = 2,
        SquareRoot = 3,
        Constant = 4,
        EEnvTestScoreEquation_MAX = 5
    };

    enum class EEnvTestFilterType : uint8_t //Enum AIModule.EEnvTestFilterType
    {
        Minimum = 0,
        Maximum = 1,
        Range = 2,
        Match = 3,
        EEnvTestFilterType_MAX = 4
    };

    enum class EEnvTestPurpose : uint8_t //Enum AIModule.EEnvTestPurpose
    {
        Filter = 0,
        Score = 1,
        FilterAndScore = 2,
        EEnvTestPurpose_MAX = 3
    };

    enum class EEnvQueryHightlightMode : uint8_t //Enum AIModule.EEnvQueryHightlightMode
    {
        All = 0,
        Best5Pct = 1,
        Best25Pct = 2,
        EEnvQueryHightlightMode_MAX = 3
    };

    enum class ETeamAttitude : uint8_t //Enum AIModule.ETeamAttitude
    {
        Friendly = 0,
        Neutral = 1,
        Hostile = 2,
        ETeamAttitude_MAX = 3
    };

    enum class EPathFollowingAction : uint8_t //Enum AIModule.EPathFollowingAction
    {
        Error = 0,
        NoMove = 1,
        DirectMove = 2,
        PartialPath = 3,
        PathToGoal = 4,
        EPathFollowingAction_MAX = 5
    };

    enum class EPathFollowingStatus : uint8_t //Enum AIModule.EPathFollowingStatus
    {
        Idle = 0,
        Waiting = 1,
        Paused = 2,
        Moving = 3,
        EPathFollowingStatus_MAX = 4
    };

    enum class EPawnActionFailHandling : uint8_t //Enum AIModule.EPawnActionFailHandling
    {
        RequireSuccess = 0,
        IgnoreFailure = 1,
        EPawnActionFailHandling_MAX = 2
    };

    enum class EPawnSubActionTriggeringPolicy : uint8_t //Enum AIModule.EPawnSubActionTriggeringPolicy
    {
        CopyBeforeTriggering = 0,
        ReuseInstances = 1,
        EPawnSubActionTriggeringPolicy_MAX = 2
    };

    enum class EPawnActionMoveMode : uint8_t //Enum AIModule.EPawnActionMoveMode
    {
        UsePathfinding = 0,
        StraightLine = 1,
        EPawnActionMoveMode_MAX = 2
    };

    enum class Default__UserDefinedEnum : uint8_t //UserDefinedEnum Engine.Default__UserDefinedEnum
    {
    };

    enum class TabHeaderItemState : uint8_t //UserDefinedEnum TabHeaderItemState.TabHeaderItemState
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        TabHeaderItemState_MAX = 2
    };

    enum class NPC_Pose : uint8_t //UserDefinedEnum NPC_Pose.NPC_Pose
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NPC_MAX = 3
    };

    enum class NPC_YellContent : uint8_t //UserDefinedEnum NPC_YellContent.NPC_YellContent
    {
        NewEnumerator0 = 0,
        NewEnumerator4 = 1,
        NewEnumerator15 = 2,
        NewEnumerator24 = 3,
        NewEnumerator5 = 4,
        NewEnumerator6 = 5,
        NewEnumerator22 = 6,
        NewEnumerator10 = 7,
        NewEnumerator18 = 8,
        NewEnumerator19 = 9,
        NewEnumerator23 = 10,
        NewEnumerator16 = 11,
        NewEnumerator17 = 12,
        NewEnumerator7 = 13,
        NewEnumerator8 = 14,
        NewEnumerator9 = 15,
        NewEnumerator11 = 16,
        NewEnumerator35 = 17,
        NewEnumerator20 = 18,
        NewEnumerator21 = 19,
        NewEnumerator26 = 20,
        NewEnumerator25 = 21,
        NewEnumerator27 = 22,
        NewEnumerator28 = 23,
        NewEnumerator29 = 24,
        NewEnumerator45 = 25,
        NewEnumerator30 = 26,
        NewEnumerator31 = 27,
        NewEnumerator32 = 28,
        NewEnumerator33 = 29,
        NewEnumerator34 = 30,
        NewEnumerator37 = 31,
        NewEnumerator42 = 32,
        NewEnumerator38 = 33,
        NewEnumerator39 = 34,
        NewEnumerator40 = 35,
        NewEnumerator43 = 36,
        NewEnumerator44 = 37,
        NewEnumerator46 = 38,
        NewEnumerator47 = 39,
        NewEnumerator48 = 40,
        NewEnumerator49 = 41,
        NewEnumerator50 = 42,
        NewEnumerator51 = 43,
        NPC_MAX = 44
    };

    enum class AreaRecType : uint8_t //UserDefinedEnum AreaRecType.AreaRecType
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        NewEnumerator4 = 4,
        AreaRecType_MAX = 5
    };

    enum class BPE_EscapeVolumeState : uint8_t //UserDefinedEnum BPE_EscapeVolumeState.BPE_EscapeVolumeState
    {
        NewEnumerator4 = 0,
        NewEnumerator0 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        NewEnumerator6 = 4,
        BPE_MAX = 5
    };

    enum class NPC_RoleIdentify : uint8_t //UserDefinedEnum NPC_RoleIdentify.NPC_RoleIdentify
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        NPC_MAX = 4
    };

    enum class Enum_VariableType : uint8_t //UserDefinedEnum Enum_VariableType.Enum_VariableType
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        NewEnumerator4 = 4,
        NewEnumerator5 = 5,
        NewEnumerator7 = 6,
        Enum_MAX = 7
    };

    enum class E_UamGameFlowStates : uint8_t //UserDefinedEnum E_UamGameFlowStates.E_UamGameFlowStates
    {
        NewEnumerator0 = 0,
        NewEnumerator3 = 1,
        NewEnumerator1 = 2,
        NewEnumerator2 = 3,
        E_MAX = 4
    };

    enum class EnumMapName : uint8_t //UserDefinedEnum EnumMapName.EnumMapName
    {
        NewEnumerator4 = 0,
        NewEnumerator0 = 1,
        NewEnumerator1 = 2,
        NewEnumerator5 = 3,
        EnumMapName_MAX = 4
    };

    enum class Enum_AIHurtState : uint8_t //UserDefinedEnum Enum_AIHurtState.Enum_AIHurtState
    {
        NewEnumerator17 = 0,
        NewEnumerator16 = 1,
        NewEnumerator0 = 2,
        NewEnumerator1 = 3,
        NewEnumerator2 = 4,
        NewEnumerator3 = 5,
        NewEnumerator4 = 6,
        NewEnumerator5 = 7,
        NewEnumerator6 = 8,
        NewEnumerator7 = 9,
        NewEnumerator8 = 10,
        NewEnumerator9 = 11,
        NewEnumerator10 = 12,
        NewEnumerator11 = 13,
        NewEnumerator12 = 14,
        NewEnumerator13 = 15,
        Enum_MAX = 16
    };

    enum class NPC_Weather : uint8_t //UserDefinedEnum NPC_Weather.NPC_Weather
    {
        NewEnumerator0 = 0,
        NewEnumerator7 = 1,
        NewEnumerator9 = 2,
        NPC_MAX = 3
    };

    enum class NPC_Work : uint8_t //UserDefinedEnum NPC_Work.NPC_Work
    {
        NewEnumerator4 = 0,
        NewEnumerator0 = 1,
        NewEnumerator1 = 2,
        NewEnumerator2 = 3,
        NewEnumerator3 = 4,
        NewEnumerator5 = 5,
        NewEnumerator6 = 6,
        NPC_MAX = 7
    };

    enum class NPC_YellType : uint8_t //UserDefinedEnum NPC_YellType.NPC_YellType
    {
        NewEnumerator0 = 0,
        NewEnumerator4 = 1,
        NewEnumerator5 = 2,
        NewEnumerator6 = 3,
        NewEnumerator7 = 4,
        NewEnumerator8 = 5,
        NPC_MAX = 6
    };

    enum class NPC_PlayerDebugOrder : uint8_t //UserDefinedEnum NPC_PlayerDebugOrder.NPC_PlayerDebugOrder
    {
        NewEnumerator7 = 0,
        NewEnumerator4 = 1,
        NPC_MAX = 2
    };

    enum class NPC_ChangeFactionReason : uint8_t //UserDefinedEnum NPC_ChangeFactionReason.NPC_ChangeFactionReason
    {
        NewEnumerator0 = 0,
        NewEnumerator4 = 1,
        NewEnumerator5 = 2,
        NewEnumerator9 = 3,
        NPC_MAX = 4
    };

    enum class NPC_LookPointType : uint8_t //UserDefinedEnum NPC_LookPointType.NPC_LookPointType
    {
        NewEnumerator4 = 0,
        NewEnumerator0 = 1,
        NewEnumerator1 = 2,
        NewEnumerator2 = 3,
        NewEnumerator7 = 4,
        NewEnumerator3 = 5,
        NewEnumerator5 = 6,
        NewEnumerator8 = 7,
        NPC_MAX = 8
    };

    enum class NPC_NerfType : uint8_t //UserDefinedEnum NPC_NerfType.NPC_NerfType
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator4 = 2,
        NewEnumerator2 = 3,
        NPC_MAX = 4
    };

    enum class NPC_NextMoveTargetLocType : uint8_t //UserDefinedEnum NPC_NextMoveTargetLocType.NPC_NextMoveTargetLocType
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        NPC_MAX = 4
    };

    enum class NPC_AISightDirectionType : uint8_t //UserDefinedEnum NPC_AISightDirectionType.NPC_AISightDirectionType
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        NPC_MAX = 4
    };

    enum class NPC_GrenadeType : uint8_t //UserDefinedEnum NPC_GrenadeType.NPC_GrenadeType
    {
        NewEnumerator11 = 0,
        NewEnumerator0 = 1,
        NewEnumerator1 = 2,
        NewEnumerator2 = 3,
        NewEnumerator3 = 4,
        NewEnumerator4 = 5,
        NewEnumerator5 = 6,
        NewEnumerator6 = 7,
        NewEnumerator7 = 8,
        NewEnumerator8 = 9,
        NewEnumerator9 = 10,
        NewEnumerator10 = 11,
        NPC_MAX = 12
    };

    enum class NPC_HealthCondition : uint8_t //UserDefinedEnum NPC_HealthCondition.NPC_HealthCondition
    {
        NewEnumerator4 = 0,
        NewEnumerator0 = 1,
        NewEnumerator1 = 2,
        NewEnumerator2 = 3,
        NPC_MAX = 4
    };

    enum class E_UamPlayerStartPointType : uint8_t //UserDefinedEnum E_UamPlayerStartPointType.E_UamPlayerStartPointType
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        E_MAX = 3
    };

    enum class NPC_LocBaseOnEnemyTargetType : uint8_t //UserDefinedEnum NPC_LocBaseOnEnemyTargetType.NPC_LocBaseOnEnemyTargetType
    {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        NewEnumerator4 = 4,
        NewEnumerator5 = 5,
        NewEnumerator6 = 6,
        NPC_MAX = 7
    };

    enum class NPC_MoveDirection : uint8_t //UserDefinedEnum NPC_MoveDirection.NPC_MoveDirection
    {
        NewEnumerator2 = 0,
        NewEnumerator0 = 1,
        NewEnumerator1 = 2,
        NewEnumerator3 = 3,
        NewEnumerator4 = 4,
        NPC_MAX = 5
    };

    enum class NPC_Strategy : uint8_t //UserDefinedEnum NPC_Strategy.NPC_Strategy
    {
        NewEnumerator4 = 0,
        NewEnumerator0 = 1,
        NewEnumerator5 = 2,
        NewEnumerator6 = 3,
        NewEnumerator7 = 4,
        NewEnumerator8 = 5,
        NewEnumerator12 = 6,
        NewEnumerator13 = 7,
        NPC_MAX = 8
    };


}