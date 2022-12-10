unit Unit2;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.Menus, Vcl.StdCtrls;

type
  TForm2 = class(TForm)
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label5: TLabel;
    Label6: TLabel;
    Label7: TLabel;
    MainMenu1: TMainMenu;
    N1: TMenuItem;
    N2: TMenuItem;
    N3: TMenuItem;
    procedure FormActivate(Sender: TObject);
    procedure N2Click(Sender: TObject);
    procedure N3Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form2: TForm2;

implementation

{$R *.dfm}

uses Unit3, Unit4;
var
  proc : double;

procedure TForm2.FormActivate(Sender: TObject);
begin

  label2.Caption := Form1.Edit1.Text;
  label3.Caption := Form1.Edit2.Text;

  label7.Caption := IntToStr(Correct) + '/' + FloatToStr(question);

  proc := Correct / question * 100;

  case (round(proc)) of
  0..49:
    begin
      label6.Font.Color := clRed;
      label6.Caption := '2';
    end;
  50..69:
    begin
      label6.Font.Color := clWebOrange;
      label6.Caption := '3';
    end;
  70..84:
    begin
      label6.Font.Color := clAqua;
      label6.Caption := '4';
    end;
  85..100:
    begin
      label6.Font.Color := clGreen;
      label6.Caption := '5';
    end;
  end;
end;

procedure TForm2.N2Click(Sender: TObject);
begin
  Form1.Show();
  Form2.Close();
end;
procedure Write();
var
  linetext : String;
begin
    linetext:= 'Название теста: ' + Form1.RadioGroup1.Items[Form1.RadioGroup1.ItemIndex];
    writeln(ffile, linetext);

    linetext := 'ФИО проходящего тестирование: ' + Form2.Label2.Caption;
    writeln(ffile, linetext);

    linetext := 'Группа и курс: ' + Form2.Label3.Caption;
    writeln(ffile, linetext);

    linetext := 'Оценка: ' + Form2.Label6.Caption;
    writeln(ffile, linetext);

    linetext := 'Соотношение ответов: ' + Form2.Label7.Caption;
    writeln(ffile, linetext);

    writeln(ffile, ' ');
end;

procedure TForm2.N3Click(Sender: TObject);
begin

  if(FileExists('Info.txt')) then
  begin
    AssignFile(ffile, 'Info.txt');
    append(ffile);

    Write();

    closefile(ffile);
  end
  else
  begin
    AssignFile(ffile, 'Info.txt');

    Rewrite(ffile, 'Info.txt');

    Write();

    closefile(ffile);
  end;
end;


end.
