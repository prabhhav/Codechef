#include <iostream>
using namespace std;

int main() {
    int amount;
    double balance; 
    double remainingbalance;
    
    cin >> amount;
	cin >> balance;
	
	if(amount % 5 == 0){
	    if (amount <= balance && ((amount + 0.5) <=balance )){
	    remainingbalance = balance-amount-(0.5);
	    
	    cout << remainingbalance;
	}
	else {
	    cout << balance << endl; 
	}}
	else {
	    cout << balance << endl; 
	}
	}