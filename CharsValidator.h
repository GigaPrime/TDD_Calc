#pragma once
#include "ICharsValidator.h"

class CharsValidator : public ICharsValidator
{
public:
	CharsValidator(const std::string& validChars) : validChars(validChars) {}

	bool isRawExpressionValid(const std::string& expression) override;

private:
	const std::string validChars;
	const bool isCharNotValid(const char& selectedChar);
};