#pragma once
#include "UnitedNations.h"
#include "Country.h"

class UnitedNationsSecurityCouncil : public UnitedNations
{
public:
	void Declare(std::string message, Country* colleague) override
	{
		if (colleague == this->pusa)
		{
			this->pjapan->GetMessage(message);
		}
		else
		{
			this->pusa->GetMessage(message);
		}
	}
public:
	USA* pusa;
	Japan* pjapan;
};

