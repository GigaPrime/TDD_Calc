#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "WhitespaceRemover.h"

class WhitespaceRemoverTest : public testing::Test
{
public:
	std::unique_ptr<IWhitespaceRemover> whitespaceRemover = std::make_unique<WhitespaceRemover>(" \t");
};