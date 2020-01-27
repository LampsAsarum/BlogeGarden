#pragma once
#include <iostream>
#include <vector>
#include "Component.h"

class Composite : public Component//»ìºÏ³ÉµÄ
{
public:
	Composite(std::string name) : Component(name)
	{  }
	void Add(Component* component) override
	{
		vec.push_back(component);
	}
	void Remove(Component* component) override
	{
		for (auto it = vec.begin(); it != vec.end(); it++)
		{
			if (*it == component){
				it = vec.erase(it);
				break;
			}
		}
	}
	void Display(int depth) override
	{
		for (int i = 0; i < depth; i++)
			std::cout << "- ";
		std::cout << name << std::endl;

		for (auto it : vec)
			it->Display(depth+2);
	}
private:
	std::vector<Component*> vec;
};

