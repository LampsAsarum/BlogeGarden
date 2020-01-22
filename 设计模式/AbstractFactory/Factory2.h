#pragma once
#include "AbstractFactory.h"
#include "ProductA2.h"
#include "ProductB2.h"

class Factory2 : public AbstractFactory
{
public:
	AbstractProductA* CreateProtectA()
	{
		return new ProductA2();
	}
	AbstractProductB* CreateProtectB()
	{
		return new ProductB2();
	}
};

