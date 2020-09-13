#pragma once
#include <iostream>

class ICalculator
{
public:
	virtual double compute(std::string expression) = 0;
};
