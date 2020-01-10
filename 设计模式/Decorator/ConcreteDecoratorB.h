#pragma once
#include <iostream>
#include "Decorator.h"

class ConcreteDecoratorB : public Decorator
{
public:
	void desc() override
	{
		Decorator::desc();
		std::cout << "这是个帅气的人" << std::endl;
	}
};

