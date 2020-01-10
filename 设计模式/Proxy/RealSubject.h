#pragma once
#include <iostream>
#include "Subject.h"

class RealSubject : public Subject
{
public:
	void doSomething() override
	{
		std::cout << "干些什么事吧" << std::endl;
	}
};

