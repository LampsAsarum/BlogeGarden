#pragma once
#include <iostream>
#include "AbstractProductB.h"

class ProductB2 : public AbstractProductB
{
public:
	void Show()
	{
		std::cout << "this is ProductB2" << std::endl;
	}
};

