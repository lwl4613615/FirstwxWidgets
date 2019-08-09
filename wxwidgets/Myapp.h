#pragma once

#include "wx\wx.h"
#include "MyMain.h"

class Myapp :public wxApp
{
public:
	Myapp();
	~Myapp();
public:
	virtual bool OnInit() override;
private:
	MyMain* m_frameMain=nullptr;

	

};

