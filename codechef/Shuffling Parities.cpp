#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sp " "
int main(){
    tle
    int t;
    cin>>t;
    while(t--){
       int n;cin>>n;
       int odd=0,even=0;
       int arr[n];
       loop(i,l,n){
           cin>>arr[i];
           if(arr[i]%2==0){
           even++;
           }
           else{
           odd++;
           }
       }
       int sum;
       int num=n/2;
       int num1=n-num;
       sum=min(num,odd)+min(num1,even);
       cout<<sum<<endl;

    }

    return 0;
}