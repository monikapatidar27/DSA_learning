#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int t,n,m,a,cost=0;
     cin>>n>>m;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for(int i=0; i<m; i++){
        if(arr[i]<0)
        cost+=abs(arr[i]);
    }
    cout<<cost<<endl;
    return 0;
}