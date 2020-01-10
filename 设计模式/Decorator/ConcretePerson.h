#pragma once
#include <iostream>
#include "Person.h"

class ConcretePerson : public Person
{
public:
	void desc() override
	{
		std::cout << "这是个具体的人" << std::endl;
	}
};

