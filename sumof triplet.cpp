#include <iostream>
using namespace std;

int main() {
	//code
	int t; cin>>t;
	while(t--)
	{
		unsigned int x, sum=0;
	    int i,j,k,n,count=0;
	    
	    cin>>n>>x;
	    unsigned int a[n];
	    for(i=0;i<n;i++) cin>>a[i];
	    for(i=0;i<n-2;i++)
	    {
	        for(j=i+1;j<n-1;j++)
	        {
	            for(k=j+1;k<n;k++)
	            {
	                sum=a[i]+a[j]+a[k];
	                if(sum<x) 
					{
					count++;	
					}
	            }
	        }
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
