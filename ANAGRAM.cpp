#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string a, b;
        cin>>a>>b;
        if(a.length()!=b.length())
        {
            cout<<"NO"<<endl;
        }
        else
        {
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            int c=0;
            for(long long i=0;i<a.length();i++)
            {
                if(a[i]!=b[i])
                {
                    cout<<"NO"<<endl;
                    c=1;
                    break;
                }
            }
            if(c==0)
            {
                cout<<"YES"<<endl;
            }
        }
    }
	//code
	return 0;
}
