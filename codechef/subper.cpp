#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       if(k==1 && n>1){
          cout<< -1;
       }
       else{
           for(int i=1;i<=(k-1);i++){
               cout<<i<<" ";
           }
           for(int i=n;i>(k-1);i--){
               cout<<i<<" ";
           }
       }
       cout<<endl;
      
    }
    return 0;
}