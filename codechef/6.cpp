#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int hcf=a[0];
       for(int i=0;i<n;i++){
            hcf=__gcd(hcf,a[i]);
        }
        for(int i=0;i<n;i++){
            cout<<a[i]/hcf<<" ";
        }
        cout<<endl;
    }

	return 0;
}
