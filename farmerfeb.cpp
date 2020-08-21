#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n<=1) return false;
    
    for (int i=2; i*i<=n; i++) if ((n%i)==0) return false;
    return true;
}




int main() {
	int x,y,z = 1;
	int T;
	cin >> T;
	while(T--){
	    cin >> x >> y; 
	    z=1;
	    while(!isPrime(x+y+z))z++;
	    cout << z << endl;
	}
	return 0;
}