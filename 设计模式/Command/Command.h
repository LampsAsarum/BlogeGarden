#pragma once
#include "Barbecuer.h"

class Command//³éÏóÃüÁîÀà
{
public:
	Command(Barbecuer* pBarbecuer)
	{
		this->pBarbecuer = pBarbecuer;
	}
	virtual void ExcuteCommand() = 0;
protected:
	Barbecuer* pBarbecuer;
};

class BakeMuttonCommand :public Command
{
public:
	BakeMuttonCommand(Barbecuer* pBarbecuer) : Command(pBarbecuer)
	{ }
	void ExcuteCommand() override
	{
		pBarbecuer->BakeMutton();
	}
};

class BakeChikenCommand :public Command
{
public:
	BakeChikenCommand(Barbecuer* pBarbecuer) : Command(pBarbecuer)
	{ }
	void ExcuteCommand() override
	{
		pBarbecuer->BakeChiken();
	}
};

