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
        int n;
        cin>>n;
        cout<<0;
        for(int i=0;i<(n-2);i++){
                cout<<"1";
        }
        cout<<0<<endl;
        // if(n%2 == 0){
        //     for(int i=0;i<(n/2);i++){
        //         cout<<"1"<<"0";
        //     }
            
        //     // for(int i=(n/4);i< n;i++){
        //     //     cout<<"0"<<"1";
        //     // }
        // }
        // cout<<endl;
    
    }
    return 0;
}