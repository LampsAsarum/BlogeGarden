#pragma once

class Memento//����¼��
{
public:
	Memento(int state)
	{
		this->state = state;
	}
	
	int getState()
	{
		return state;
	}
private:
	int state;
};

