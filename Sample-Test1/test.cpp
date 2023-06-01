#include "pch.h"
#include <string>
#include <gtest/gtest.h>
#include "../BestReview/primeFactor.cpp"

TEST(PrimeFactor, of0)
{
	PrimeFactor pf;
	std::vector<int> expected = {};
	EXPECT_EQ(expected, pf.of(0));
}

TEST(PrimeFactor, of1)
{
	PrimeFactor pf;
	std::vector<int> expected = {};
	EXPECT_EQ(expected, pf.of(1));
}


TEST(PrimeFactor, of2)
{
	PrimeFactor pf;
	std::vector<int> expected = {2};
	EXPECT_EQ(expected, pf.of(2));
}

TEST(PrimeFactor, of3)
{
	PrimeFactor pf;
	std::vector<int> expected = {3};
	EXPECT_EQ(expected, pf.of(3));
}

TEST(PrimeFactor, of4)
{
	PrimeFactor pf;
	std::vector<int> expected = {2,2};
	EXPECT_EQ(expected, pf.of(4));
}

TEST(PrimeFactor, of6)
{
	PrimeFactor pf;
	std::vector<int> expected = {2,3};
	EXPECT_EQ(expected, pf.of(6));
}


TEST(PrimeFactor, of12)
{
	PrimeFactor pf;
	std::vector<int> expected = {2,2,3};
	EXPECT_EQ(expected, pf.of(12));
}

TEST(PrimeFactor, of21)
{
	PrimeFactor pf;
	std::vector<int> expected = {3,7};
	EXPECT_EQ(expected, pf.of(21));
}
