#include <iostream>
#include "Manager.h"
#include "Request.h"

int main()
{
	BigManager* pBigManager = new BigManager("����");
	SmallManager* pSmallManager = new SmallManager("С����", pBigManager);

	Request* pRequest = new Request("���",5);

	pSmallManager->RequestAction(pRequest);

	return 0;
}