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
        ll n;
        cin>>n;
        ll arr[n];    
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        map<ll,ll>mpp;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        int x=1;
        for(auto i:mpp){
            if(i.second % i.first !=0){
                x=0;break;
            }
            else{
                x=1;
            }
        }
        if(x==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}