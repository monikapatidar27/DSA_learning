#include<iostream>
#include<vector>
#include<algorithm>
// #include<pair>
using namespace std;


// bool myCmp(pair<string, int> p1, pair<string, int> p2)
// {
//     if(p1.second > p2.second)
//     {
//         return 1;
//     }
//     else if(p1.second == p2.second)
//     {
//         if(p1.first < p2.first)
//         {
//             return 1;
//         }
//         else
//         {
//             return 0;
//         }
//     }
    
//     return 0;
// }

int main(){
    // int  r,c;
    // cin>>r>>c;
    // vector<vector<int>>v;
    // for(int i=0;i<r;i++){
    //     vector<int>temp;
    //     for(int j=0;j<c;j++){
    //         int x;cin>>x;
    //         temp.push_back(x);
    //     }
    //     v.push_back(temp);
    // }
    int n;cin>>n;
    vector<vector<int>>v;
    for(int i=0;i<n;i++){
        int c;cin>>c;
        vector<int>temp(c);
        for(int  j=0;j<c;j++)cin>>temp[j];
        v.push_back(temp);
    }

    for(int i=0;i<n;i++){
        int c=v[i].size();
        sort(v[i].begin(),v[i].end());
        for(int j=0;j<c;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    // vector<pair<string, int>> sortMarks(vector<pair<string, int>> v, int N){
    
    // sort(v.begin(), v.end(), myCmp);
    
    // return v;
    // //Complete the code and return the sorted vector
    // }
    

   return 0;
}