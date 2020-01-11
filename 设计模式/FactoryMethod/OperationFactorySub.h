#pragma once
#include "OperationFactory.h"
#include "OperationSub.h"

class OperationFactorySub : public OperationFactory
{
public:
	Operation* createOperation() override
	{
		return new OperationSub();
	}
};

