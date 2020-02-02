#pragma once
#include <string>

class Request
{
public:
	Request(std::string requestType, int count) 
	{
		this->requestType = requestType;
		this->count = count;
	}
public:
	std::string requestType;
	int count;
};

