#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0;
	char a;
	cin>>a;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==a)
		count++;
	}
	cout<<count;
}
