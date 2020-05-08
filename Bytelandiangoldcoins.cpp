#include <bits/stdc++.h>
using namespace std;
map<long int,long int> mappy;

long int coins(long int n){
if(n<12){
	return n;
}
	if(mappy[n]!=0){
		return mappy[n];
	}
	long int total = coins(n/2) + coins (n/3) + coins (n/4);
	mappy[n] = total;
	return total;
}

int main(){
	long int n;
	while(cin >> n){
		cout << coins(n) << endl;
	}
	return 0;
}
