#pragma once
#include <iostream>
#include "Decorator.h"

class ConcreteDecoratorA : public Decorator
{
public:
	void desc() override
	{
		Decorator::desc();
		std::cout << "���Ǹ�ǿ׳����" << std::endl;
	}
};

