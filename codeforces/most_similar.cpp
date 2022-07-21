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
        int n,len;
        cin>>n>>len;
        string arr[n];
        int res=INT_MAX;
        loop(i,l,n){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int d=0;
                for(int k=0;k<len;k++){
                    d=d+abs(arr[i][k] - arr[j][k]);
                }
                res=min(res,d);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}

