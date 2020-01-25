#pragma once
#include <iostream>

class Target
{
public:
	virtual void Print()//这才是我客户端想要的接口
	{
		std::cout << "打印点啥" << std::endl;
	}
};

