#include <iostream>
using namespace std;
int main() {
	int testcases,i;
	cin >> testcases;
	while(testcases--){
	    int n;
	    cin >> n; 
	    int c =0;
	    if (n < 2)
	    cout << "no" <<endl;
	    else {
	        for(i=2; i*i<=n; i++)
	        {
	            if(n%i==0)
	            {
	                c = 1;
	                break;
	            }
	        }
	   
	    if(c)
	    cout << "no" <<endl;
	    else
	    cout << "yes"<<endl; 
	    
	}
	    
	}
	return 0;
}