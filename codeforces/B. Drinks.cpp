#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    
    int n,a[110];
    cin>>n;
    double ans=0.0,sum=0.0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;
    return 0;
}