#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

// sorted order by key, duplicate allow nhi krta

int main(){
    map<int,int> mp;
    mp[2010]=34;
    mp[2098]=98;
    mp[65]=94;
    mp[65]++;
    mp[2098]=0;
    
    // // cout<<mp[65]<<" ";
    // // cout<<mp[39];         // if key is not present then insert and initialize its value to zero
    // //  cout<<endl;
    // //  cout<<mp.size()<<endl;
    // //  cout<<mp.empty()<<endl;
    // // cout<<mp.at(2010)<<endl;           // logn 

    // mp.insert({2011,65});
    // mp.erase(2011);
    // if(mp.find(39) != mp.end())cout<<"Founded\n";
    // else cout<<"Not founded\n";
    // cout<<mp.count(2010)<<endl;
    // mp.clear();

    // // lower_bound(mp.begin(),mp.end(),2010);


    // // int n;cin>>n;
    // // for(int i=0;i<n;i++){
    // //     int x;cin>>x;
    // //     mp[x]++;                   // logn 
    // // }

    // // for(auto it=mp.begin();it != mp.end();it++){
    // //     cout<<it->first<<" "<<it->second<<endl;
    // // }

    string st;cin>>st;
    map<char,int>mp;
    for(int i=0;i<st.length();i++){
        mp[st[i]]++;
    }


    for(auto it=mp.begin();it != mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}


// nlogn
