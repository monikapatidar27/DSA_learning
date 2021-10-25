
#include <bits\stdc++.h>
using namespace std ;
int main(){
    int a,b,c;
    cout<<"enter";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
        cout<<a<<"\n";}
        else {
        cout<<c<<"\n";}
    }
    else{
    if(b>c){
    cout<<b<<"\n";
        }
        
    else{
    cout<<c<<"\n";
    }
    }

    return 0;
}