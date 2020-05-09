#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll i,n,cost=0;
		cin>>n;
		vector <ll> arr(n);
		for(i=0;i<n;i++)
		cin>>arr[i];
		sort(arr.begin(),arr.end());
		
			for(i=n-1;i>=0;i=i-4)
			{
				if(i-1>=0)
				cost=cost+arr[i]+arr[i-1];
			}
			if(n%2!=0&&(n%4==1))
			cost+=arr[0];
			cout<<cost<<"\n";
		
	}
	return 0;
}