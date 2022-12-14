unit U_Test;

interface

uses Winapi.Windows, System.SysUtils, System.Classes, Vcl.Graphics, Vcl.Forms,
  Vcl.Controls, Vcl.StdCtrls, Vcl.Buttons, Vcl.ComCtrls, Vcl.ExtCtrls, U_Result;

type
  TPagesDlg1 = class(TForm)
    Panel1: TPanel;
    Panel2: TPanel;
    PageControl1: TPageControl;
    TabSheet1: TTabSheet;
    TabSheet2: TTabSheet;
    TabSheet3: TTabSheet;
    OKBtn: TButton;
    TabSheet4: TTabSheet;
    TabSheet5: TTabSheet;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label5: TLabel;
    RadioGroup1: TRadioGroup;
    RadioGroup2: TRadioGroup;
    RadioGroup3: TRadioGroup;
    RadioGroup4: TRadioGroup;
    RadioGroup5: TRadioGroup;
    procedure OKBtnClick(Sender: TObject);
  private
    { Private declarations }
  public
    procedure ResetForm();
  end;

var
  PagesDlg1: TPagesDlg1;

implementation

{$R *.dfm}

procedure TPagesDlg1.ResetForm();
begin
  RadioGroup1.ItemIndex := -1;
  RadioGroup2.ItemIndex := -1;
  RadioGroup3.ItemIndex := -1;
  RadioGroup4.ItemIndex := -1;
  RadioGroup5.ItemIndex := -1;
end;

procedure TPagesDlg1.OKBtnClick(Sender: TObject);
begin

  Form2.Label1.Caption := UserName + ', ??? ?????????:';

  Ball :=
    otv[1, RadioGroup1.ItemIndex] +
    otv[2, RadioGroup2.ItemIndex] +
    otv[3, RadioGroup3.ItemIndex] +
    otv[4, RadioGroup4.ItemIndex] +
    otv[5, RadioGroup5.ItemIndex];

  case (Ball) of
    0 .. 2:
      Form2.Label3.Font.Color := clRed;
    3:
      Form2.Label3.Font.Color := clMaroon;
    4:
      Form2.Label3.Font.Color := clBlue;
    5:
      Form2.Label3.Font.Color := clGreen;
  end;

  Form2.Label3.Caption := intToStr(Ball);
  Form2.ShowModal();
  Close();
end;

end.
