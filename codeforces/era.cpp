#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sp " "
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,res;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       for(int i=0;i<n;i++){
            res=arr[i]-(i+1);
           
       }
       cout<<res<<endl;
    }

    return 0;
}