#include "PolishCalculatorTest.h"
using namespace testing;

int runAllTests(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	testing::InitGoogleMock(&argc, argv);

	return RUN_ALL_TESTS();
}

TEST_F(ICalculatorTests, expextResultTwoWhenGetOnePlusOneExpression)
{
	ASSERT_THAT(calculator->compute("1 + 1"), Eq(2));
}

TEST_F(ICalculatorTests, expextResultOneWhenGetTwoMinusOneExpression)
{
	ASSERT_THAT(calculator->compute("2 - 1"), Eq(1));
}

TEST_F(ICalculatorTests, expextResultSixWhenGetTwoMultiplyThreeExpression)
{
	ASSERT_THAT(calculator->compute("2 * 3"), Eq(6));
}

TEST_F(ICalculatorTests, expextResultTreeWhenGetSixDivideTwoExpression)
{
	ASSERT_THAT(calculator->compute("6 / 2"), Eq(3));
}

