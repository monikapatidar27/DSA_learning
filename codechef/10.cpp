#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
   int n,a,i,l=0,u=0;
cin>>n;
  
  for(i=0;i<n;i++)
  {
   cin>>a;
  }
    if(a%2==0)
  {
    l++;
  }
  else
  {
    u++;
  }
  
  
  if(l>u)
  {
    cout<<"READY FOR BATTLE"<<endl;
  }
  else
  {
    cout<<"NOT READY"<<endl;
  }
	return 0;
}
