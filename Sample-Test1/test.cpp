#include "pch.h"
#include <string>
#include <gtest/gtest.h>
#include "../BestReview/primeFactor.cpp"

class PrimeFactor_Fix : public testing::Test
{
public:
	PrimeFactor pf;
};

TEST_F(PrimeFactor_Fix, of0)
{
	std::vector<int> expected = {};
	EXPECT_EQ(expected, pf.of(0));
}

TEST_F(PrimeFactor_Fix, of1)
{
	std::vector<int> expected = {};
	EXPECT_EQ(expected, pf.of(1));
}


TEST_F(PrimeFactor_Fix, of2)
{
	std::vector<int> expected = {2};
	EXPECT_EQ(expected, pf.of(2));
}

TEST_F(PrimeFactor_Fix, of3)
{
	std::vector<int> expected = { 3 };
	EXPECT_EQ(expected, pf.of(3));
}

TEST_F(PrimeFactor_Fix, of4){
	std::vector<int> expected = { 2,2};
	EXPECT_EQ(expected, pf.of(4));
}

TEST_F(PrimeFactor_Fix, of6)
{
	std::vector<int> expected = { 2, 3 };
	EXPECT_EQ(expected, pf.of(6));
}


TEST_F(PrimeFactor_Fix, of12)
{
	std::vector<int> expected = { 2,2,3 };
	EXPECT_EQ(expected, pf.of(12));
}

TEST_F(PrimeFactor_Fix, of21)
{
	std::vector<int> expected = { 3, 7 };
	EXPECT_EQ(expected, pf.of(21));
}
