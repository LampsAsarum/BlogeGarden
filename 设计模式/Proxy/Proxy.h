#pragma once
#include "Subject.h"
#include "RealSubject.h"

class Proxy : public Subject
{
public:
	void doSomething() override
	{
		if (pRealSubject == nullptr)
		{
			pRealSubject = new RealSubject();
		}
		pRealSubject->doSomething();
	}
private:
	RealSubject* pRealSubject;
};

