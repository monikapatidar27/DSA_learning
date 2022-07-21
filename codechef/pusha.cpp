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
        // int count=0,maxx=0;
        // int h[n];
        // loop(i,l,n)
        // {
        //     cin>>h[i];
        // }
        // loop(i,l,n){
        //     if(h[i]==h[i+1]){
        //         count++;
        //     }
        //     else{
                
        //             maxx=h[i]+count;
        //             count=0;

               
                
        //     }
        // }
        // cout<<maxx<<endl;
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mpp[x]++;
        }
        int sum=0,maxx=0;
        for(auto i=mpp.begin();i!=mpp.end();i++){
            sum=(i->first+i->second)-1;
            maxx=max(sum,maxx);
        }
        cout<<maxx<<endl;

    }
    return 0;
}