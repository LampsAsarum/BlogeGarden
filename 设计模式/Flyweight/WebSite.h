#pragma once
#include <iostream>

class WebSite
{
public:
	virtual void Use() = 0;
};

class ConcreteWebSite : public WebSite
{
public:
	ConcreteWebSite(std::string name)
	{
		this->name = name;
	}
	void Use() override
	{
		std::cout << "ÍøÕ¾·ÖÀà£º" << name << std::endl;
	}
private:
	std::string name;
};

