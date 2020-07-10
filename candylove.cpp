#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--) {
		int n,c=0;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++) {
			cin>>ar[i];
			c+=ar[i];
		}
		if(c%2!=0)
		  cout<<"YES"<<endl;
		else
		  cout<<"NO"<<endl;
	}
}