#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "WhitespaceRemover.h"

class WhitespaceRemoverTest : public testing::Test
{
public:
	IWhitespaceRemover* whitespaceRemover = new WhitespaceRemover(" \t");
	
};