#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,s,y;
        cin>>n>>s;
        y=s / ((n/2)+1);
        cout<<y<<endl;
    }
    return 0;
}