#include <iostream>

using namespace std ;
int main(){
    int t; cin>>t;
    while(t--){
    int n;
    
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"non prime"<<"\n";
            break;
        }
     }
     if(i==n){
     cout<<"prime"<<"\n";
     }
    }
return 0;
}
  /*4
2012
2324
3567
8978*/