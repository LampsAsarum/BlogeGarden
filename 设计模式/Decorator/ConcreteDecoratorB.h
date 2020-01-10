#pragma once
#include <iostream>
#include "Decorator.h"

class ConcreteDecoratorB : public Decorator
{
public:
	void desc() override
	{
		Decorator::desc();
		std::cout << "���Ǹ�˧������" << std::endl;
	}
};

