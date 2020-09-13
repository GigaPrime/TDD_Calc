#pragma once
#include "IWhitespaceRemover.h"

class WhitespaceRemover : public IWhitespaceRemover
{
public:
	WhitespaceRemover(const std::string& whitespaces) : whitespaces(whitespaces) {}

	const std::string removeWhitespace(const std::string expression) override;

private:
	const std::string whitespaces;
	const bool isNotWhitespace(const char selectedChar);
};
