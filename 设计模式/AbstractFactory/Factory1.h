#pragma once
#include "AbstractFactory.h"
#include "ProductA1.h"
#include "ProductB1.h"

class Factory1 : public AbstractFactory
{
public:
	AbstractProductA* CreateProtectA()
	{
		return new ProductA1();
	}
	AbstractProductB* CreateProtectB()
	{
		return new ProductB1();
	}
};

