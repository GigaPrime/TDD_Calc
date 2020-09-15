#pragma once
#include <iostream>

class ICharsValidator
{
public:
	virtual bool isRawExpressionValid(const std::string& expression) = 0;
};