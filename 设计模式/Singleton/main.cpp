#include <iostream>
#include "Singleton.h"

int main()
{
	Singleton* p1 = Singleton::GetInstance();
	Singleton* p2 = Singleton::GetInstance();
	if (p1 == p2)
	{
		std::cout << "这俩是同一个" << std::endl;
	}
	return 0;
}