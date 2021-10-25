#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long  a,b,n;
	    cin>>a>>b>>n;
	   // for(int i=1;i<=n;i++){
	    if(n%2)
	      a*=2;
	      //else
	     // b*=2;
	 // }
	  int c,d;
	  c=a;
	  d=b;
	  int max=c>d? c:d;
	  int min =c<d? c:d;
	  cout<<max/min<<endl;
	 //if(a>b)
	 //cout<<a/b<<endl;
	 //else
	 //cout<<b/a<<endl;
	}
	
	return 0;
}
