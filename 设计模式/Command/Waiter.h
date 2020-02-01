#pragma once
#include <iostream>
#include <vector>
#include "Command.h"

class Waiter
{
public:
	void SetOrder(Command* pCommand)
	{
		order.push_back(pCommand);
	}
	void CancelOrder(Command* pCommand)
	{
		for (auto it = order.begin(); it != order.end(); it++)
		{
			if (*it == pCommand)
			{
				it = order.erase(it);
				break;
			}
		}
	}
	void Notify()
	{
		for (int i = 0;i < order.size();i++)
		{
			order[i]->ExcuteCommand();
		}
	}
private:
	std::vector<Command*> order;
};

