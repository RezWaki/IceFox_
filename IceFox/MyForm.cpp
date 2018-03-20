#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(){
	Application::EnableVisualStyles();
	Application::Run( gcnew IceFox::MyForm() );
	return 0;
}

