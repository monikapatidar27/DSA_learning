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
        string s1,s2;
        cin>>s1;
        s2=s1;
        int c=0;
        sort(s2.begin(),s2.end());
        for(int i=0;i<n;i++){
             if(s1[i]==s2[i] || s2[i] == s1[n-1-i]){
                c++;
            }
        }
        if(c==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}