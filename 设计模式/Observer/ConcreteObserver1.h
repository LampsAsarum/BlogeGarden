#pragma once
#include <iostream>
#include "Observer.h"

class ConcreteObserver1 : public Observer
{
public:
	void Update() override
	{
		std::cout << "实际对象1改变状态" << std::endl;
	}
};

