object U_Menu: TU_Menu
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = #1052#1077#1085#1102
  ClientHeight = 263
  ClientWidth = 399
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object MainMenu1: TMainMenu
    Left = 8
    Top = 224
    object N1: TMenuItem
      Caption = '&'#1058#1077#1089#1090
      object N4: TMenuItem
        Caption = #1058#1077#1089#1090#1080#1088#1086#1074#1072#1085#1080#1077
        OnClick = N4Click
      end
      object N5: TMenuItem
        Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090
        OnClick = N5Click
      end
      object N6: TMenuItem
        Caption = '-'
      end
      object N7: TMenuItem
        Caption = #1042#1099#1093#1086#1076
        OnClick = N7Click
      end
    end
    object N2: TMenuItem
      Caption = #1055#1086#1084#1086#1097#1100
      OnClick = N2Click
    end
  end
end
