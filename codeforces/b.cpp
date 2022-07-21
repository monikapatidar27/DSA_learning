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
        int pa,pb,qa,qb;
        cin>>pa>>pb>>qa>>qb;
        int a=max(pa,pb);
        int b=max(qa,qb);
        if(a<b){
            cout<<"P"<<endl;
        }
        else if(a>b){
            cout<<"Q"<<endl;
        }
        else{
            cout<<"TIE"<<endl;
        }
    }
    return 0;
}