#pragma once
#include <string>

class Component//�ɷ�
{
public:
	Component(std::string name)
	{
		this->name = name;
	}
	virtual void Add(Component* component) = 0;
	virtual void Remove(Component* component) = 0;
	virtual void Display(int depth) = 0;
protected:
	std::string name;
};

