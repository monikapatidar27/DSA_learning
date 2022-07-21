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
        int maxt,n,sum;
        cin>>maxt>>n>>sum;
        int x=sum/x;
        int y=sum-(x*n*n);
        int res=x*n*n;
        res=res+y*y;
        cout<<res<<endl;
    }
    return 0;
}   