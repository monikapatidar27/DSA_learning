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
        loop(i,l,n){
            cin>>arr[i];
        }
        // ll sum=0 ,res=0;
        // sort(arr,arr+n);
        // sum=arr[n-2]+arr[n-1];
        // cout<<sum<<endl;
        ll res = arr[0]+ arr[n-1];
        for(ll i=1;i<n; i++)
        {
            res = max(res, arr[i]+arr[(i+n-1)%n]);
        }
        // loop(i,l,n){
        //     if(arr[i]>arr[i+1]){
        //         int temp = arr[i];
        //         arr[i] = arr[i+1];
        //         arr[i+1] = temp;
        //     }
        // }
        // cout<<arr[n-2] + arr[n-1]<<endl;
        // loop(i,l,n){
        //     sum=arr[i]+arr[i+1];
        //     res=max(sum,res);
        // }
         cout<<res<<endl;
    }

    return 0;
}