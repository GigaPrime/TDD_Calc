#pragma once
#include <iostream>

class IWhitespaceRemover
{
public:
	virtual const std::string removeWhitespace(const std::string expression) = 0;
};