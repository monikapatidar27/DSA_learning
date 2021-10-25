#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n;
    a=(n+1)/2;
    b=(n-1)/2;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(j==1||j==a){
                cout<<"*";
            }
            else if(i==a){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
       for(int j=1;j<=(a-1);j++){
           if(i==1||i==a){
               cout<<"*";
           }
           else{
               cout<<" ";
           }
       } 
       cout<<"\n";
    }
    for(int i=1;i<=b;i++){
        for(int j=1;j<=a;j++){
            if(i==b||j==a){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=1;j<=b;j++){
            if(j==b){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}