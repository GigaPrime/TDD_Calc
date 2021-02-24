#include "TokinizerTest.h"
#include "Tokenizer.h"
#include <vector>
using namespace testing;

TEST_F(TokenizerTest, isExpectedTokensVectorEqualToReturnedTokensVector)
{
	std::string Expression = "1 + 1";
	std::vector<std::string> expectedTokens = { "1", "+", "1" };
	ITokenizer* tokenizer = new Tokenizer();
}
