#pragma once
#include <string>

class Operation;

enum OPERATION { add, sub };

class OperationFactory
{
public:
	static Operation* createOperation(OPERATION opera);
};



