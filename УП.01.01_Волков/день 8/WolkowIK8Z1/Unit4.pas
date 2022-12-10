unit Unit4;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants,
  System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.ExtCtrls;

type
  TForm4 = class(TForm)
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Button1: TButton;
    RadioGroup1: TRadioGroup;
    procedure FormActivate(Sender: TObject);
    procedure Button1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

Type
  TTEST = Record
    TEXT: String[250]; // Текст вопроса
    OTV: Array [1 .. 4] of String[100]; // Варианты ответов
    REZ: Array [1 .. 4] of Byte // Правильный ответ
    end;

  Var
    FF_R: File of TTEST; // Рабочий файл тестов
    KOL: Byte; // Количество вопросов в тесте
    KOL_N: Byte; // Текущий номер вопроса
    TEST_: TTEST; // Строка записи файла
    REZ_N: Byte; // Количество правильных ответов

  var
    Form4: TForm4;
    Correct : integer;
    question : double;

implementation

{$R *.dfm}

uses Unit3, Unit2;
var
  Step : Byte;
  Answers : array[1..20,1..4] of Byte;
  userAnswers : array[1..20] of Integer;

procedure CheckAnswers();
begin
  if (Answers[Step][userAnswers[Step] + 1] = 1) then
   Inc(Correct);
end;
procedure TForm4.Button1Click(Sender: TObject);
var
  line : string;
  i : byte;
  buttonSelected : integer;
begin

  if (Step = question) then
  begin
    buttonSelected := MessageDlg('Вы действительно хотите завершить тестирование?', mtConfirmation, [mbYes,mbCancel], 0);
    if (buttonSelected = mrYes) then
    begin
      userAnswers[Step] := RadioGroup1.ItemIndex;
      CheckAnswers();
      label4.Caption := 'Верных ответов - ' + IntToStr(Correct);

      Form2.Show();
      Form4.Close();
    end;
  end
  else
  begin
    userAnswers[Step] := RadioGroup1.ItemIndex;
    CheckAnswers();

    label4.Caption := 'Верных ответов - ' + IntToStr(Correct);

    Inc(Step);

    label1.Caption := 'Вопрос № ' + IntToStr(Step);

    RadioGroup1.Items.Clear();

    AssignFile(ffile, fileName);
    reset(ffile);

    readln(ffile);

    for I := 1 to (Step - 1) * 9 do
    begin
      readln(ffile);
    end;

    readln(ffile, line);
    Label2.Caption := line;

    for i := 1 to 4 do
    begin
      readln(ffile, line);
      RadioGroup1.Items.Add(line);
    end;

    for i := 1 to 4 do
    begin
      readln(ffile, line);
      Answers[Step][i] := StrToInt(line);
    end;

    closefile(ffile);
  end;
end;

procedure TForm4.FormActivate(Sender: TObject);
var
  linetext : string;
  i : Byte;
begin
  Step := 1;

  Assignfile(ffile, fileName);
  Reset(ffile);

  readln(ffile, linetext);
  Form4.Caption := linetext;

  readln(ffile, linetext);
  Label2.caption := linetext;

  for i := 1 to 4 do
  begin
    readln(ffile, linetext);
    RadioGroup1.Items.Add(linetext);
  end;

  for i := 1 to 4 do
  begin
    readln(ffile, linetext);
    Answers[Step][i] := StrToInt(linetext);
  end;


  closefile(ffile);

  label1.Caption := 'Вопрос № ' + IntToStr(Step);

  Assignfile(ffile, fileName);
  Reset(ffile);

  while(not eof(ffile)) do
  begin
    readln(ffile);
    question := question + 1;
  end;

  closefile(ffile);

  Correct := 0;

  question := (question - 1) / 9;

  label3.Caption := 'Всего вопросов - ' + FloatToStr(question);
end;

end.
