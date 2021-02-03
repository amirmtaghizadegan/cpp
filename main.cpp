#include <iostream>
#include "Account.h"
#include "Saving_acc.h"
#include "Trust_acc.h"
#include "checking_acc.h"

using namespace std;

int main(){
//	Account amir{"amir" , 1000};
	cout << boolalpha;
//	cout << amir.deposite(100) << " : " << amir << "," << 100 << endl;
	Saving_acc nima;
	cout << nima.deposite(100) << " : " << nima << "," << 100 << endl;
	return 0;
}