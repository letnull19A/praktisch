#include "MainForm.h"

#include <Windows.h>

using namespace WolkowIK5Z1;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MainForm());

	return 0;
}