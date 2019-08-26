#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string a,b,ans,ans2;
	   // getline(cin,a);
	   // getline(cin,b);
	   cin>>a;
	   cin>>b;
	   if(a.length() != b.length()){
	       cout<<0<<endl;
	   }
	   else{
	       int n = a.length();
	       ans = a.substr(n-2) + a.substr(0,n-2);
//	       cout<<ans;
	       ans2 = a.substr(2) + a.substr(0,2);
//	       cout<<ans2;
	       if(ans == b || ans2 == b){
	           cout<<1<<endl;
	       }
	       else{
	            cout<<0<<endl;
	       }
	   }
	    
	}
	return 0;
}
