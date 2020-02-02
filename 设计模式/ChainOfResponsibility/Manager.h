#pragma once
#include <iostream>
#include "Request.h"

class Manager//管理者
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
	Manager* pSuperior;//责任链的上级
};

class SmallManager : public Manager
{
public:
	SmallManager(std::string name, Manager* pSuperior) : Manager(name,pSuperior)
	{ }
	void RequestAction(Request* pRequest) override
	{
		if (pRequest->requestType == "请假" && pRequest->count <= 1)
		{
			std::cout << "小经理-成功" << std::endl;
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
		if (pRequest->requestType == "请假" && pRequest->count > 1)
		{
			std::cout << "大经理-成功" << std::endl;
		}
	}
};