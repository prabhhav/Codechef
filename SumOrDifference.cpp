#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int num1, num2, num ;
	cin >> num1 >> num2;
	if (num1 > num2){
	    num = num1 - num2;
	}else{
	    num = num1 + num2;
	}
	cout << num;
	return 0;
}
