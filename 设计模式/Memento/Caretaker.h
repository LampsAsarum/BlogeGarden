#pragma once
#include "Memento.h"

class Caretaker//�����ߣ����汸��¼����
{
public:
	void setMemento(Memento* memento)
	{
		pMemento = memento;
	}
	Memento* getMemento()
	{
		return pMemento;
	}
private:
	Memento* pMemento;
};

