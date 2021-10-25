#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
      //  int d=n+7;
        //int r=d%7;
        int r=n%7;
        switch(r)
        {
             case 0:
                cout<<"Sunday"<<endl;
                break;
            case 1:
                cout<<"Monday"<<endl;
                break;
            case 2:
                cout<<"tuesday"<<endl;
                break;
            case 3:
                cout<<"wednesday"<<endl;
                break;
            case 4:
                cout<<"thursday"<<endl;
                break;
            case 5:
                cout<<"friday"<<endl;
                break;
            case 6:
                cout<<"Saturday"<<endl;
                break;
        }
    }

	return 0;
}
