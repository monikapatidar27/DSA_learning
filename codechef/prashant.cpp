#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int n,x,p;
        cin>>n>>x>>p;
        int crt=x*3;
        int incrt=(n-x)*(-1);
        int total=crt+incrt;
        if(total>=p){
            cout<<"Pass"<<endl;
        }
        else
        {
            cout<<"Fail"<<endl;
        }

    }
return 0;
}