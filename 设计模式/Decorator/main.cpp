#include <iostream>
#include "Person.h"
#include "ConcretePerson.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

int main()
{
	ConcretePerson* person = new ConcretePerson();
	person->desc();

	ConcreteDecoratorA* a = new ConcreteDecoratorA();
	a->V_Decorator(person);//添加a修饰

	ConcreteDecoratorB* b = new ConcreteDecoratorB();
	b->V_Decorator(a);//在添加了a修饰的基础上添加b修饰

	b->desc();//调用的时候，由于b里的person指针是a，所以先去a的desc，
					//再由于a里的person指针是ConcretePerson，所以先去ConcretePerson的desc

	return 0;
}