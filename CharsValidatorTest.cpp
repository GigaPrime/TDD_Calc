#include "CharsValidatorTest.h"
using namespace testing;

TEST_F(CharsValidatorTest, isOperatorPlusCharPresentInString)
{
	ASSERT_THAT(charsValidator->isRawExpressionValid("+"), Eq(true));
}

TEST_F(CharsValidatorTest, isOperatorMinusCharPresentInString)
{
	ASSERT_THAT(charsValidator->isRawExpressionValid("-"), Eq(true));
}

TEST_F(CharsValidatorTest, isOperatorMultiplyCharPresentInString)
{
	ASSERT_THAT(charsValidator->isRawExpressionValid("*"), Eq(true));
}

TEST_F(CharsValidatorTest, isOperatorDevideCharPresentInString)
{
	ASSERT_THAT(charsValidator->isRawExpressionValid("/"), Eq(true));
}

TEST_F(CharsValidatorTest, isAnyDigitCharPresentInString)
{
	ASSERT_THAT(charsValidator->isRawExpressionValid("15435579"), Eq(true));
}

TEST_F(CharsValidatorTest, isAnyDigitAndOperatorCharPresentInString)
{
	ASSERT_THAT(charsValidator->isRawExpressionValid("-154+35*579/"), Eq(true));
}

TEST_F(CharsValidatorTest, isAnyUnallowedCharPresentInString)
{
	ASSERT_THAT(charsValidator->isRawExpressionValid("a/ 154*]35 >579 ` "), Eq(false));
}

TEST_F(CharsValidatorTest, isAnyUnallowedCharPresentInString2)
{
	ASSERT_THAT(charsValidator->isRawExpressionValid("[/154*]35"), Eq(false));
}

TEST_F(CharsValidatorTest, isAnyUnallowedCharPresentInString3)
{
	ASSERT_THAT(charsValidator->isRawExpressionValid("\"/154*]35"), Eq(false));
}

TEST_F(CharsValidatorTest, isAnyUnallowedCharPresentInString4)
{
	ASSERT_THAT(charsValidator->isRawExpressionValid("'[/154*]35"), Eq(false));
}
