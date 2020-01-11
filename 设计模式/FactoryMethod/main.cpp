#include <iostream>
#include "OperationFactory.h"
#include "OperationFactoryAdd.h"
#include "OperationFactorySub.h"

int main()
{
	OperationFactory* pFactory = new OperationFactorySub();
	Operation* pOpera = pFactory->createOperation();
	pOpera->setNum1(1);
	pOpera->setNum2(2);
	std::cout << pOpera->getResult() << std::endl;
	return 0;
}