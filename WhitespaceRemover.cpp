#include "WhitespaceRemover.h"

const std::string WhitespaceRemover::removeWhitespace(const std::string& expression)
{
    std::string expressionWithoutWhitespaces;
    for (int i = 0; i < expression.length(); i++)
    {
        if (isNotWhitespace(expression[i]))
            expressionWithoutWhitespaces += expression[i];
    }

    return expressionWithoutWhitespaces;
}

const bool WhitespaceRemover::isNotWhitespace(const char& selectedChar)
{
    return whitespaces.find(selectedChar) == std::string::npos;
}
