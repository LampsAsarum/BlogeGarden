#include <iostream>
#include "OperationFactory.h"
#include "Operation.h"

int main()
{
	Operation* operation = OperationFactory::createOperation(add);

	operation->setNum1(1);
	operation->setNum2(2);

	double result = operation->getResult();
	std::cout << result << std::endl;

	return 0;
}