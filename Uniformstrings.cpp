#include <iostream>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    while(t--){
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]!=s[i+1])
            c++;
        }
        if(c<=2)
        std::cout << "uniform" << std::endl;
        else
        std::cout << "non-uniform" << std::endl;
    }
	// your code goes here
	return 0;
}