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
	a->V_Decorator(person);//���a����

	ConcreteDecoratorB* b = new ConcreteDecoratorB();
	b->V_Decorator(a);//�������a���εĻ��������b����

	b->desc();//���õ�ʱ������b���personָ����a��������ȥa��desc��
					//������a���personָ����ConcretePerson��������ȥConcretePerson��desc

	return 0;
}