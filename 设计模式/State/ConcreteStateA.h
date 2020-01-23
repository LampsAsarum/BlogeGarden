#pragma once
#include "State.h"
#include "Context.h"
#include "ConcreteStateB.h"


class ConcreteStateA : public State
{
public:
	void stateChange(Context* pcontext);
	//{
	//	pcontext->setState(new ConcreteStateB());
	//}
};

