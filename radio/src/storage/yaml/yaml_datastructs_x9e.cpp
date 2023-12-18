// generated by generate_yaml.py

//
// Enums first
//

const struct YamlIdStr enum_HatsMode[] = {
  {  HATSMODE_TRIMS_ONLY, "TRIMS_ONLY"  },
  {  HATSMODE_KEYS_ONLY, "KEYS_ONLY"  },
  {  HATSMODE_SWITCHABLE, "SWITCHABLE"  },
  {  HATSMODE_GLOBAL, "GLOBAL"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_BacklightMode[] = {
  {  e_backlight_mode_off, "backlight_mode_off"  },
  {  e_backlight_mode_keys, "backlight_mode_keys"  },
  {  e_backlight_mode_sticks, "backlight_mode_sticks"  },
  {  e_backlight_mode_all, "backlight_mode_all"  },
  {  e_backlight_mode_on, "backlight_mode_on"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_AntennaModes[] = {
  {  ANTENNA_MODE_INTERNAL, "MODE_INTERNAL"  },
  {  ANTENNA_MODE_ASK, "MODE_ASK"  },
  {  ANTENNA_MODE_PER_MODEL, "MODE_PER_MODEL"  },
  {  ANTENNA_MODE_EXTERNAL, "MODE_EXTERNAL"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_ModuleType[] = {
  {  MODULE_TYPE_NONE, "TYPE_NONE"  },
  {  MODULE_TYPE_PPM, "TYPE_PPM"  },
  {  MODULE_TYPE_XJT_PXX1, "TYPE_XJT_PXX1"  },
  {  MODULE_TYPE_ISRM_PXX2, "TYPE_ISRM_PXX2"  },
  {  MODULE_TYPE_DSM2, "TYPE_DSM2"  },
  {  MODULE_TYPE_CROSSFIRE, "TYPE_CROSSFIRE"  },
  {  MODULE_TYPE_MULTIMODULE, "TYPE_MULTIMODULE"  },
  {  MODULE_TYPE_R9M_PXX1, "TYPE_R9M_PXX1"  },
  {  MODULE_TYPE_R9M_PXX2, "TYPE_R9M_PXX2"  },
  {  MODULE_TYPE_R9M_LITE_PXX1, "TYPE_R9M_LITE_PXX1"  },
  {  MODULE_TYPE_R9M_LITE_PXX2, "TYPE_R9M_LITE_PXX2"  },
  {  MODULE_TYPE_GHOST, "TYPE_GHOST"  },
  {  MODULE_TYPE_R9M_LITE_PRO_PXX2, "TYPE_R9M_LITE_PRO_PXX2"  },
  {  MODULE_TYPE_SBUS, "TYPE_SBUS"  },
  {  MODULE_TYPE_XJT_LITE_PXX2, "TYPE_XJT_LITE_PXX2"  },
  {  MODULE_TYPE_FLYSKY_AFHDS2A, "TYPE_FLYSKY_AFHDS2A"  },
  {  MODULE_TYPE_FLYSKY_AFHDS3, "TYPE_FLYSKY_AFHDS3"  },
  {  MODULE_TYPE_LEMON_DSMP, "TYPE_LEMON_DSMP"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_TrainerMultiplex[] = {
  {  TRAINER_OFF, "OFF"  },
  {  TRAINER_ADD, "ADD"  },
  {  TRAINER_REPL, "REPL"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_BeeperMode[] = {
  {  e_mode_quiet, "mode_quiet"  },
  {  e_mode_alarms, "mode_alarms"  },
  {  e_mode_nokeys, "mode_nokeys"  },
  {  e_mode_all, "mode_all"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_BluetoothModes[] = {
  {  BLUETOOTH_OFF, "OFF"  },
  {  BLUETOOTH_TELEMETRY, "TELEMETRY"  },
  {  BLUETOOTH_TRAINER, "TRAINER"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_Functions[] = {
  {  FUNC_OVERRIDE_CHANNEL, "OVERRIDE_CHANNEL"  },
  {  FUNC_TRAINER, "TRAINER"  },
  {  FUNC_INSTANT_TRIM, "INSTANT_TRIM"  },
  {  FUNC_RESET, "RESET"  },
  {  FUNC_SET_TIMER, "SET_TIMER"  },
  {  FUNC_ADJUST_GVAR, "ADJUST_GVAR"  },
  {  FUNC_VOLUME, "VOLUME"  },
  {  FUNC_SET_FAILSAFE, "SET_FAILSAFE"  },
  {  FUNC_RANGECHECK, "RANGECHECK"  },
  {  FUNC_BIND, "BIND"  },
  {  FUNC_PLAY_SOUND, "PLAY_SOUND"  },
  {  FUNC_PLAY_TRACK, "PLAY_TRACK"  },
  {  FUNC_PLAY_VALUE, "PLAY_VALUE"  },
  {  FUNC_PLAY_SCRIPT, "PLAY_SCRIPT"  },
  {  FUNC_BACKGND_MUSIC, "BACKGND_MUSIC"  },
  {  FUNC_BACKGND_MUSIC_PAUSE, "BACKGND_MUSIC_PAUSE"  },
  {  FUNC_VARIO, "VARIO"  },
  {  FUNC_HAPTIC, "HAPTIC"  },
  {  FUNC_LOGS, "LOGS"  },
  {  FUNC_BACKLIGHT, "BACKLIGHT"  },
  {  FUNC_SCREENSHOT, "SCREENSHOT"  },
  {  FUNC_RACING_MODE, "RACING_MODE"  },
  {  FUNC_DISABLE_AUDIO_AMP, "DISABLE_AUDIO_AMP"  },
  {  FUNC_RGB_LED, "RGB_LED"  },
  {  FUNC_TEST, "TEST"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_TimerModes[] = {
  {  TMRMODE_OFF, "OFF"  },
  {  TMRMODE_ON, "ON"  },
  {  TMRMODE_START, "START"  },
  {  TMRMODE_THR, "THR"  },
  {  TMRMODE_THR_REL, "THR_REL"  },
  {  TMRMODE_THR_START, "THR_START"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_MixerMultiplex[] = {
  {  MLTPX_ADD, "ADD"  },
  {  MLTPX_MUL, "MUL"  },
  {  MLTPX_REPL, "REPL"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_MixSources[] = {
  {  MIXSRC_NONE, "NONE"  },
  {  MIXSRC_MIN, "MIN"  },
  {  MIXSRC_MAX, "MAX"  },
  {  MIXSRC_TrimRud, "TrimRud"  },
  {  MIXSRC_TrimEle, "TrimEle"  },
  {  MIXSRC_TrimThr, "TrimThr"  },
  {  MIXSRC_TrimAil, "TrimAil"  },
  {  MIXSRC_TrimT5, "TrimT5"  },
  {  MIXSRC_TrimT6, "TrimT6"  },
  {  MIXSRC_TrimT7, "TrimT7"  },
  {  MIXSRC_TrimT8, "TrimT8"  },
  {  MIXSRC_TX_VOLTAGE, "TX_VOLTAGE"  },
  {  MIXSRC_TX_TIME, "TX_TIME"  },
  {  MIXSRC_TX_GPS, "TX_GPS"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_LogicalSwitchesFunctions[] = {
  {  LS_FUNC_NONE, "FUNC_NONE"  },
  {  LS_FUNC_VEQUAL, "FUNC_VEQUAL"  },
  {  LS_FUNC_VALMOSTEQUAL, "FUNC_VALMOSTEQUAL"  },
  {  LS_FUNC_VPOS, "FUNC_VPOS"  },
  {  LS_FUNC_VNEG, "FUNC_VNEG"  },
  {  LS_FUNC_APOS, "FUNC_APOS"  },
  {  LS_FUNC_ANEG, "FUNC_ANEG"  },
  {  LS_FUNC_AND, "FUNC_AND"  },
  {  LS_FUNC_OR, "FUNC_OR"  },
  {  LS_FUNC_XOR, "FUNC_XOR"  },
  {  LS_FUNC_EDGE, "FUNC_EDGE"  },
  {  LS_FUNC_EQUAL, "FUNC_EQUAL"  },
  {  LS_FUNC_GREATER, "FUNC_GREATER"  },
  {  LS_FUNC_LESS, "FUNC_LESS"  },
  {  LS_FUNC_DIFFEGREATER, "FUNC_DIFFEGREATER"  },
  {  LS_FUNC_ADIFFEGREATER, "FUNC_ADIFFEGREATER"  },
  {  LS_FUNC_TIMER, "FUNC_TIMER"  },
  {  LS_FUNC_STICKY, "FUNC_STICKY"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_SwashType[] = {
  {  SWASH_TYPE_NONE, "TYPE_NONE"  },
  {  SWASH_TYPE_120, "TYPE_120"  },
  {  SWASH_TYPE_120X, "TYPE_120X"  },
  {  SWASH_TYPE_140, "TYPE_140"  },
  {  SWASH_TYPE_90, "TYPE_90"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_SwitchSources[] = {
  {  SWSRC_NONE, "NONE"  },
  {  SWSRC_ON, "ON"  },
  {  SWSRC_ONE, "ONE"  },
  {  SWSRC_TELEMETRY_STREAMING, "TELEMETRY_STREAMING"  },
  {  SWSRC_RADIO_ACTIVITY, "RADIO_ACTIVITY"  },
  {  SWSRC_TRAINER_CONNECTED, "TRAINER_CONNECTED"  },
  {  SWSRC_OFF, "OFF"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_PotsWarnMode[] = {
  {  POTS_WARN_OFF, "WARN_OFF"  },
  {  POTS_WARN_MANUAL, "WARN_MANUAL"  },
  {  POTS_WARN_AUTO, "WARN_AUTO"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_ModelOverridableEnable[] = {
  {  OVERRIDE_GLOBAL, "GLOBAL"  },
  {  OVERRIDE_OFF, "OFF"  },
  {  OVERRIDE_ON, "ON"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_FailsafeModes[] = {
  {  FAILSAFE_NOT_SET, "NOT_SET"  },
  {  FAILSAFE_HOLD, "HOLD"  },
  {  FAILSAFE_CUSTOM, "CUSTOM"  },
  {  FAILSAFE_NOPULSES, "NOPULSES"  },
  {  FAILSAFE_RECEIVER, "RECEIVER"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_TelemetrySensorFormula[] = {
  {  TELEM_FORMULA_ADD, "FORMULA_ADD"  },
  {  TELEM_FORMULA_AVERAGE, "FORMULA_AVERAGE"  },
  {  TELEM_FORMULA_MIN, "FORMULA_MIN"  },
  {  TELEM_FORMULA_MAX, "FORMULA_MAX"  },
  {  TELEM_FORMULA_MULTIPLY, "FORMULA_MULTIPLY"  },
  {  TELEM_FORMULA_TOTALIZE, "FORMULA_TOTALIZE"  },
  {  TELEM_FORMULA_CELL, "FORMULA_CELL"  },
  {  TELEM_FORMULA_CONSUMPTION, "FORMULA_CONSUMPTION"  },
  {  TELEM_FORMULA_DIST, "FORMULA_DIST"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_TelemetrySensorType[] = {
  {  TELEM_TYPE_CUSTOM, "TYPE_CUSTOM"  },
  {  TELEM_TYPE_CALCULATED, "TYPE_CALCULATED"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_USBJoystickIfMode[] = {
  {  USBJOYS_JOYSTICK, "JOYSTICK"  },
  {  USBJOYS_GAMEPAD, "GAMEPAD"  },
  {  USBJOYS_MULTIAXIS, "MULTIAXIS"  },
  {  0, NULL  }
};
const struct YamlIdStr enum_USBJoystickCh[] = {
  {  USBJOYS_CH_NONE, "CH_NONE"  },
  {  USBJOYS_CH_BUTTON, "CH_BUTTON"  },
  {  USBJOYS_CH_AXIS, "CH_AXIS"  },
  {  USBJOYS_CH_SIM, "CH_SIM"  },
  {  0, NULL  }
};

//
// Structs last
//

static const struct YamlNode struct_CalibData[] = {
  YAML_IDX_CUST("calib",r_calib,w_calib),
  YAML_SIGNED( "mid", 16 ),
  YAML_SIGNED( "spanNeg", 16 ),
  YAML_SIGNED( "spanPos", 16 ),
  YAML_END
};
static const struct YamlNode struct_signed_16[] = {
  YAML_IDX,
  YAML_SIGNED( "val", 16 ),
  YAML_END
};
static const struct YamlNode struct_TrainerMix[] = {
  YAML_IDX,
  YAML_UNSIGNED( "srcChn", 6 ),
  YAML_ENUM("mode", 2, enum_TrainerMultiplex),
  YAML_SIGNED( "studWeight", 8 ),
  YAML_END
};
static const struct YamlNode struct_TrainerData[] = {
  YAML_ARRAY("calib", 16, 4, struct_signed_16, NULL),
  YAML_ARRAY("mix", 16, 4, struct_TrainerMix, NULL),
  YAML_END
};
static const struct YamlNode struct_anonymous_1[] = {
  YAML_STRING("name", 8),
  YAML_END
};
static const struct YamlNode struct_anonymous_2[] = {
  YAML_SIGNED( "val", 16 ),
  YAML_UNSIGNED( "mode", 8 ),
  YAML_UNSIGNED( "param", 8 ),
  YAML_SIGNED( "spare", 32 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_3[] = {
  YAML_SIGNED( "val1", 32 ),
  YAML_SIGNED( "val2", 32 ),
  YAML_END
};
static const struct YamlNode union_anonymous_0_elmts[] = {
  YAML_STRUCT("play", 64, struct_anonymous_1, NULL),
  YAML_STRUCT("all", 64, struct_anonymous_2, NULL),
  YAML_STRUCT("clear", 64, struct_anonymous_3, NULL),
  YAML_END
};
static const struct YamlNode struct_CustomFunctionData[] = {
  YAML_IDX,
  YAML_SIGNED_CUST( "swtch", 10, r_swtchSrc, w_swtchSrc ),
  YAML_ENUM("func", 6, enum_Functions),
  YAML_CUSTOM("def",r_customFn,w_customFn),
  YAML_PADDING( 64 ),
  YAML_PADDING( 1 ),
  YAML_PADDING( 7 ),
  YAML_END
};
static const struct YamlNode struct_RadioData[] = {
  YAML_UNSIGNED( "manuallyEdited", 1 ),
  YAML_SIGNED( "timezoneMinutes", 3 ),
  YAML_ENUM("hatsMode", 2, enum_HatsMode),
  YAML_UNSIGNED( "ppmunit", 2 ),
  YAML_CUSTOM("semver",nullptr,w_semver),
  YAML_CUSTOM("board",nullptr,w_board),
  YAML_ARRAY("calib", 48, 12, struct_CalibData, NULL),
  YAML_PADDING( 16 ),
  YAML_SIGNED( "currModel", 8 ),
  YAML_UNSIGNED( "contrast", 8 ),
  YAML_UNSIGNED( "vBatWarn", 8 ),
  YAML_SIGNED( "txVoltageCalibration", 8 ),
  YAML_ENUM("backlightMode", 3, enum_BacklightMode),
  YAML_ENUM("antennaMode", 2, enum_AntennaModes),
  YAML_UNSIGNED( "disableRtcWarning", 1 ),
  YAML_UNSIGNED( "keysBacklight", 1 ),
  YAML_UNSIGNED( "dontPlayHello", 1 ),
  YAML_ENUM("internalModule", 8, enum_ModuleType),
  YAML_STRUCT("trainer", 128, struct_TrainerData, NULL),
  YAML_UNSIGNED( "view", 8 ),
  YAML_PADDING( 2 ),
  YAML_UNSIGNED( "fai", 1 ),
  YAML_SIGNED_CUST( "beepMode", 2, r_beeperMode, w_beeperMode ),
  YAML_UNSIGNED( "alarmsFlash", 1 ),
  YAML_UNSIGNED( "disableMemoryWarning", 1 ),
  YAML_UNSIGNED( "disableAlarmWarning", 1 ),
  YAML_UNSIGNED( "stickMode", 2 ),
  YAML_SIGNED( "timezone", 5 ),
  YAML_UNSIGNED( "adjustRTC", 1 ),
  YAML_UNSIGNED( "inactivityTimer", 8 ),
  YAML_CUSTOM("telemetryBaudrate",r_telemetryBaudrate,nullptr),
  YAML_UNSIGNED( "internalModuleBaudrate", 3 ),
  YAML_SIGNED( "splashMode", 3 ),
  YAML_SIGNED_CUST( "hapticMode", 2, r_beeperMode, w_beeperMode ),
  YAML_SIGNED( "switchesDelay", 8 ),
  YAML_UNSIGNED( "lightAutoOff", 8 ),
  YAML_UNSIGNED( "templateSetup", 8 ),
  YAML_SIGNED( "PPM_Multiplier", 8 ),
  YAML_SIGNED_CUST( "hapticLength", 8, r_5pos, w_5pos ),
  YAML_SIGNED_CUST( "beepLength", 3, r_5pos, w_5pos ),
  YAML_SIGNED_CUST( "hapticStrength", 3, r_5pos, w_5pos ),
  YAML_UNSIGNED( "gpsFormat", 1 ),
  YAML_UNSIGNED( "audioMuteEnable", 1 ),
  YAML_UNSIGNED_CUST( "speakerPitch", 8, r_spPitch, w_spPitch ),
  YAML_SIGNED_CUST( "speakerVolume", 8, r_vol, w_vol ),
  YAML_SIGNED_CUST( "vBatMin", 8, r_vbat_min, w_vbat_min ),
  YAML_SIGNED_CUST( "vBatMax", 8, r_vbat_max, w_vbat_max ),
  YAML_UNSIGNED( "backlightBright", 8 ),
  YAML_UNSIGNED( "globalTimer", 32 ),
  YAML_UNSIGNED( "bluetoothBaudrate", 4 ),
  YAML_ENUM("bluetoothMode", 4, enum_BluetoothModes),
  YAML_UNSIGNED( "countryCode", 2 ),
  YAML_SIGNED( "pwrOnSpeed", 3 ),
  YAML_SIGNED( "pwrOffSpeed", 3 ),
  YAML_CUSTOM("jitterFilter",r_jitterFilter,nullptr),
  YAML_UNSIGNED( "noJitterFilter", 1 ),
  YAML_UNSIGNED( "imperial", 1 ),
  YAML_UNSIGNED( "disableRssiPoweroffAlarm", 1 ),
  YAML_UNSIGNED( "USBMode", 2 ),
  YAML_UNSIGNED( "jackMode", 2 ),
  YAML_PADDING( 1 ),
  YAML_STRING("ttsLanguage", 2),
  YAML_SIGNED_CUST( "beepVolume", 4, r_5pos, w_5pos ),
  YAML_SIGNED_CUST( "wavVolume", 4, r_5pos, w_5pos ),
  YAML_SIGNED_CUST( "varioVolume", 4, r_5pos, w_5pos ),
  YAML_SIGNED_CUST( "backgroundVolume", 4, r_5pos, w_5pos ),
  YAML_SIGNED_CUST( "varioPitch", 8, r_vPitch, w_vPitch ),
  YAML_SIGNED_CUST( "varioRange", 8, r_vPitch, w_vPitch ),
  YAML_SIGNED( "varioRepeat", 8 ),
  YAML_ARRAY("customFn", 88, 64, struct_CustomFunctionData, cfn_is_active),
  YAML_CUSTOM("auxSerialMode",r_serialMode,nullptr),
  YAML_CUSTOM("aux2SerialMode",r_serialMode,nullptr),
  YAML_ARRAY("serialPort", 8, 4, struct_serialConfig, nullptr),
  YAML_ARRAY("sticksConfig", 0, MAX_STICKS, struct_stickConfig, stick_name_valid),
  YAML_ARRAY("slidersConfig", 0, MAX_POTS, struct_sliderConfig, nullptr),
  YAML_ARRAY("potsConfig", 4, 8, struct_potConfig, nullptr),
  YAML_ARRAY("switchConfig", 2, 32, struct_switchConfig, nullptr),
  YAML_ARRAY("flexSwitches", 0, MAX_FLEX_SWITCHES, struct_flexSwitch, flex_sw_valid),
  YAML_UNSIGNED( "backlightColor", 8 ),
  YAML_PADDING( 8 ),
  YAML_STRING("bluetoothName", 10),
  YAML_STRING("ownerRegistrationID", 8),
  YAML_CUSTOM("rotEncDirection",r_rotEncDirection,nullptr),
  YAML_UNSIGNED( "rotEncMode", 3 ),
  YAML_SIGNED( "uartSampleMode", 2 ),
  YAML_PADDING( 3 ),
  YAML_UNSIGNED( "radioGFDisabled", 1 ),
  YAML_UNSIGNED( "radioTrainerDisabled", 1 ),
  YAML_UNSIGNED( "modelHeliDisabled", 1 ),
  YAML_UNSIGNED( "modelFMDisabled", 1 ),
  YAML_UNSIGNED( "modelCurvesDisabled", 1 ),
  YAML_UNSIGNED( "modelGVDisabled", 1 ),
  YAML_UNSIGNED( "modelLSDisabled", 1 ),
  YAML_UNSIGNED( "modelSFDisabled", 1 ),
  YAML_UNSIGNED( "modelCustomScriptsDisabled", 1 ),
  YAML_UNSIGNED( "modelTelemetryDisabled", 1 ),
  YAML_END
};
static const struct YamlNode struct_unsigned_8[] = {
  YAML_IDX,
  YAML_UNSIGNED( "val", 8 ),
  YAML_END
};
static const struct YamlNode struct_ModelHeader[] = {
  YAML_STRING("name", 12),
  YAML_ARRAY("modelId", 8, 2, struct_unsigned_8, NULL),
  YAML_STRING("bitmap", 10),
  YAML_END
};
static const struct YamlNode struct_TimerData[] = {
  YAML_IDX,
  YAML_UNSIGNED( "start", 22 ),
  YAML_SIGNED_CUST( "swtch", 10, r_swtchSrc, w_swtchSrc ),
  YAML_SIGNED( "value", 22 ),
  YAML_ENUM("mode", 3, enum_TimerModes),
  YAML_UNSIGNED( "countdownBeep", 2 ),
  YAML_UNSIGNED( "minuteBeep", 1 ),
  YAML_UNSIGNED( "persistent", 2 ),
  YAML_SIGNED( "countdownStart", 2 ),
  YAML_UNSIGNED( "showElapsed", 1 ),
  YAML_UNSIGNED( "extraHaptic", 1 ),
  YAML_PADDING( 6 ),
  YAML_STRING("name", 8),
  YAML_END
};
static const struct YamlNode struct_CurveRef[] = {
  YAML_UNSIGNED( "type", 8 ),
  YAML_SIGNED_CUST( "value", 8, in_read_weight, in_write_weight ),
  YAML_END
};
static const struct YamlNode struct_MixData[] = {
  YAML_SIGNED_CUST( "weight", 11, in_read_weight, in_write_weight ),
  YAML_UNSIGNED( "destCh", 5 ),
  YAML_UNSIGNED_CUST( "srcRaw", 10, r_mixSrcRaw, w_mixSrcRaw ),
  YAML_UNSIGNED( "carryTrim", 1 ),
  YAML_UNSIGNED( "mixWarn", 2 ),
  YAML_ENUM("mltpx", 2, enum_MixerMultiplex),
  YAML_PADDING( 1 ),
  YAML_SIGNED_CUST( "offset", 13, in_read_weight, in_write_weight ),
  YAML_SIGNED_CUST( "swtch", 10, r_swtchSrc, w_swtchSrc ),
  YAML_UNSIGNED_CUST( "flightModes", 9, r_flightModes, w_flightModes ),
  YAML_STRUCT("curve", 16, struct_CurveRef, NULL),
  YAML_UNSIGNED( "delayUp", 8 ),
  YAML_UNSIGNED( "delayDown", 8 ),
  YAML_UNSIGNED( "speedUp", 8 ),
  YAML_UNSIGNED( "speedDown", 8 ),
  YAML_STRING("name", 6),
  YAML_END
};
static const struct YamlNode struct_LimitData[] = {
  YAML_IDX,
  YAML_SIGNED_CUST( "min", 11, in_read_weight, in_write_weight ),
  YAML_SIGNED_CUST( "max", 11, in_read_weight, in_write_weight ),
  YAML_SIGNED( "ppmCenter", 10 ),
  YAML_SIGNED_CUST( "offset", 11, in_read_weight, in_write_weight ),
  YAML_UNSIGNED( "symetrical", 1 ),
  YAML_UNSIGNED( "revert", 1 ),
  YAML_PADDING( 3 ),
  YAML_SIGNED( "curve", 8 ),
  YAML_STRING("name", 6),
  YAML_END
};
static const struct YamlNode struct_ExpoData[] = {
  YAML_UNSIGNED( "mode", 2 ),
  YAML_UNSIGNED( "scale", 14 ),
  YAML_CUSTOM("carryTrim",r_carryTrim,nullptr),
  YAML_SIGNED( "trimSource", 6 ),
  YAML_UNSIGNED_CUST( "srcRaw", 10, r_mixSrcRaw, w_mixSrcRaw ),
  YAML_UNSIGNED( "chn", 5 ),
  YAML_SIGNED_CUST( "swtch", 10, r_swtchSrc, w_swtchSrc ),
  YAML_UNSIGNED_CUST( "flightModes", 9, r_flightModes, w_flightModes ),
  YAML_SIGNED_CUST( "weight", 8, in_read_weight, in_write_weight ),
  YAML_STRING("name", 6),
  YAML_SIGNED_CUST( "offset", 8, in_read_weight, in_write_weight ),
  YAML_STRUCT("curve", 16, struct_CurveRef, NULL),
  YAML_END
};
static const struct YamlNode struct_CurveHeader[] = {
  YAML_IDX,
  YAML_UNSIGNED( "type", 1 ),
  YAML_UNSIGNED( "smooth", 1 ),
  YAML_SIGNED( "points", 6 ),
  YAML_STRING("name", 3),
  YAML_END
};
static const struct YamlNode struct_signed_8[] = {
  YAML_IDX,
  YAML_SIGNED( "val", 8 ),
  YAML_END
};
static const struct YamlNode struct_LogicalSwitchData[] = {
  YAML_IDX,
  YAML_ENUM("func", 8, enum_LogicalSwitchesFunctions),
  YAML_CUSTOM("def",r_logicSw,w_logicSw),
  YAML_PADDING( 10 ),
  YAML_PADDING( 10 ),
  YAML_SIGNED_CUST( "andsw", 10, r_swtchSrc, w_swtchSrc ),
  YAML_PADDING( 1 ),
  YAML_PADDING( 1 ),
  YAML_PADDING( 16 ),
  YAML_UNSIGNED( "delay", 8 ),
  YAML_UNSIGNED( "duration", 8 ),
  YAML_END
};
static const struct YamlNode struct_SwashRingData[] = {
  YAML_ENUM("type", 8, enum_SwashType),
  YAML_UNSIGNED( "value", 8 ),
  YAML_UNSIGNED_CUST( "collectiveSource", 8, r_mixSrcRaw, w_mixSrcRaw ),
  YAML_UNSIGNED_CUST( "aileronSource", 8, r_mixSrcRaw, w_mixSrcRaw ),
  YAML_UNSIGNED_CUST( "elevatorSource", 8, r_mixSrcRaw, w_mixSrcRaw ),
  YAML_SIGNED( "collectiveWeight", 8 ),
  YAML_SIGNED( "aileronWeight", 8 ),
  YAML_SIGNED( "elevatorWeight", 8 ),
  YAML_END
};
static const struct YamlNode struct_trim_t[] = {
  YAML_IDX,
  YAML_SIGNED( "value", 11 ),
  YAML_UNSIGNED( "mode", 5 ),
  YAML_END
};
static const struct YamlNode struct_FlightModeData[] = {
  YAML_IDX,
  YAML_ARRAY("trim", 16, 6, struct_trim_t, NULL),
  YAML_STRING("name", 10),
  YAML_SIGNED_CUST( "swtch", 10, r_swtchSrc, w_swtchSrc ),
  YAML_PADDING( 6 ),
  YAML_UNSIGNED( "fadeIn", 8 ),
  YAML_UNSIGNED( "fadeOut", 8 ),
  YAML_ARRAY("gvars", 16, 9, struct_signed_16, gvar_is_active),
  YAML_END
};
static const struct YamlNode struct_GVarData[] = {
  YAML_IDX,
  YAML_STRING("name", 3),
  YAML_UNSIGNED( "min", 12 ),
  YAML_UNSIGNED( "max", 12 ),
  YAML_UNSIGNED( "popup", 1 ),
  YAML_UNSIGNED( "prec", 1 ),
  YAML_UNSIGNED( "unit", 2 ),
  YAML_PADDING( 4 ),
  YAML_END
};
static const struct YamlNode struct_VarioData[] = {
  YAML_UNSIGNED_CUST( "source", 7, r_tele_sensor, w_tele_sensor ),
  YAML_UNSIGNED( "centerSilent", 1 ),
  YAML_SIGNED( "centerMax", 8 ),
  YAML_SIGNED( "centerMin", 8 ),
  YAML_SIGNED( "min", 8 ),
  YAML_SIGNED( "max", 8 ),
  YAML_END
};
static const struct YamlNode struct_RssiAlarmData[] = {
  YAML_CUSTOM("disabled",r_rssiDisabled,nullptr),
  YAML_CUSTOM("warning",r_rssiWarning,nullptr),
  YAML_CUSTOM("critical",r_rssiCritical,nullptr),
  YAML_END
};
static const struct YamlNode struct_RFAlarmData[] = {
  YAML_SIGNED( "warning", 8 ),
  YAML_SIGNED( "critical", 8 ),
  YAML_END
};
static const struct YamlNode struct_PpmModule[] = {
  YAML_SIGNED( "delay", 6 ),
  YAML_UNSIGNED( "pulsePol", 1 ),
  YAML_UNSIGNED( "outputType", 1 ),
  YAML_SIGNED( "frameLength", 8 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_5[] = {
  YAML_PADDING( 8 ),
  YAML_UNSIGNED( "disableTelemetry", 1 ),
  YAML_UNSIGNED( "disableMapping", 1 ),
  YAML_UNSIGNED( "autoBindMode", 1 ),
  YAML_UNSIGNED( "lowPowerMode", 1 ),
  YAML_UNSIGNED( "receiverTelemetryOff", 1 ),
  YAML_UNSIGNED( "receiverHigherChannels", 1 ),
  YAML_PADDING( 2 ),
  YAML_SIGNED( "optionValue", 8 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_6[] = {
  YAML_UNSIGNED( "power", 2 ),
  YAML_PADDING( 2 ),
  YAML_UNSIGNED( "receiverTelemetryOff", 1 ),
  YAML_UNSIGNED( "receiverHigherChannels", 1 ),
  YAML_SIGNED( "antennaMode", 2 ),
  YAML_PADDING( 8 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_7[] = {
  YAML_PADDING( 6 ),
  YAML_UNSIGNED( "noninverted", 1 ),
  YAML_PADDING( 1 ),
  YAML_SIGNED( "refreshRate", 8 ),
  YAML_END
};
static const struct YamlNode struct_string_64[] = {
  YAML_IDX,
  YAML_STRING("val", 8),
  YAML_END
};
static const struct YamlNode struct_anonymous_8[] = {
  YAML_UNSIGNED( "receivers", 7 ),
  YAML_UNSIGNED( "racingMode", 1 ),
  YAML_ARRAY("receiverName", 64, 3, struct_string_64, NULL),
  YAML_END
};
static const struct YamlNode struct_anonymous_9[] = {
  YAML_ARRAY("rx_id", 8, 4, struct_unsigned_8, NULL),
  YAML_UNSIGNED( "mode", 3 ),
  YAML_UNSIGNED( "rfPower", 1 ),
  YAML_UNSIGNED( "reserved", 4 ),
  YAML_ARRAY("rx_freq", 8, 2, struct_unsigned_8, NULL),
  YAML_END
};
static const struct YamlNode struct_anonymous_10[] = {
  YAML_UNSIGNED( "emi", 2 ),
  YAML_UNSIGNED( "telemetry", 1 ),
  YAML_UNSIGNED( "phyMode", 3 ),
  YAML_UNSIGNED( "reserved", 2 ),
  YAML_UNSIGNED( "rfPower", 8 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_11[] = {
  YAML_UNSIGNED( "raw12bits", 1 ),
  YAML_UNSIGNED( "telemetryBaudrate", 3 ),
  YAML_PADDING( 4 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_12[] = {
  YAML_UNSIGNED( "telemetryBaudrate", 3 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_13[] = {
  YAML_UNSIGNED( "flags", 8 ),
  YAML_END
};
static const struct YamlNode union_anonymous_4_elmts[] = {
  YAML_ARRAY("raw", 8, 25, struct_unsigned_8, NULL),
  YAML_STRUCT("ppm", 16, struct_PpmModule, NULL),
  YAML_STRUCT("multi", 24, struct_anonymous_5, NULL),
  YAML_STRUCT("pxx", 16, struct_anonymous_6, NULL),
  YAML_STRUCT("sbus", 16, struct_anonymous_7, NULL),
  YAML_STRUCT("pxx2", 200, struct_anonymous_8, NULL),
  YAML_STRUCT("flysky", 56, struct_anonymous_9, NULL),
  YAML_STRUCT("afhds3", 16, struct_anonymous_10, NULL),
  YAML_STRUCT("ghost", 8, struct_anonymous_11, NULL),
  YAML_STRUCT("crsf", 8, struct_anonymous_12, NULL),
  YAML_STRUCT("dsmp", 8, struct_anonymous_13, NULL),
  YAML_END
};
static const struct YamlNode struct_ModuleData[] = {
  YAML_IDX,
  YAML_UNSIGNED_CUST( "type", 8, r_moduleType, w_moduleType ),
  YAML_CUSTOM("subType",r_modSubtype,w_modSubtype),
  YAML_UNSIGNED( "channelsStart", 8 ),
  YAML_SIGNED_CUST( "channelsCount", 8, r_channelsCount, w_channelsCount ),
  YAML_ENUM("failsafeMode", 4, enum_FailsafeModes),
  YAML_PADDING( 4 ),
  YAML_UNION("mod", 200, union_anonymous_4_elmts, select_mod_type),
  YAML_END
};
static const struct YamlNode struct_TrainerModuleData[] = {
  YAML_UNSIGNED_CUST( "mode", 8, r_trainerMode, w_trainerMode ),
  YAML_UNSIGNED( "channelsStart", 8 ),
  YAML_SIGNED( "channelsCount", 8 ),
  YAML_SIGNED( "frameLength", 8 ),
  YAML_SIGNED( "delay", 6 ),
  YAML_UNSIGNED( "pulsePol", 1 ),
  YAML_PADDING( 1 ),
  YAML_END
};
static const struct YamlNode union_ScriptDataInput_elmts[] = {
  YAML_SIGNED( "value", 16 ),
  YAML_UNSIGNED_CUST( "source", 16, r_mixSrcRaw, w_mixSrcRaw ),
  YAML_END
};
static const struct YamlNode union_ScriptDataInput[] = {
  YAML_IDX,
  YAML_UNION("u", 16, union_ScriptDataInput_elmts, select_script_input),
  YAML_END
};
static const struct YamlNode struct_ScriptData[] = {
  YAML_IDX,
  YAML_STRING("file", 6),
  YAML_STRING("name", 6),
  YAML_ARRAY("inputs", 16, 6, union_ScriptDataInput, NULL),
  YAML_END
};
static const struct YamlNode struct_string_32[] = {
  YAML_IDX,
  YAML_STRING("val", 4),
  YAML_END
};
static const struct YamlNode union_anonymous_14_elmts[] = {
  YAML_UNSIGNED( "id", 16 ),
  YAML_UNSIGNED( "persistentValue", 16 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_16[] = {
  YAML_UNSIGNED( "physID", 5 ),
  YAML_UNSIGNED( "rxIndex", 3 ),
  YAML_END
};
static const struct YamlNode union_anonymous_15_elmts[] = {
  YAML_STRUCT("frskyInstance", 8, struct_anonymous_16, NULL),
  YAML_UNSIGNED( "instance", 8 ),
  YAML_ENUM("formula", 8, enum_TelemetrySensorFormula),
  YAML_END
};
static const struct YamlNode struct_anonymous_18[] = {
  YAML_UNSIGNED( "ratio", 16 ),
  YAML_SIGNED( "offset", 16 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_19[] = {
  YAML_UNSIGNED( "source", 8 ),
  YAML_UNSIGNED( "index", 8 ),
  YAML_PADDING( 16 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_20[] = {
  YAML_ARRAY("sources", 8, 4, struct_signed_8, NULL),
  YAML_END
};
static const struct YamlNode struct_anonymous_21[] = {
  YAML_UNSIGNED( "source", 8 ),
  YAML_PADDING( 24 ),
  YAML_END
};
static const struct YamlNode struct_anonymous_22[] = {
  YAML_UNSIGNED( "gps", 8 ),
  YAML_UNSIGNED( "alt", 8 ),
  YAML_PADDING( 16 ),
  YAML_END
};
static const struct YamlNode union_anonymous_17_elmts[] = {
  YAML_STRUCT("custom", 32, struct_anonymous_18, NULL),
  YAML_STRUCT("cell", 32, struct_anonymous_19, NULL),
  YAML_STRUCT("calc", 32, struct_anonymous_20, NULL),
  YAML_STRUCT("consumption", 32, struct_anonymous_21, NULL),
  YAML_STRUCT("dist", 32, struct_anonymous_22, NULL),
  YAML_UNSIGNED( "param", 32 ),
  YAML_END
};
static const struct YamlNode struct_TelemetrySensor[] = {
  YAML_IDX,
  YAML_UNION("id1", 16, union_anonymous_14_elmts, select_id1),
  YAML_UNION("id2", 8, union_anonymous_15_elmts, select_id2),
  YAML_STRING("label", 4),
  YAML_UNSIGNED( "subId", 8 ),
  YAML_ENUM("type", 1, enum_TelemetrySensorType),
  YAML_PADDING( 1 ),
  YAML_UNSIGNED( "unit", 6 ),
  YAML_UNSIGNED( "prec", 2 ),
  YAML_UNSIGNED( "autoOffset", 1 ),
  YAML_UNSIGNED( "filter", 1 ),
  YAML_UNSIGNED( "logs", 1 ),
  YAML_UNSIGNED( "persistent", 1 ),
  YAML_UNSIGNED( "onlyPositive", 1 ),
  YAML_PADDING( 1 ),
  YAML_UNION("cfg", 32, union_anonymous_17_elmts, select_sensor_cfg),
  YAML_END
};
static const struct YamlNode struct_FrSkyBarData[] = {
  YAML_IDX,
  YAML_UNSIGNED_CUST( "source", 16, r_mixSrcRaw, w_mixSrcRaw ),
  YAML_SIGNED( "barMin", 16 ),
  YAML_SIGNED( "barMax", 16 ),
  YAML_END
};
static const struct YamlNode struct_LineDataSource[] = {
  YAML_IDX,
  YAML_UNSIGNED_CUST( "val", 16, r_mixSrcRaw, w_mixSrcRaw ),
  YAML_END
};
static const struct YamlNode struct_FrSkyLineData[] = {
  YAML_IDX,
  YAML_ARRAY("sources", 16, 3, struct_LineDataSource, NULL),
  YAML_END
};
static const struct YamlNode struct_TelemetryScriptData[] = {
  YAML_STRING("file", 6),
  YAML_ARRAY("inputs", 16, 8, struct_signed_16, NULL),
  YAML_END
};
static const struct YamlNode union_TelemetryScreenData_u_elmts[] = {
  YAML_ARRAY("bars", 48, 4, struct_FrSkyBarData, NULL),
  YAML_ARRAY("lines", 48, 4, struct_FrSkyLineData, NULL),
  YAML_STRUCT("script", 176, struct_TelemetryScriptData, NULL),
  YAML_END
};
static const struct YamlNode struct_TelemetryScreenData[] = {
  YAML_IDX,
  YAML_CUSTOM("type",r_tele_screen_type,w_tele_screen_type),
  YAML_UNION("u", 192, union_TelemetryScreenData_u_elmts, select_tele_screen_data),
  YAML_END
};
static const struct YamlNode struct_USBJoystickChData[] = {
  YAML_IDX,
  YAML_ENUM("mode", 3, enum_USBJoystickCh),
  YAML_UNSIGNED( "inversion", 1 ),
  YAML_UNSIGNED( "param", 4 ),
  YAML_UNSIGNED( "btn_num", 5 ),
  YAML_UNSIGNED( "switch_npos", 3 ),
  YAML_END
};
static const struct YamlNode struct_ModelData[] = {
  YAML_CUSTOM("semver",nullptr,w_semver),
  YAML_STRUCT("header", 192, struct_ModelHeader, NULL),
  YAML_ARRAY("timers", 136, 3, struct_TimerData, NULL),
  YAML_UNSIGNED( "telemetryProtocol", 3 ),
  YAML_UNSIGNED( "thrTrim", 1 ),
  YAML_UNSIGNED( "noGlobalFunctions", 1 ),
  YAML_UNSIGNED( "displayTrims", 2 ),
  YAML_UNSIGNED( "ignoreSensorIds", 1 ),
  YAML_SIGNED( "trimInc", 3 ),
  YAML_UNSIGNED( "disableThrottleWarning", 1 ),
  YAML_UNSIGNED( "displayChecklist", 1 ),
  YAML_UNSIGNED( "extendedLimits", 1 ),
  YAML_UNSIGNED( "extendedTrims", 1 ),
  YAML_UNSIGNED( "throttleReversed", 1 ),
  YAML_UNSIGNED( "enableCustomThrottleWarning", 1 ),
  YAML_UNSIGNED( "disableTelemetryWarning", 1 ),
  YAML_UNSIGNED( "showInstanceIds", 1 ),
  YAML_UNSIGNED( "checklistInteractive", 1 ),
  YAML_ENUM("hatsMode", 2, enum_HatsMode),
  YAML_PADDING( 2 ),
  YAML_SIGNED( "customThrottleWarningPosition", 8 ),
  YAML_UNSIGNED( "beepANACenter", 16 ),
  YAML_ARRAY("mixData", 160, 64, struct_MixData, NULL),
  YAML_ARRAY("limitData", 104, 32, struct_LimitData, NULL),
  YAML_ARRAY("expoData", 136, 64, struct_ExpoData, NULL),
  YAML_ARRAY("curves", 32, 32, struct_CurveHeader, NULL),
  YAML_ARRAY("points", 8, 512, struct_signed_8, NULL),
  YAML_ARRAY("logicalSw", 72, 64, struct_LogicalSwitchData, NULL),
  YAML_ARRAY("customFn", 88, 64, struct_CustomFunctionData, cfn_is_active),
  YAML_STRUCT("swashR", 64, struct_SwashRingData, swash_is_active),
  YAML_ARRAY("flightModeData", 352, 9, struct_FlightModeData, fmd_is_active),
  YAML_UNSIGNED_CUST( "thrTraceSrc", 8, r_thrSrc, w_thrSrc ),
  YAML_CUSTOM("switchWarningState",r_swtchWarn,w_swtchWarn),
  YAML_PADDING( 64 ),
  YAML_ARRAY("gvars", 56, 9, struct_GVarData, NULL),
  YAML_STRUCT("varioData", 40, struct_VarioData, NULL),
  YAML_UNSIGNED_CUST( "rssiSource", 8, r_tele_sensor, w_tele_sensor ),
  YAML_UNSIGNED_CUST( "voltsSource", 8, r_tele_sensor, w_tele_sensor ),
  YAML_UNSIGNED_CUST( "altitudeSource", 8, r_tele_sensor, w_tele_sensor ),
  YAML_STRUCT("rssiAlarms", 0, struct_RssiAlarmData, NULL),
  YAML_STRUCT("rfAlarms", 16, struct_RFAlarmData, NULL),
  YAML_UNSIGNED( "thrTrimSw", 3 ),
  YAML_ENUM("potsWarnMode", 2, enum_PotsWarnMode),
  YAML_ENUM("jitterFilter", 2, enum_ModelOverridableEnable),
  YAML_PADDING( 1 ),
  YAML_ARRAY("moduleData", 232, 2, struct_ModuleData, NULL),
  YAML_ARRAY("failsafeChannels", 16, 32, struct_signed_16, NULL),
  YAML_STRUCT("trainerData", 40, struct_TrainerModuleData, NULL),
  YAML_ARRAY("scriptsData", 192, 7, struct_ScriptData, NULL),
  YAML_ARRAY("inputNames", 32, 32, struct_string_32, NULL),
  YAML_UNSIGNED( "potsWarnEnabled", 8 ),
  YAML_ARRAY("potsWarnPosition", 8, 8, struct_signed_8, NULL),
  YAML_ARRAY("telemetrySensors", 112, 60, struct_TelemetrySensor, NULL),
  YAML_UNSIGNED( "toplcdTimer", 8 ),
  YAML_PADDING( 8 ),
  YAML_ARRAY("screens", 192, 4, struct_TelemetryScreenData, NULL),
  YAML_UNSIGNED( "view", 8 ),
  YAML_STRING("modelRegistrationID", 8),
  YAML_UNSIGNED( "usbJoystickExtMode", 1 ),
  YAML_ENUM("usbJoystickIfMode", 3, enum_USBJoystickIfMode),
  YAML_UNSIGNED( "usbJoystickCircularCut", 4 ),
  YAML_ARRAY("usbJoystickCh", 16, 26, struct_USBJoystickChData, NULL),
  YAML_ENUM("radioGFDisabled", 2, enum_ModelOverridableEnable),
  YAML_ENUM("radioTrainerDisabled", 2, enum_ModelOverridableEnable),
  YAML_ENUM("modelHeliDisabled", 2, enum_ModelOverridableEnable),
  YAML_ENUM("modelFMDisabled", 2, enum_ModelOverridableEnable),
  YAML_ENUM("modelCurvesDisabled", 2, enum_ModelOverridableEnable),
  YAML_ENUM("modelGVDisabled", 2, enum_ModelOverridableEnable),
  YAML_ENUM("modelLSDisabled", 2, enum_ModelOverridableEnable),
  YAML_ENUM("modelSFDisabled", 2, enum_ModelOverridableEnable),
  YAML_ENUM("modelCustomScriptsDisabled", 2, enum_ModelOverridableEnable),
  YAML_ENUM("modelTelemetryDisabled", 2, enum_ModelOverridableEnable),
  YAML_END
};
static const struct YamlNode struct_PartialModel[] = {
  YAML_STRUCT("header", 192, struct_ModelHeader, NULL),
  YAML_ARRAY("timers", 136, 3, struct_TimerData, NULL),
  YAML_END
};

#define MAX_RADIODATA_MODELDATA_PARTIALMODEL_STR_LEN 29

static const struct YamlNode __RadioData_root_node = YAML_ROOT( struct_RadioData );

const YamlNode* get_radiodata_nodes()
{
   return &__RadioData_root_node;
}
static const struct YamlNode __ModelData_root_node = YAML_ROOT( struct_ModelData );

const YamlNode* get_modeldata_nodes()
{
   return &__ModelData_root_node;
}
static const struct YamlNode __PartialModel_root_node = YAML_ROOT( struct_PartialModel );

const YamlNode* get_partialmodel_nodes()
{
   return &__PartialModel_root_node;
}

