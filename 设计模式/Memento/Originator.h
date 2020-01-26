#pragma once
#include "Memento.h"

class Originator//��Ҫ����¼����
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
	int state;//״̬
};

