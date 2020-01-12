#pragma once
#include <string>

class Prototype
{
public:
	Prototype(std::string str,int i)
	{
		name = str;
		id = i;
	}

	std::string getName()
	{
		return name;
	}

	void setName(std::string str)
	{
		name = str;
	}

	int  getId()
	{
		return id;
	}

	void setId(int i)
	{
		id = i;
	}

	virtual Prototype* clone() = 0;
private:
	std::string name;
	int id;
};

