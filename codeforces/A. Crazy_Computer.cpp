#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    ll n,m,k,check=1;
    cin>>n>>m;
    ll arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){
        k = arr[i+1]-arr[i];
        if(k<=m) 
        check++;
        else 
        check = 1;
    }
    cout<<check<<endl;
    return 0;
}