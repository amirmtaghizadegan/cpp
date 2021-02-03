#ifndef _SAVING_ACC_H_
#define _SAVING_ACC_H_
#include "Account.h"

class Saving_acc: public Account
{
	friend std::ostream &operator<<(std::ostream &os,const Saving_acc &acc);
private:
	static constexpr const char *name_def {"unnamed acc"};
	static constexpr double balance_def {0.0};
	static constexpr double int_def {0.0};
protected:
	double interest;
public:
	Saving_acc(std::string name = name_def, double balance = balance_def, double interest = int_def);
	virtual bool deposite(double amount) override;
	virtual bool withdraw(double amount) override;
	virtual ~Saving_acc() = default;
};

#endif