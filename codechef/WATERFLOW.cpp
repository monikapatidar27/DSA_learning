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
        int w,x,y,z;
        cin>>w>>x>>y>>z;
        int a = w+(y*z);
        if(a > x)cout<<"Overflow"<<endl;
        else if(a == x)cout<<"Filled"<<endl;
        else cout<<"Unfilled"<<endl;
    }
    return 0;
}