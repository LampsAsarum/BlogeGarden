#pragma once
#include <iostream>
#include "Builder.h"

class Build_A : public Builder
{
public:
	virtual void Build1() override
	{
		std::cout << "����A�ĵ�һ��" << std::endl;
	}
	virtual void Build2() override
	{
		std::cout << "����A�ĵڶ���" << std::endl;
	}
};

