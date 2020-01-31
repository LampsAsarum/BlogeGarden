#include <iostream>
#include "HandsetSoft.h"
#include "HandsetBrand.h"

int main()
{
	HandsetBrand* pBrand;
	pBrand = new HandsetBrand_A();

	pBrand->SetHandsetSoft(new HandsetGame());
	pBrand->Run();

	pBrand->SetHandsetSoft(new HandsetCall());
	pBrand->Run();
	return 0;
}