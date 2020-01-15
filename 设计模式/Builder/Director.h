#pragma once
#include "Builder.h"

class Director
{
public:
	Director(Builder* pBuilder)
	{
		p = pBuilder;
	}
	void Create()
	{
		p->Build1();
		p->Build2();
	}
private:
	Builder* p;
};

