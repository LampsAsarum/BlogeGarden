#pragma once
#include <iostream>
#include "Builder.h"

class Build_B : public Builder
{
public:
	virtual void Build1() override
	{
		std::cout << "����B�ĵ�һ��" << std::endl;
	}
	virtual void Build2() override
	{
		std::cout << "����B�ĵڶ���" << std::endl;
	}
};

