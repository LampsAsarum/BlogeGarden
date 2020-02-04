#pragma once
#include <iostream>
//#include "Country.h"

class Country;

class UnitedNations
{
public:
	virtual void Declare(std::string message, Country* colleague) = 0;
};


//class UnitedNationsSecurityCouncil : public UnitedNations
//{
//public:
//	void Declare(std::string message, Country* colleague) override
//	{
//		if (colleague == pusa)
//		{
//			pjapan->GetMessage(message);
//		}
//		else
//		{
//			pusa->GetMessage(message);
//		}
//	}
//public:
//	USA* pusa;
//	Japan* pjapan;
//};

