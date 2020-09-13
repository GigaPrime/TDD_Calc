#include "TokinizerTest.h"
#include "Tokenizer.h"
#include <vector>
using namespace testing;

TEST_F(TokenizerTest, isExpectedTokensVectorEqualToReturnedTokensVector)
{
	std::vector<std::string> expectedTokens = { "1", "+", "1" };
	ITokenizer* tokenizer = new Tokenizer();
	

	std::vector<std::string> actualTokens = tokenizer->tokenizeExpression("1 + 1");


	ASSERT_THAT(expectedTokens, Eq(actualTokens));
}
