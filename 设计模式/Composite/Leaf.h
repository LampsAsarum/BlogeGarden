#pragma once
#include <iostream>
#include "Component.h"

class Leaf : public Component//叶节点
{
public:
	Leaf(std::string name) : Component(name)
	{	}
	void Add(Component* component) override
	{
		std::cout << "叶子节点不需要Add" << std::endl;
	}
	void Remove(Component* component) override
	{
		std::cout << "叶子节点不需要Remove" << std::endl;
	}
	void Display(int depth) override
	{
		for (int i = 0; i < depth; i++)
		{
			std::cout << "- ";
		}
		std::cout << name << std::endl;
	}
};

