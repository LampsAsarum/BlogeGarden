#pragma once
#include <iostream>
#include "Builder.h"

class Build_A : public Builder
{
public:
	virtual void Build1() override
	{
		std::cout << "建造A的第一步" << std::endl;
	}
	virtual void Build2() override
	{
		std::cout << "建造A的第二步" << std::endl;
	}
};

