#include "WhiteSpaceRemoverTest.h"
using namespace testing;
TEST_F(WhitespaceRemoverTest, removeSingleWhiteSpaceAtStringFront)
{
	ASSERT_THAT(whitespaceRemover->removeWhitespace(" 1"), Eq("1"));
}

TEST_F(WhitespaceRemoverTest, removeSingleWhiteSpaceAtStringEnd)
{
	ASSERT_THAT(whitespaceRemover->removeWhitespace("1 "), Eq("1"));
}

TEST_F(WhitespaceRemoverTest, removeSingleWhiteSpaceAtStringMiddle)
{
	ASSERT_THAT(whitespaceRemover->removeWhitespace("1 2"), Eq("12"));
}

TEST_F(WhitespaceRemoverTest, removeMultipleWhiteSpace)
{
	ASSERT_THAT(whitespaceRemover->removeWhitespace("1  2"), Eq("12"));
}

TEST_F(WhitespaceRemoverTest, removeMultipleWhiteSpaceAtDifferentPositions)
{
	ASSERT_THAT(whitespaceRemover->removeWhitespace("  1  2  "), Eq("12"));
}

TEST_F(WhitespaceRemoverTest, removeSingleTabAtStringMiddle)
{
	ASSERT_THAT(whitespaceRemover->removeWhitespace("1\t2"), Eq("12"));
}

TEST_F(WhitespaceRemoverTest, removeDifferentWhitespacesWithinString)
{
	ASSERT_THAT(whitespaceRemover->removeWhitespace("1 \t 2"), Eq("12"));
}