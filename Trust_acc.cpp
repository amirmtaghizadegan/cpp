#include "Trust_acc.h"

int Trust_acc::count {3};

Trust_acc::Trust_acc(std::string name, double balance, double interest)
:Saving_acc{name, balance, interest}{
}

bool Trust_acc::withdraw(double amount){
	if (count > 0){
		if (amount < balance * 0.2){
			count--;
			return Saving_acc::withdraw(amount);
		}
	}
	return false;
}

bool Trust_acc::deposite(double amount){
	if (amount >= 50000)
		amount += 50;
	return Saving_acc::deposite(amount);
}