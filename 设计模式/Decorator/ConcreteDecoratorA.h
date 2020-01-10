#pragma once
#include <iostream>
#include "Decorator.h"

class ConcreteDecoratorA : public Decorator
{
public:
	void desc() override
	{
		Decorator::desc();
		std::cout << "这是个强壮的人" << std::endl;
	}
};

