#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;{
        int c=0,s=0;
       
       
    int x,y,z;
     for(int i=0;i<t;i++){
        c=0;
    cin>>x>>y>>z;
    if (x==1)
        c++;
    if (y==1)
        c++;
    if (z==1)
        c++;
    if (c>1)
    s++;
 
}
cout<<s<<endl;
}
   
return 0;        
}