#pragma once
#include "TemplateMethod.h"

class ConcreteMethod1 : public TemplateMethod
{
public:
	void concreteMethod() override
	{
		std::cout << "���ﶼ�����ģ�巽�������Ĳ���1" << std::endl;
	}
};

