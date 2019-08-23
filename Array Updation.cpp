#include<iostream>
using namespace std;
int main()
{
	int n,i,pos,e;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	cout<<"Enter element which is to be update\n";
	cin>>e;
	int a[n];
	cout<<"Enter elements of an array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter position where to update \n";
	cin>>pos;
	a[pos-1]=e;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
