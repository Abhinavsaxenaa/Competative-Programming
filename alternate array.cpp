#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int flag=0;
        unordered_set<int> sumset;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
           // cout<<sum<<" ";
            if(sum==0 || sumset.find(sum)!=sumset.end())
            {
            cout<<"Yes"<<endl;
            flag=1;
            }
        sumset.insert(sum);
        }
        if(flag==0)
        {
            cout<<"No"<<endl;
        }
    }
	return 0;
}
