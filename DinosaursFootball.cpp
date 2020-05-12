#include <iostream>
using namespace std;

int main() {

	    long int t,n,k;
	    cin >> t;
	    while(t--)
	    {
	        cin >> n >> k;
	        int x = n-k;
	        for(int i=x; i<=n; i++)
	        cout << i<<" ";
	        
	        for(int i =1; i<=n-k-1; i++)
	        cout<< i << " ";
	        cout << endl;
	    
	}
	return 0;
}
