#include "ConcreteStateA.h"
#include <iostream>

void ConcreteStateA::stateChange(Context* pcontext)
{
	pcontext->setState(new ConcreteStateB());
	std::cout << "ConcreteStateB" << std::endl;
}