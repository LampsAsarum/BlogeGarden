#pragma once
#include "Observer.h"

class Subject
{
public:
	virtual void Add(Observer* observer) = 0;
	virtual void Sub(Observer* observer) = 0;
	virtual void Respond() = 0;
};

