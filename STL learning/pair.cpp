#include<iostream>
#include<vector>
#include<algorithm>
// #include<pair>
using namespace std;


bool myCmp(pair<string, int> p1, pair<string, int> p2)
{
    if(p1.second > p2.second)
    {
        return 1;
    }
    else if(p1.second == p2.second)
    {
        if(p1.first < p2.first)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    
    return 0;
}
int main(){
    // pair<int ,int>p;
    // int x,y;
    // cin>>x>>y;
    // p.first=x;
    // p.second=y;
    // cout<<p.first<<" "<<p.second;
    // swap(p.first,p.second);
    // cout<<endl<<p.first<<" "<<p.second;
    int n;cin>>n;
    vector<pair<string,int>>v(n);
    for(int i=0;i<n;i++){
        string st;cin>>st;
        int tmp;cin>>tmp;
        // v[i]={st,tmp};
        // pair<string,int>p={st,tmp};
        pair<string,int>p;
        p.first=st;
        p.second=tmp;
        v[i]=p;
    }
    sort(v.begin(),v.end(), myCmp);
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second;
        cout<<endl;
    }

    return 0;
}