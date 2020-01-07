#pragma once
#include "CashSuper.h"
#include "CashNormal.h"
#include "CashRebate.h"
#include "CashReturn.h"

class CashSuper;

enum CASHTYPE {Normal,Rebate,Return};

class CashContext
{
public:
	CashContext(CASHTYPE type)
	{
		switch (type)
		{
		case Normal:
			cs = new CashNormal();
			break;
		case Rebate:
			cs = new CashRebate(0.8);
			break;
		case Return:
			cs = new CashReturn(300,100);
			break;
		default:
			cs = nullptr;
			break;
		}
	}
	double GetReault(double money)
	{
		return cs->acceptCash(money);
	}
private:
	CashSuper* cs;
};

