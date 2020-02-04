#pragma once
#include "UnitedNations.h"

class Country
{
public:
	Country(UnitedNations* pMediator)
	{
		this->pMediator = pMediator;
	}
protected:
	UnitedNations* pMediator;
};

class USA : public Country
{
public:
	USA(UnitedNations* pMediator) : Country(pMediator)
	{ }
	void Declare(std::string message)
	{
		pMediator->Declare(message, this);
	}
	void GetMessage(std::string message)
	{
		std::cout << "USA Get Message" << std::endl;
	}
};

class Japan : public Country
{
public:
	Japan(UnitedNations* pMediator) : Country(pMediator)
	{ }
	void Declare(std::string message)
	{
		pMediator->Declare(message, this);
	}
	void GetMessage(std::string message)
	{
		std::cout << "Japan Get Message" << std::endl;
	}
};

