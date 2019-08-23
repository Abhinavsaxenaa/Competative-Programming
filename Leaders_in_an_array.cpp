#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
       vector<int> v;
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
       cin>>a[i];
       }
       int m = a[n-1];
       v.push_back(m);
       for(int i=n-2;i>=0;i--){
           if(a[i] >= m){
               m = a[i];
               v.push_back(m);
           }
       }
       for(int i=v.size()-1;i>=0;i--){
           cout<<v[i]<<" ";
       }
       cout<<endl;
       v.clear();
   }
   
}
