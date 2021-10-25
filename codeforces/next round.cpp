#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "

int n,k,a[51],cnt;
int main(){
    cin>>n>>k;
    for(int i=1; i<=n; i++)cin>>a[i];
    for(int i=1; i<=n; i++)if(a[i]>0&&a[i]>=a[k])++cnt;
    cout<<cnt;
    }