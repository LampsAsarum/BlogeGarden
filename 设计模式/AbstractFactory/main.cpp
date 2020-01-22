#include <iostream>
#include "AbstractProductA.h"
#include "ProductA1.h"
#include "AbstractFactory.h"
#include "Factory1.h"



int main()
{
	AbstractFactory* factory = new Factory1();
	AbstractProductA* a1 = factory->CreateProtectA();
	AbstractProductB* b1 = factory->CreateProtectB();
	a1->Show();
	b1->Show();
	return 0;
}