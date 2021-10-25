 
#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int t;
    cin>>t;
    while(t--){
        
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll res=-1,ans=0;
        loop(i,l,n){
            cin>>a[i];
            res=max(a[i],res);
        }
        for(int i=k-1;i<=n;i++){
            if(a[i]==res){
                ans+=(n-i);
            }
        }
        cout<<ans<<endl;
    
    }
	return 0;
}
