#pragma once
#include "Operation.h"

class OperationSub : public Operation
{
public:
	double getResult() override
	{
		return getNum1() - getNum2();
	}
};

