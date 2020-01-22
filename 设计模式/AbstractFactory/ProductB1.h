#pragma once
#include <iostream>
#include "AbstractProductB.h"

class ProductB1 : public AbstractProductB
{
public:
	void Show()
	{
		std::cout << "this is ProductB1" << std::endl;
	}
};

