#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a=1,b=1,c;
	    cin>>n;
	    if(n==1||n==2){
	        cout<<a<<endl;
	    }
	    else{
	        for(int i=1;i<n;i++){
	            c=a+b;
	            a=b;
	            b=c;
	            
	        }
	       cout<<c<<endl; 
	    }
	}
	return 0;
}
