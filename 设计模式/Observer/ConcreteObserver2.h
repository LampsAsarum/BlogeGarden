#pragma once
#include <iostream>
#include "Observer.h"

class ConcreteObserver2 : public Observer
{
public:
	void Update() override
	{
		std::cout << "实际对象2改变状态" <<  std::endl;
	}
};

