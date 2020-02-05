#pragma once
#include <iostream>
#include <map>
#include "WebSite.h"

class WebSiteFactory
{
public:
	WebSite* GetWebSiteCategory(std::string key)
	{
		if (flyweight[key] == nullptr)
		{
			flyweight[key] = new ConcreteWebSite(key);
		}
		return flyweight[key];
	}
private:
	std::map<std::string,WebSite*> flyweight;
};

