#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n1,n2,n3,n4;
    cin>>n1;
    int a[n1];
    for(int i=0;i<n1;i++)
    {
    cin>>a[i];
    }
    cin>>n2;
    int b[n2];
    for(int i=0;i<n2;i++)
    {
    cin>>b[n2];
    }
    cin>>n3;
    int c[n3];
    for(int i=0;i<n3;i++)
    {
    cin>>c[n3];
    }
    cin>>n4;
    int d[n4];
    for(int i=0;i<n4;i++)
    {
    cin>>d[n4];
    }
    int t=0;
	int D=0;
    for(int i=0;i<n2;i++)
    {
    	for(int j=0;j<n3;j++)
    	{
    		if(a[i]==c[j])
    		{
    			t++;
			}
		}
	}
	for(int i=0;i<n2;i++)
	{
		for(int j=0;j<n4;j++)
		{
			if(b[i]==d[j])
			D++;
		}
	}
	if(t==n3 && D==n4)
	{
		cout<<"yes"<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
    }
}



