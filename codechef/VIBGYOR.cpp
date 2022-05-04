#include<bits/stdc++.h>
using namespace std;
#define loop(i,l,n) for(int i=0;i<n;i++)
#define loop1(i,l,n) for(int i=1;i<=n;i++)
#define endl "\n"
typedef long long int ll;
#define sp " " 



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int testcase=1;
   // cin>>testcase;
    while(testcase--)
    {
        string str;
        cin>>str;
        if(str=="RED"){
            cout<<"1"<<endl;
        }
        else if(str=="ORANGE"){
            cout<<"2"<<endl;
        }
        else if(str=="YELLOW"){
            cout<<"3"<<endl;
        }
        else if(str=="GREEN"){
            cout<<"4"<<endl;
        }
        else if(str=="BLUE"){
            cout<<"5"<<endl;
        }
        else if(str=="INDIGO"){
            cout<<"6"<<endl;
        }
        else if(str=="VIOLET"){
            cout<<"7"<<endl;
        }
        else{
            cout<<"NA"<<endl;
        }
    }
    return 0;
}