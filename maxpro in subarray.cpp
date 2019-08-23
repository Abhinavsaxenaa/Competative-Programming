#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    typedef unordered_set<int> S t_done_before;
    for(int i=0;i<n;i++)
    {
        S.insert(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(S.find(a[i])==S.end())
        cout<<a[i]<<" ";
    }
}
