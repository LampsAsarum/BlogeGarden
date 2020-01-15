#include <iostream>
#include "Director.h"
#include "Build_A.h"

int main()
{
	Build_A* pBuild_A = new Build_A();
	Director* pDirector = new Director(pBuild_A);
	pDirector->Create();
	return 0;
}