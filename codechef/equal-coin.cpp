#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

        int x,y;
        cin>>x>>y;
        if(x==0 && y%2==0) {
            cout<<"Yes"<<endl;
        }
        else if(x==0&& y%2!=0){
            cout<<"No"<<endl;
        }
        else if((x+2*y)%2==0){
            cout<<"Yes"<<endl;
        }
        else
        cout<<"No"<<endl;


    }
return 0;
}