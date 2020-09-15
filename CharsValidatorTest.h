#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "CharsValidator.h"

class CharsValidatorTest : public testing::Test
{
public:
	std::unique_ptr<ICharsValidator> charsValidator = std::make_unique<CharsValidator>("0123456789+-*/");
};