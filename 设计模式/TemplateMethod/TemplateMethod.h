#pragma once
#include <iostream>

class TemplateMethod
{
public:
	void mainMethod()
	{
		std::cout << "这里都是这个模板方法通用的部分" << std::endl;
		concreteMethod();
	}

	virtual void concreteMethod() = 0;
};

