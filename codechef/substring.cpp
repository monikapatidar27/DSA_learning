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
        string s;
        cin>>s;
        int n=s.length();
        int ans=0,res=0;
        for(int i=1;i<n-1;i++){
            if(s[i]!=s[0] && s[i]!=s[n-1]){
                ans++;
            }
            else{
                // ans=0;
                res=max(res,ans);ans=0;
            }
        }
        res= max(res,ans);
        if(res==0){
            cout<<"-1"<<endl;
        }
        else
            cout<<res<<endl;
    }
    return 0;
}