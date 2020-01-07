#pragma once
class Operation
{
public:
	virtual double getResult() = 0;

	void setNum1(int num);
	double getNum1();
	
	void setNum2(int num);
	double getNum2();

private:
	double num1;
	double num2;
};

