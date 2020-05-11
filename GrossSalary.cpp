#include <iostream>
using namespace std;
int main() {
	int t;
	double h,d;
	cin>>t;
	while(t--)
	{
	    int sal;
	    cin>>sal;
	    if(sal<1500)
	    {
	        h=0.1*sal;
	        d=0.9*sal;
	    }
	    else
	    {
	        h=500;
	        d=0.98*sal;
	    }
	    cout<<fixed<<sal+h+d<<endl;
	}
	return 0;
}