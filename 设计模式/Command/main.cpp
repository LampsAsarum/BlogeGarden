#include <iostream>
#include "Barbecuer.h"
#include "Command.h"
#include "Waiter.h"

int main()
{
	Barbecuer* pBarbecuer = new Barbecuer();
	Command* pBakeMuttonCommand = new BakeMuttonCommand(pBarbecuer);
	Command* pBakeChikenCommand = new BakeChikenCommand(pBarbecuer);
	Waiter* pWaiter = new Waiter();

	pWaiter->SetOrder(pBakeMuttonCommand);
	pWaiter->SetOrder(pBakeChikenCommand);
	pWaiter->Notify();

	return 0;
}