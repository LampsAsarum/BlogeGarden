#pragma once
#include <iostream>
#include "Eat.h"
#include "Sleep.h"
#include "HitDouDou.h"

class Facade
{
public:
	Facade()
	{
		eat = new Eat();
		sleep = new Sleep();
		hitdoudou = new HitDouDou();
	}

	void doSomthing()
	{
		eat->eat();
		sleep->sleep();
		hitdoudou->hitDouDou();
	}

private:
	Eat* eat;
	Sleep* sleep;
	HitDouDou* hitdoudou;
};

