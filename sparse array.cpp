#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sas;
	cin>>sas;
	string str[sas];
	for(int i=0;i<sas;i++)
	{
		getline(cin,str[i]);
	}
	int qas;
	cin>>qas;
 	string quer[qas];
	for(int i=0;i<qas;i++)
	{
	getline(cin,quer[i]);
	}
	int count=0;
	for(int i=0;i<qas;i++)
	{
		for(int j=0;j<sas;j++)
		{
			if(quer[i]==str[j])
			count++;
		}
		cout<<count<<" ";
	}
}

