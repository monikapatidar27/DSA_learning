#include<iostream>
#include<map>
using namespace std;
// RBT :: self balancing binary tree hota h
// sorted order // duplicate allow
// iska ap jayda use nhi kr rhe hoge

int main(){
    multimap<int,int>mp;
    // mp[2010]=89;    // aisa nhi kr skta
    mp.insert({2010,98});
    mp.insert({2011,97});
    mp.insert({56,78});
    mp.insert({89,87});
    mp.insert({56,56});
    for(auto it=mp.begin();it != mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    mp.erase(56);    //erase all the keys with 56
    cout<<endl;
    for(auto it=mp.begin();it != mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    if(mp.find(2010) != mp.end())cout<<"founded";
    else cout<<"not founded";
    return 0;
}