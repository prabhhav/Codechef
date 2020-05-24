#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n,q;
	    cin >> n >> q;
	    string s;
	    cin >> s; 
	    int freq[26] = {0};
	    for(int i =0; i<s.length(); i++)
	    
	    freq[s[i]-'a']++;
	    for(int i=0; i<q; i++){
	        int m;
	        cin >> m; 
	        int count = 0;
	        for (int j=0; j<26; j++)
	        {
	            if (freq[j]>m)
	        {
	            count+=freq[j] -m; 
	        }
	    }
	    cout << count << "\n";
	}
	}
	return 0;
}