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
        ll n,ans=0;
        cin>>n;
        
        int a[n];
        loop(i,l,n){
            cin>>a[i];
        }
       
       sort(a,a+n);
        ans=a[0];
        loop(i,l,n){
            ans=ans&(a[i]);
        }
        cout<<ans<<endl;
    }

    return 0;
}