#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sp " "
int main(){
    int t;
    cin>>t;
    while(t--){
       ll n,s;
       cin>>n>>s;
       ll ans=n*(n+1)/2;
       ans=ans-s;
       if(ans>=1 && ans<=n)
       cout<<ans<<endl;
       else
       cout<<"-1"<<endl;

    }
   return 0;
}