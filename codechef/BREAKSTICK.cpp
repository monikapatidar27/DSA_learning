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
        if(k%2==1){
            cout<<"YES"<<endl;
        }
        else if(n%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


    cout<<endl<<(1^2^3^4)<<endl<<(2^3^4^5)<<endl<<(3^4^5^6)<<endl<<(4^5^6^7);
    return 0;
}