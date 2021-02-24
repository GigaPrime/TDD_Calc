#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "TokenizeStateMachine.h"
#include "ConsumeOperators.h"

class ConsumeOperatorsTest : public testing::Test
{
public:
	ITokeniserState* consumeOperatorState = new ConsumeOperators();

private:

};