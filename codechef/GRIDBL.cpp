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
        if(x%2 == 0 && y%2 == 0){
            cout<<"0"<<endl;
        }
        else if(x == 1 || y == 1){
            cout<<max(x,y)<<endl;
        }
        else if(x%2 != 0 && y %2 != 0){
            cout<<(x+y)-1<<endl;
        }
        else if(x%2 != 0){
            cout<<y<<endl;
        }
        else{
            cout<<x<<endl;
        }
        
        // else{
        //     if(x % 2 != 0){
        //         int a=min(x,y);
        //         cout<<((x%2)*a)<<endl;
        //     }
        //     else{
        //         int b=min(x,y);
        //         cout<<((y%2)*b)<<endl;
        //     }
        // }
    }
    return 0;
}