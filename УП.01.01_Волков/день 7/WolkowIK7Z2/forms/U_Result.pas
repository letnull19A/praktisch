unit U_Result;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants,
  System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls;

type
  TForm2 = class(TForm)
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Button1: TButton;
    procedure Button1Click(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form2: TForm2;

type
  T1 = array [1 .. 5, 0 .. 3] of byte;

const
  OTV: T1 = (
    (0, 0, 1, 0),
    (1, 0, 0, 0),
    (0, 1, 0, 0),
    (1, 0, 0, 0),
    (1, 0, 0, 0));

Var
  Ball: integer;
  UserName : string;

implementation

{$R *.dfm}

uses Main;

procedure TForm2.Button1Click(Sender: TObject);
begin
  UserName := string.Empty;
  Main.Form1.Edit1.Text := string.Empty;
  Ball := 0;
  Close();
end;

end.
