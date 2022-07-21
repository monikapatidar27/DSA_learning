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
        ll n,k;
        cin>>n>>k;
        // if(k == 2){
        //     cout<<"ODD"<<endl;
        // }
        // else if(k != 1){
        //     cout<<"EVEN"<<endl;
        // }
        if(k == 1){
            
            if(n%2 == 0){
                cout<<"EVEN"<<endl;
            }
            else{
                cout<<"ODD"<<endl;
            
            }
        }
        else{
            if(k == 2){
                cout<<"ODD"<<endl;
            }
            else{
                cout<<"EVEN"<<endl;
            }
        }
    }
    return 0;
}
