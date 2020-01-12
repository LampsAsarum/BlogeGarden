#include <iostream>
#include "ConcretePrototype.h"
#include "Concrete.h"

int main()
{
	ConcretePrototype* p1 = new ConcretePrototype("ÀÏÍõ",1);
	ConcretePrototype* p2 = (ConcretePrototype*)p1->clone();
	std::cout << p1->getName() << p1->getId() << std::endl;
	std::cout << p2->getName() << p2->getId() << std::endl;
	p2->setName("hh");
	p2->setId(2);
	std::cout << p1->getName() << p1->getId() << std::endl;
	std::cout << p2->getName() << p2->getId() << std::endl;
	return 0;
}