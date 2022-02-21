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
        int n;
        cin>>n;
        set<int>x1;
        set<int>y1;
        while(n--){
            int x,y;
            cin>>x>>y;
            x1.insert(x);
            y1.insert(y); 
        }
        cout<<x1.size()+y1.size()<<endl;
    }
    return 0;
}