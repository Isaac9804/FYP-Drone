
"use strict";

let SetMode = require('./SetMode.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let CommandLong = require('./CommandLong.js')
let MountConfigure = require('./MountConfigure.js')
let WaypointPull = require('./WaypointPull.js')
let LogRequestData = require('./LogRequestData.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let FileRead = require('./FileRead.js')
let LogRequestList = require('./LogRequestList.js')
let ParamPush = require('./ParamPush.js')
let WaypointPush = require('./WaypointPush.js')
let CommandVtolTransition = require('./CommandVtolTransition.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let ParamGet = require('./ParamGet.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let ParamSet = require('./ParamSet.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let FileRemove = require('./FileRemove.js')
let CommandAck = require('./CommandAck.js')
let CommandInt = require('./CommandInt.js')
let CommandHome = require('./CommandHome.js')
let FileWrite = require('./FileWrite.js')
let FileMakeDir = require('./FileMakeDir.js')
let FileClose = require('./FileClose.js')
let MessageInterval = require('./MessageInterval.js')
let FileRename = require('./FileRename.js')
let FileChecksum = require('./FileChecksum.js')
let StreamRate = require('./StreamRate.js')
let ParamPull = require('./ParamPull.js')
let CommandTOL = require('./CommandTOL.js')
let FileTruncate = require('./FileTruncate.js')
let FileList = require('./FileList.js')
let WaypointClear = require('./WaypointClear.js')
let FileOpen = require('./FileOpen.js')
let SetMavFrame = require('./SetMavFrame.js')
let CommandBool = require('./CommandBool.js')

module.exports = {
  SetMode: SetMode,
  FileRemoveDir: FileRemoveDir,
  CommandLong: CommandLong,
  MountConfigure: MountConfigure,
  WaypointPull: WaypointPull,
  LogRequestData: LogRequestData,
  LogRequestEnd: LogRequestEnd,
  CommandTriggerInterval: CommandTriggerInterval,
  FileRead: FileRead,
  LogRequestList: LogRequestList,
  ParamPush: ParamPush,
  WaypointPush: WaypointPush,
  CommandVtolTransition: CommandVtolTransition,
  WaypointSetCurrent: WaypointSetCurrent,
  ParamGet: ParamGet,
  CommandTriggerControl: CommandTriggerControl,
  ParamSet: ParamSet,
  VehicleInfoGet: VehicleInfoGet,
  FileRemove: FileRemove,
  CommandAck: CommandAck,
  CommandInt: CommandInt,
  CommandHome: CommandHome,
  FileWrite: FileWrite,
  FileMakeDir: FileMakeDir,
  FileClose: FileClose,
  MessageInterval: MessageInterval,
  FileRename: FileRename,
  FileChecksum: FileChecksum,
  StreamRate: StreamRate,
  ParamPull: ParamPull,
  CommandTOL: CommandTOL,
  FileTruncate: FileTruncate,
  FileList: FileList,
  WaypointClear: WaypointClear,
  FileOpen: FileOpen,
  SetMavFrame: SetMavFrame,
  CommandBool: CommandBool,
};
