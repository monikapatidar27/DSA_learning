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
        int l,r;
        cin>>l>>r;
        if(l%2 == 1){
            l++;
            // cout<<l<<sp<<l+1<<sp<<l+2<<sp<<l+3<<endl;
        }
        if(l+3 > r){
            cout<<-1<<endl;
        }
        else{
            cout<<l<<sp<<l+1<<sp<<l+2<<sp<<l+3<<endl;
        }
    }
    return 0;
}