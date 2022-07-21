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
        string s;
        int c=0,a;
        cin>>s;
        set<char> ss;
        for(int i=0;i<n;i++){
        ss.insert(s[i]);
    }
        cout<<n+ss.size()<<endl;


        // for(int i=0;i<n;i++){
        //     if(s[i]==s[i+1]){
        //         c++;
        //     }
        // }
        // a=2*(n-c);
        // cout<<a+c<<endl;   
}
    return 0;
}