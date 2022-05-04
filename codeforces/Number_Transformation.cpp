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
        int x,y;
        cin>>x>>y;
        int a,b;
        if(x>y){
            cout<<"0 0"<<endl;
        }
        else if(x==y){
            cout<<"1"<<" "<<"1"<<endl;
        }
        else{
            if(x%y==0){
                a=x/y;
                b=sqrt(a);
                if()
                cout<<a<<" "<<b<<endl;

            }
            else{
                cout<<"0"<<" "<<"0"<<endl;
            }
        }

    }
    return 0;
}