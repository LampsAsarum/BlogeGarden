#pragma once
#include "Target.h"
#include "Adeptee.h"

class Adapter : public Target
{
public:
	void Print()//������ҿͻ�����Ҫ�Ľӿ�
	{
		pAdeptee->Show();
	}
private:
	Adeptee* pAdeptee;
};

