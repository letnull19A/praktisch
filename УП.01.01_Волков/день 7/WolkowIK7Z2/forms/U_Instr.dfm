object PagesDlg: TPagesDlg
  Left = 195
  Top = 108
  BorderStyle = bsDialog
  Caption = #1055#1086#1084#1086#1097#1100
  ClientHeight = 300
  ClientWidth = 427
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 427
    Height = 266
    Align = alClient
    BevelOuter = bvNone
    BorderWidth = 5
    ParentColor = True
    TabOrder = 0
    object PageControl1: TPageControl
      Left = 5
      Top = 5
      Width = 417
      Height = 256
      ActivePage = TabSheet1
      Align = alClient
      TabOrder = 0
      object TabSheet1: TTabSheet
        Caption = #1055#1088#1072#1074#1080#1083#1072' '#1088#1072#1073#1086#1090#1099
      end
      object TabSheet2: TTabSheet
        Caption = #1058#1077#1084#1072#1090#1080#1082#1072' '#1090#1077#1089#1090#1072
      end
      object TabSheet3: TTabSheet
        Caption = #1040#1074#1090#1086#1088#1089#1082#1080#1077' '#1087#1088#1072#1074#1072
      end
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 266
    Width = 427
    Height = 34
    Align = alBottom
    BevelOuter = bvNone
    ParentColor = True
    TabOrder = 1
    object OKBtn: TButton
      Left = 187
      Top = 2
      Width = 75
      Height = 25
      Caption = 'OK'
      Default = True
      ModalResult = 1
      TabOrder = 0
    end
    object CancelBtn: TButton
      Left = 267
      Top = 2
      Width = 75
      Height = 25
      Cancel = True
      Caption = 'Cancel'
      ModalResult = 2
      TabOrder = 1
    end
    object HelpBtn: TButton
      Left = 347
      Top = 2
      Width = 75
      Height = 25
      Caption = '&Help'
      TabOrder = 2
    end
  end
end
