#include <iostream>
#include "Target.h"
#include "Adapter.h"


int main()
{
	Target* target = new Adapter();
	target->Print();
	return 0;
}