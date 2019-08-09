#pragma once
#include "wx\wx.h"
class MyMain :public wxFrame
{
public:

	MyMain();
	~MyMain();
	
private:
	void OnHello(wxCommandEvent& event);
	void OnExit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);



	wxDECLARE_EVENT_TABLE();

};

