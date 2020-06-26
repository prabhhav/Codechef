#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	
	cin >> t;
	
	while(t--){
	    int n; 
	    cin >> n;
	    int count = 0; 
	    while (n>0)
	    {
	        int temp = int(sqrt(n));
	        n = n-(temp*temp);
	        count++;
	    }
	    cout << count << endl;
	}

	return 0;
}
