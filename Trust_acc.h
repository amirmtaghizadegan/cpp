#ifndef _TRUST_ACC_H_
#define _TRUST_ACC_H_

#include "Saving_acc.h" // Base class: Saving_acc.h

class Trust_acc : public Saving_acc
{
private:
	static constexpr const char *name_def {"unnamed acc"};
	static constexpr double balance_def {0.0};
	static constexpr double interest_def {0.0};
public:
	static int count;
	Trust_acc(std::string name = name_def, double balance = balance_def, double interest = interest_def);
	virtual bool deposite(double amount) override;
	virtual bool withdraw(double amount) override;
	virtual ~Trust_acc() = default;
};

#endif // _TRUST_ACC_H_
