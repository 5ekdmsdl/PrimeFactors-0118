#include "pch.h"
#include <string>
#include <gtest/gtest.h>
#include <C:\reviewer\workspace\test6\BestReview\primeFactor.cpp>

TEST(PrimeFactor, of1)
{
	PrimeFactor pf;
	std::vector<int> expected = {};
	EXPECT_EQ(expected, pf.of(1));
}
