#pragma once

class Singleton
{
public:
	static Singleton* GetInstance()
	{
		if (instance == nullptr)
		{
			instance = new Singleton();
		}
		return instance;
	}
private:
	Singleton() {}
	static Singleton* instance;
};

Singleton* Singleton::instance = nullptr;

