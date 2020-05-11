#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	  long long int n;
	    cin >> n;
	    long long int i;
	    long long int s[n];
	    for (i=0;i<n;i++)
	    {
	        cin >> s[i];
	    }
	    sort(s,s+n);
	    long long int j =1;
	    long long min =INT_MAX;
	    while(j<n)
	    {
	        if(s[j]-s[j-1]<min)
	    {
	        min = s[j] - s[j-1];
	    }
	    j++;
	    }
	    cout << min << endl;
	    }
	 
		return 0;
}
