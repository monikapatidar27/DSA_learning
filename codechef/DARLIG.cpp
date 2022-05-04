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
        int n,k;
        cin>>n>>k;
        if(n%4==1 || n%4==2 || n%4==3){
           if(k==1){
               cout<<"Ambiguous"<<endl;
           }
           else{
               cout<<"ON"<<endl;
           }
        }
        else{
            if(k==0){
                cout<<"OFF"<<endl;
            }
            else{
                cout<<"ON"<<endl;
            }
        }
    }
    return 0;
}
