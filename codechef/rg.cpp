#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
    tle
    int arr[3];
    int i;
    int changes = 0;
     
    for (i = 0; i < 3; i++)
    {  
        if (arr[i] == 1)
        {  
            int j;
            for(j = i+1; j<3; j++)
            {
                if(arr[j]==0)
                    break;
            }
            i = j-1;
             
            changes++;
        }
    }
     
    cout<<changes;

    return 0;
}
 