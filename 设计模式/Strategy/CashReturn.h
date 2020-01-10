#pragma once
#include "CashSuper.h"

class CashReturn : public CashSuper
{
public:
	CashReturn(double Condition,double Return)
	{
		moneyCondition = Condition;
		moneyReturn = Return;
	}

	virtual double acceptCash(double money) override
	{
		if (money > moneyCondition)
		{
			return money - (money / moneyCondition) * moneyReturn;
		}
		return money;
	}

private:
	double moneyCondition;
	double moneyReturn;
};

