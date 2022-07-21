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
        int arr[n];
        // map<int,int>mpp;

        loop(i,l,n){
            // int a;
            // cin>>a;
            // mpp[a]++;
            cin>>arr[i];
        }
        int one=0,zero=0;
        loop(i,l,n){
            if(arr[i]== 1){
                one++;
            }
            else{
                zero++;
            }

        }
        if(one>=zero){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
        
    }
    return 0;
}