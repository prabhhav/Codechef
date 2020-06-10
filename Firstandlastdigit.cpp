#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,r,m,i;
	    cin>>n;
	    m=n;
	    while(n>0)
	    {
	        r=n%10;
	        n=n/10;
	   }
	    cout<<r+m%10<<endl;
	}
	return 0;
}
