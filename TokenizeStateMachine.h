#pragma once
#include <iostream>

class ITokenizerState;
class AbstractConsumerState;
class TokenizerStateMachine;
class ConsumeOperands;
class ConsumeSpaces;

class ITokeniserState
{
public:
	virtual void consume(const char& charFromExpression) = 0;
	virtual std::string getConsumedToken() = 0;
};

class AbstractConsumerState : public ITokeniserState
{
protected: 
	virtual void switchTo(const ITokeniserState* state) {};
	std::string consumedToken;
};
