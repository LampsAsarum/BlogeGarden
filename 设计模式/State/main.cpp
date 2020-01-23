#include <iostream>
#include "Context.h"
#include "State.h"
#include "ConcreteStateA.h"

int main()
{
	State* p = new ConcreteStateA();

	Context* pContext = new Context();
	pContext->setState(p);

	pContext->Request();
	pContext->Request();
	pContext->Request();
	return 0;
}