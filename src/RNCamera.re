open BsReactNative;

module Constants = {
  module Type = {
    type t;

    [@bs.module "react-native-camera"]
    [@bs.scope ("RNCamera", "Type")]
    [@bs.val]
    external front: t = "front";

    [@bs.module "react-native-camera"]
    [@bs.scope ("RNCamera", "Type")]
    [@bs.val]
    external back: t = "back";
  };

  module FlashMode = {
    type t;

    [@bs.module "react-native-camera"]
    [@bs.scope ("RNCamera", "FlashMode")]
    [@bs.val]
    external on: t = "on";

    [@bs.module "react-native-camera"]
    [@bs.scope ("RNCamera", "FlashMode")]
    [@bs.val]
    external off: t = "off";
  };
};

[@bs.deriving abstract]
type permissionDialogParams = {
  title: string,
  message: string,
  buttonPositive: string,
  buttonNegative: string,
};

[@bs.module "react-native-camera"] [@react.component]
external make:
  (
    ~style: Style.t=?,
    ~type_: Constants.Type.t=?,
    ~flashMode: Constants.FlashMode.t=?,
    ~ref: ReasonReact.reactRef => unit=?,
    ~androidCameraPermissionOptions: permissionDialogParams=?,
    ~captureAudio: bool=?,
    ~onBarCodeRead: {
                      .
                      "data": Js.Nullable.t(string),
                      "rawData": Js.Nullable.t(string),
                      "type": string,
                    } =>
                    unit
                      =?
  ) =>
  React.element =
  "RNCamera";