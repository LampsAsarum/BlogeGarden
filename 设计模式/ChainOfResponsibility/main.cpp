#include <iostream>
#include "Manager.h"
#include "Request.h"

int main()
{
	BigManager* pBigManager = new BigManager("大经理");
	SmallManager* pSmallManager = new SmallManager("小经理", pBigManager);

	Request* pRequest = new Request("请假",5);

	pSmallManager->RequestAction(pRequest);

	return 0;
}