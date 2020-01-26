#pragma once
#include "Memento.h"

class Caretaker//管理者：保存备忘录的类
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

