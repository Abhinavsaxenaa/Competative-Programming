#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	while(t--)
	{
	    int i,n,k=1,x;
	    cin>>n;
	    while(x==0)
	    {
	        x=n&(1<<k);
	        k++;
	    }
	    cout<<k<<endl;
	}
	return 0;
}
