program WolkowIk6Z1;

uses
  Vcl.Forms,
  MainForm in 'Forms\MainForm.pas' {Form1},
  Circles in 'Forms\Circles.pas' {Form2};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TForm1, Form1);
  Application.CreateForm(TForm2, Form2);
  Application.Run;
end.
