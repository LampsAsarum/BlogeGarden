#pragma once
#include "OperationFactory.h"
#include "OperationAdd.h"

class OperationFactoryAdd : public OperationFactory
{
public:
	Operation* createOperation() override
	{
		return new OperationAdd();
	}
};

