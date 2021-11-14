#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
       int n;cin>>n;
       int arr[n];
       int res=0,count=1;
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       for(int i=0;i<n;i++){
           if(arr[res]==arr[i]) count++;
           else count--;
           if(count==0){
               res=i;
               count=1;
           }
       }
       count=0;
       for(int i=0;i<n;i++)
           if(arr[res]==arr[i]) count++;
        if(count>n/2) cout<<arr[res]<<endl;
        else cout<<-1<<endl;  
    }
return 0;
}