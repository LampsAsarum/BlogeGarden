#pragma once
#include <iostream>
#include "Person.h"

class ConcretePerson : public Person
{
public:
	void desc() override
	{
		std::cout << "���Ǹ��������" << std::endl;
	}
};

