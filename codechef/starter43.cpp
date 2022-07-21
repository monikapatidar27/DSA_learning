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
        int s,x,y,z;
        cin>>s>>x>>y>>z;
       // int a=s-(x+y);
        // if(a == s){
        //     cout<<"0"<<endl;
        // }
        // if(z<=a){
        //     cout<<"0"<<endl;
        // }
        // else if((x+y) == z){
        //     cout<<"2"<<endl;
        // }
        // else{
        //     cout<<"1"<<endl;
        // }
        if(z+x+y <= s){
            cout<<"0"<<endl;
        }
        else if(z+min(x,y) <= s){
            cout<<"1"<<endl;
        }
        
        else{
            cout<<"2"<<endl;
        }
    }
    return 0;
}