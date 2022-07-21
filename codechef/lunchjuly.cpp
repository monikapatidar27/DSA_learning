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
        int x,y,z;
        cin>>x>>y>>z;int c=0;
       if(x >3){
    
            c=ceil(double(x-3)/3)*z;
            cout<<(x*y)+c<<endl;
        }
        else{
            cout<<x*y<<endl;
        }
        
    }
    return 0;
}










