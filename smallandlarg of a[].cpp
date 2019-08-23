#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    int count=0,f=0,l=n-1;
	    while(f<l)
	    {
	        if((a[f]+a[l])>k)
	        {
	            l--;
	        }
	        else if(a[f]+a[l]<k)
	        {
	            f++;
	        }
	       else {
	       	
	           count=1;
	       }
	    }
	    if(count>0)
	    {
	        cout<<"Ye<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
