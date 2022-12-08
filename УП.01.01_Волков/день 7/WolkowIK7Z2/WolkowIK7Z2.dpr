program WolkowIK7Z2;

uses
  Vcl.Forms,
  Main in 'forms\Main.pas' {Form1},
  Menu in 'forms\Menu.pas' {U_Menu};

Menu in 'forms\Menu.pas' {Form1};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TForm1, Form1);
  Application.CreateForm(TU_Menu, U_Menu);
  Application.Run;
end.
