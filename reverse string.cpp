#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n = s.length();
	int j=n-1;
	for(int i=0;i<n/2;i++,j--)
	{
		int temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	for(int i=0;i<n;i++)
	cout<<s[i];
}
