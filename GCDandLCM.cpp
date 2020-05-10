#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		long long int g=__gcd(a,b);
		long long int l=(a*b)/g;
		cout<<g<<" "<<l<<endl;
	}
}