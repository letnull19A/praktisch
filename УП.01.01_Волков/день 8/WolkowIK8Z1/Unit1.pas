unit Unit1;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants,
  System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.Samples.Spin,
  Vcl.ExtCtrls;

type
  TForm1 = class(TForm)
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label5: TLabel;
    Label6: TLabel;
    Label7: TLabel;
    Label8: TLabel;
    Edit1: TEdit;
    Edit2: TEdit;
    Edit3: TEdit;
    Edit4: TEdit;
    Edit5: TEdit;
    Edit6: TEdit;
    SpinEdit1: TSpinEdit;
    GroupBox1: TGroupBox;
    RadioButton1: TRadioButton;
    RadioButton2: TRadioButton;
    RadioButton3: TRadioButton;
    RadioButton4: TRadioButton;
    Button1: TButton;
    Button2: TButton;
    Button3: TButton;
    ComboBox1: TComboBox;
    Button4: TButton;
    procedure FormCreate(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure Button4Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

Type
  TTEST = Record
  testName : String[50];
    TEXT: String[250]; // Текст Вопроса
    OTV: Array [1 .. 4] of String[40]; // Варианты ответов
    REZ: Array [1 .. 4] of Byte // Правильный ответ
    end;

  Const
    KOL = 21; // Max количество Вопросов

  Var
    fFile: textfile; // Описание файла
    TEST_: Array [1 .. KOL] of TTEST; // Массив ТЕСТА
    STEP_N: integer;
    STEP: integer;
    i:BYTE;
  var
    Form1: TForm1;

implementation

{$R *.dfm}

procedure TForm1.Button1Click(Sender: TObject);
Var
  I: byte;
begin
  STEP := STEP - 1;
  Label3.Caption := 'Вопрос № ' + IntToStr(STEP - 1);
  Edit2.TEXT := TEST_[STEP].TEXT;
  For I := 1 to 4 do
  begin
    TEdit(FindComponent('Edit' + IntToStr(I + 2))).TEXT := TEST_[STEP].OTV[I];
    If TEST_[STEP].REZ[I] = 1 Then
      TRadioButton(FindComponent('RadioButton' + IntToStr(I))).Checked := True
    Else
      TRadioButton(FindComponent('RadioButton' + IntToStr(I))).Checked := False;
  end;
  If STEP = 2 then
    Button1.Enabled := False;
  Button2.Enabled := True;
end;

procedure TForm1.Button2Click(Sender: TObject);
 Var
  I: Byte;
begin
  If (RadioButton1.Checked = False) and (RadioButton2.Checked = False) and
    (RadioButton3.Checked = False) and (RadioButton4.Checked = False) Then
  begin
    ShowMessage('Не выбран правильный ответ');
    Exit
  end;
  If step = 1 Then
  begin
    TEST_[1].testName := Edit1.Text;
    Edit1.Enabled := False;
    step_n := StrtoInt(SpinEdit1.Text);
    SpinEdit1.Enabled := False;
  end;

  TEST_[step].TEXT:= Edit2.Text;

  For I := 1 to 4 do
  begin
    TEST_[step].OTV[I] := TEdit(FindComponent('Edit' + IntToStr(I + 2))).Text;
  end;

  for i := 1 to 4 do
  begin
    If TRadioButton(FindComponent('RadioButton' + IntToStr(I))).Checked = True Then
      TEST_[step].REZ[i] := 1
    else
      TEST_[step].REZ[i] := 0;
  end;

  Button1.Enabled := True;

  If step = step_n Then
  begin
    Button2.Enabled := False;
    Button3.Enabled := True;
  end
  Else
  begin
    step := step + 1;
    Label3.Caption := 'Вопрос № ' + IntToStr(step);

    Edit2.Text := TEST_[step].TEXT;

    For I := 1 to 4 do
    begin
      TEdit(FindComponent('Edit' + IntToStr(I + 2))).Text := TEST_[step].OTV[i];

      If TEST_[step].REZ[i] = 1 Then
        TRadioButton(FindComponent('RadioButton' + IntToStr(I))).Checked := True
      else
        TRadioButton(FindComponent('RadioButton' + IntToStr(I))).Checked := False;
    end;
  end;
end;


procedure TForm1.Button3Click(Sender: TObject);
var
  I, j: Byte;
  line: String;
  counter : integer;
begin

  counter := 0;

  while (FileExists('TEST_' + IntToStr(counter) + '.txt')) do
  begin
    Inc(counter);
  end;

  AssignFile(FFile, 'TEST_' + IntToStr(counter) + '.txt');
  Rewrite(FFile);

  Button1.Enabled := False;
  Button2.Enabled := False;
  Button3.Enabled := False;

  line := TEST_[1].testName;
  writeln(FFile,line);

  For I := 1 to step_n do
  begin

    line :=TEST_[i].TEXT;
    writeln(FFile, line);

    for j := 1 to 4 do
    begin
      line := TEST_[i].OTV[j];
      writeln(FFile, line);
    end;

    for j := 1 to 4 do
    begin
      line := IntToStr(TEST_[i].REZ[j]);
      WriteLn(FFile, line);
    end;
  end;

  CloseFile(FFile)
end;

procedure TForm1.Button4Click(Sender: TObject);
var
  i, counter : integer;
  line : String;
  ans : byte;
begin

  AssignFile(FFile,'TEST_' + IntToStr(ComboBox1.ItemIndex) + '.txt');
  Reset(FFile);

  readln(FFIle, line);
  TEST_[1].testName := line;
  Edit1.Text := TEST_[1].testName;

  counter := 1;

  while(not eof(FFile)) do
  begin
    readln(FFIle, line);
    TEST_[counter].TEXT := line;
    Edit2.Text := TEST_[counter].TEXT;

    for i := 1 to 4 do
    begin
      readln(FFile, line);
      TEST_[counter].OTV[i] := line;
      TEdit(FindComponent('Edit' + IntToStr(I + 2))).Text := TEST_[counter].OTV[i];
    end;

    for i := 1 to 4 do
    begin
      readln(fFile, line);
      TEST_[counter].REZ[i] := StrToInt(line);
      If TEST_[counter].REZ[i] = 1 Then
        TRadioButton(FindComponent('RadioButton' + IntToStr(I))).Checked := True
      else
        TRadioButton(FindComponent('RadioButton' + IntToStr(I))).Checked := False;
    end;

    Inc(counter);
  end;

  Closefile(FFile);
end;

procedure TForm1.FormCreate(Sender: TObject);
Var
  Left_N: Integer; // Отступ слева верхней части
  Top_N: Integer; // Отступ сверху
  Left_NN: Integer; // Отступ слева для раздела ответов
  Top_NN: Integer; // Отступ сверху для RadioButton
  K, I, counter: Integer;
begin
  Left_N := 30;
  Top_N := 50;
  Left_NN := 60;

  Form1.Width := 740;
  Form1.Height := 540;
  Form1.Caption := 'Создание теста';
  Label1.Left := Left_N;
  Label1.Top := Top_N;
  Label1.Font.Style := [fsBold];
  Label1.Font.Size := 10;
  Label1.Caption := 'Название теста';
  Edit1.TEXT := '';
  Edit1.Top := Top_N;
  Edit1.Left := Left_N + Label1.Width + 10;
  Edit1.Width := 300;
  Top_N := Top_N + 40;
  Label2.Left := Left_N;
  Label2.Top := Top_N;
  Label2.Font.Style := [fsBold];
  Label2.Font.Size := 10;
  Label2.Caption := 'Количество вопросов';
  SpinEdit1.Left := Left_N + Label2.Width + 10;
  SpinEdit1.Top := Top_N;
  SpinEdit1.MinValue := 5;
  SpinEdit1.MaxValue := 20;
  SpinEdit1.TEXT := '5';
  SpinEdit1.Width := 40;
  Top_N := Top_N + 60;
  Label3.Left := Left_N;
  Label3.Top := Top_N;
  Label3.Font.Style := [fsBold];
  Label3.Font.Size := 10;
  Label3.Caption := 'Вопрос № 1';
  Top_N := Top_N + 40;
  Label4.Left := Left_NN;
  Label4.Top := Top_N;
  Label4.Font.Style := [fsBold];
  Label4.Font.Size := 9;
  Label4.Caption := 'Текст';
  Edit2.TEXT := '';
  Edit2.Top := Top_N;
  Edit2.Left := Left_NN + Label4.Width + 10;
  Edit2.Width := 600;
  Left_NN := Left_NN + Label4.Width + 10;
  Top_N := Top_N + 40;
  GroupBox1.Left := 620;
  GroupBox1.Top := Top_N + 20;
  GroupBox1.Width := 90;
  GroupBox1.Height := 180;
  GroupBox1.Caption := ' Правильный ';
  GroupBox1.Font.Size := 8;
  K:=2;
  TLabel(FindComponent('Label'+IntToStr(K))).Caption:= 'МЕТКА';
  K := 2;
  Top_NN := -20;

  For I := 1 To 4 do
  begin
    Top_N := Top_N + 40;
    Top_NN := Top_NN + 40;
    TLabel(FindComponent('Label' + IntToStr(K + I + 2))).Left := Left_NN;
    TLabel(FindComponent('Label' + IntToStr(K + I + 2))).Top := Top_N;
    TLabel(FindComponent('Label' + IntToStr(K + I + 2))).Font.Size := 9;
    TLabel(FindComponent('Label' + IntToStr(K + I + 2))).Caption := 'Ответ № ' +
      IntToStr(I);
    TEdit(FindComponent('Edit' + IntToStr(K + I))).TEXT := '';
    TEdit(FindComponent('Edit' + IntToStr(K + I))).Top := Top_N;
    TEdit(FindComponent('Edit' + IntToStr(K + I))).Left := 200;
    TEdit(FindComponent('Edit' + IntToStr(K + I))).Width := 400;
    TRadioButton(FindComponent('RadioButton' + IntToStr(I))).Left := 40;
    TRadioButton(FindComponent('RadioButton' + IntToStr(I))).Top := Top_NN;
    TRadioButton(FindComponent('RadioButton' + IntToStr(I))).Caption := '';
    TRadioButton(FindComponent('RadioButton' + IntToStr(I))).Width := 10;
  end;
  // Формирование нижней части формы
  Top_N := Top_N + 70;
  Button1.Caption := 'Предыдущий';
  Button1.Left := Left_NN + 100;
  Button1.Top := Top_N;
  Button1.Width := 100;
  Button1.Height := 30;
  Button1.Enabled := False;
  Button2.Caption := 'Следующий';
  Button2.Left := Left_NN + 250;
  Button2.Top := Top_N;
  Button2.Width := 100;
  Button2.Height := 30;
  Button3.Caption := 'Записать';
  Button3.Left := Left_NN + 500;
  Button3.Top := Top_N;
  Button3.Width := 100;
  Button3.Height := 30;
  Button3.Enabled := False;
  STEP := 1;
  For I := 1 to KOL do
  begin
    TEST_[I].TEXT := '';
    for K := 1 to 4 do
    begin
      TEST_[I].OTV[K] := '';
      TEST_[I].REZ[K] := 0
    end;
  end;
  counter := 0;

  while (FileExists('TEST_' + IntToStr(counter) + '.txt')) do
  begin

    AssignFile(FFile,'TEST_' + IntToStr(counter) + '.txt');
    Reset(FFile);

    readln(FFIle, TEST_[1].testName);

    ComboBox1.Items.Add(TEST_[1].testName);

    Inc(counter)
  end;
end;

end.
