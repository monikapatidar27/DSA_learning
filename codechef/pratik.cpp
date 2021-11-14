#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a[5];
        int rahul=0,ria=0;
        for(int i=0;i<5;i++){
            cin>>a[i];
            if(a[i]==1) rahul++;
            else if(a[i]==2) ria++;
        }
        if(rahul>ria) 
            cout<<"RAHUL"<<endl;
        else if(rahul<ria) 
            cout<<"RIA"<<endl;
        else 
            cout<<"DRAW"<<endl;
    }
return 0;
}