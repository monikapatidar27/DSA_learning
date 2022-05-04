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
        ll x,n;
        cin>>n>>x;
        bool flag=0;
        for(int i=1;i<=n;i++){
            if(x%i==0)
            {
                if(x/i <= ((n-i)+1))
                    flag=1;
                else
                    flag=0;
            }
            
            // else
            //     cout<<"No"<<endl;
        }
        if(flag==1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}