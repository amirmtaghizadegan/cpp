#pragma once

#include "Account.h"

class Checking_acc : public Account
{
private:
	static constexpr const char *name_def {"unnamed acc"};
	static constexpr double balance_def {0.0};
public:
	Checking_acc(std::string name = name_def, double balance = balance_def);
	virtual bool withdraw(double amount) override;
	virtual bool deposite(double amount) override;
	virtual ~Checking_acc() = default;
};

