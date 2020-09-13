#pragma once
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "PolishCalculator.h"
#include "TokinizerTest.h"

int runAllTests(int argc, char** argv);

class ICalculatorTests : public testing::Test
{
public:
	ICalculator* calculator = new PolishCalculator();
};

