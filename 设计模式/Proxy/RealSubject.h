#pragma once
#include <iostream>
#include "Subject.h"

class RealSubject : public Subject
{
public:
	void doSomething() override
	{
		std::cout << "��Щʲô�°�" << std::endl;
	}
};

