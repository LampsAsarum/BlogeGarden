#pragma once
#include "Target.h"
#include "Adeptee.h"

class Adapter : public Target
{
public:
	void Print()//这才是我客户端想要的接口
	{
		pAdeptee->Show();
	}
private:
	Adeptee* pAdeptee;
};

