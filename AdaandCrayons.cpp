#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    string s;
	    cin >> s;
	    int count1 =0, count2 =0;
	    for(int i=0; i<s.length(); i++){
	        if (s[i] == 'D' && s[i+1] == 'U')
	        count1++;
	        if (s[i] == 'U' && s[i+1] == 'D')
	        count2++;
	    }
	    cout << max(count1, count2) << "\n";
	}
	return 0;
}
