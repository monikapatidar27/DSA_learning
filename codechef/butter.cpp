#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define sp " " 

bool sortlikethis(pair<ll, pair<ll,ll>> &x, pair<ll, pair<ll,ll>> &y){
    if(x.first < y.first){
        return true;  
    } 
    else if(x.first == y.first){
        if(x.second.first > y.second.first){
            return true;    
        } 
        else if(x.second.first == y.second.first){
            if(x.second.second < y.second.second){
                return true;  
            } 
        }
    }

    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase=1;
    cin>>testcase;
    while(testcase--)
    {
        int n,r;
        int c=0,gift = 0;
        cin>>n>>r;
        int a[n],b[n];
        loop(i,l,n){
            cin>>a[i];
        }
        loop(i,l,n){
            cin>>b[i];
        }
        vector<pair<ll, pair<ll,ll>>> ds;
        loop(i,l,n){
            pair<ll,pair<ll,ll>> elm;
            elm.first = abs(b[i]-a[i]);
            elm.second.first = b[i];
            elm.second.second = a[i];
            ds.push_back(elm);
        }
        
        sort(ds.begin(),ds.end(), sortlikethis);
        
        loop(i,l,n){
            if(ds[i].second.second <= r){
                c = ((r-ds[i].second.second)/(ds[i].first)) + 1;
                
                gift = gift+c;
                r =r- (c*ds[i].first);
            }
        }
        
        cout<<gift<<endl;

    }
    return 0;
}