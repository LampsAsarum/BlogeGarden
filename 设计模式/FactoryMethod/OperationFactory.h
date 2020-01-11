#pragma once
#include "Operation.h"

class OperationFactory
{
public:
	virtual Operation* createOperation() = 0;
};

