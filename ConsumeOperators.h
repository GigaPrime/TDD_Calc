#pragma once
#include "TokenizeStateMachine.h"

class ConsumeOperators : public AbstractConsumerState
{
public:
	void consume(const char& charFromExpression) override;
	std::string getConsumedToken() override { return consumedToken; }

private:
	const std::string operators = "+-*/";
	const bool isCharOperator(const char& symbol);
};
