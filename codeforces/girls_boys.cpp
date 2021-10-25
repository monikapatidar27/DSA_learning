#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    
    int n,m;
    cin>>n>>m;
    int i;
    if(n>m)
    {
        for(i=1;i<=m;i++)
            cout<<"BG";
        for(i=1;i<=n-m;i++)
            cout<<"B";
    }

    else
    {
        for(i=1;i<=n;i++)
            cout<<"GB";
        for(i=1;i<=m-n;i++)
            cout<<"G";
    }

    return 0;
}