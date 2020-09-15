#include "CharsValidator.h"

bool CharsValidator::isRawExpressionValid(const std::string& expression)
{
    for (int i = 0; i < expression.length(); i++)
        if (isCharNotValid(expression[i]))
            return false;
    return true; 
}

const bool CharsValidator::isCharNotValid(const char& selectedChar)
{
    return validChars.find(selectedChar) == std::string::npos;
}
