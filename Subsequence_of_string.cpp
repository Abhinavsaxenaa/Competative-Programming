#include<bits/stdc++.h>
using namespace std;
int subSeq(string s,string ot[])
{
	if(s.size()==0){
		ot[0]="";
		return 1;
	}
	int ans = subSeq(s.substr(1),ot);
	for (int i = 0; i < ans; i++) {
		ot[i + ans] = s[0] + ot[i];
	}
	return 2 * ans;
	
}

int main() {
	string s;
	cin>>s;
	int n=pow(2,s.size());
	string ot[n];
	int n1=subSeq(s,ot);
	for(int i=0;i<n1;i++)
		cout<<ot[i]<<endl;
	
}


