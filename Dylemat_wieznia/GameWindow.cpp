
#include "GameWindow.h"

using namespace System;
using namespace Dylematwieznia;
[STAThreadAttribute]

int main(array <System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew GameWindow());
	return 0;
}