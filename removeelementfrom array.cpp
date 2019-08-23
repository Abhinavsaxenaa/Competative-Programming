#include <iostream>
using namespace std;

int main() {
	//code
	int t; cin>>t;
	while(t--)
	{
	    int n,i,x;
	    cin>>n>>x;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int j=0;
	    for(i=0;i<n-1;i++)
	    {
	    	if(a[i]!=x)
	    	a[j++]=a[i];
		}
		a[j++]=a[n-1];
		for(i=0;i<j;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		cout<<j<<" is our array size"<<"\n";
}
}
