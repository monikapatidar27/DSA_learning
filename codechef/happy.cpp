 #include<iostream>
#include<string>
using namespace std;

int main(){

    string st;
    cin>>st;
    cout<<"Happy Birthday "<<st<<endl;
    while(true){
        cin>>st;
        if(st=="thankyou"){
            cout<<"ok Bye";
            break;
        }
        else{
            cout<<"Happy Birthday"<<endl;
        }
    }


    return 0;
}