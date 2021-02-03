#include "Saving_acc.h"

Saving_acc::Saving_acc(std::string name, double balance, double interest)
:Account{name, balance}, interest{interest}{
}

bool Saving_acc::deposite(double amount){
	amount += amount * interest / 100;
	return Account::deposite(amount);
}

bool Saving_acc::withdraw(double amount){
	if (balance >= amount){
		balance -= amount;
		return true;
	}
	return false;
}

std::ostream &operator<<(std::ostream &os,const Saving_acc &acc){
	os << "[" << acc.name << ": " << acc.balance << ": " << acc.interest << "]";
	return os;
}