#include "Account.h"

Account::Account(std::string name, double balance)
:name{name}, balance{balance}{
}

bool Account::withdraw(double amount){
	if (balance >= amount){
		balance -= amount;
		return true;
	}
	return false;
}

bool Account::deposite(double amount){
	if (amount >= 0){
		balance += amount;
		return true;
	}
	return false;
}

double Account::get_balance(){
	return balance;
}

std::ostream &operator<<(std::ostream &os, Account &acc){
	os << "[" << acc.name << " : " << acc.balance << "]";
	return os;
}