unit MainForm;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants,
  System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.Samples.Spin,
  Vcl.ExtCtrls, Vcl.Imaging.jpeg;

type
  TForm1 = class(TForm)
    Button1: TButton;
    Button2: TButton;
    PaintBox1: TPaintBox;
    SpinEdit1: TSpinEdit;
    SpinEdit2: TSpinEdit;
    SpinEdit3: TSpinEdit;
    Button3: TButton;
    Button4: TButton;
    procedure FormCreate(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure Button4Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

uses Circles;

Const
  N_MAX = 100;
  M_MAX = 100;
  K_MAX = 20;

  RAZX = 290;
  RAZY = 290;

  COLORS: array [1 .. 20] of tcolor = (clMoneyGreen, clSkyBlue, clMedGray,
    clCream, clWebDarkRed, clWebLightCoral, clWebGoldenRod, clWebKhaki,
    clWebGreen, clWebYellowGreen, clWebLawnGreen, clWebPaleGreen,
    clWebMediumAquamarine, clWebMediumSeaGreen, clWebDarkGoldenRod,
    clWebDarkKhaki, clWebDarkOliveGreen, clWebDarkgreen, clWebLimeGreen,
    clWebIndigo);

Type
  AR_TYPE = Array [1 .. RAZX, 1 .. RAZY] of Integer;

Var
  N_SIZE: Integer;
  M_SIZE: Integer;
  K_SIZE: Integer;
  C_X: Integer;
  C_Y: Integer;
  FLAG: Boolean;
  AR, NEW_AR: AR_TYPE;

{$R *.dfm}

procedure IMAG(AR: AR_TYPE; N, M: Integer);
var
  I, J: Integer;
begin

  for I := 1 to N do
    for J := 1 to M do
    begin
      Form1.PaintBox1.Canvas.Pen.Color := COLORS[AR[I, J]];
      Form1.PaintBox1.Canvas.Brush.Color := COLORS[AR[I, J]];

        Form1.PaintBox1.Canvas.Rectangle(C_X * (I - 1), C_Y * (J - 1),
        C_X * I - 1, C_Y * J - 1);

    end;
end;

Procedure USOR;
Var
  C, U, D, R, L: Integer;
  I, J: Integer;
begin
  while (FLAG) do
  begin
    for I := 1 to N_SIZE do
    begin
      for J := 1 to M_SIZE do
      begin
        C := AR[I, J] + 1;
        if (C > K_SIZE) then
          C := 1;
        U := I - 1;
        if U = 0 then
          U := N_SIZE;
        D := I + 1;
        if D > N_SIZE then
          D := 1;
        L := J - 1;
        if L = 0 then
          L := M_SIZE;
        R := J + 1;
        if R > M_SIZE then
          R := 1;
        if (AR[U, J] = C) or (AR[D, J] = C) or (AR[I, L] = C) or (AR[I, R] = C)
        then
          NEW_AR[I, J] := C
        else
          NEW_AR[I, J] := AR[I, J];
      end;
    end;

    for I := 1 to N_SIZE do
    begin
      for J := 1 to M_SIZE do
      begin
        AR[I, J] := NEW_AR[I, J];
        IMAG(AR, N_SIZE, M_SIZE);
      end;
    end;

    IMAG(AR, N_SIZE, M_SIZE);

    Sleep(1000);

    Application.ProcessMessages;
  end;
end;

procedure TForm1.Button1Click(Sender: TObject);
var
  I, J: Integer;
begin

  M_SIZE := 20;
  N_SIZE := StrToInt(SpinEdit1.Text);
  M_SIZE := 20;
  N_SIZE := StrToInt(SpinEdit2.Text);
  M_SIZE := 20;
  K_SIZE := StrToInt(SpinEdit3.Text);

  SpinEdit1.Enabled := False;
  SpinEdit2.Enabled := False;
  SpinEdit3.Enabled := False;
  Button2.Enabled := True;

  Randomize;
  for I := 1 to N_SIZE do
    for J := 1 to M_SIZE do
      AR[I, J] := 1 + Random(K_SIZE);

  C_X := RAZX div N_SIZE;

  C_Y := RAZY div M_SIZE;

  IMAG(AR, N_SIZE, M_SIZE);
  FLAG := True;

  USOR;
end;

procedure TForm1.Button2Click(Sender: TObject);
begin

  FLAG := not(FLAG);

  if (FLAG) then
    Button2.Caption := '����������'
  else
    Button2.Caption := '����������';

  SpinEdit1.Enabled := not(FLAG);
  SpinEdit2.Enabled := not(FLAG);
  SpinEdit3.Enabled := not(FLAG);

  USOR;

end;

procedure TForm1.Button3Click(Sender: TObject);
begin
  Form1.Close;
end;

procedure TForm1.Button4Click(Sender: TObject);
begin
  Form2.ShowModal();
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
  Form1.Caption := '����';
  Button1.Font.Size := 9;
  Button1.Caption := '������';
  Button2.Font.Size := 9;
  Button2.Caption := '����������';
  Button2.Enabled := False;
  Button3.Font.Size := 9;
  Button3.Caption := '�����';
  SpinEdit1.MinValue := 3;
  SpinEdit1.MaxValue := N_MAX;
  SpinEdit1.Value := 10;
  SpinEdit2.MinValue := 3;
  SpinEdit2.MaxValue := M_MAX;
  SpinEdit2.Value := 10;
  SpinEdit3.MinValue := 2;
  SpinEdit3.MaxValue := K_MAX;
  SpinEdit3.Value := 3;
  PaintBox1.Width := RAZX;
  PaintBox1.Height := RAZY;
  FLAG := True;
end;

end.
