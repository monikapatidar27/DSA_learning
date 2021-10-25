 #include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sp " "
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      if(n&1)
      {
          vector<vector<int>>v(n,vector<int>(n,1));
          int k=0;
          for(int i=0;i<n;i++)
          {
              v[i][k]=-1;
              k++;
          }
          for(int i=0;i<n;i++)
          {
              for(int j=0;j<n;j++)
              cout<<v[i][j]<<" ";
              
              cout<<endl;
          }
          
      }
      else
      {
          vector<vector<int>>v(n,vector<int>(n,-1));
           for(int i=0;i<n;i++)
          {
              for(int j=0;j<n;j++)
              cout<<v[i][j]<<" ";
              
              cout<<endl;
          }
      }
    }
   return 0;
}