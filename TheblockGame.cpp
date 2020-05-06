#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    int n,x,reverse=0;
	    cin >> n;
	    x=n;
	    while(n>0){
	        reverse = (reverse * 10) + (n % 10);
	        n/= 10;
	    }
	    if (reverse==x)
	    cout <<"wins";
	    else
	    cout <<"losses";
	    cout <<endl;
	}
