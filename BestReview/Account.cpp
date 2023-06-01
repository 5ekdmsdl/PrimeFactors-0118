#include <string>
#include <vector>

class Account
{
public:
	Account(int bal) : balance_(bal) {}

	int getBalance()
	{
		return balance_;
	}

	void Deposit(int money)
	{
		balance_ += money;
	}

	void Withdraw(int money)
	{
		balance_ -= money;
	}

	void SetInterest(int interest)
	{
		
	}


private:
	int balance_;
	int interest_;
};
