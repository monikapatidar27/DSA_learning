#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x;
    cin>>n>>m>>x;
    int arr[n+1];
    int c=0;
    for(int i=1;i<=n;i++)
    {
         cin>>arr[i];
         if(arr[i]>=m)
         c++;
    }
    if(c>=x)
    {
         
         cout<<c<<" ";
         for(int i=1;i<=n;i++)
         {
              if(arr[i]>=m)
              {
                   cout<<i<<" ";
              }
         }
         cout<<endl;
    }
    else
    {
         
         cout<<x<<" ";
         if(c>0)
         {
              for(int i=1;i<=n;i++)
              {
                    if(arr[i]>=m)
                    {
                         arr[i]=-1;
                    }
               }
         }
         
         
         int z=x-c;
         while(z--)
         {
          int maxindex=0;
          int max=0;
          for(int i=1;i<=n;i++)
          {
               if(arr[i]>max)
               {
                    max=arr[i];
                    maxindex=i;              
               }
          }
          arr[maxindex]=-1;
         }
         for(int i=1;i<=n;i++)
         {
              if(arr[i]==-1)
              cout<<i<<" ";
         }
         cout<<endl;
    }
    

    }
    return 0;
}