#pragma once
#include <iostream>

class Target
{
public:
	virtual void Print()//������ҿͻ�����Ҫ�Ľӿ�
	{
		std::cout << "��ӡ��ɶ" << std::endl;
	}
};

