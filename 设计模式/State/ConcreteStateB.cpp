#include "ConcreteStateB.h"
#include <iostream>

void ConcreteStateB::stateChange(Context* pcontext)
{
	pcontext->setState(new ConcreteStateA());
	std::cout << "ConcreteStateA" << std::endl;
}