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
        int x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        float a=y1/x1;
        float b=y2/x2;
        if(a<b) cout<<"-1"<<endl;
        else if(b<a) cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
    return 0;
}