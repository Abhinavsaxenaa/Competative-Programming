#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0,e;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	cout<<"Enter element which is to be Searched\n";
	cin>>e;
	int a[n];
	cout<<"Enter elements of an array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==e){
			cout<<"Element "<<e<<" found at position "<<i+1;
		}
		else
		{
		count++;
		}
	}
		if(count==n)
		cout<<"Element not present";
	
}
