#include "MyMain.h"
enum
{
	ID_Hello = 1
};
wxBEGIN_EVENT_TABLE(MyMain, wxFrame)
EVT_MENU(ID_Hello, MyMain::OnHello)

EVT_MENU(wxID_ABOUT, MyMain::OnAbout)
wxEND_EVENT_TABLE()

MyMain::MyMain() :wxFrame(nullptr, wxID_ANY, L"第一个示例程序,wxwidgets demo", wxPoint(30, 30), wxSize(800, 600))
{
	wxMenu* menuFile = new wxMenu;
	menuFile->Append(ID_Hello, "&Hello...\tCtrl-H",
		"Help string shown in status bar for this menu item");
	menuFile->AppendSeparator();
	menuFile->Append(wxID_EXIT);
	wxMenu* menuHelp = new wxMenu;
	menuHelp->Append(wxID_ABOUT);
	wxMenuBar* menuBar = new wxMenuBar;
	menuBar->Append(menuFile, "&File");
	menuBar->Append(menuHelp, "&Help");
	SetMenuBar(menuBar);
	CreateStatusBar();
	SetStatusText("Welcome to wxWidgets!");
	Bind(wxEVT_COMMAND_MENU_SELECTED, &MyMain::OnExit, this, wxID_EXIT);
	
}
MyMain::~MyMain()
{

}

void MyMain::OnHello(wxCommandEvent& event)
{
	wxLogMessage("Hello world from wxWidgets!");
	event.Skip();
}

void MyMain::OnExit(wxCommandEvent& event)
{
	Close(true);
	event.Skip();
}

void MyMain::OnAbout(wxCommandEvent& event)
{
	wxMessageBox("This is a wxWidgets' Hello world sample",
		"About Hello World", wxOK | wxICON_INFORMATION);
	event.Skip();
}
