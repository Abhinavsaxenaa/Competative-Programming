#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int i,n,count=0;
	    cin>>n;
	    for(i=1;i<n;i++)
	    {
	        if( i > 0 )
	        {
	            i = i & (i-1);
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
