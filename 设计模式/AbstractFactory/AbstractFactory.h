#pragma once
#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory
{
public:
	virtual AbstractProductA* CreateProtectA() = 0;
	virtual AbstractProductB* CreateProtectB() = 0;
};

