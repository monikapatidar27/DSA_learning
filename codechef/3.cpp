#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll  x,y,k,n;
        cin>>x>>y>>k>>n;
        ll  a,b,f=0;
        while(n--){
            cin>>a>>b;
            if(a>=(x-y)&&b<=k){
                f=1;
            }
        }
        if(f==1){
            cout<<"LuckyChef"<<endl;
        }
        else
        cout<<"UnluckyChef"<<endl;
    }

	return 0;
}

/*
Input
3
3 1 2 2
3 4
2 2    
3 1 2 2
2 3
2 3    
3 1 2 2
1 1
1 2

Output
LuckyChef
UnluckyChef
UnluckyChef */