#pragma once
#include "TemplateMethod.h"

class ConcreteMethod2 : public TemplateMethod
{
public:
	void concreteMethod() override
	{
		std::cout << "���ﶼ�����ģ�巽�������Ĳ���2" << std::endl;
	}
};

