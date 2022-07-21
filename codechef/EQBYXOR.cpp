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
       int a,b,n;
       cin>>a>>b>>n;
       int x=1,res;
       if(a==b){
           cout<<0<<endl;
       }
       else{
            for(int i=0;i<n;i++){
                x++;
                res=(a^x);
                if(res == b){
                    break;
                }
                else{
                    continue;
                }

            }
       }
       if(res == b){
           cout<<x<<endl;
       }
       else{
           cout<<"-1"<<endl;
       }
    }
    return 0;
}