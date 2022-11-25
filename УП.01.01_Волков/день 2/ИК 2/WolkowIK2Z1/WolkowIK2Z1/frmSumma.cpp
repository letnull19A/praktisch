#include "frmSumma.h"

#include <Windows.h>

using namespace WolkowIK2Z1;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew frmSumma());

	return 0;
}