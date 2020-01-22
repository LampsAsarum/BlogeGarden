#pragma once
#include <iostream>
#include "AbstractProductA.h"

class ProductA2 : public AbstractProductA
{
public:
	void Show()
	{
		std::cout << "this is ProductA2" << std::endl;
	}
};

