#include "Myapp.h"
wxIMPLEMENT_APP(Myapp);

Myapp::Myapp()
{

}

Myapp::~Myapp()
{

}

bool Myapp::OnInit()
{
	m_frameMain = new MyMain();
	m_frameMain->Show(true);

	return true;
}
