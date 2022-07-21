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
        string str;
        cin>>str;
        int res=0;
        for(int i=0;i<n-1;i++){
            if(str[i]=='1' && str[i+1] == '0')res++;
        }
        cout<<res<<endl;
    }
    return 0;
}