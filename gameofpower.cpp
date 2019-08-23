//839372542059994960098376595241 279204
#include <iostream>
using namespace std;

int main() {
	//code
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int a,b,c,s,p;
	    cin>>s>>p;
	    s=s/10;
	    cout<<s<<endl;
	    a=s%10;
	    c= a*(p%10);
	    if(c>9)
	    {
	        /*if(c/10==0)
	        {
	            c=0;
	        }
	        else
	        {*/
	            c=c%10;
	            
	        //}
	    }
	    cout<<c<<"1"<<endl;
	}
	return 0;
}

