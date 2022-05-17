
"use strict";

let HilGPS = require('./HilGPS.js');
let TerrainReport = require('./TerrainReport.js');
let WaypointList = require('./WaypointList.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let RCIn = require('./RCIn.js');
let PlayTuneV2 = require('./PlayTuneV2.js');
let ESCStatusItem = require('./ESCStatusItem.js');
let ESCTelemetry = require('./ESCTelemetry.js');
let GPSINPUT = require('./GPSINPUT.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let Trajectory = require('./Trajectory.js');
let HomePosition = require('./HomePosition.js');
let LogEntry = require('./LogEntry.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let RadioStatus = require('./RadioStatus.js');
let GPSRAW = require('./GPSRAW.js');
let Mavlink = require('./Mavlink.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let RCOut = require('./RCOut.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let ExtendedState = require('./ExtendedState.js');
let StatusText = require('./StatusText.js');
let ESCInfoItem = require('./ESCInfoItem.js');
let Thrust = require('./Thrust.js');
let ESCStatus = require('./ESCStatus.js');
let Waypoint = require('./Waypoint.js');
let Vibration = require('./Vibration.js');
let Param = require('./Param.js');
let HilSensor = require('./HilSensor.js');
let ManualControl = require('./ManualControl.js');
let WaypointReached = require('./WaypointReached.js');
let ESCTelemetryItem = require('./ESCTelemetryItem.js');
let ParamValue = require('./ParamValue.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let MountControl = require('./MountControl.js');
let PositionTarget = require('./PositionTarget.js');
let FileEntry = require('./FileEntry.js');
let CommandCode = require('./CommandCode.js');
let NavControllerOutput = require('./NavControllerOutput.js');
let GPSRTK = require('./GPSRTK.js');
let Tunnel = require('./Tunnel.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let ESCInfo = require('./ESCInfo.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let DebugValue = require('./DebugValue.js');
let ActuatorControl = require('./ActuatorControl.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let LandingTarget = require('./LandingTarget.js');
let RTKBaseline = require('./RTKBaseline.js');
let VehicleInfo = require('./VehicleInfo.js');
let MagnetometerReporter = require('./MagnetometerReporter.js');
let LogData = require('./LogData.js');
let VFR_HUD = require('./VFR_HUD.js');
let State = require('./State.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let Altitude = require('./Altitude.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let BatteryStatus = require('./BatteryStatus.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let HilControls = require('./HilControls.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let RTCM = require('./RTCM.js');
let CameraImageCaptured = require('./CameraImageCaptured.js');

module.exports = {
  HilGPS: HilGPS,
  TerrainReport: TerrainReport,
  WaypointList: WaypointList,
  TimesyncStatus: TimesyncStatus,
  RCIn: RCIn,
  PlayTuneV2: PlayTuneV2,
  ESCStatusItem: ESCStatusItem,
  ESCTelemetry: ESCTelemetry,
  GPSINPUT: GPSINPUT,
  HilStateQuaternion: HilStateQuaternion,
  Trajectory: Trajectory,
  HomePosition: HomePosition,
  LogEntry: LogEntry,
  OverrideRCIn: OverrideRCIn,
  RadioStatus: RadioStatus,
  GPSRAW: GPSRAW,
  Mavlink: Mavlink,
  CamIMUStamp: CamIMUStamp,
  RCOut: RCOut,
  EstimatorStatus: EstimatorStatus,
  ExtendedState: ExtendedState,
  StatusText: StatusText,
  ESCInfoItem: ESCInfoItem,
  Thrust: Thrust,
  ESCStatus: ESCStatus,
  Waypoint: Waypoint,
  Vibration: Vibration,
  Param: Param,
  HilSensor: HilSensor,
  ManualControl: ManualControl,
  WaypointReached: WaypointReached,
  ESCTelemetryItem: ESCTelemetryItem,
  ParamValue: ParamValue,
  HilActuatorControls: HilActuatorControls,
  MountControl: MountControl,
  PositionTarget: PositionTarget,
  FileEntry: FileEntry,
  CommandCode: CommandCode,
  NavControllerOutput: NavControllerOutput,
  GPSRTK: GPSRTK,
  Tunnel: Tunnel,
  AttitudeTarget: AttitudeTarget,
  ESCInfo: ESCInfo,
  WheelOdomStamped: WheelOdomStamped,
  DebugValue: DebugValue,
  ActuatorControl: ActuatorControl,
  ADSBVehicle: ADSBVehicle,
  LandingTarget: LandingTarget,
  RTKBaseline: RTKBaseline,
  VehicleInfo: VehicleInfo,
  MagnetometerReporter: MagnetometerReporter,
  LogData: LogData,
  VFR_HUD: VFR_HUD,
  State: State,
  GlobalPositionTarget: GlobalPositionTarget,
  Altitude: Altitude,
  OnboardComputerStatus: OnboardComputerStatus,
  BatteryStatus: BatteryStatus,
  OpticalFlowRad: OpticalFlowRad,
  HilControls: HilControls,
  CompanionProcessStatus: CompanionProcessStatus,
  RTCM: RTCM,
  CameraImageCaptured: CameraImageCaptured,
};
