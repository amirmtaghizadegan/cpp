#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <iostream>

class Account
{
	friend std::ostream &operator<<(std::ostream &os, Account &acc);
private:
	static constexpr const char *name_def {"unnamed acc"};
	static constexpr double balance_def {0.0};
protected:
	std::string name;
	double balance;
public:
	Account(std::string name = name_def, double balance = balance_def);
	virtual bool deposite(double amount)=0;
	virtual bool withdraw(double amount)=0;
	double get_balance();
	virtual ~Account() = default;
};

#endif // ACCOUNT_H
