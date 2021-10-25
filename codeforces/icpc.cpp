 #include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

bool sortbysecdesc(const pair<int,int> &a,const pair<int,int> &b){
       return a.second>b.second;
}

int main(){
    int t;cin>>t;
    while(t--){
       int n,q;cin>>n>>q;
        vector<pair<int,int>>arr;
        int original_loc[2][n];
        for(int i=0;i<n;i++){
            int x;cin>>x;
            original_loc[0][i]=x;
            arr.push_back({x,0});
        }
        for(int i=0;i<n;i++){
            int x;cin>>x;
            original_loc[1][i]=x;
            arr[i].second=x;
        }
        sort(arr.begin(),arr.end(),sortbysecdesc);
        // for(auto it=arr.begin();it != arr.end();it++){
        //     cout<<it->first<<" "<<it->second<<endl;
        // }
        int lo=arr[0].first;
        int hi=arr[0].second;
        int tmp=0;
        if(hi >0)tmp=hi*q; 
        arr[0].first+=tmp;
        for(int i=0;i<n;i++){
            if(original_loc[1][i] == hi && original_loc[0][i]==lo){
                original_loc[1][i]=hi;
                original_loc[0][i]=arr[0].first;
            }
        }
        // for(int i=0;i<n;i++)cout<<original_loc[0][i]<<" ";
        // cout<<endl;
        // for(int i=0;i<n;i++)cout<<original_loc[1][i]<<" ";
        // cout<<endl;
        int res=original_loc[0][0];
        int curr=0;
        int i=0;
        while(i<n){
            curr+=original_loc[0][i];
            res=max(curr,res);
            if(curr<0)curr=0;
            i++;
        }
        cout<<res<<endl;


    }
    return 0;
}