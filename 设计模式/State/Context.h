#pragma once
#include "State.h"

class Context
{
public:
	void setState(State* state)
	{
		pstate = state;
	}
	void Request()
	{
		pstate->stateChange(this);
	}
public://这里本该是private，为了方便使用了private
	State* pstate;
};

