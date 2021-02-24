#pragma once
#include "ITokenizer.h"

class Tokenizer : public ITokenizer
{
public:
	virtual std::vector<std::string> tokenizeExpression(std::string& expression);
};