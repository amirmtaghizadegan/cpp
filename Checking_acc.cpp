#include "Checking_acc.h"

Checking_acc::Checking_acc(std::string name, double balance)
: Account{name, balance}{
}

bool Checking_acc::withdraw(double amount){
	if (amount <= (balance - 1.5)){
		balance -= 1.5;
		return Account::withdraw(amount);
	}
	return false;
}

bool Checking_acc::deposite(double amount){
	if (amount >= 0 ){
		balance += amount;
		return true;
	}
	return false;
}