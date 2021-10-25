#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int DecimalTobinary(int n){
    int x=1;
    int ans=0;
    while(x<=n)
    x*=2;
    x/=2;
    while(x>0){
        int last =n/x;
        n-=last*x;
        x/=2;
        ans=ans*10+last;
    }
    return ans;
}
int DecimalTooctal(int n){
    int x=1;
    int ans=0;
    while(x<=n)
    x*=8;
    x/=8;
    while(x>0){
        int last =n/x;
        n-=last*x;
        x/=8;
        ans=ans*10+last;
    }
    return ans;
}
int DecimalTohexa(int n){
    int x=1;
    string ans=" ";
    while(x<=n)
    x*=16;
    x/=16;
    while(x>0){
        int last =n/x;
        n-=last*x;
        x/=16;
        if(last<=9)
        ans=ans+to_string(last);
        else{
            char c='A'+last-10;
            ans.push_back(c);
        }
    }
    return ans;
}
int main()
{
    
    
    int n;
    cin>>n;
    //cout<<DecimalTobinary(n)<<endl;
    //cout<<DecimalTooctal(n)<<endl;
    cout<<DecimalTohexa(n)<<endl;
   return 0 ;
}