#pragma once
#include <iostream>

class HandsetSoft//Èí¼þ
{
public:
	virtual void Run() = 0;
};

class HandsetGame : public HandsetSoft
{
public:
	void Run() override
	{
		std::cout << "Game Run" << std::endl;
	}
};

class HandsetCall : public HandsetSoft
{
public:
	void Run() override
	{
		std::cout << "Call Run" << std::endl;
	}
};

