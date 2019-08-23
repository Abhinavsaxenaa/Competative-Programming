#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,temp,i,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(j=0;j<n-1;j++)
	{
			for(i=0;i<n-1-j;i++)
			{
				if(a[i]>a[i=1])
				{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				}
			}
	}
		for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
