#pragma once
#include <iostream>
#include "Request.h"

class Manager//������
{
public:
	Manager(std::string name, Manager* pSuperior)
	{
		this->name = name;
		this->pSuperior = pSuperior;
	}
	virtual void RequestAction(Request* pRequest) = 0;
protected:
	std::string name;
	Manager* pSuperior;//���������ϼ�
};

class SmallManager : public Manager
{
public:
	SmallManager(std::string name, Manager* pSuperior) : Manager(name,pSuperior)
	{ }
	void RequestAction(Request* pRequest) override
	{
		if (pRequest->requestType == "���" && pRequest->count <= 1)
		{
			std::cout << "С����-�ɹ�" << std::endl;
		}
		else
		{
			if (pRequest != nullptr)
			{
				pSuperior->RequestAction(pRequest);
			}
		}
	}
};

class BigManager : public Manager
{
public:
	BigManager(std::string name) : Manager(name,nullptr)
	{ }
	void RequestAction(Request* pRequest) override
	{
		if (pRequest->requestType == "���" && pRequest->count > 1)
		{
			std::cout << "����-�ɹ�" << std::endl;
		}
	}
};