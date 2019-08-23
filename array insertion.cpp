#include<iostream>
using namespace std;
int main()
{
	int n,i,pos,e;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	cout<<"Enter element which is to be inserted\n";
	cin>>e;
	int a[n];
	cout<<"Enter elements of an array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter position of insertion"<<endl;
	cin>>pos;
	for(i=n;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=e;
	cout<<"Array after insertion"<<endl;
	for(int i=0;i<n+1;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
