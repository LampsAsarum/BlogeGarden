#pragma once
#include <iostream>
#include "Component.h"

class Leaf : public Component//Ҷ�ڵ�
{
public:
	Leaf(std::string name) : Component(name)
	{	}
	void Add(Component* component) override
	{
		std::cout << "Ҷ�ӽڵ㲻��ҪAdd" << std::endl;
	}
	void Remove(Component* component) override
	{
		std::cout << "Ҷ�ӽڵ㲻��ҪRemove" << std::endl;
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

