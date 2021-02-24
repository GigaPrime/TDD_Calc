#include "ConsumeOperatorsTest.h"
using namespace testing;

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnNothing)
{
	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq(""));
}

TEST_F(ConsumeOperatorsTest, testTest)
{
	consumeOperatorState->consume('+');
	consumeOperatorState->consume(' ');
	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("+"));
}

// "+" operator tests

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnPlusInSameOperatorsSequence)
{
	for (char symbol : "+++")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("+"));
}

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnPlusInAnyOperatorsSequence)
{
	for (char symbol : "+--")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("+"));
}

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnPlusInOperatorAndSpaceSequence)
{
	for (char symbol : "+ ")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("+"));
}

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnPlusInOperatorAndDigitSequence)
{
	for (char symbol : "+1-")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("+"));
}

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnPlusInOperatorAndCharSequence)
{
	for (char symbol : "+aA")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("+"));
}

//	// "-" operator tests

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnMinusInSameOperatorsSequence)
{
	for (char symbol : "---")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("-"));
}

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnMinusInAnyOperatorsSequence)
{
	for (char symbol : "-++")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("-"));
}

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnMinusInOperatorAndSpaceSequence)
{
	for (char symbol : "- ")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("-"));
}

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnMinusInOperatorAndDigitSequence)
{
	for (char symbol : "-1+")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("-"));
}

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnMinusInOperatorAndCharSequence)
{
	for (char symbol : "-aA")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("-"));
}

// "*" operator tests

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnMultInSameOperatorsSequence)
{
	for (char symbol : "***")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("*"));
}

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnMultInAnyOperatorsSequence)
{
	for (char symbol : "*--")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("*"));
}

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnMultInOperatorAndSpaceSequence)
{
	for (char symbol : "* ")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("*"));
}

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnMultInOperatorAndDigitSequence)
{
	for (char symbol : "*1+")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("*"));
}

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnMultInOperatorAndCharSequence)
{
	for (char symbol : "*aA")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("*"));
}

// "/" operator tests

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnDivInSameOperatorsSequence)
{
	for (char symbol : "///")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("/"));
}

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnDivtInAnyOperatorsSequence)
{
	for (char symbol : "/--")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("/"));
}

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnDivtInOperatorAndSpaceSequence)
{
	for (char symbol : "/ ")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("/"));
}

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnDivtInOperatorAndDigitSequence)
{
	for (char symbol : "/1+")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("/"));
}

TEST_F(ConsumeOperatorsTest, getConsumedTokenReturnDivtInOperatorAndCharSequence)
{
	for (char symbol : "/aA")
	{
		consumeOperatorState->consume(symbol);
	}

	ASSERT_THAT(consumeOperatorState->getConsumedToken(), Eq("/"));
}