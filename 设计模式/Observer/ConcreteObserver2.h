#pragma once
#include <iostream>
#include "Observer.h"

class ConcreteObserver2 : public Observer
{
public:
	void Update() override
	{
		std::cout << "ʵ�ʶ���2�ı�״̬" <<  std::endl;
	}
};

