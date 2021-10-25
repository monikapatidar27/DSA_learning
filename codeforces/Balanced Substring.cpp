 #include<bits/stdc++.h>
 using namespace std;
 int main() { 
     int T; cin>>T;
      while(T--) {
     int n; 
     cin>>n; 
     string s; 
     cin>>s; 
     bool res=false; 
     if(n<=1) 
     {
         cout<<"-1"<<" "<<"-1"<<endl; 
         res=true; 
         }
     for(int i=0;i<n-1;i++) 
     {
          if(s[i]!=s[i+1]) 
          {
               cout<<i+1<<" "<<i+2<<endl;
                res=true; 
                break; 
                } 
                }
     if(res==false)
      cout<<"-1"<<" "<<"-1"<<endl; 
      } 
      return 0; 
      }