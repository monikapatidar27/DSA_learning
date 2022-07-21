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
    cin>>testcase;
    while(testcase--)
    {
        string str;
        int c=0,d=0,a=0;
        cin>>str;
        if(str[0]=='Y'|| str[0]== 'y')c++;
        if(str[1]=='E'|| str[1]== 'e')c++;
        if(str[2]=='S'|| str[2]== 's')c++;





        // for(int i=0;i<3;i++){
        //     if((str[i] == "Y"|| str[i] == "y") || (str[i]=="e"||str[i]=="E")|| (str[i]=="S" ||str[i]=="s")){
        //         c++;
        //     }
        // }
        if(c>=3)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}