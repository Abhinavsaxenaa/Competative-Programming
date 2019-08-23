#include<bits/stdc++.h>
using namespace std;
int main()
{
	//char a[100];
	string a;
	getline(cin,a);
	for(int i=0;a[i]!='\0';i++)
	{
		for(int j=i+1;a[j]!='\0';j++)
		{
			if(a[i]==a[j])
			cout<<a[i];
		}
	}
	return 0;
}
