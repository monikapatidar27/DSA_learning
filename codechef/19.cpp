#include <iostream>

#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,X;
    int sum=0;
    int a[N];
    cin>>N>>X;
    for(int i=1;i<=N;i++)
    {
        cin>>a[i];
        
        sum=sum+a[i];
    }
    sum=sum+X;
    if(sum<=24 )
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;

	return 0;
}
