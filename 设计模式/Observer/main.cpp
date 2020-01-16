#include <iostream>
#include "ConcreteSubject1.h"
#include "ConcreteObserver1.h"
#include "ConcreteObserver2.h"

int main()
{
	ConcreteSubject1* p1 = new ConcreteSubject1();
	ConcreteObserver1* observe1 = new ConcreteObserver1();
	ConcreteObserver2* observe2 = new ConcreteObserver2();
	p1->Add(observe1);
	p1->Add(observe2);
	p1->Respond();
	return 0;
}
