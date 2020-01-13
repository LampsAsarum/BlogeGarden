#pragma once
#include "TemplateMethod.h"

class ConcreteMethod1 : public TemplateMethod
{
public:
	void concreteMethod() override
	{
		std::cout << "这里都是这个模板方法特例的部分1" << std::endl;
	}
};

