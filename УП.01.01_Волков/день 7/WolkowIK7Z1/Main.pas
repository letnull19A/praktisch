unit Main;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants,
  System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.ExtCtrls, Vcl.StdCtrls, Vcl.Buttons,
  System.ImageList, Vcl.ImgList;

type
  TForm1 = class(TForm)
    Label1: TLabel;
    BitBtn1: TBitBtn;
    Label2: TLabel;
    RadioGroup1: TRadioGroup;
    Label3: TLabel;
    RadioGroup2: TRadioGroup;
    Label4: TLabel;
    RadioGroup3: TRadioGroup;
    Label5: TLabel;
    RadioGroup4: TRadioGroup;
    Label6: TLabel;
    RadioGroup5: TRadioGroup;
    ImageList1: TImageList;
    BitBtn2: TBitBtn;
    BitBtn3: TBitBtn;
    Panel2: TPanel;
    procedure RadioGroup1Click(Sender: TObject);
    procedure RadioGroup2Click(Sender: TObject);
    procedure RadioGroup3Click(Sender: TObject);
    procedure RadioGroup4Click(Sender: TObject);
    procedure BitBtn1Click(Sender: TObject);
    procedure BitBtn2Click(Sender: TObject);
    procedure RadioGroup5Click(Sender: TObject);
    procedure BitBtn3Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

Var
  SUM: Byte;
{$R *.dfm}

procedure TForm1.BitBtn1Click(Sender: TObject);
begin
  Form1.Close;
end;

procedure TForm1.BitBtn2Click(Sender: TObject);
begin
  SUM := 0;
  RadioGroup5.ItemIndex := -1;
  RadioGroup4.ItemIndex := -1;
  RadioGroup3.ItemIndex := -1;
  RadioGroup2.ItemIndex := -1;
  RadioGroup1.ItemIndex := -1;
  Panel2.Caption := '';
end;

procedure TForm1.BitBtn3Click(Sender: TObject);
begin
  case SUM of
    0 .. 2:
      Panel2.Caption := '�����! ���������� ���������� ������� : ' +
        IntToStr(SUM);
    3:
      Panel2.Caption := '�����������������!���������� ���������� ������� : ' +
        IntToStr(SUM);
    4:
      Panel2.Caption := '������!���������� ���������� ������� : ' +
        IntToStr(SUM);
    5:
      Panel2.Caption := '�������! ���������� ���������� ������� : ' +
        IntToStr(SUM);
  end;
  case SUM of
    0 .. 2:
      Panel2.Font.Color := clRed;
    3:
      Panel2.Font.Color := clNavy;
    4:
      Panel2.Font.Color := clolive;
    5:
      Panel2.Font.Color := clGreen;
  end;
  ShowMessage('����� �����!');
end;

procedure TForm1.RadioGroup1Click(Sender: TObject);
begin
  SUM := 0;
  If RadioGroup1.ItemIndex = 0 then
    SUM := SUM + 1;
end;

procedure TForm1.RadioGroup2Click(Sender: TObject);
begin
  If RadioGroup2.ItemIndex = 1 then
    SUM := SUM + 1;
end;

procedure TForm1.RadioGroup3Click(Sender: TObject);
begin
  If RadioGroup3.ItemIndex = 1 then
    SUM := SUM + 1;
end;

procedure TForm1.RadioGroup4Click(Sender: TObject);
begin

  If RadioGroup4.ItemIndex = 2 then
    SUM := SUM + 1;
end;

procedure TForm1.RadioGroup5Click(Sender: TObject);
begin
  If RadioGroup5.ItemIndex = 1 then
    SUM := SUM + 1;
end;

end.
