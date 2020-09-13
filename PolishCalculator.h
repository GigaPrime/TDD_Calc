#pragma once
#include "ICalculator.h"

class PolishCalculator : public ICalculator
{
	double compute(const std::string expression) override;
};
