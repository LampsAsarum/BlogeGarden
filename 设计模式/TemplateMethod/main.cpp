#include <iostream>
#include "TemplateMethod.h"
#include "ConcreteMethod1.h"
#include "ConcreteMethod2.h"

int main()
{
	TemplateMethod* p1 = new ConcreteMethod1();
	p1->mainMethod();

	TemplateMethod* p2 = new ConcreteMethod2();
	p2->mainMethod();

	return 0;
}