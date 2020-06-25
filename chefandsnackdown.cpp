#include <iostream>
using namespace std;

int main() {
      int t,i,num;
      cin >> t; 
     for (i = 1; i<=t; i++)
       {
		cin>>num;
		if(num==2010||num==2015||num==2016||num==2017||num==2019)
		cout<<"HOSTED\n";
		else
		cout<<"NOT HOSTED\n";
	}
}
 