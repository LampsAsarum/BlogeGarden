#pragma once
#include <iostream>
#include "Observer.h"

class ConcreteObserver1 : public Observer
{
public:
	void Update() override
	{
		std::cout << "ʵ�ʶ���1�ı�״̬" << std::endl;
	}
};

