#include "CashReturn.h"

CashReturn::CashReturn(double Condition, double Return)
{
	moneyCondition = Condition;
	moneyReturn = Return;
}

double CashReturn::acceptCash(double money)
{
	if (money > moneyCondition)
	{
		return money - (money / moneyCondition) * moneyReturn;
	}
	return money;
}