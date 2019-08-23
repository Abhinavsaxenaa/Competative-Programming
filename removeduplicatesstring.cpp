#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i;
	int count[26]={0};
	
	for(i=0;s[i];i++)
	{
		count[s[i]-'a']++;
		if(count[s[i]-'a']==1)
		cout<<s[i];
	}
}
