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
        int n,w;
        int sum=0,c=0;
        cin>>n>>w;
        int a[n];
        loop(i,l,n){
            cin>>a[i];
        }
        sort(a,a+n);
        int i=n-1;
        for(i;i>=0;i--){
            
            if(sum>=w)
                break;
            else
                sum+=a[i];
                c++;
            
        }
        cout<<n-c<<endl;
    }
    return 0;
}   