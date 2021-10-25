#include<iostream>
#include<set>
using namespace std;
// RBT red black tree se implement kiya gya h
// sorted order , duplicate can store

int main(){
    multiset<int>ms;
    ms.insert(45);
    ms.insert(35);           
    ms.insert(35);
    ms.insert(95);
    ms.insert(10);
    ms.insert(35);
    ms.insert(35);
    ms.insert(35);
    ms.insert(95);
    ms.insert(10);
    // ms.erase(35);         //erase all 35
    auto it=ms.find(35);           // points the first 35
    it++;
    cout<<*it<<endl;
    for(auto it=ms.begin();it != ms.end();it++)cout<<*it<<" ";
    cout<<endl;
    cout<<ms.count(35)<<endl;


    return 0;
}