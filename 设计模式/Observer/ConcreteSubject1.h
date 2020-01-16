#pragma once
#include <iostream>
#include <vector>
#include "Subject.h"
#include "Observer.h"

class ConcreteSubject1 : public Subject
{
public:
	void Add(Observer* observer)
	{
		observers.push_back(observer);
	}
	void Sub(Observer* observer)
	{
		for (auto it = observers.begin(); it != observers.end(); it++)
		{
			if (*it == observer)
			{
				it = observers.erase(it);
				break;
			}
		}
	}
	void Respond()
	{
		for (int i = 0;i < observers.size();i++)
		{
			observers[i]->Update();
		}
	}
private:
	std::vector<Observer*> observers;
};

