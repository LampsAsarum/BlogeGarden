#pragma once
#include "Operation.h"

class OperationAdd : public Operation
{
public:
	double getResult() override
	{
		return getNum1() + getNum2();
	}
};

