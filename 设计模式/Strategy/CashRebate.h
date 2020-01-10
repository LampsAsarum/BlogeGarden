#pragma once
#include "CashSuper.h"

class CashRebate : public CashSuper
{
public:
	CashRebate(double rebate);
	virtual double acceptCash(double money) override;

private:
	double moneyRebate;
};

