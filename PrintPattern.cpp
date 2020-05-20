#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,j,k,c=1;
	    cin>>n;
	    
	    int A[n][n]={0};
	    
	    for(k=0; k<=(n-1)+(n-1); k++)
	    {
	        for(i=0; i<n; i++)
	        {
	            for(j=0; j<n; j++)
	            {
	                if((i+j)==k)
	                {
	                    A[i][j]=c;
	                    c++;
	                }
	            }
	        }
	    }
	    
	    for(i=0; i<n; i++)
	    {
	        for(j=0; j<n; j++)
	        cout<<A[i][j]<<" ";
	        cout<<endl;
	    }
	}
	return 0;
}
