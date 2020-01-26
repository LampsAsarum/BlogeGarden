#include <iostream>
#include "Originator.h"
#include "Caretaker.h"

int main()
{
	Originator* pOriginator = new Originator();
	pOriginator->setState(10);
	std::cout << pOriginator->getState() << std::endl;

	Caretaker* pCaretaker = new Caretaker();
	pCaretaker->setMemento(pOriginator->CreateMemento());

	pOriginator->setState(20);
	std::cout << pOriginator->getState() << std::endl;

	pOriginator->RollBackMemento(pCaretaker->getMemento());
	std::cout << pOriginator->getState() << std::endl;

	return 0;
}