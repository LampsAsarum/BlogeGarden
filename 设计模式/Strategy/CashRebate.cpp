#include "CashRebate.h"


CashRebate::CashRebate(double rebate)
{
	moneyRebate = rebate;
}

double CashRebate::acceptCash(double money)
{
	return money * moneyRebate;
}