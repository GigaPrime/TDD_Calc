#pragma once
#include <vector>
#include <iostream>

class ITokenizer
{
public:
	virtual std::vector<std::string> tokenizeExpression(std::string& expression) = 0;
};