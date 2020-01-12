#pragma once
#include <string>
#include "Prototype.h"

class ConcretePrototype : public Prototype
{
public:
	ConcretePrototype(std::string str,int i) : Prototype(str,i)
	{
	}

	Prototype* clone() override
	{
		//ConcretePrototype* p = this; //’‚√¥–¥ ««≥øΩ±¥
		ConcretePrototype* p = new ConcretePrototype(Prototype::getName(), Prototype::getId());
		return p;
	}
};

