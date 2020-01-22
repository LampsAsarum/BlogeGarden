#pragma once
#include <iostream>
#include "AbstractProductA.h"

class ProductA1 : public AbstractProductA
{
public:
	void Show()
	{
		std::cout << "this is ProductA1" << std::endl;
	}
};

