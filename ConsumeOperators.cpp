#include "ConsumeOperators.h"

void ConsumeOperators::consume(const char& charFromExpression)
{
	if (getConsumedToken().empty() && isCharOperator(charFromExpression))
	{
		consumedToken = charFromExpression;
	}
}

const bool ConsumeOperators::isCharOperator(const char& symbol)
{
	return operators.find(symbol) != std::string::npos;
}
