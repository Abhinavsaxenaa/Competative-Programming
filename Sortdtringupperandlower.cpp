#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.length();
	    for(int i=0;i<n-1;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            if( (s[i]>s[j]) && ( islower(s[i] && islower(s[j]) ) || (isupper(s[i]) && isupper(s[j])) ))
	            swap(s[i],s[j]);
	        }
	    }
	    cout<<s<<endl;
	}
	return 0;
}
