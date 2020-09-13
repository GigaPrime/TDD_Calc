#pragma once
#include "ITokenizer.h"

class Tokenizer : public ITokenizer
{
public:
	std::vector<std::string> tokenizeExpression(const std::string expression) override;
};