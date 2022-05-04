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
        
        if(x%2 ==0 and y%2 == 0){
            cout<<"Janmansh"<<endl;
        }
        else if(x%2 == 1 &&y%2 == 1 ){
             cout<<"Janmansh"<<endl;
        }
        else{
            cout<<"Jay"<<endl;
        }
    }
    return 0;
}