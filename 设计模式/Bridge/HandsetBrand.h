#pragma once
#include "HandsetSoft.h"

class HandsetBrand//Æ·ÅÆ
{
public:
	void SetHandsetSoft(HandsetSoft* pSoft)
	{
		this->pSoft = pSoft;
	}
	virtual void Run() = 0;
protected:
	HandsetSoft* pSoft;
};

class HandsetBrand_A : public HandsetBrand
{
public:
	void Run() override
	{
		pSoft->Run();
	}
};

class HandsetBrand_B : public HandsetBrand
{
public:
	void Run() override
	{
		pSoft->Run();
	}
};

