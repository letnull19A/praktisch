object PagesDlg1: TPagesDlg1
  Left = 195
  Top = 108
  BorderIcons = []
  BorderStyle = bsDialog
  Caption = #1058#1077#1089#1090#1080#1088#1086#1074#1072#1085#1080#1077
  ClientHeight = 283
  ClientWidth = 399
  Color = clBtnFace
  ParentFont = True
  OldCreateOrder = True
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 399
    Height = 249
    Align = alClient
    BevelOuter = bvNone
    BorderWidth = 5
    ParentColor = True
    TabOrder = 0
    object PageControl1: TPageControl
      Left = 5
      Top = 5
      Width = 389
      Height = 239
      ActivePage = TabSheet1
      Align = alClient
      TabOrder = 0
      object TabSheet1: TTabSheet
        Caption = #1042#1087#1088#1086#1089' '#8470'1'
        object Label1: TLabel
          Left = 24
          Top = 16
          Width = 333
          Height = 32
          Caption = 
            '________ '#8211' '#1087#1088#1077#1088#1099#1074#1072#1085#1080#1077' '#1090#1077#1082#1091#1097#1077#1075#1086' '#1096#1072#1075#1072' '#1094#1080#1082#1083#1072'. '#1042' '#1086#1090#1083#1080#1095#1080#1077' '#1086#1090' break, _' +
            '_______ '#1085#1077' '#1087#1088#1077#1082#1088#1072#1097#1072#1077#1090' '#1094#1080#1082#1083
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -13
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          ParentFont = False
          WordWrap = True
        end
        object RadioGroup1: TRadioGroup
          Left = 24
          Top = 48
          Width = 337
          Height = 145
          Items.Strings = (
            'break'
            'lock'
            'continue'
            #1042#1089#1077' '#1086#1090#1074#1077#1090#1099' '#1074#1077#1088#1085#1099)
          TabOrder = 0
        end
      end
      object TabSheet2: TTabSheet
        Caption = #1042#1086#1087#1088#1086#1089' '#8470'2'
        object Label2: TLabel
          Left = 24
          Top = 17
          Width = 191
          Height = 16
          Caption = '_____ '#8211' '#1087#1088#1077#1088#1099#1074#1072#1085#1080#1077' '#1094#1080#1082#1083#1072'. '
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -13
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          ParentFont = False
          WordWrap = True
        end
        object RadioGroup2: TRadioGroup
          Left = 24
          Top = 48
          Width = 337
          Height = 145
          Items.Strings = (
            'break'
            'continue'
            #1085#1080#1095#1077#1075#1086' '#1080#1079' '#1087#1077#1088#1077#1095#1080#1089#1083#1077#1085#1085#1086#1075#1086
            #1074#1089#1077' '#1074#1072#1088#1080#1072#1085#1090#1099' '#1074#1077#1088#1085#1099)
          TabOrder = 0
        end
      end
      object TabSheet3: TTabSheet
        Caption = #1042#1086#1087#1088#1086#1089' '#8470'3'
        object Label3: TLabel
          Left = 24
          Top = 11
          Width = 318
          Height = 32
          Caption = 
            #1057#1074#1086#1081#1089#1090#1074#1086' __________, '#1082#1086#1090#1086#1088#1086#1077', '#1082#1072#1082' '#1084#1099' '#1079#1085#1072#1077#1084', '#1091#1082#1072#1079#1099#1074#1072#1077#1090' '#1080#1085#1076#1077#1082#1089' '#1074#1099#1076 +
            #1077#1083#1077#1085#1085#1086#1081' '#1089#1090#1088#1086#1082#1080', '#1087#1086
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -13
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          ParentFont = False
          WordWrap = True
        end
        object RadioGroup3: TRadioGroup
          Left = 24
          Top = 48
          Width = 337
          Height = 145
          Items.Strings = (
            'select'
            'itemIndex'
            #1085#1080#1095#1077#1075#1086' '#1080#1079' '#1087#1077#1088#1077#1095#1080#1089#1083#1077#1085#1085#1086#1075#1086
            'sortIntex')
          TabOrder = 0
        end
      end
      object TabSheet4: TTabSheet
        Caption = #1042#1086#1087#1088#1086#1089' '#8470'4'
        ImageIndex = 3
        object Label4: TLabel
          Left = 24
          Top = 9
          Width = 288
          Height = 32
          Caption = 
            #1057#1074#1086#1081#1089#1090#1074#1086' _____ '#1074#1086' '#1074#1089#1077#1093' '#1086#1073#1098#1077#1082#1090#1072#1093' TStrings '#1074#1086#1079#1074#1088#1072#1097#1072#1077#1090' '#1082#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1089 +
            #1090#1088#1086#1082
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -13
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          ParentFont = False
          WordWrap = True
        end
        object RadioGroup4: TRadioGroup
          Left = 24
          Top = 48
          Width = 337
          Height = 145
          Items.Strings = (
            'count'
            'cout'
            'cin'
            #1085#1080#1095#1077#1075#1086' '#1080#1079' '#1087#1077#1088#1077#1095#1080#1089#1083#1077#1085#1085#1086#1075#1086)
          TabOrder = 0
        end
      end
      object TabSheet5: TTabSheet
        Caption = #1042#1086#1087#1088#1086#1089' '#8470'5'
        ImageIndex = 4
        object Label5: TLabel
          Left = 24
          Top = 12
          Width = 322
          Height = 32
          Caption = #1054#1076#1085#1072#1082#1086' '#1084#1099' '#1089' '#1074#1072#1084#1080' '#1091#1078#1077' '#1089#1090#1072#1083#1082#1080#1074#1072#1083#1080#1089#1100' '#1080' '#1089' '#1090#1080#1087#1086#1084' ________ '#8211' '#1089#1090#1088#1086#1082#1080'.'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clWindowText
          Font.Height = -13
          Font.Name = 'Tahoma'
          Font.Style = [fsBold]
          ParentFont = False
          WordWrap = True
        end
        object RadioGroup5: TRadioGroup
          Left = 24
          Top = 50
          Width = 337
          Height = 145
          Items.Strings = (
            'TStrings'
            'TEdit'
            'TUInt32'
            'TString')
          TabOrder = 0
        end
      end
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 249
    Width = 399
    Height = 34
    Align = alBottom
    BevelOuter = bvNone
    ParentColor = True
    TabOrder = 1
    object OKBtn: TButton
      Left = 280
      Top = 1
      Width = 110
      Height = 25
      Caption = #1047#1072#1074#1077#1088#1096#1080#1090#1100' '#1090#1077#1089#1090
      Default = True
      TabOrder = 0
      OnClick = OKBtnClick
    end
  end
end
