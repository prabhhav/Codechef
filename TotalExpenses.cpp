#include <iostream>
using namespace std;

int main() {
	int T;
	double q,p;
	cin >> T;
	while(T--)
	{
	    cin>>q>>p;
	    if(q>1000)
	    printf("%lf \n", q*p*0.9);
	    else printf("%lf \n", q*p);
	}
	return 0;
}
