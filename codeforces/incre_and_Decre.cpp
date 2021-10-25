#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int n,sum=0;
    cin>>n;
    int arr[n];
    loop(i,l,n){
        cin>>arr[i];
        sum+=arr[i];
    }
    if(sum%n==0)
    cout<<n<<endl;
    else
    cout<<n-1<<endl;

   return 0;
}