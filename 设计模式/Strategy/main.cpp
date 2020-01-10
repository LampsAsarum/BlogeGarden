#include <iostream>
#include "CashContext.h"


int main()
{
	CashContext csuper(CASHTYPE::Rebate);
	double total = csuper.GetReault(1000);
	std::cout << total << std::endl;
	return 0;
}