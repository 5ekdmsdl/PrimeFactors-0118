#include "pch.h"
#include <string>
#include <gtest/gtest.h>
#include <C:\reviewer\workspace\test5\BestReview\Account.cpp>

class AccountFixture : public testing::Test
{
public:
	Account acc{ 10000 };
};

TEST_F(AccountFixture, getBalance) {
	EXPECT_EQ(10000, acc.getBalance());
}

TEST_F(AccountFixture, deposit) {
	acc.Deposit(100);
	EXPECT_EQ(10100, acc.getBalance());
}

TEST_F(AccountFixture, withdrawl) {
	acc.Withdraw(100);
	EXPECT_EQ(9900, acc.getBalance());
}
