#pragma once
#include "Memento.h"

class Originator//将要被记录的类
{
public:
	Memento* CreateMemento()
	{
		return new Memento(state);
	}
	void RollBackMemento(Memento* pMemento)
	{
		state = pMemento->getState();
	}

	void setState(int state)
	{
		this->state = state;
	}
	int getState()
	{
		return state;
	}
private:
	int state;//状态
};

