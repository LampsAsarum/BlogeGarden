#pragma once
#include <string>

class Concrete
{
public:
	Concrete(std::string str)
	{
		name = str;
	}
	Concrete(const Concrete& concrete)
	{
		name = concrete.name;
	}
	void setName(std::string str)
	{
		name = str;
	}
	std::string name;
};

