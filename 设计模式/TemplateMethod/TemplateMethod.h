#pragma once
#include <iostream>

class TemplateMethod
{
public:
	void mainMethod()
	{
		std::cout << "���ﶼ�����ģ�巽��ͨ�õĲ���" << std::endl;
		concreteMethod();
	}

	virtual void concreteMethod() = 0;
};

