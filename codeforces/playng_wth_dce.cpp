#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define tle ios_base::sync_with_stdio(false); cin.tie(NULL);
#define sp " "
int main(){
   
   int a,b;
   cin>>a>>b;
   int firstwin=0,secwins=0,draws=0;
   for (int i = 1; i <= 6; i++){
        if (abs(a - i) < abs(b - i))
            firstwin++;
        else if (abs(b - i) < abs(a - i))
            secwins++;
        else
            draws++;
   }
   cout << firstwin << " " << draws << " " << secwins << endl;
    return 0;
}