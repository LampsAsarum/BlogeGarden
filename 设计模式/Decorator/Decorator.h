#pragma once
#include "Person.h"

class Decorator : public Person
{
public:
	void V_Decorator(Person *p)
	{
		person = p;
	}

	void desc() override
	{
		person->desc();
	}

private:
	Person* person;
};

