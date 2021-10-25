#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin>>t;
    while(t--){
        int n,s=0,r,temp;
        cin>>n;
        temp=n;
        while(n!=0){
            r=n%10;
            s=s*10+r;
            n=n/10;
        }
        if(s==temp){
            cout<<"wins"<<endl;
        }
        else
        cout<<"loses"<<endl;
    }
	
	return 0;
}
