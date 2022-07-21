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
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(l1 == r1 && l2 == r2 && l1 == l2 && r1 == r2){
            cout<<l1<<endl;
        } 
        else if(l1 == r1 && l2 == r2){
            cout<<l1+l2<<endl;
        }
    }
    return 0;
}