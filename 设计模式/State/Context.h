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
public://���ﱾ����private��Ϊ�˷���ʹ����private
	State* pstate;
};

