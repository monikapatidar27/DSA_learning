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
        ll n,x;
        cin>>n>>x;
        long double arr[n];
        loop(i,l,n){
            cin>>arr[i];
        }
        // int ig;
        // cin>>ig;
        sort(arr,arr+n);
        
        double long c=arr[0];
        ll p=ceil(x/c);
        if(n==1){
            cout<<p<<endl;
        }
        else if(p>n){
            cout<<p<<endl;
        }
        else{
            cout<<n<<endl;
        }
        

    }
    return 0;
}
