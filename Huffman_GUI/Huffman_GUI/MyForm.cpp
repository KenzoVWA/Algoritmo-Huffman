
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Huffman_GUI::MyForm form;
	Application::Run(gcnew Huffman_GUI::MyForm());
	return 0;
}

