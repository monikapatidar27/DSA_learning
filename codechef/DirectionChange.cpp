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
        int n,m;
        cin>>n>>m;
        if(n==m){
            cout<<2*(m-1)<<endl;
        }
        else if(m==1 || n==1){
            if(abs(m-n)>1){
                cout<<"-1"<<endl;
            }
            else{
                cout<<"1"<<endl;
            }
        }
        else{
            int minn=min(n,m);
            int c=2*(minn-1);
            int res= 2* abs(m-n);
            if(abs(m-n)%2==1){
                cout<<res+c-1<<endl;
            }
            else{
                cout<<res+c<<endl;
            }
        }
    }
    return 0;
}
