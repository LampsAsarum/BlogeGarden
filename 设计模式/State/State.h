#pragma once
//#include "Context.h"

class Context;
class State
{
public:
	virtual void stateChange(Context* pcontext) = 0;
};

