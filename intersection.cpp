#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n; cin>>m>>n;
	    int a1[m],a2[n],flag=0;
	    for(int i=0;i<m;i++)cin>>a1[i];
	    for(int i=0;i<n;i++)cin>>a2[i];
	    for(int i=0;i<m;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            if(a1[i]==a2[j])
	            {
	                flag=1;
	                cout<<a1[i]<<" ";
	            }
	        }
	    }
	    if(flag==0)
	    cout<<"Zero";
	    
	    cout<<endl;
	}
	return 0;
}
