#include "DanielsGGFForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DanielsGGF::DanielsGGFForm form;   //Replace the names!
	Application::Run(%form);
}
