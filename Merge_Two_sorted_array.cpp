#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        int o[n+m];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        int i=0,j=0,k=0;
        sort(a,a+n);
        sort(b,b+m);
        while(i < n && j<m){
            if(a[i] < b[j]){
                o[k++] = a[i++];
            }
            else if(a[i] > b[j]){
                o[k++] = b[j++];
            }
            else if(a[i] == b[j]){
                o[k++] = a[i++];
                o[k++] = b[j++];
            }
        }
        while(i < n){
            o[k++] = a[i++];
        }
        while(j < m){
            o[k++] = b[j++];
        }
        for(int i=0;i<n+m;i++){
            cout<<o[i]<<" ";
        }
        cout<<endl;
    }
}
