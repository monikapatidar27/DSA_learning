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
        ll n,m;
        cin>>n>>m;
        ll arr[n];
        loop(i,l,n){
            cin>>arr[i];
        }
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i] - arr[j] <= -1){
                    int a=arr[i]+arr[j]+((arr[i] - arr[j]) % m);
                    res=max(res,a);
                    
                }
                else{
                    int a=arr[i]+arr[j]+((arr[i] - arr[j]) % m);
                    res=max(res,a);
                }
                
            }
        }
        cout<<res<<endl;

    }
    return 0;
}