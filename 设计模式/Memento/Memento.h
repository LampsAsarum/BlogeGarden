#pragma once

class Memento//±¸ÍüÂ¼Àà
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

