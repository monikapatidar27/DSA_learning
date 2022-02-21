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
        float a = 0.143;
        float x=pow((a*n),n);
        int b=floor(x);
        if(x-b<0.5){
            cout<<b<<endl;
        }
        else{
            cout<<b+1<<endl;
        }

    }
    return 0;
}