#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long n,sum=0,leftsum=0,f=1;
	    cin>>n;
	    long long int a[n];
	    for(int i = 0;i<n;i++){ cin>>a[i]; }
	    if(n==1){
	        cout<<1<<endl;
	        continue;
	    }
	    for(int i=0;i<n;i++){
	    sum+=a[i];
	    }
	    for(int i=0;i<n;i++){
	        sum -= a[i];
	        if(sum==leftsum){
	            cout<<i+1<<endl;
	            f=0;
	            break;
	        }
	        leftsum+=a[i];
	    }
	    if(f){
	    cout<<-1<<endl;
	    }
	}
	return 0;
}
