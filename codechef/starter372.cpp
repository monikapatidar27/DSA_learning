#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define sp " " 

bool compare(const pair<int, int>&a, const pair<int, int>&b)
{
   return a.second<b.second;
}

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
        int h;
        cin>>h;
        map<int,int>mpp;
        loop(i,l,n){
            int a;
            cin>>a;
            mpp[a]++;
        }
        int maxn = max_element(mpp.begin(), mpp.end(), compare)->second;

        cout<<maxn<<endl;


    }
    return 0;
}