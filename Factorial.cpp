#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i<=n; i++){
	    long long int sum = 0;
	    long long int k;
	    cin>>k;
	    while(k!=0)
	    {
	        k=k/5;
	        sum = sum+k;
	    }
	    cout << sum << endl;
	}
	return 0;
}
