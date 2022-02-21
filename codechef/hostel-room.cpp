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
        int n,k;
        cin>>n>>k;
        int arr[n];
        
        loop(i,l,n){
            cin>>arr[i];
        }
        int maxv=k;
        loop(i,l,n){
            
                k=k+arr[i];
            
            if(k>maxv){
                maxv=k;
            }
        }
        cout<<maxv<<endl;
    }
    return 0;
}