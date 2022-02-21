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
        int n,x,c=0;
        cin>>n>>x;
        
        // if(n>x){
        //     cout<<x<<endl;
        // }
        // else{
        //     for(int i=n;i<x;i++){
        //         c++;
        //     }
        //     cout<<c-1<<endl;

        // }
        cout<<x%(n+1)<<endl;
    }
    return 0;
}