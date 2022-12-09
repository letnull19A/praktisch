program WolkowIK7Z2;

uses
  Vcl.Forms,
  Main in 'forms\Main.pas' {Form1},
  Menu in 'forms\Menu.pas' {U_Menu},
  U_Instr in 'forms\U_Instr.pas' {PagesDlg},
  U_Test in 'forms\U_Test.pas' {PagesDlg1},
  U_Result in 'forms\U_Result.pas' {Form2};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TForm1, Form1);
  Application.CreateForm(TU_Menu, U_Menu);
  Application.CreateForm(TPagesDlg, PagesDlg);
  Application.CreateForm(TPagesDlg1, PagesDlg1);
  Application.CreateForm(TForm2, Form2);
  Application.Run;
end.
