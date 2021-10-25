#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    //declaration  of vector
    vector<int>v; 
    //add at the end at last
    v.push_back(25); 
    v.push_back(35);
    v.push_back(65);
    v.push_back(15);
    v.push_back(5);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
  // remove from the last
    v.pop_back();
    cout<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    //print last digit
    cout<<v[v.size()-1]<<endl;
    cout<<v.back()<<endl;
   

    vector<int> v1;
    cout<<v1.size()<<endl;
    for(int i=0;i<5;i++){
        int x;cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<v1.size();i++)
       cout<<v1[i]<<" ";
       cout<<endl;
       cout<<v.size()<<endl;

    vector<int> v2(5);
    cout<<v2.size()<<endl;
    for(int i=0;i<5;i++){
        cin>>v2[i];

    }
    for(int i=0;i<v2.size();i++)
    cout<<v2[i]<<" ";
    cout<<endl;

    
    int  n=10;
    vector<int>v3(10,0);        // o(n)
    for(int i=0;i<v3.size();i++)
    cin>>v3[i];
    for(int i=0;i<v3.size();i++)
    cout<<v3[i]<<" ";
    cout<<endl;
    v3.push_back(56);
    cout<<endl;
    for(int i=0;i<v3.size();i++)
    cout<<v3[i]<<" ";
    cout<<endl;
    cout<<v.max_size()<<endl;
    cout<<v.empty()<<endl;
    cout<<v.at(0)<<endl;       //cout<<v[0];
    cout<<v.front()<<endl;

    vector<int> ::iterator it=v.begin();
    //auto it=v.begin();
    v.insert(it+3,10);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    
    v.erase(it+3);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;

    swap(v1,v2);
    //ersaase allll
    for(int i=0;i<v.size();i++){
        v.erase(v.begin()+i);
    }
   v.clear();
    cout<<v.size();
    v[5]=10;
    v.erase(v.begin()+4,v.begin()+8); 
    cout<<v.back();
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";


    
   // sort(v,v+n);      // nhi hoga aisa
    sort(v.begin(),v.end());              // nlogn
    int mx=*max_element(v.begin(),v.end());  // n
    int mn=*min_element(v.begin(),v.end());  // n
    int res=count(v.begin(),v.end(),0);      // n
    int ans=binary_search(v.begin(),v.end(),0);  // logn
    int upper=upper_bound(v.begin(),v.end(),6)-v.begin();         //logn
    int lower=v.end()-lower_bound(v.begin(),v.end(),6);           // logn
    cout<<upper<<" "<<lower;


    // cout<<ans;
    // cout<<res;
    cout<<endl;
    // next permutation'
    vector<int>arr={3,2,1};
    // next_permutation(arr.begin(),arr.end());
    prev_permutation(arr.begin(),arr.end());
    for(int i=0;i<3;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

    // reverse iterator
    for(auto it=v.rbegin();it != v.rend();it++){
        cout<<*it<<" ";  
    }
   sort(v.begin(), v.end(), greater<int>());
   sort(v.begin(), v.end());
   //sort(v.begin(), v.end(), compareInterval);
  
  
return 0;
}