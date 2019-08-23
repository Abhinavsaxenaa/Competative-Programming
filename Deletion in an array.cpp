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
    	if(e==a[i])
    	{
    		for(int j=i;j<n;j++)
    		{
    		a[j]=a[j+1];	
    		}	
    		break;
    		count++;
		}
	}
	n=n-1;
		if(count==0)
		cout<<"Element not present";
		else
		{
		 	for(i=0;i<n;i++)
   			 {
    			cout<<a[i]<<" ";
			}
		
		}
}
