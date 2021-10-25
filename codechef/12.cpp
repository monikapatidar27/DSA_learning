#include <iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sq=0;
	    while(n!=0){
	        int m=sqrt(n);
	        n=n-(m*m);
	        ++sq;
	       }
	    cout<<sq<<endl;
	}
	return 0;
}
