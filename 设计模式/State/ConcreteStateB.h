#pragma once
#include "State.h"
#include "Context.h"
#include "ConcreteStateA.h"

class ConcreteStateB : public State
{
public:
	void stateChange(Context* pcontext);
	//{
	//	pcontext->setState(new ConcreteStateA());
	//}
};

