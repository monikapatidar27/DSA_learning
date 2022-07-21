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
        ll x,y,a,c,b;
        cin>>x>>y;
        if(x<y){
           cout<<y-x<<endl;
        }
        else if(x == y){
            cout<<"0"<<endl;
        }else{
            ll temp=x-y;
            //if(y>x){
                //cout<<"-1"<<endl;continue;
            //}
            a=temp/2;
            if(temp%2==1){
               a= a+2;
            }
            cout<<a<<endl;
            
        }
        // int temp=x-y;
        // if(y>x){
        //     cout<<"-1"<<endl;continue;
        // }
        //  a=temp/2;
        // if(temp%2==1){
        //     a+2;
        // }
        // cout<<a<<endl;
    }
    return 0;
}