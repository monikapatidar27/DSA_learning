#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define sp " " 



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase=1;
    cin>>testcase;
    while(testcase--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int sr,sc,er,ec;
        sr=x;
        sc=y;
        er=(n-x)+1;
        ec=(n-y)+1;
        int tl=min(sr,sc)-1;
        int tr=min(sr,ec)-1;
        int bl=min(er,sc)-1;
        int br=min(er,ec)-1;
        int total=2*(n-1);
        cout<<total+tl+tr+bl+br<<endl;

    }
    return 0;
}